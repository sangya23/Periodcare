#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->lOGIN,SIGNAL(clicked(bool)),this,SLOT(Login()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Login()
{
    QString name[]={"abc","def","ghi"};
    QString pass[]={"123","234ab","345cd"};

    QString uName= ui->lineEdit->text();
    QString uPass=ui->lineEdit_2->text();

    bool found=false;
    for (int i=0;i<name->length();i++)
    {
        if (uName == name[i] && uPass == pass[i])
        {
            QMessageBox::information(this,"Welcome!",
                                     "User: "+name[i]+"!\n You have successfully logged in!");
            found=true;
            break;
        }

    }
    if (!found)
    {
        QMessageBox::information(this,"ERROR",
                                 "Invalid username or password");
    }
}

