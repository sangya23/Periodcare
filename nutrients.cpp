#include "nutrients.h"
#include "ui_nutrients.h"

nutrients::nutrients(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::nutrients)
{
    ui->setupUi(this);
    this->showMaximized();
}

nutrients::~nutrients()
{
    delete ui;
}
