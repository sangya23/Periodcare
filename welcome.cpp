#include "welcome.h"
#include "ui_welcome.h"
#include "editprofilewindow.h"
#include "dashboard.h"
Welcome::Welcome(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_pushButton_clicked()
{
    editprof=new EditProfileWindow();
    editprof->show();
}


void Welcome::on_pushButton_2_clicked()
{
    dashb=new Dashboard();
    dashb->show();
    this->close();
}

