#ifndef WELCOME_H
#define WELCOME_H
#include "editprofilewindow.h"
#include "dashboard.h"
#include <QWidget>

namespace Ui {
class Welcome;
}

class Welcome : public QWidget
{
    Q_OBJECT

public:
    explicit Welcome(QWidget *parent = nullptr);
    ~Welcome();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
   EditProfileWindow *editprof;
    Dashboard *dashb;
private:
    Ui::Welcome *ui;
};

#endif // WELCOME_H
