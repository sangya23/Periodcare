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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Homepage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *loginpb;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Homepage)
    {
        if (Homepage->objectName().isEmpty())
            Homepage->setObjectName("Homepage");
        Homepage->resize(1478, 1020);
        Homepage->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Homepage);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"background-color: #fee3dc;\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/loginicons/picforhomepage.jpg);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/loginicons/picforhomepage.jpg")));
        label_2->setScaledContents(true);

        verticalLayout_3->addWidget(label_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        loginpb = new QPushButton(centralwidget);
        loginpb->setObjectName("loginpb");
        loginpb->setMinimumSize(QSize(120, 45));
        loginpb->setMaximumSize(QSize(55, 50));
        loginpb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 20px \"Arial\";\n"
"    border-radius: 18px;\n"
"    padding: 6px 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;\n"
"}"));

        horizontalLayout_2->addWidget(loginpb);


        verticalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_3, 1, 1, 1, 1);

        Homepage->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Homepage);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1478, 18));
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
        label->setText(QString());
        label_2->setText(QString());
        loginpb->setText(QCoreApplication::translate("Homepage", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Homepage: public Ui_Homepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
