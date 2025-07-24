#include "dashboard.h"
#include "ui_dashboard.h"
#include "mainwindow.h"
#include "moodmanagement.h"
#include "yoga.h"
#include "nutrients.h"
#include "globals.h"
#include "sanitarycare.h"
#include "periodcalendar.h"
#include <QPainter>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)

{
    ui->setupUi(this);
    ui->welcomeLabel->setText("Hello, " + currentUserName+"!");
    loadProfileAvatar();
    this->showMaximized();
}

Dashboard::~Dashboard()
{
    delete ui;
}


void Dashboard::on_moodmgmt_clicked()
{
    mood=new Moodmanagement();
    mood->show();
}


void Dashboard::on_yogapb_clicked()
{
    yog=new yoga();
    yog->show();
}


void Dashboard::on_sanitarycarepb_clicked()
{
    scare=new SanitaryCare;
    scare->show();
}


void Dashboard::on_nutripb_clicked()
{
    nutri=new nutrients();
    nutri->show();
}


void Dashboard::on_trackerpb_clicked()
{
    track=new PeriodCalendar();
    track->show();
}

void Dashboard::loadProfileAvatar() {

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

            QPixmap pixmap;
            pixmap.load(avatarPath, nullptr, Qt::AvoidDither | Qt::ThresholdDither | Qt::PreferDither);
            QPixmap scaled = pixmap.scaled(avatarSize, avatarSize, Qt::KeepAspectRatioByExpanding, Qt::SmoothTransformation);

            QPixmap circularMask(avatarSize, avatarSize);
            circularMask.fill(Qt::transparent);

            QPainter maskPainter(&circularMask);
            maskPainter.setRenderHint(QPainter::Antialiasing);
            maskPainter.setBrush(Qt::white);
            maskPainter.setPen(Qt::NoPen);
            maskPainter.drawEllipse(0, 0, avatarSize, avatarSize);

            scaled.setMask(circularMask.createMaskFromColor(Qt::transparent));

            ui->profileAvatarButton->setIcon(QIcon(scaled));
            ui->profileAvatarButton->setIconSize(QSize(avatarSize, avatarSize));
            ui->profileAvatarButton->setFixedSize(avatarSize, avatarSize);
            ui->profileAvatarButton->setStyleSheet(
                QString("border: none; border-radius: %1px;").arg(avatarSize / 2)
                );
        }

    }

    db.close();
}



void Dashboard::on_profileAvatarButton_clicked()
{
    w=new MainWindow();
    connect(w, &MainWindow::profileUpdatedSignal, this, &Dashboard::loadProfileAvatar);
    w->show();
}

