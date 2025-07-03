#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>
#include <qstring.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>


Signup::Signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
    ui->usersule->setPlaceholderText("Username");
    ui->emailsule->setPlaceholderText("Email");
    ui->pwdsule->setPlaceholderText("Password");
    ui->pwdsule->setEchoMode(QLineEdit::Password);
    QIcon user(":/loginicons/userimp.jpeg");
    ui->usersule->addAction(user,QLineEdit::LeadingPosition);
    QIcon email(":/loginicons/emailimg.jpg");
    ui->emailsule->addAction(email,QLineEdit::LeadingPosition);
    QIcon pass(":/loginicons/passimg.jpeg");
    ui->pwdsule->addAction(pass,QLineEdit::LeadingPosition);
}

Signup::~Signup()
{
    delete ui;
}
/*bool terms=false;
void Signup::on_checkBox_checkStateChanged(const Qt::CheckState &arg1)
{
    terms=true;
}*/

void Signup::on_createacc_clicked()
{
    QSqlDatabase db = QSqlDatabase::database("UserInfoConnection");  // Get shared connection

    if (!db.isOpen()) {
        QMessageBox::warning(this, "Error", "Database is not open!");
        return;
    }

    QString name = ui->usersule->text();
    QString email = ui->emailsule->text();
    QString password = ui->pwdsule->text();

    if (name.isEmpty() || email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    // Step 1: Check for existing email
    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT COUNT(*) FROM userinfo WHERE email = ?");
    checkQuery.addBindValue(email);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to check existing email: " + checkQuery.lastError().text());
        return;
    }

    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count > 0) {
        QMessageBox::warning(this, "Duplicate Email", "An account with this email already exists.");
        return;
    }
    QSqlQuery insertQuery(db);
    insertQuery.prepare("INSERT INTO userinfo (name, email, password) VALUES (?, ?, ?)");
    insertQuery.addBindValue(name);
    insertQuery.addBindValue(email);
    insertQuery.addBindValue(password);

    if (!insertQuery.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to insert new user: " + insertQuery.lastError().text());
    } else {
        QMessageBox::information(this, "Success", "Account created successfully!");
        this->close();
    }


}





void Signup::on_createaccount_clicked()
{
    this->close();
}

