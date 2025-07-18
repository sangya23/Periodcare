/********************************************************************************
** Form generated from reading UI file 'yoga.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YOGA_H
#define UI_YOGA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *block1;
    QGridLayout *gridLayout_2;
    QLabel *Pose1;
    QLabel *label;
    QPushButton *button1;
    QTextBrowser *text1;
    QFrame *block2_2;
    QGridLayout *block2;
    QLabel *Pose2;
    QLabel *label_7;
    QPushButton *button2;
    QTextBrowser *text2;
    QFrame *block4_2;
    QGridLayout *block4;
    QPushButton *button4;
    QLabel *Pose4;
    QLabel *label_5;
    QTextBrowser *text4;
    QFrame *block5_3;
    QGridLayout *block5;
    QLabel *label_6;
    QPushButton *button5;
    QLabel *Pose5;
    QTextBrowser *text5;
    QFrame *block6_2;
    QGridLayout *block6;
    QPushButton *button6;
    QLabel *Pose6;
    QLabel *label_4;
    QTextBrowser *text6;
    QLabel *label_8;
    QLabel *Heading;
    QFrame *block3_2;
    QGridLayout *block3;
    QPushButton *button3;
    QLabel *Pose3;
    QLabel *label_2;
    QTextBrowser *text3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1478, 795);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: qlineargradient(\n"
"        x1: 0, y1: 0, x2: 1, y2: 1,\n"
"       stop: 0 #f7c6d9,  \n"
"       stop: 1 #e6e6fa\n"
"    );\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        block1 = new QFrame(centralwidget);
        block1->setObjectName("block1");
        block1->setGeometry(QRect(30, 150, 411, 281));
        block1->setStyleSheet(QString::fromUtf8(" background-color: #ff992;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;"));
        gridLayout_2 = new QGridLayout(block1);
        gridLayout_2->setObjectName("gridLayout_2");
        Pose1 = new QLabel(block1);
        Pose1->setObjectName("Pose1");
        Pose1->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
""));
        Pose1->setScaledContents(true);
        Pose1->setWordWrap(true);

        gridLayout_2->addWidget(Pose1, 6, 0, 1, 1);

        label = new QLabel(block1);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"\n"
"\n"
""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/balasana.jpeg")));
        label->setScaledContents(true);
        label->setWordWrap(true);

        gridLayout_2->addWidget(label, 6, 1, 1, 1);

        button1 = new QPushButton(block1);
        button1->setObjectName("button1");
        button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aa1316;    \n"
"    color: white;                   \n"
"    font: bold 14px \"Arial\";\n"
"    border-radius: 25px;\n"
"    padding: 6px 6px;\n"
"}\n"
"\n"
""));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        button1->setIcon(icon);
        button1->setCheckable(true);

        gridLayout_2->addWidget(button1, 6, 2, 1, 1);

        text1 = new QTextBrowser(block1);
        text1->setObjectName("text1");
        text1->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        text1->setOpenExternalLinks(true);

        gridLayout_2->addWidget(text1, 7, 0, 1, 2);

        block2_2 = new QFrame(centralwidget);
        block2_2->setObjectName("block2_2");
        block2_2->setGeometry(QRect(450, 150, 491, 281));
        block2_2->setStyleSheet(QString::fromUtf8(" background-color: #ff992;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;"));
        block2 = new QGridLayout(block2_2);
        block2->setObjectName("block2");
        Pose2 = new QLabel(block2_2);
        Pose2->setObjectName("Pose2");
        Pose2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        Pose2->setWordWrap(true);

        block2->addWidget(Pose2, 0, 0, 1, 1);

        label_7 = new QLabel(block2_2);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"\n"
"\n"
""));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/reclinedbound.jpeg")));
        label_7->setScaledContents(true);

        block2->addWidget(label_7, 0, 1, 1, 1);

        button2 = new QPushButton(block2_2);
        button2->setObjectName("button2");
        button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aa1316;    \n"
"    color: white;                   \n"
"    font: bold 14px \"Arial\";\n"
"    border-radius: 25px;\n"
"    padding: 6px 6px;\n"
"}\n"
"\n"
""));
        button2->setIcon(icon);
        button2->setCheckable(true);

        block2->addWidget(button2, 0, 3, 1, 1);

        text2 = new QTextBrowser(block2_2);
        text2->setObjectName("text2");
        text2->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        text2->setOpenExternalLinks(true);

        block2->addWidget(text2, 3, 0, 1, 3);

        block4_2 = new QFrame(centralwidget);
        block4_2->setObjectName("block4_2");
        block4_2->setGeometry(QRect(950, 460, 501, 281));
        block4 = new QGridLayout(block4_2);
        block4->setObjectName("block4");
        button4 = new QPushButton(block4_2);
        button4->setObjectName("button4");
        button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aa1316;    \n"
"    color: white;                   \n"
"    font: bold 14px \"Arial\";\n"
"    border-radius: 25px;\n"
"    padding: 6px 6px;\n"
"}\n"
"\n"
""));
        button4->setIcon(icon);
        button4->setCheckable(true);

        block4->addWidget(button4, 0, 2, 1, 1);

        Pose4 = new QLabel(block4_2);
        Pose4->setObjectName("Pose4");
        Pose4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"\n"
""));
        Pose4->setScaledContents(true);
        Pose4->setWordWrap(true);

        block4->addWidget(Pose4, 0, 0, 1, 1);

        label_5 = new QLabel(block4_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"\n"
"\n"
"\n"
""));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/bridge.jpeg")));
        label_5->setScaledContents(true);

        block4->addWidget(label_5, 0, 1, 1, 1);

        text4 = new QTextBrowser(block4_2);
        text4->setObjectName("text4");
        text4->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        text4->setOpenExternalLinks(true);

        block4->addWidget(text4, 2, 0, 1, 2);

        block5_3 = new QFrame(centralwidget);
        block5_3->setObjectName("block5_3");
        block5_3->setGeometry(QRect(950, 150, 501, 281));
        block5 = new QGridLayout(block5_3);
        block5->setObjectName("block5");
        label_6 = new QLabel(block5_3);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"\n"
"\n"
""));
        label_6->setText(QString::fromUtf8(""));
        label_6->setTextFormat(Qt::TextFormat::RichText);
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/Cat-Cow-Pose.jpg")));
        label_6->setScaledContents(true);
        label_6->setWordWrap(true);

        block5->addWidget(label_6, 0, 2, 1, 1);

        button5 = new QPushButton(block5_3);
        button5->setObjectName("button5");
        button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aa1316;    \n"
"    color: white;                   \n"
"    font: bold 14px \"Arial\";\n"
"    border-radius: 25px;\n"
"    padding: 6px 6px;\n"
"}\n"
"\n"
""));
        button5->setIcon(icon);
        button5->setCheckable(true);

        block5->addWidget(button5, 0, 3, 1, 1);

        Pose5 = new QLabel(block5_3);
        Pose5->setObjectName("Pose5");
        Pose5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"\n"
""));
        Pose5->setScaledContents(true);

        block5->addWidget(Pose5, 0, 0, 1, 2);

        text5 = new QTextBrowser(block5_3);
        text5->setObjectName("text5");
        text5->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        text5->setOpenExternalLinks(true);

        block5->addWidget(text5, 2, 0, 2, 3);

        block6_2 = new QFrame(centralwidget);
        block6_2->setObjectName("block6_2");
        block6_2->setGeometry(QRect(450, 460, 491, 281));
        block6 = new QGridLayout(block6_2);
        block6->setObjectName("block6");
        button6 = new QPushButton(block6_2);
        button6->setObjectName("button6");
        button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aa1316; \n"
"    color: white;                   \n"
"    font: bold 14px \"Arial\";\n"
"    border-radius: 25px;\n"
"    padding: 6px 6px;\n"
"}\n"
"\n"
""));
        button6->setIcon(icon);
        button6->setCheckable(true);

        block6->addWidget(button6, 1, 2, 1, 1);

        Pose6 = new QLabel(block6_2);
        Pose6->setObjectName("Pose6");
        Pose6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        Pose6->setWordWrap(true);

        block6->addWidget(Pose6, 1, 0, 1, 1);

        label_4 = new QLabel(block6_2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"\n"
"\n"
""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/legup.jpeg")));
        label_4->setScaledContents(true);

        block6->addWidget(label_4, 1, 1, 1, 1);

        text6 = new QTextBrowser(block6_2);
        text6->setObjectName("text6");
        text6->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        text6->setOpenExternalLinks(true);

        block6->addWidget(text6, 4, 0, 1, 2);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 20, 141, 101));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/image/1.jpg")));
        label_8->setScaledContents(true);
        Heading = new QLabel(centralwidget);
        Heading->setObjectName("Heading");
        Heading->setGeometry(QRect(180, 30, 489, 78));
        Heading->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"\n"
""));
        block3_2 = new QFrame(centralwidget);
        block3_2->setObjectName("block3_2");
        block3_2->setGeometry(QRect(30, 460, 411, 281));
        block3 = new QGridLayout(block3_2);
        block3->setObjectName("block3");
        button3 = new QPushButton(block3_2);
        button3->setObjectName("button3");
        button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #aa1316; \n"
"    color: white;                   \n"
"    font: bold 14px \"Arial\";\n"
"    border-radius: 25px;\n"
"    padding: 6px 6px;\n"
"}\n"
"\n"
""));
        button3->setIcon(icon);

        block3->addWidget(button3, 2, 3, 1, 1);

        Pose3 = new QLabel(block3_2);
        Pose3->setObjectName("Pose3");
        Pose3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        Pose3->setWordWrap(true);
        Pose3->setOpenExternalLinks(false);

        block3->addWidget(Pose3, 2, 0, 1, 1);

        label_2 = new QLabel(block3_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"\n"
"\n"
""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/Paschimottanasana-Seated-Forward.jpg")));
        label_2->setScaledContents(true);

        block3->addWidget(label_2, 2, 1, 1, 1);

        text3 = new QTextBrowser(block3_2);
        text3->setObjectName("text3");
        text3->setStyleSheet(QString::fromUtf8("QTextBrowser{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        text3->setOpenExternalLinks(true);

        block3->addWidget(text3, 5, 0, 1, 3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Pose1->setText(QCoreApplication::translate("MainWindow", "Child\342\200\231s Pose ", nullptr));
        label->setText(QString());
        button1->setText(QString());
        text1->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Balasana)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Duration: 1-3 minutes </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://youtu.be/2MJGg-dUKh0?si=w9LfUnxrCke-sXWZ\"><span style=\" text-decoration: underline; color:#007"
                        "af4;\">Video for Child's Pose</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        Pose2->setText(QCoreApplication::translate("MainWindow", "Reclined Bound Angle Pose ", nullptr));
        label_7->setText(QString());
        button2->setText(QString());
        text2->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Supta Baddha Konasana)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Duration: 3-5 minutes</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://youtu.be/Z1G8rM-0w2U?si=i2iSZ4VW_JYumEQB\"><span style=\" text-decoration: underline"
                        "; color:#007af4;\">Video for Reclined Pose</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        button4->setText(QString());
        Pose4->setText(QCoreApplication::translate("MainWindow", " Bridge Pose ", nullptr));
        label_5->setText(QString());
        text4->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Setu Bandha Sarvangasana)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Duration: 30 seconds to 1 minute </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://youtu.be/XUcAuYd7VU0?si=lQwjQ5TDc5qxU76w\"><span style=\" text-decora"
                        "tion: underline; color:#007af4;\">Video for Bridge Pose</span></a></p></body></html>", nullptr));
        button5->setText(QString());
        Pose5->setText(QCoreApplication::translate("MainWindow", "Cat-Cow Stretch", nullptr));
        text5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Chakravakasana)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Duration: 1-2 minutes </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> <a href=\"https://youtu.be/vuyUwtHl694?si=1yZ2jVuOuAHsEBcW\"><span style=\" text-decoration: underline; col"
                        "or:#007af4;\">Video for Cat-Cow stretch</span></a></p></body></html>", nullptr));
        button6->setText(QString());
        Pose6->setText(QCoreApplication::translate("MainWindow", "Legs-Up-The-Wall Pose", nullptr));
        label_4->setText(QString());
        text6->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Viparita Karani)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Duration: 3-5 minutes </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"https://youtu.be/do_1LisFah0?si=bz6ni4YR-hC5A2yh\"><span style=\" text-decoration: underline; col"
                        "or:#007af4;\">Video for Legs Up the Wall pose</span></a></p></body></html>", nullptr));
        label_8->setText(QString());
        Heading->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:400;\">YOGA POSES FOR PERIODS</span></p></body></html>", nullptr));
        button3->setText(QString());
        Pose3->setText(QCoreApplication::translate("MainWindow", "Seated Forward Bend", nullptr));
        label_2->setText(QString());
        text3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Arial'; font-size:20px; font-weight:700; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">(Paschimottanasana)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Duration: 1-3 minutes </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> <a href=\"https://youtu.be/SLIaql7h6RQ?si=wso-DU_unF7uUVhe\"><span style=\" text-decoration: underline; "
                        "color:#007af4;\">Video for Seated Forward Pose</span></a></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YOGA_H
