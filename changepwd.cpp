#include "changepwd.h"
#include "ui_changepwd.h"

changepwd::changepwd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changepwd)
{
    ui->setupUi(this);
}

changepwd::~changepwd()
{
    delete ui;
}
