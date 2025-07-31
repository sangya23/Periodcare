/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loginpage
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *lOGIN;
    QLabel *label;
    QLineEdit *usernamelineedit;
    QLineEdit *pwdlineedit;
    QLabel *label_2;
    QPushButton *createaccount;
    QPushButton *forgotpwd;
    QCheckBox *showPasswordCheckBox;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Loginpage)
    {
        if (Loginpage->objectName().isEmpty())
            Loginpage->setObjectName("Loginpage");
        Loginpage->resize(800, 600);
        Loginpage->setMinimumSize(QSize(0, 0));
        Loginpage->setMaximumSize(QSize(16777215, 16777215));
        Loginpage->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, \n"
"	stop: 0 #f7c6d9,  \n"
"   stop: 1 #e6e6fa\n"
");\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(Loginpage);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(750, 464));
        frame->setMaximumSize(QSize(750, 464));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #fce4ec;\n"
"    border: 2px solid #F497B6 ;\n"
"    border-radius: 20px;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        lOGIN = new QPushButton(frame);
        lOGIN->setObjectName("lOGIN");
        lOGIN->setGeometry(QRect(110, 270, 91, 31));
        lOGIN->setAutoFillBackground(false);
        lOGIN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: bold 14px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 40, 101, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}"));
        usernamelineedit = new QLineEdit(frame);
        usernamelineedit->setObjectName("usernamelineedit");
        usernamelineedit->setGeometry(QRect(20, 130, 261, 35));
        usernamelineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}"));
        pwdlineedit = new QLineEdit(frame);
        pwdlineedit->setObjectName("pwdlineedit");
        pwdlineedit->setGeometry(QRect(20, 180, 261, 35));
        pwdlineedit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}"));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(360, 0, 390, 464));
        label_2->setMinimumSize(QSize(390, 464));
        label_2->setMaximumSize(QSize(390, 464));
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:#f7cfd0;\n"
"}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/loginicons/periodsimg1.jpg")));
        label_2->setScaledContents(true);
        label_2->setMargin(5);
        createaccount = new QPushButton(frame);
        createaccount->setObjectName("createaccount");
        createaccount->setGeometry(QRect(170, 320, 131, 26));
        createaccount->setAutoFillBackground(false);
        createaccount->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}\n"
""));
        forgotpwd = new QPushButton(frame);
        forgotpwd->setObjectName("forgotpwd");
        forgotpwd->setGeometry(QRect(10, 320, 141, 26));
        forgotpwd->setAutoFillBackground(false);
        forgotpwd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}\n"
""));
        showPasswordCheckBox = new QCheckBox(frame);
        showPasswordCheckBox->setObjectName("showPasswordCheckBox");
        showPasswordCheckBox->setGeometry(QRect(100, 230, 121, 16));
        showPasswordCheckBox->setStyleSheet(QString::fromUtf8("background-color: #fce4ec;"));
        label_2->raise();
        lOGIN->raise();
        label->raise();
        usernamelineedit->raise();
        pwdlineedit->raise();
        createaccount->raise();
        forgotpwd->raise();
        showPasswordCheckBox->raise();

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        Loginpage->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Loginpage);
        statusbar->setObjectName("statusbar");
        Loginpage->setStatusBar(statusbar);

        retranslateUi(Loginpage);

        QMetaObject::connectSlotsByName(Loginpage);
    } // setupUi

    void retranslateUi(QMainWindow *Loginpage)
    {
        Loginpage->setWindowTitle(QCoreApplication::translate("Loginpage", "MainWindow", nullptr));
        lOGIN->setText(QCoreApplication::translate("Loginpage", "Login", nullptr));
        label->setText(QCoreApplication::translate("Loginpage", "<html><head/><body><p align=\"center\">Login</p></body></html>", nullptr));
        usernamelineedit->setText(QString());
        pwdlineedit->setText(QString());
        label_2->setText(QString());
        createaccount->setText(QCoreApplication::translate("Loginpage", "Create an account", nullptr));
        forgotpwd->setText(QCoreApplication::translate("Loginpage", "Forgot Password?", nullptr));
        showPasswordCheckBox->setText(QCoreApplication::translate("Loginpage", "Show Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loginpage: public Ui_Loginpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
