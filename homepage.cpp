#include "homepage.h"
#include "ui_homepage.h"
#include "loginpage.h"

Homepage::Homepage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Homepage)
{
    ui->setupUi(this);
}

Homepage::~Homepage()
{
    delete ui;
}

void Homepage::on_loginpb_clicked()
{
    LoginWindow=new Loginpage();
    LoginWindow->show();
    this->close();
}


