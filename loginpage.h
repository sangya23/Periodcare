#ifndef LOGINPAGE_H
#define LOGINPAGE_H
#include <QMainWindow>
#include "signup.h"
#include "dashboard.h"
#include "forgotpwd.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
namespace Ui {
class Loginpage;
}

class Loginpage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Loginpage(QWidget *parent = nullptr);
    ~Loginpage();
private:
    Signup *signupWindow;
    Dashboard *dashboardWindow=nullptr;
    forgotpwd *forgotpwdWindow;

private slots:
    void Login();

    void on_createaccount_clicked();

    void on_forgotpwd_clicked();

private:
    Ui::Loginpage *ui;
};

#endif // LOGINPAGE_H





