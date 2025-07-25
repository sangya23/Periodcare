#include "periodcalendar.h"
#include "ui_form.h"
#include "calendar.h"
#include "globals.h"
#include <QPushButton>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>
#include <QtCharts/QValueAxis>
#include <QtCharts/QChart>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QDate>
#include <QDebug>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <QSettings>

PeriodCalendar::PeriodCalendar(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::Form)
{
    ui->setupUi(this);

    this->showMaximized();
    ui->cycleLengthSpinBox->setValue(28);

    Calendar* customCalendar = qobject_cast<Calendar*>(ui->calendarWidget);
    if (!customCalendar) {
        qDebug() << "ERROR: ui->calendarWidget is not a Calendar instance or was not promoted in form.ui!";
        QMessageBox::critical(this, "UI Error", "Failed to load custom calendar widget. Please ensure it's promoted in form.ui.");
    } else {
        customCalendar->setVerticalHeaderFormat(QCalendarWidget::NoVerticalHeader);
    }

    connect(ui->logButton, &QPushButton::clicked, this, &PeriodCalendar::logPeriod);
    connect(ui->deleteButton, &QPushButton::clicked, this, &PeriodCalendar::removeDate);
    connect(ui->chartButton, &QPushButton::clicked, this, &PeriodCalendar::showCycleChart);
    connect(ui->statsButton, &QPushButton::clicked, this, &PeriodCalendar::showStatistics);
    connect(ui->cycleLengthSpinBox, QOverload<int>::of(&QSpinBox::valueChanged),
            this, &PeriodCalendar::updatePredictions);
    ui->periodLabel->setText("<html>&#x1F534; Period Start Day</html>");
    ui->periodLabel->setFont(QFont("Segoe UI Emoji"));

    ui->flowLabel->setText("<html>&#x1F7E0; Period Flow Days</html>");
    ui->flowLabel->setFont(QFont("Segoe UI Emoji"));

    ui->fertileLabel->setText("<html>&#x1F7E2; Fertile Window</html>");
    ui->fertileLabel->setFont(QFont("Segoe UI Emoji"));

    ui->predictedLabel->setText("<html>&#x1F7E3; Predicted Period</html>");
    ui->predictedLabel->setFont(QFont("Segoe UI Emoji"));

    openDatabase();
    createTable();
    loadPeriodData();
    updateCalendarHighlights();
    checkForUpcomingPeriod();
}

PeriodCalendar::~PeriodCalendar() {
    if (db.isOpen()) db.close();
    delete ui;
}

bool PeriodCalendar::openDatabase() {
    db = QSqlDatabase::database("UserConnection");
    if (!db.open()) {
        qDebug() << "Error opening database:" << db.lastError().text();
        return false;
    }
    qDebug() << "Database opened successfully.";
    return true;
}

void PeriodCalendar::createTable() {
    QSqlQuery query(db);
    if (!query.exec("CREATE TABLE IF NOT EXISTS periods (email TEXT, date TEXT)")) {
        qDebug() << "Error creating table:" << query.lastError().text();
    } else {
        qDebug() << "Table 'periods' checked/created successfully.";
    }
}

void PeriodCalendar::loadPeriodData() {
    periodDates.clear();
    QSqlQuery query(db);
    query.prepare("SELECT date FROM periods WHERE email = :email ORDER BY date ASC");
    query.bindValue(":email", currentUserEmail);

    if (!query.exec()) {
        qDebug() << "Error loading period data:" << query.lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to load period data from database.");
        return;
    }

    while (query.next()) {
        QDate d = QDate::fromString(query.value(0).toString(), Qt::ISODate);
        if (d.isValid()) periodDates.append(d);
    }

    qDebug() << "Loaded" << periodDates.size() << "period entries for" << currentUserEmail;

    updatePredictions();
    updateCalendarHighlights();
}

void PeriodCalendar::removeDate() {
    QDate selected = ui->calendarWidget->selectedDate();
    if (!periodDates.contains(selected)) {
        QMessageBox::information(this, "Info", "No period logged for this date to remove.");
        return;
    }

    if (QMessageBox::question(nullptr, "Confirm Removal",
                              QString("Are you sure you want to remove period start on %1?").arg(selected.toString("MMMM d, yyyy")),
                              QMessageBox::Yes | QMessageBox::No) == QMessageBox::No) {
        return;
    }

    QSqlQuery query(db);
    query.prepare("DELETE FROM periods WHERE email = :email AND date = :date");
    query.bindValue(":email", currentUserEmail);
    query.bindValue(":date", selected.toString(Qt::ISODate));

    if (query.exec()) {
        QMessageBox::information(nullptr, "Removed", QString("Period start removed for %1.").arg(selected.toString(Qt::ISODate)));
        loadPeriodData();
    } else {
        qDebug() << "Error removing date from DB:" << query.lastError().text();
        QMessageBox::critical(this, "Error", "Failed to remove date from database.");
    }
}

