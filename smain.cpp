#include "sanitarycare.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SanitaryCare w;
    w.show();
    return a.exec();
}
