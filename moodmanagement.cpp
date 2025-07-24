#include "moodmanagement.h"
#include "ui_moodmanagement.h"
#include "moodsecond.h"

Moodmanagement::Moodmanagement(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Moodmanagement)
{
    ui->setupUi(this);
    this->showMaximized();
}

Moodmanagement::~Moodmanagement()
{
    delete ui;
}

void Moodmanagement::on_pushButton_clicked()
{
    Moodwindow=new moodsecond();
    Moodwindow->show();
}

