/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName("Homepage");
        Homepage->resize(800, 600);
        centralwidget = new QWidget(Homepage);
        centralwidget->setObjectName("centralwidget");
        Homepage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Homepage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        Homepage->setMenuBar(menubar);
        statusbar = new QStatusBar(Homepage);
        statusbar->setObjectName("statusbar");
        Homepage->setStatusBar(statusbar);

        retranslateUi(Homepage);

        QMetaObject::connectSlotsByName(Homepage);
    } // setupUi

    void retranslateUi(QMainWindow *Homepage)
    {
        Homepage->setWindowTitle(QCoreApplication::translate("Homepage", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
