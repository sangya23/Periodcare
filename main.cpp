#include "nutrients.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    nutrients w;
    w.show();
    return a.exec();
}
