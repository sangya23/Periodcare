#include "dashboard.h"
#include "ui_dashboard.h"
#include "mainwindow.h"
#include "moodmanagement.h"
#include "yoga.h"
#include "globals.h"
#include "sanitarycare.h"
Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)

{
    ui->setupUi(this);
    ui->welcomeLabel->setText("Welcome to your Dashboard, " + currentUserEmail);
}

Dashboard::~Dashboard()
{
    delete ui;
}

void Dashboard::on_pushButton_8_clicked()
{
    w=new MainWindow();
    w->show();
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

