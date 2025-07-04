#include "forgotpwd.h"
#include "ui_forgotpwd.h"
//543#include <qstring.h>
forgotpwd::forgotpwd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgotpwd)
{
    ui->setupUi(this);
    ui->emailfple->setPlaceholderText("Email address");
    QIcon email(":/loginicons/emailimg.jpg");
    ui->emailfple->addAction(email,QLineEdit::LeadingPosition);
}

forgotpwd::~forgotpwd()
{
    delete ui;
}


void forgotpwd::on_buttonBox_accepted()
{
    QString email=ui->emailfple->text();

}

