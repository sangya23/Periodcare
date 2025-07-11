#include "homepage.h"
#include "ui_homepage.h"
#include "login.h"

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
    LoginWindow=new MainWindow();
    LoginWindow->show();
    this->close();
}


