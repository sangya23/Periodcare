#ifndef NUTRIENTS_H
#define NUTRIENTS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class nutrients;
}
QT_END_NAMESPACE

class nutrients : public QMainWindow
{
    Q_OBJECT

public:
    nutrients(QWidget *parent = nullptr);
    ~nutrients();

private:
    Ui::nutrients *ui;
};
#endif // NUTRIENTS_H
