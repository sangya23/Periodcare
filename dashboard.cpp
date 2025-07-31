#include "dashboard.h"
#include "qlineedit.h"
#include "qpainterpath.h"
#include "ui_dashboard.h"
#include "mainwindow.h"
#include "moodmanagement.h"
#include "yoga.h"
#include "nutrients.h"
#include "globals.h"
#include "sanitarycare.h"
#include "periodcalendar.h"
#include "loginpage.h"
#include <QPainter>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRandomGenerator>
#include <QToolButton>
#include <QMenu>
#include <QAction>
#include <QDebug>
class Loginpage;
Dashboard::Dashboard(Loginpage *loginPage, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
    , m_loginPage(loginPage)
{
    ui->setupUi(this);
    ui->welcomeLabel->setText("Hello, " + currentUserName + "!");
    ui->welcomeLabel->setStyleSheet("font-size: 40px; color: #555; padding: 10px;");
    this->showMaximized();

    // Setup profile avatar button menu (using existing ui->profileAvatarButton)
    QToolButton* profileToolButton = ui->profileAvatarButton;
    profileToolButton->setPopupMode(QToolButton::InstantPopup);

    QMenu* menu = new QMenu(profileToolButton);
    QAction* profileAction = new QAction("Go to Profile", this);
    QAction* logoutAction = new QAction("Logout", this);
    menu->addAction(profileAction);
    menu->addAction(logoutAction);

    profileToolButton->setMenu(menu);

    profileToolButton->setStyleSheet(
        "QToolButton {"
        " background-color: #F497B6;"
        " border-radius: 50px;"
        "}"
        "QToolButton:hover {"
        " background-color: #e6769f;"
        "}"
        );

    connect(profileAction, &QAction::triggered, this, &Dashboard::openProfile);
    connect(logoutAction, &QAction::triggered, this, &Dashboard::logoutUser);

    loadProfileAvatar();
    showRandomQuote();
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::loadProfileAvatar()
{
    QToolButton* profileToolButton = ui->profileAvatarButton;
    if (!profileToolButton) {
        qWarning() << "profileAvatarButton not found!";
        return;
    }

    QSqlDatabase db = QSqlDatabase::database("UserConnection");

    if (!db.open()) {
        qDebug() << "DB error in dashboard:" << db.lastError().text();
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT avatar_path FROM profiles WHERE email = ?");
    query.addBindValue(currentUserEmail);

    if (!query.exec()) {
        qDebug() << "Failed to load avatar path:" << query.lastError().text();
        return;
    }

    if (query.next()) {
        QString avatarPath = query.value(0).toString();

        if (!avatarPath.isEmpty()) {
            const int avatarSize = 100;

            QPixmap pixmap(avatarPath);
            if (pixmap.isNull()) {
                qDebug() << "Failed to load image from" << avatarPath;
                return;
            }

            // Scale the pixmap to desired size
            pixmap = pixmap.scaled(avatarSize, avatarSize, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);

            // Create a circular mask using QPainterPath
            QPixmap circularPixmap(avatarSize, avatarSize);
            circularPixmap.fill(Qt::transparent);

            QPainter painter(&circularPixmap);
            painter.setRenderHint(QPainter::Antialiasing);
            QPainterPath path;
            path.addEllipse(0, 0, avatarSize, avatarSize);
            painter.setClipPath(path);
            painter.drawPixmap(0, 0, pixmap);
            painter.end();

            // Set the circular pixmap as icon
            profileToolButton->setIcon(QIcon(circularPixmap));
            profileToolButton->setIconSize(QSize(avatarSize, avatarSize));
            profileToolButton->setFixedSize(avatarSize, avatarSize);

            profileToolButton->setStyleSheet(
                QString(
                    "QToolButton { border: none; border-radius: %1px; background-color: #F497B6; }"
                    "QToolButton:hover { background-color: #e6769f; }"
                    ).arg(avatarSize / 2)
                );
        }
    }
    db.close();
}

void Dashboard::openProfile()
{
    MainWindow *w = new MainWindow();
    connect(w, &MainWindow::profileUpdatedSignal, this, &Dashboard::loadProfileAvatar);
    w->show();
}

void Dashboard::logoutUser()
{
    qDebug() << "Logout clicked!";

    if (m_loginPage){
        m_loginPage->resetFields();
        m_loginPage->show();
    }
    this->close();
}


void Dashboard::on_moodmgmt_clicked()
{
    Moodmanagement *mood = new Moodmanagement();
    mood->show();
}

void Dashboard::on_yogapb_clicked()
{
    yoga *yog = new yoga();
    yog->show();
}

void Dashboard::on_sanitarycarepb_clicked()
{
    SanitaryCare *scare = new SanitaryCare();
    scare->show();
}

void Dashboard::on_nutripb_clicked()
{
    nutrients *nutri = new nutrients();
    nutri->show();
}

void Dashboard::on_trackerpb_clicked()
{
    PeriodCalendar *track = new PeriodCalendar();
    track->show();
}

void Dashboard::showRandomQuote()
{
    QStringList quotes = {
        "🌸 <i>Be kind to yourself.</i><br> <i>You're doing better than you think.</i>✨",
        "💪 <i>Believe in yourself.</i><br>🌈 <i>You’ve got this!</i>",
        "🧘‍♀️ <i>Pause. Breathe. Relax.</i><br> <i>This moment is yours.</i>🌙",
        "🍫 <i>Take a break.</i><br>💖 <i>You deserve care too.</i>",
        "🛌 <i>Rest isn’t lazy.</i><br> <i>It’s healing.</i>🌷"
    };

    int index = QRandomGenerator::global()->bounded(quotes.size());
    QString selectedQuote = "“" + quotes[index] + "”";

    ui->quotelabel->setText(selectedQuote);
    ui->quotelabel->setWordWrap(true);
    ui->quotelabel->setAlignment(Qt::AlignCenter);
    ui->quotelabel->setStyleSheet("font-size: 40px; color: #555; padding: 10px;");
}
