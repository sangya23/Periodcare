#ifndef YOGA_H
#define YOGA_H

#include <QMainWindow>

namespace Ui {
class yoga;
}

class yoga : public QMainWindow
{
    Q_OBJECT

public:
    explicit yoga(QWidget *parent = nullptr);
    ~yoga();

private:
    Ui::yoga *ui;
};

#endif // YOGA_H
