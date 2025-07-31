#ifndef CHANGEPWD_H
#define CHANGEPWD_H

#include <QDialog>

namespace Ui {
class changepwd;
}

class changepwd : public QDialog
{
    Q_OBJECT

public:
    explicit changepwd(QWidget *parent = nullptr);
    ~changepwd();

private slots:
    void on_okcp_clicked();

    void on_showPasswordCheckBox_toggled(bool checked);

    void on_cancelcp_clicked();

private:
    Ui::changepwd *ui;
};

#endif // CHANGEPWD_H
