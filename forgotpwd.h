#ifndef FORGOTPWD_H
#define FORGOTPWD_H

#include <QDialog>

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
    void on_buttonBox_accepted();

private:
    Ui::forgotpwd *ui;
};

#endif // FORGOTPWD_H
