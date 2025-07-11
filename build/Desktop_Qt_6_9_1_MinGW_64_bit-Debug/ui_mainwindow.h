/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *button_edit;
    QPushButton *button_save;
    QLabel *label;
    QLabel *labelavatar;
    QLineEdit *lineEdit_1;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(792, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 154, 186);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(600, 600));
        frame->setMaximumSize(QSize(600, 600));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(244, 154, 186);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        button_edit = new QPushButton(frame);
        button_edit->setObjectName("button_edit");
        button_edit->setGeometry(QRect(330, 425, 140, 40));
        button_edit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f4e1ec;\n"
"}\n"
""));
        button_save = new QPushButton(frame);
        button_save->setObjectName("button_save");
        button_save->setGeometry(QRect(170, 425, 140, 40));
        button_save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #f4e1ec;\n"
"}\n"
""));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 10, 301, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background-color: rgb(254, 227, 220);\n"
"	font: 20pt \"Source Code Pro\";\n"
"	border: 2px solid indianred;\n"
"    border-radius: 10px;\n"
"    padding: 8px 10px;\n"
"}\n"
"  "));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        labelavatar = new QLabel(frame);
        labelavatar->setObjectName("labelavatar");
        labelavatar->setGeometry(QRect(260, 60, 120, 120));
        labelavatar->setMinimumSize(QSize(0, 0));
        labelavatar->setMaximumSize(QSize(16777215, 16777215));
        labelavatar->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #ffffff;\n"
"    border-radius: 60px;\n"
"    border: none;\n"
"    qproperty-alignment: AlignCenter;\n"
"}\n"
""));
        labelavatar->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit_1 = new QLineEdit(frame);
        lineEdit_1->setObjectName("lineEdit_1");
        lineEdit_1->setGeometry(QRect(170, 195, 301, 41));
        lineEdit_1->setStyleSheet(QString::fromUtf8("\n"
"QLineEdit {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 10px;\n"
"    padding: 8px 10px;\n"
"    font-size: 14px;\n"
"}\n"
""));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 265, 301, 41));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 10px;\n"
"    padding: 8px 10px;\n"
"    font-size: 14px;\n"
"}\n"
""));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(170, 335, 301, 71));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: white;\n"
"    border: 1px solid lightgray;\n"
"    border-radius: 10px;\n"
"    padding: 8px 10px;\n"
"    font-size: 14px;\n"
"}\n"
""));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 792, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        button_edit->setText(QCoreApplication::translate("MainWindow", "Edit Profile", nullptr));
        button_save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Profile", nullptr));
        labelavatar->setText(QCoreApplication::translate("MainWindow", "Avatar", nullptr));
        lineEdit_1->setInputMask(QString());
        lineEdit_1->setText(QString());
        lineEdit_1->setPlaceholderText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        lineEdit_2->setInputMask(QString());
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Surname", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:14px; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:9pt;\"><br /></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Short Bio...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
