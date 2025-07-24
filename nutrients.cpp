#include "nutrients.h"
#include "ui_nutrients.h"

nutrients::nutrients(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::nutrients)
{
    ui->setupUi(this);
}

nutrients::~nutrients()
{
    delete ui;
}
