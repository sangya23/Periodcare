#ifndef MOODMANAGEMENT_H
#define MOODMANAGEMENT_H
#include "moodsecond.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Moodmanagement;
}
QT_END_NAMESPACE

class Moodmanagement : public QMainWindow
{
    Q_OBJECT

public:
    Moodmanagement(QWidget *parent = nullptr);
    ~Moodmanagement();

private slots:
    void on_pushButton_clicked();
private:
    moodsecond *Moodwindow;
private:
    Ui::Moodmanagement *ui;
};
#endif // MOODMANAGEMENT_H
