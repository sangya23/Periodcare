#ifndef MOODSECOND_H
#define MOODSECOND_H
#include <QMainWindow>
#include "moodlogdialog.h"

namespace Ui {
class moodsecond;
}

class moodsecond : public QMainWindow
{
    Q_OBJECT

public:
    explicit moodsecond(QWidget *parent = nullptr);
    ~moodsecond();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
private:
    Ui::moodsecond *ui;
};

#endif // MOODSECOND_H
