#include "moodmanagement.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Moodmanagement w;
    w.show();
    return a.exec();
}
