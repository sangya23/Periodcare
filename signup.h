#ifndef SIGNUP_H
#define SIGNUP_H
#include "welcome.h"
#include <QMainWindow>

namespace Ui {
class Signup;
}

class Signup : public QMainWindow
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_createacc_clicked();
    void on_showPasswordCheckBox_toggled(bool checked);

private:
    Welcome *well;
private:
    Ui::Signup *ui;
};

#endif
