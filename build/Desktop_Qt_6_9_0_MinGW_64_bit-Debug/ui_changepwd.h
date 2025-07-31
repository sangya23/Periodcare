/********************************************************************************
** Form generated from reading UI file 'changepwd.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPWD_H
#define UI_CHANGEPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changepwd
{
public:
    QLineEdit *changepwdle;
    QLineEdit *confirmpwdle;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *okcp;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelcp;
    QLabel *label;
    QCheckBox *showPasswordCheckBox;

    void setupUi(QDialog *changepwd)
    {
        if (changepwd->objectName().isEmpty())
            changepwd->setObjectName("changepwd");
        changepwd->resize(400, 300);
        changepwd->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	Background-color:#fce4ec;\n"
"}"));
        changepwdle = new QLineEdit(changepwd);
        changepwdle->setObjectName("changepwdle");
        changepwdle->setGeometry(QRect(10, 90, 341, 31));
        changepwdle->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));
        confirmpwdle = new QLineEdit(changepwd);
        confirmpwdle->setObjectName("confirmpwdle");
        confirmpwdle->setGeometry(QRect(10, 140, 341, 31));
        confirmpwdle->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));
        horizontalLayoutWidget = new QWidget(changepwd);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(110, 210, 161, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        okcp = new QPushButton(horizontalLayoutWidget);
        okcp->setObjectName("okcp");
        okcp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}"));

        horizontalLayout->addWidget(okcp);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelcp = new QPushButton(horizontalLayoutWidget);
        cancelcp->setObjectName("cancelcp");
        cancelcp->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}"));

        horizontalLayout->addWidget(cancelcp);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(2, 2);
        label = new QLabel(changepwd);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 201, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}"));
        showPasswordCheckBox = new QCheckBox(changepwd);
        showPasswordCheckBox->setObjectName("showPasswordCheckBox");
        showPasswordCheckBox->setGeometry(QRect(130, 180, 121, 16));
        showPasswordCheckBox->setStyleSheet(QString::fromUtf8("background-color: #fce4ec;"));

        retranslateUi(changepwd);

        QMetaObject::connectSlotsByName(changepwd);
    } // setupUi

    void retranslateUi(QDialog *changepwd)
    {
        changepwd->setWindowTitle(QCoreApplication::translate("changepwd", "Dialog", nullptr));
        okcp->setText(QCoreApplication::translate("changepwd", "OK", nullptr));
        cancelcp->setText(QCoreApplication::translate("changepwd", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("changepwd", "<html><head/><body><p align=\"center\">Change Password</p></body></html>", nullptr));
        showPasswordCheckBox->setText(QCoreApplication::translate("changepwd", "Show Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changepwd: public Ui_changepwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPWD_H
