#ifndef PERIODCALENDAR_H
#define PERIODCALENDAR_H
#include <QMainWindow>
#include <QDate>
#include <QList>
#include <QSqlDatabase>
#include <QColor>
#include <QSpinBox>
#include <QSettings>

QT_BEGIN_NAMESPACE
namespace Ui { class Form; }
namespace QtCharts {
class QChartView;
class QLineSeries;
class QValueAxis;
class QChart;
}
QT_END_NAMESPACE


class Calendar;

class PeriodCalendar : public QMainWindow {
    Q_OBJECT

public:
    explicit PeriodCalendar(QWidget *parent = nullptr);
    ~PeriodCalendar();

private slots:
    void logPeriod();
    void removeDate();
    void showCycleChart();
    void showStatistics();
    void updatePredictions();

private:
    Ui::Form *ui;
    QSqlDatabase db;
    QList<QDate> periodDates;
    QList<QDate> predictedDates;
    QList<QDate> fertileDates;

    bool openDatabase();
    void createTable();
    void loadPeriodData();

    void updateCalendarHighlights();
    void checkForUpcomingPeriod();
    QList<int> calculateCycleLengths();
    int calculateAverageCycle();

    const QColor PeriodStartColor = QColor(255, 0, 0);
    const QColor PeriodFlowColor = QColor(255, 100, 0);
    const QColor PredictedPeriodColor = QColor(155, 48, 255);
    const QColor FertileWindowColor = QColor(178, 242, 187);
};

#endif
