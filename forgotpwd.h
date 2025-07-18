#ifndef FORGOTPWD_H
#define FORGOTPWD_H

#include <QDialog>
#include "changepwd.h"
namespace Ui {
class forgotpwd;
}

class forgotpwd : public QDialog
{
    Q_OBJECT

public:
    explicit forgotpwd(QWidget *parent = nullptr);
    ~forgotpwd();

private slots:
    void on_okpb_clicked();

    void on_pushButton_clicked();
private:
    changepwd *change;
private:
    Ui::forgotpwd *ui;
};

#endif // FORGOTPWD_H
