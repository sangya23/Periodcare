#include "sanitarycare.h"
#include "ui_sanitarycare.h"

SanitaryCare::SanitaryCare(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SanitaryCare)
{
    ui->setupUi(this);
    this->showMaximized();
}

SanitaryCare::~SanitaryCare()
{
    delete ui;
}
