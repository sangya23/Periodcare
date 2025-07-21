/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "calendar.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *centralwidget;
    Calendar *calendarWidget;
    QLabel *label;
    QPushButton *chartButton;
    QSpinBox *cycleLengthSpinBox;
    QPushButton *logButton;
    QPushButton *deleteButton;
    QPushButton *statsButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(1582, 854);
        Form->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color:rgb(228, 205, 255)}\n"
""));
        centralwidget = new QWidget(Form);
        centralwidget->setObjectName("centralwidget");
        calendarWidget = new Calendar(centralwidget);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(0, 0, 781, 361));
        calendarWidget->setMinimumSize(QSize(781, 361));
        calendarWidget->setMaximumSize(QSize(781, 361));
        calendarWidget->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        calendarWidget->setStyleSheet(QString::fromUtf8("QCalendarWidget QWidget{\n"
"background-color:rgb(255, 255, 255);\n"
"color:rgb(0, 0, 0);\n"
"}"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 390, 151, 21));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(0, 0, 0);}\n"
""));
        chartButton = new QPushButton(centralwidget);
        chartButton->setObjectName("chartButton");
        chartButton->setGeometry(QRect(300, 360, 83, 29));
        chartButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);}"));
        cycleLengthSpinBox = new QSpinBox(centralwidget);
        cycleLengthSpinBox->setObjectName("cycleLengthSpinBox");
        cycleLengthSpinBox->setGeometry(QRect(160, 390, 71, 21));
        cycleLengthSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox {color:rgb(0, 0, 0);}"));
        logButton = new QPushButton(centralwidget);
        logButton->setObjectName("logButton");
        logButton->setGeometry(QRect(0, 360, 83, 29));
        logButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);}"));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setGeometry(QRect(80, 360, 111, 29));
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);}"));
        statsButton = new QPushButton(centralwidget);
        statsButton->setObjectName("statsButton");
        statsButton->setGeometry(QRect(190, 360, 111, 29));
        statsButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);}"));
        Form->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Form);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1582, 25));
        Form->setMenuBar(menubar);
        statusbar = new QStatusBar(Form);
        statusbar->setObjectName("statusbar");
        Form->setStatusBar(statusbar);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QMainWindow *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        calendarWidget->setWhatsThis(QCoreApplication::translate("Form", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label->setText(QCoreApplication::translate("Form", "Average Cycle Length", nullptr));
        chartButton->setText(QCoreApplication::translate("Form", "showCycle", nullptr));
        logButton->setText(QCoreApplication::translate("Form", "Log Period", nullptr));
        deleteButton->setText(QCoreApplication::translate("Form", "Remove Data", nullptr));
        statsButton->setText(QCoreApplication::translate("Form", "showStatistics", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
