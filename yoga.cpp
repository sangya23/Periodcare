#include "yoga.h"
#include "ui_yoga.h"

yoga::yoga(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::yoga)
{
    ui->setupUi(this);
    this->showMaximized();
}

yoga::~yoga()
{
    delete ui;
}
