#include "moodsecond.h"
#include "ui_moodsecond.h"

moodsecond::moodsecond(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::moodsecond)
{
    ui->setupUi(this);
}

moodsecond::~moodsecond()
{
    delete ui;
}
