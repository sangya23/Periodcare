#ifndef LOGIN_H
#define LOGIN_H
#include <QMainWindow>
#include "signup.h"
#include "dashboard.h"
#include "forgotpwd.h"
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Signup *signupWindow;
    Dashboard *dashboardWindow;
    forgotpwd *forgotpwdWindow;

private slots:
    void Login();

    void on_createaccount_clicked();

    void on_forgotpwd_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // LOGIN_H
