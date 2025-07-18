#include "dashboard.h"
#include "ui_dashboard.h"
#include "mainwindow.h"
Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
{
    ui->setupUi(this);
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

