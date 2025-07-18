/********************************************************************************
** Form generated from reading UI file 'welcome.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_H
#define UI_WELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->resize(712, 419);
        label = new QLabel(Welcome);
        label->setObjectName("label");
        label->setGeometry(QRect(240, 110, 191, 121));
        pushButton = new QPushButton(Welcome);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 360, 121, 31));
        pushButton_2 = new QPushButton(Welcome);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(510, 360, 121, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Form", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("Welcome", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Welcome", "\360\237\214\270 Welcome to Your Period Companion \360\237\214\270", nullptr));
        pushButton->setText(QCoreApplication::translate("Welcome", "Create your Profile", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Welcome", "Go to dashboard", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
