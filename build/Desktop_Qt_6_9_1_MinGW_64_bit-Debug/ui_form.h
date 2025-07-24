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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
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
    QLabel *label_3;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QSpinBox *cycleLengthSpinBox;
    QLabel *label;
    QLabel *flowLabel;
    QLabel *periodLabel;
    QLabel *fertileLabel;
    QLabel *predictedLabel;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *logButton;
    QPushButton *deleteButton;
    QPushButton *statsButton;
    QPushButton *chartButton;
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
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(270, 480, 63, 20));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(0, 420, 471, 163));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        cycleLengthSpinBox = new QSpinBox(formLayoutWidget);
        cycleLengthSpinBox->setObjectName("cycleLengthSpinBox");
        cycleLengthSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox {color:rgb(0, 0, 0);}"));

        formLayout->setWidget(0, QFormLayout::ItemRole::FieldRole, cycleLengthSpinBox);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	color: rgb(0, 0, 0);\n"
"\n"
"font: 10pt \"Segoe UI\";}\n"
""));

        formLayout->setWidget(0, QFormLayout::ItemRole::LabelRole, label);

        flowLabel = new QLabel(formLayoutWidget);
        flowLabel->setObjectName("flowLabel");
        flowLabel->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";}\n"
""));

        formLayout->setWidget(1, QFormLayout::ItemRole::LabelRole, flowLabel);

        periodLabel = new QLabel(formLayoutWidget);
        periodLabel->setObjectName("periodLabel");
        periodLabel->setStyleSheet(QString::fromUtf8("QLabel {color:rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";}"));

        formLayout->setWidget(2, QFormLayout::ItemRole::LabelRole, periodLabel);

        fertileLabel = new QLabel(formLayoutWidget);
        fertileLabel->setObjectName("fertileLabel");
        fertileLabel->setStyleSheet(QString::fromUtf8("QLabel{color:rgb(0,0,0);\n"
"font: 10pt \"Segoe UI\";}"));

        formLayout->setWidget(3, QFormLayout::ItemRole::LabelRole, fertileLabel);

        predictedLabel = new QLabel(formLayoutWidget);
        predictedLabel->setObjectName("predictedLabel");
        predictedLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color:rgb(0,0,0);\n"
"\n"
"font: 10pt \"Segoe UI\";}"));

        formLayout->setWidget(4, QFormLayout::ItemRole::LabelRole, predictedLabel);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 360, 781, 61));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        logButton = new QPushButton(horizontalLayoutWidget);
        logButton->setObjectName("logButton");
        logButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);\n"
"\n"
"font: 10pt \"Segoe UI\";}"));

        horizontalLayout_3->addWidget(logButton);

        deleteButton = new QPushButton(horizontalLayoutWidget);
        deleteButton->setObjectName("deleteButton");
        deleteButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";}"));

        horizontalLayout_3->addWidget(deleteButton);

        statsButton = new QPushButton(horizontalLayoutWidget);
        statsButton->setObjectName("statsButton");
        statsButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";}"));

        horizontalLayout_3->addWidget(statsButton);

        chartButton = new QPushButton(horizontalLayoutWidget);
        chartButton->setObjectName("chartButton");
        chartButton->setStyleSheet(QString::fromUtf8("QPushButton {color:rgb(0, 0, 0);\n"
"font: 10pt \"Segoe UI\";}"));

        horizontalLayout_3->addWidget(chartButton);

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
        label_3->setText(QCoreApplication::translate("Form", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Form", "Average Cycle Length", nullptr));
        flowLabel->setText(QCoreApplication::translate("Form", "Period starts", nullptr));
        periodLabel->setText(QCoreApplication::translate("Form", "Flow days", nullptr));
        fertileLabel->setText(QCoreApplication::translate("Form", "Fertile Window", nullptr));
        predictedLabel->setText(QCoreApplication::translate("Form", "Upcoming Period date", nullptr));
        logButton->setText(QCoreApplication::translate("Form", "Log Period", nullptr));
        deleteButton->setText(QCoreApplication::translate("Form", "Remove Data", nullptr));
        statsButton->setText(QCoreApplication::translate("Form", "Statistics", nullptr));
        chartButton->setText(QCoreApplication::translate("Form", "Cycle Graph", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
