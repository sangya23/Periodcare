#include "welcome.h"
#include "ui_welcome.h"
#include "mainwindow.h"
#include "dashboard.h"
Welcome::Welcome(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    this->showMaximized();
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushButton_clicked()
{
    mw=new MainWindow();
    mw->show();
}


void Welcome::on_pushButton_2_clicked()
{
    dashb=new Dashboard();
    dashb->show();
    this->close();
}