void PeriodCalendar::logPeriod() {
    QDate selectedDate = ui->calendarWidget->selectedDate();

    if (QMessageBox::question(nullptr, "Confirm",
                              QString("Log period starting on %1?").arg(selectedDate.toString("MMMM d, yyyy")),
                              QMessageBox::Yes | QMessageBox::No) == QMessageBox::No) {
        return;
    }

    if (periodDates.contains(selectedDate)) {
        QMessageBox::information(this, "Info", "This date is already logged as a period start.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("INSERT INTO periods (email, date) VALUES (:email, :date)");
    query.bindValue(":email", currentUserEmail);
    query.bindValue(":date", selectedDate.toString(Qt::ISODate));

    if (!query.exec()) {
        qDebug() << "Error inserting date into DB:" << query.lastError().text();
        QMessageBox::critical(this, "Error", "Failed to log date.");
        return;
    }

    QMessageBox::information(this, "Logged", QString("Period start logged for %1.").arg(selectedDate.toString(Qt::ISODate)));
    loadPeriodData();
}

void PeriodCalendar::updatePredictions() {
    predictedDates.clear();
    fertileDates.clear();

    if (periodDates.isEmpty()) {
        updateCalendarHighlights();
        return;
    }

    int avgCycle = calculateAverageCycle();
    if (avgCycle == 0 && ui->cycleLengthSpinBox->value() > 0) {
        avgCycle = ui->cycleLengthSpinBox->value();
    } else if (avgCycle == 0) {
        updateCalendarHighlights();
        return;
    }

    QDate lastPeriod = periodDates.last();
    for (int i = 1; i <= 2; ++i) {
        QDate nextPeriodStart = lastPeriod.addDays(avgCycle * i);
        for (int j = 0; j < 5; ++j) {
            predictedDates.append(nextPeriodStart.addDays(j));
        }

        QDate ovulationDay = nextPeriodStart.addDays(-14);
        for (int j = -4; j <= 1; ++j) {
            fertileDates.append(ovulationDay.addDays(j));
        }
    }

    QDate oneYearFromNow = QDate::currentDate().addYears(1);
    predictedDates.erase(std::remove_if(predictedDates.begin(), predictedDates.end(),
                                        [&](const QDate& d){ return d > oneYearFromNow; }), predictedDates.end());
    fertileDates.erase(std::remove_if(fertileDates.begin(), fertileDates.end(),
                                      [&](const QDate& d){ return d > oneYearFromNow; }), fertileDates.end());

    std::sort(predictedDates.begin(), predictedDates.end());
    predictedDates.erase(std::unique(predictedDates.begin(), predictedDates.end()), predictedDates.end());
    std::sort(fertileDates.begin(), fertileDates.end());
    fertileDates.erase(std::unique(fertileDates.begin(), fertileDates.end()), fertileDates.end());

    updateCalendarHighlights();
    checkForUpcomingPeriod();
}

QList<int> PeriodCalendar::calculateCycleLengths() {
    QList<int> cycles;
    if (periodDates.size() < 2) return cycles;

    for (int i = 1; i < periodDates.size(); ++i) {
        int days = periodDates[i - 1].daysTo(periodDates[i]);
        if (days >= 20 && days <= 45) {
            cycles.append(days);
        } else {
            qDebug() << "Skipping improbable cycle length:" << days << "days between" << periodDates[i-1].toString() << "and" << periodDates[i].toString();
        }
    }
    return cycles;
}

int PeriodCalendar::calculateAverageCycle() {
    QList<int> cycles = calculateCycleLengths();
    if (cycles.isEmpty()) {

        return ui->cycleLengthSpinBox->value();
    }
    return static_cast<int>(std::round(static_cast<double>(std::accumulate(cycles.begin(), cycles.end(), 0)) / cycles.size()));
}

void PeriodCalendar::updateCalendarHighlights() {
    Calendar* cal = qobject_cast<Calendar*>(ui->calendarWidget);
    if (!cal) {
        qDebug() << "Error: Custom Calendar widget not found. Highlighting will not work.";
        return;
    }

    cal->clearCustomDates();

    for (const QDate &d : periodDates) {
        cal->setDateColor(d, PeriodStartColor);
        for (int i = 1; i < 5; i++) {
            cal->setDateColor(d.addDays(i), PeriodFlowColor);
        }
    }


    for (const QDate &d : predictedDates) {
        bool isLoggedPeriodDay = false;
        for (const QDate &loggedD : periodDates) {
            if (d >= loggedD && d < loggedD.addDays(5)) {
                isLoggedPeriodDay = true;
                break;
            }
        }
        if (!isLoggedPeriodDay) {
            cal->setDateColor(d, PredictedPeriodColor);
        }
    }

    for (const QDate &d : fertileDates) {
        bool isPeriodDay = false;
        for (const QDate &loggedD : periodDates) {
            if (d >= loggedD && d < loggedD.addDays(5)) {
                isPeriodDay = true;
                break;
            }
        }
        if (!isPeriodDay) {
            for (const QDate &predictedD : predictedDates) {
                if (d == predictedD) {
                    isPeriodDay = true;
                    break;
                }
            }
        }

        if (!isPeriodDay) {
            cal->setDateColor(d, FertileWindowColor);
        }
    }
}

void PeriodCalendar::checkForUpcomingPeriod() {
    if (predictedDates.isEmpty()) return;

    QDate today = QDate::currentDate();
    QSettings settings("YourCompany", "MenstrualTracker");
    QDate lastAlertDate = settings.value("LastPeriodAlertDate").toDate();

    bool upcoming = false;
    QDate upcomingDate;

    for (const QDate &d : predictedDates) {
        int daysTo = today.daysTo(d);
        if (daysTo >= 0 && daysTo <= 7) {
            upcoming = true;
            upcomingDate = d;
            break;
        }
    }

    if (upcoming && (lastAlertDate != today)) {
        QMessageBox::information(this, "Upcoming Period Alert 🩸",
                                 QString("Your period is predicted to start on or around %1.\n"
                                         "Consider preparing necessary supplies.").arg(upcomingDate.toString("MMMM d, yyyy")));
        settings.setValue("LastPeriodAlertDate", today);
    }
}

void PeriodCalendar::showCycleChart() {
    QList<int> cycles = calculateCycleLengths();
    if (cycles.isEmpty()) {
        QMessageBox::information(this, "Insufficient Data", "Please log more than one period to generate the chart.");
        return;
    }

    QLineSeries *series = new QLineSeries();
    for (int i = 0; i < cycles.size(); ++i) {
        series->append(i + 1, cycles[i]);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Menstrual Cycle Length Trend");
    chart->legend()->hide();

    QValueAxis *axisX = new QValueAxis();
    axisX->setTitleText("Cycle Number");
    axisX->setLabelFormat("%d");
    axisX->setTickInterval(1);
    axisX->setRange(1, cycles.size());
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    QValueAxis *axisY = new QValueAxis();
    axisY->setTitleText("Days");
    axisY->setTickInterval(1);

    int minY = *std::min_element(cycles.begin(), cycles.end());
    int maxY = *std::max_element(cycles.begin(), cycles.end());
    axisY->setRange(qMax(0, minY - 2), maxY + 2);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QWidget *chartWindow = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(chartWindow);
    layout->addWidget(chartView);
    chartWindow->setLayout(layout);
    chartWindow->setWindowTitle("Cycle Length Chart");
    chartWindow->resize(600, 400);
    chartWindow->show();
}


void PeriodCalendar::showStatistics() {
    if (periodDates.size() < 2) {
        QMessageBox::information(nullptr, "Statistics", "Not enough data (at least two logged periods) to calculate statistics.");
        return;
    }

    QList<int> lengths = calculateCycleLengths();
    if (lengths.isEmpty()) {
        QMessageBox::information(nullptr, "Statistics", "No valid cycle lengths found for statistics.");
        return;
    }

    int shortest = *std::min_element(lengths.begin(), lengths.end());
    int longest = *std::max_element(lengths.begin(), lengths.end());
    int average = calculateAverageCycle();
    int currentCycleLength = 0;
    if (!periodDates.isEmpty()) {

        currentCycleLength = periodDates.last().daysTo(QDate::currentDate());
    }

    QDate nextPeriodExpectedDate;
    if (!periodDates.isEmpty()) {
        nextPeriodExpectedDate = periodDates.last().addDays(average);
    }

    QString statsText = QString(

                            "<p>📊 Total logged periods: <b>%1</b></p>"
                            "<p>📅 Shortest cycle: <b>%2</b> days</p>"
                            "<p>📅 Longest cycle: <b>%3</b> days</p>"
                            "<p>📅 Average cycle: <b>%4</b> days</p>"
                            "<p>⏳ Current cycle length: <b>%5</b> days (since last period start)</p>"
                            "<p>🔮 Next period expected around: <b>%6</b></p>")
                            .arg(periodDates.size())
                            .arg(shortest)
                            .arg(longest)
                            .arg(average)
                            .arg(currentCycleLength)
                            .arg(nextPeriodExpectedDate.isValid() ? nextPeriodExpectedDate.toString("MMMM d, yyyy") : "N/A");

    QMessageBox::information(this, "Cycle Statistics", statsText);
}
