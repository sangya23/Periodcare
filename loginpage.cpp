#include "loginpage.h"
#include "ui_loginpage.h"
#include "globals.h"
#include <QMessageBox>
Loginpage::Loginpage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Loginpage)
{
    ui->setupUi(this);
    connect(ui->lOGIN,SIGNAL(clicked(bool)),this,SLOT(Login()));
    ui->usernamelineedit->setPlaceholderText("Email Address");
    ui->pwdlineedit->setPlaceholderText("Password");
    ui->pwdlineedit->setEchoMode(QLineEdit::Password);
    QIcon email(":/loginicons/emailimg.jpg");
    ui->usernamelineedit->addAction(email,QLineEdit::LeadingPosition);
    QIcon pass(":/loginicons/passimg.jpeg");
    ui->pwdlineedit->addAction(pass,QLineEdit::LeadingPosition);
    this->showMaximized();
}
Loginpage::~Loginpage()
{
    delete ui;
}
void Loginpage::resetFields()
{
    ui->usernamelineedit->clear();
    ui->pwdlineedit->clear();
}
void Loginpage::Login()
{
    QSqlDatabase db = QSqlDatabase::database("UserConnection");

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Database is not open.");
        return;
    }

    QString email = ui->usernamelineedit->text();
    QString password = ui->pwdlineedit->text();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both email and password.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT email FROM userinfo WHERE email = ? AND password = ?");
    query.addBindValue(email);
    query.addBindValue(password);

    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Error", "Login query failed: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        currentUserEmail = email;
        QSqlQuery nameQuery(db);
        nameQuery.prepare("SELECT name FROM profiles WHERE email = ?");
        nameQuery.addBindValue(currentUserEmail);

        if (nameQuery.exec() && nameQuery.next()) {
            currentUserName = nameQuery.value(0).toString();
        } else {
            currentUserName = "User";  // fallback
        }

        dashboardWindow = new Dashboard(this);
        dashboardWindow->show();
        this->hide();
    } else {
        QMessageBox::warning(nullptr, "Login Failed", "Invalid email or password.");
    }
}



void Loginpage::on_createaccount_clicked()
{
    signupWindow = new Signup();
    signupWindow->show();

}


void Loginpage::on_forgotpwd_clicked()
{
    forgotpwdWindow = new forgotpwd(this);
    forgotpwdWindow->show();
}



void Loginpage::on_showPasswordCheckBox_toggled(bool checked)
{

        if (checked) {
            ui->pwdlineedit->setEchoMode(QLineEdit::Normal);
        } else {
            ui->pwdlineedit->setEchoMode(QLineEdit::Password);
        }

}

