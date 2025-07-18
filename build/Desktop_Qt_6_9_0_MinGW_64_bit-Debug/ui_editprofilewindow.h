/********************************************************************************
** Form generated from reading UI file 'editprofilewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPROFILEWINDOW_H
#define UI_EDITPROFILEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_EditProfileWindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *Title;
    QLineEdit *lineEditSurname;
    QTextEdit *textEditBio;
    QPushButton *buttonChooseAvatar;
    QLineEdit *lineEditName;
    QLabel *labelAvatar;
    QLabel *Name;
    QLabel *Surname;
    QLabel *Bio;

    void setupUi(QDialog *EditProfileWindow)
    {
        if (EditProfileWindow->objectName().isEmpty())
            EditProfileWindow->setObjectName("EditProfileWindow");
        EditProfileWindow->resize(792, 600);
        buttonBox = new QDialogButtonBox(EditProfileWindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(300, 530, 191, 51));
        buttonBox->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    padding: 6px 12px;\n"
"    border: 1px solid gray;\n"
"    border-radius: 4px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #dddddd;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: #cccccc;\n"
"}\n"
""));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        Title = new QLabel(EditProfileWindow);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(270, 10, 301, 41));
        Title->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgb(254, 227, 220);\n"
"	font: 20pt \"Source Code Pro\";\n"
"	border: 2px solid indianred;\n"
"    border-radius: 10px;\n"
"    padding: 8px 10px;\n"
"}"));
        Title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEditSurname = new QLineEdit(EditProfileWindow);
        lineEditSurname->setObjectName("lineEditSurname");
        lineEditSurname->setGeometry(QRect(270, 340, 301, 41));
        lineEditSurname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 10px;\n"
"    padding: 8px 14px;\n"
"    font-size: 14px;\n"
"}\n"
""));
        textEditBio = new QTextEdit(EditProfileWindow);
        textEditBio->setObjectName("textEditBio");
        textEditBio->setGeometry(QRect(270, 410, 301, 113));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEditBio->sizePolicy().hasHeightForWidth());
        textEditBio->setSizePolicy(sizePolicy);
        textEditBio->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 10px;\n"
"    padding: 8px 10px;\n"
"    font-size: 14px;\n"
"}\n"
""));
        buttonChooseAvatar = new QPushButton(EditProfileWindow);
        buttonChooseAvatar->setObjectName("buttonChooseAvatar");
        buttonChooseAvatar->setGeometry(QRect(360, 200, 121, 31));
        lineEditName = new QLineEdit(EditProfileWindow);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(270, 270, 301, 41));
        lineEditName->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 10px;\n"
"    padding: 8px 14px;\n"
"    font-size: 14px;\n"
"}\n"
""));
        labelAvatar = new QLabel(EditProfileWindow);
        labelAvatar->setObjectName("labelAvatar");
        labelAvatar->setGeometry(QRect(360, 65, 120, 120));
        labelAvatar->setMinimumSize(QSize(120, 120));
        labelAvatar->setMaximumSize(QSize(120, 120));
        labelAvatar->setStyleSheet(QString::fromUtf8("border-radius: 60px;\n"
"border: 2px dashed gray;\n"
"background-color: #ffffff;\n"
""));
        labelAvatar->setAlignment(Qt::AlignmentFlag::AlignCenter);
        Name = new QLabel(EditProfileWindow);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(270, 250, 49, 16));
        Surname = new QLabel(EditProfileWindow);
        Surname->setObjectName("Surname");
        Surname->setGeometry(QRect(270, 320, 49, 16));
        Bio = new QLabel(EditProfileWindow);
        Bio->setObjectName("Bio");
        Bio->setGeometry(QRect(270, 390, 49, 16));

        retranslateUi(EditProfileWindow);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, EditProfileWindow, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, EditProfileWindow, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(EditProfileWindow);
    } // setupUi

    void retranslateUi(QDialog *EditProfileWindow)
    {
        EditProfileWindow->setWindowTitle(QCoreApplication::translate("EditProfileWindow", "Dialog", nullptr));
        Title->setText(QCoreApplication::translate("EditProfileWindow", "Edit Profile", nullptr));
        lineEditSurname->setPlaceholderText(QCoreApplication::translate("EditProfileWindow", "Surname", nullptr));
        textEditBio->setPlaceholderText(QCoreApplication::translate("EditProfileWindow", "Short Bio...", nullptr));
        buttonChooseAvatar->setText(QCoreApplication::translate("EditProfileWindow", "Change Avatar", nullptr));
        lineEditName->setPlaceholderText(QCoreApplication::translate("EditProfileWindow", "Name", nullptr));
        labelAvatar->setText(QCoreApplication::translate("EditProfileWindow", "Avatar", nullptr));
        Name->setText(QCoreApplication::translate("EditProfileWindow", "Name", nullptr));
        Surname->setText(QCoreApplication::translate("EditProfileWindow", "Surname", nullptr));
        Bio->setText(QCoreApplication::translate("EditProfileWindow", "Bio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditProfileWindow: public Ui_EditProfileWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPROFILEWINDOW_H
