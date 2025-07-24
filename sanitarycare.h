#ifndef SANITARYCARE_H
#define SANITARYCARE_H
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class SanitaryCare;
}
QT_END_NAMESPACE

class SanitaryCare : public QMainWindow
{
    Q_OBJECT

public:
    SanitaryCare(QWidget *parent = nullptr);
    ~SanitaryCare();

private:
    Ui::SanitaryCare *ui;
};
#endif // SANITARYCARE_H
