#include "forgotpwd.h"
#include "qmessagebox.h"
#include "ui_forgotpwd.h"
#include <QMessageBox>
#include <qstring.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "changepwd.h"
#include "globals.h"
forgotpwd::forgotpwd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgotpwd)
{
    ui->setupUi(this);
    ui->recovpwdle->setPlaceholderText("Recovery key");
    ui->emailpwdle->setPlaceholderText("Email Address");
    QIcon email(":/loginicons/emailimg.jpg");
    QIcon passkey(":/loginicons/key.jpg");
    ui->emailpwdle->addAction(email,QLineEdit::LeadingPosition);
    ui->recovpwdle->addAction(passkey,QLineEdit::LeadingPosition);
}

forgotpwd::~forgotpwd()
{
    delete ui;
}


void forgotpwd::on_okpb_clicked()
{
    QString recoveryKey = ui->recovpwdle->text();
    QString email=ui->emailpwdle->text();

    if (recoveryKey.isEmpty()) {
        QMessageBox::warning(nullptr, "Input Error", "Please enter your recovery key.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database("UserInfoConnection");
    if (!db.isOpen()) {
        QMessageBox::critical(nullptr, "Database Error", "Database is not open!");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT email FROM userinfo WHERE email=? and passkey = ?");
    query.addBindValue(email);
    query.addBindValue(recoveryKey);

    if (!query.exec() || !query.next()) {
        QMessageBox::warning(nullptr, "Invalid Key", "Email Address and recovery key don't match.");
        return;
    }

    QMessageBox::StandardButton reply = QMessageBox::question(
        nullptr,
        "Recovery Key Matched",
        "Do you want to reset your password?",
        QMessageBox::Yes | QMessageBox::No
        );

    if (reply == QMessageBox::Yes) {
        currentUserEmail=email;
        change = new changepwd();
        change->show();
        this->close();
        } else {
            QMessageBox::information(nullptr, "Cancelled", "Password reset was cancelled.");
            this->close();
        }

}





void forgotpwd::on_pushButton_clicked()
{
    this->close();
}

