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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Welcome
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *Welcome)
    {
        if (Welcome->objectName().isEmpty())
            Welcome->setObjectName("Welcome");
        Welcome->resize(712, 419);
        Welcome->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 207, 255);"));
        gridLayout_2 = new QGridLayout(Welcome);
        gridLayout_2->setObjectName("gridLayout_2");
        frame = new QFrame(Welcome);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(595, 331));
        frame->setMaximumSize(QSize(596, 331));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(141, 31));
        pushButton->setMaximumSize(QSize(141, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color: rgb(170, 170, 255);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 200, 255);\n"
"}"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(141, 31));
        pushButton_2->setMaximumSize(QSize(141, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-radius:15px;\n"
"background-color: rgb(170, 170, 255);\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: rgb(200, 200, 255);\n"
"}"));

        horizontalLayout->addWidget(pushButton_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMinimumSize(QSize(581, 211));
        label->setMaximumSize(QSize(581, 211));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Welcome);

        QMetaObject::connectSlotsByName(Welcome);
    } // setupUi

    void retranslateUi(QWidget *Welcome)
    {
        Welcome->setWindowTitle(QCoreApplication::translate("Welcome", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("Welcome", "Create your Profile", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Welcome", "Go to dashboard", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("Welcome", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("Welcome", "<html><head/><body><p><span style=\" font-size:18pt;\">\360\237\214\270 Welcome \360\237\214\270</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Welcome: public Ui_Welcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_H
