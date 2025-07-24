#include "moodsecond.h"
#include "ui_moodsecond.h"

moodsecond::moodsecond(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::moodsecond)
{
    ui->setupUi(this);
    this->showMaximized();
}

moodsecond::~moodsecond()
{
    delete ui;
}

void moodsecond::on_pushButton_clicked()
{
    this->close();
}

