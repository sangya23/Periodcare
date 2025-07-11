#ifndef HOMEPAGE_H
#define HOMEPAGE_H
#include "login.h"

#include <QMainWindow>

namespace Ui {
class Homepage;
}

class Homepage : public QMainWindow
{
    Q_OBJECT

public:
    explicit Homepage(QWidget *parent = nullptr);
    ~Homepage();

private slots:
    void on_loginpb_clicked();

private:
    MainWindow *LoginWindow;
private:
    Ui::Homepage *ui;
};

#endif // HOMEPAGE_H
