#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
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
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Login()
{
    QSqlDatabase db = QSqlDatabase::database("UserInfoConnection");

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Error", "Database is not open.");
        return;
    }

    QString email= ui->usernamelineedit->text();
    QString password=ui->pwdlineedit->text();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both email and password.");
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT name FROM userinfo WHERE email = ? AND password = ?");
    query.addBindValue(email);
    query.addBindValue(password);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error", "Login query failed: " + query.lastError().text());
        return;
    }

    if (query.next()) {
        QString name = query.value(0).toString();
        dashboardWindow= new Dashboard();
        dashboardWindow->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid email or password.");
    }
}


void MainWindow::on_createaccount_clicked()
{
    signupWindow = new Signup();
    signupWindow->show();

}


void MainWindow::on_forgotpwd_clicked()
{
    forgotpwdWindow = new forgotpwd(this);
    forgotpwdWindow->show();
}

