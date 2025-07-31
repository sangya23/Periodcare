#include "changepwd.h"
#include "ui_changepwd.h"
#include "qmessagebox.h"
#include <QMessageBox>
#include <qstring.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include "globals.h"

#include <QRegularExpression>

bool PasswordStrong(const QString &password) {
    static QRegularExpression passwordRegex("^(?=.*[A-Z])(?=.*[\\W_]).{8,}$");
    return passwordRegex.match(password).hasMatch();
}
changepwd::changepwd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changepwd)
{
    {
        ui->setupUi(this);
        ui->changepwdle->setPlaceholderText("Password");
        ui->changepwdle->setEchoMode(QLineEdit::Password);
        ui->confirmpwdle->setPlaceholderText("Confirm Password");
        ui->confirmpwdle->setEchoMode(QLineEdit::Password);
    }
}

changepwd::~changepwd()
{
    delete ui;
}

void changepwd::on_okcp_clicked()
{
    QString newPassword = ui->changepwdle->text();
    QString confirmPassword = ui->confirmpwdle->text();

    if (newPassword.isEmpty() || confirmPassword.isEmpty()) {
        QMessageBox::warning(this, "Empty Fields", "Please fill in all password fields.");
        return;
    }

    if (newPassword != confirmPassword) {
        QMessageBox::warning(this, "Mismatch", "Passwords do not match.");
        return;
    }

    if (!PasswordStrong(newPassword)) {
        QMessageBox::warning(this, "Weak Password",
                             "Password must be at least 8 characters long, contain at least one uppercase letter, and one special character.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database("UserConnection");
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Database is not open.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("UPDATE userinfo SET password = ? WHERE email = ?");
    query.addBindValue(newPassword);
    query.addBindValue(currentUserEmail);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Failed to update password:\n" + query.lastError().text());
        return;
    }

    QMessageBox::information(this, "Success", "Password updated successfully!");
    this->close();
}


void changepwd::on_showPasswordCheckBox_toggled(bool checked)
{
    if (checked) {
        ui->changepwdle->setEchoMode(QLineEdit::Normal);
        ui->confirmpwdle->setEchoMode(QLineEdit::Normal);
    } else {
        ui->changepwdle->setEchoMode(QLineEdit::Password);
        ui->confirmpwdle->setEchoMode(QLineEdit::Password);
    }
}


void changepwd::on_cancelcp_clicked()
{
    this->close();
}

