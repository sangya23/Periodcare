QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    changepwd.cpp \
    dashboard.cpp \
    forgotpwd.cpp \
    homepage.cpp \
    loginpage.cpp \
    main.cpp \
    signup.cpp \
    welcome.cpp  \
    editprofilewindow.cpp \
    mainwindow.cpp

HEADERS += \
    changepwd.h \
    dashboard.h \
    forgotpwd.h \
    homepage.h \
    loginpage.h \
    signup.h \
    welcome.h \
    avatarutils.h \
    editprofilewindow.h \
    mainwindow.h

FORMS += \
    changepwd.ui \
    dashboard.ui \
    forgotpwd.ui \
    homepage.ui \
    loginpage.ui \
    signup.ui \
    welcome.ui \
    editprofilewindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../../../../../Downloads/user.png

RESOURCES += \
    Resource.qrc \
    avatar.qrc
