/********************************************************************************
** Form generated from reading UI file 'moodsecond.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOODSECOND_H
#define UI_MOODSECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_moodsecond
{
public:
    QWidget *centralwidget;
    QSlider *horizontalSlider;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *moodsecond)
    {
        if (moodsecond->objectName().isEmpty())
            moodsecond->setObjectName("moodsecond");
        moodsecond->resize(1577, 1011);
        moodsecond->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,\n"
"       stop: 0 #f7c6d9,  \n"
"       stop: 1 #e6e6fa\n"
"    );\n"
"}"));
        centralwidget = new QWidget(moodsecond);
        centralwidget->setObjectName("centralwidget");
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(130, 210, 551, 18));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 531, 51));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 190, 91, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
""));
        moodsecond->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(moodsecond);
        statusbar->setObjectName("statusbar");
        moodsecond->setStatusBar(statusbar);

        retranslateUi(moodsecond);

        QMetaObject::connectSlotsByName(moodsecond);
    } // setupUi

    void retranslateUi(QMainWindow *moodsecond)
    {
        moodsecond->setWindowTitle(QCoreApplication::translate("moodsecond", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("moodsecond", "Log in your mood:", nullptr));
        label_2->setText(QCoreApplication::translate("moodsecond", "Slide:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moodsecond: public Ui_moodsecond {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOODSECOND_H
