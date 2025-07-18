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

private:
    Ui::changepwd *ui;
};

#endif // CHANGEPWD_H
