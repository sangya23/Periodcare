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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *loginpb;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *verticalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName("Homepage");
        Homepage->resize(800, 600);
        Homepage->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,\n"
"       stop: 0 #f7c6d9,  \n"
"       stop: 1 #e6e6fa\n"
"    );\n"
"}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(Homepage);
        centralwidget->setObjectName("centralwidget");
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setEnabled(true);
        label_2->setMinimumSize(QSize(60, 60));
        label_2->setMaximumSize(QSize(60, 60));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	border-image: url(:/loginicons/LOGO.jpg);\n"
"	border-radius:25px;\n"
"}"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 60, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(75, 60));
        label_3->setMaximumSize(QSize(75, 60));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginpb = new QPushButton(centralwidget);
        loginpb->setObjectName("loginpb");
        loginpb->setMinimumSize(QSize(55, 30));
        loginpb->setMaximumSize(QSize(55, 30));
        loginpb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}"));

        horizontalLayout->addWidget(loginpb);

        horizontalLayout->setStretch(1, 4);
        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(3, 4);
        horizontalLayout->setStretch(4, 1);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 760, 482));
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

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
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Homepage", "\360\237\214\270PeriodCare\360\237\214\270", nullptr));
        loginpb->setText(QCoreApplication::translate("Homepage", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
