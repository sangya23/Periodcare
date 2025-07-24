// pmain.cpp
#include <QApplication>
#include "periodcalendar.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    PeriodCalendar window;
    window.setWindowTitle("Menstrual Cycle Tracker");
    window.resize(800, 600);
    window.show();

    return app.exec();
}
