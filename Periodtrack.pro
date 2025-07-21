QT         += core gui widgets sql charts

TARGET     = MenstrualCycleTracker
CONFIG     += console window
CONFIG     += c++17

HEADERS += \
    calendar.h \
    periodcalendar.h

SOURCES += \
    calendar.cpp \
    pmain.cpp \
    periodcalendar.cpp

FORMS += \
    form.ui
