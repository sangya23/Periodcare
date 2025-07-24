#include "signup.h"
#include "ui_signup.h"
#include "welcome.h"
#include <QMessageBox>
#include <qstring.h>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QRegularExpression>
#include "globals.h"

bool isPasswordStrong(const QString &password) {
    static QRegularExpression passwordRegex("^(?=.*[A-Z])(?=.*[\\W_]).{8,}$");
    return passwordRegex.match(password).hasMatch();
}

bool isEmailValid(const QString &email) {
    static QRegularExpression emailRegex(
        "^[\\w.-]+@[\\w.-]+\\.[a-zA-Z]{2,}$"
        );
    return emailRegex.match(email).hasMatch();
}



Signup::Signup(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
    ui->passkeysule->setPlaceholderText("Password Recovery Key");
    ui->passkeysule->setToolTip("Used to recover your password if you forget it");
    ui->emailsule->setPlaceholderText("Email");
    ui->pwdsule->setPlaceholderText("Password");
    ui->pwdsule->setEchoMode(QLineEdit::Password);
    QIcon passkey(":/loginicons/key.jpg");
    ui->passkeysule->addAction(passkey,QLineEdit::LeadingPosition);
    QIcon email(":/loginicons/emailimg.jpg");
    ui->emailsule->addAction(email,QLineEdit::LeadingPosition);
    QIcon pass(":/loginicons/passimg.jpeg");
    ui->pwdsule->addAction(pass,QLineEdit::LeadingPosition);
    this->showMaximized();
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_createacc_clicked()
{
    QSqlDatabase db = QSqlDatabase::database("UserConnection");

    if (!db.isOpen()) {
        QMessageBox::warning(nullptr, "Error", "Database is not open!");
        return;
    }

    QString passkey = ui->passkeysule->text();
    QString email = ui->emailsule->text();
    QString password = ui->pwdsule->text();

    if (passkey.isEmpty() || email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(nullptr, "Input Error", "Please fill in all fields.");
        return;
    }


        if (!isPasswordStrong(password)) {
            QMessageBox::warning(nullptr, "Weak Password",
                                 "Password must be at least 8 characters long, contain at least one uppercase letter, and one special character.");
            return;
        }

        if (!isEmailValid(email)) {
            QMessageBox::warning(nullptr, "Invalid Email",
                                 "Enter a valid email.");
            return;
        }

    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT COUNT(*) FROM userinfo WHERE email = ?");
    checkQuery.addBindValue(email);

    if (!checkQuery.exec()) {
        QMessageBox::critical(nullptr, "Database Error", "Failed to check existing email: " + checkQuery.lastError().text());
        return;
    }

    checkQuery.next();
    int count = checkQuery.value(0).toInt();

    if (count > 0) {
        QMessageBox::warning(nullptr, "Duplicate Email", "An account with this email already exists.");
        return;
    }
    QSqlQuery insertQuery(db);
    insertQuery.prepare("INSERT INTO userinfo (passkey, email, password) VALUES (?, ?, ?)");
    insertQuery.addBindValue(passkey);
    insertQuery.addBindValue(email);
    insertQuery.addBindValue(password);

    if (!insertQuery.exec()) {
        QMessageBox::critical(nullptr, "Database Error", "Failed to insert new user: " + insertQuery.lastError().text());
    } else {
        currentUserEmail=email;
        QMessageBox::information(nullptr, "Success", "Account created successfully!");
        well=new Welcome();
         well->show();
        this->close();


    }
}



