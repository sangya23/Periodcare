/********************************************************************************
** Form generated from reading UI file 'forgotpwd.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPWD_H
#define UI_FORGOTPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_forgotpwd
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *emailfple;

    void setupUi(QDialog *forgotpwd)
    {
        if (forgotpwd->objectName().isEmpty())
            forgotpwd->setObjectName("forgotpwd");
        forgotpwd->resize(424, 273);
        QPalette palette;
        QBrush brush(QColor(252, 228, 236, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        forgotpwd->setPalette(palette);
        forgotpwd->setStyleSheet(QString::fromUtf8("QDialog\n"
"{\n"
"	Background-color:#fce4ec;\n"
"}"));
        buttonBox = new QDialogButtonBox(forgotpwd);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(-90, 160, 341, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}"));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(forgotpwd);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 20, 201, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}"));
        emailfple = new QLineEdit(forgotpwd);
        emailfple->setObjectName("emailfple");
        emailfple->setGeometry(QRect(30, 110, 341, 31));
        emailfple->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));

        retranslateUi(forgotpwd);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, forgotpwd, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, forgotpwd, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(forgotpwd);
    } // setupUi

    void retranslateUi(QDialog *forgotpwd)
    {
        forgotpwd->setWindowTitle(QCoreApplication::translate("forgotpwd", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("forgotpwd", "<html><head/><body><p align=\"center\">Forgot Password</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgotpwd: public Ui_forgotpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPWD_H
