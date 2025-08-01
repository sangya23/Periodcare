/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *profileAvatarButton;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *welcomeLabel;
    QLabel *quotelabel;
    QVBoxLayout *verticalLayout;
    QPushButton *trackerpb;
    QPushButton *moodmgmt;
    QPushButton *yogapb;
    QPushButton *sanitarycarepb;
    QPushButton *nutripb;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1503, 1020);
        QPalette palette;
        QBrush brush(QColor(247, 198, 217, 255));
        brush.setStyle(Qt::BrushStyle::SolidPattern);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush);
        Dashboard->setPalette(palette);
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(3, 3, 3, 3);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(80, 80));
        label_3->setMaximumSize(QSize(80, 80));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	border-image: url(:/loginicons/LOGO.jpg);\n"
"	border-radius:40px;\n"
"}"));

        horizontalLayout->addWidget(label_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 55));
        label_2->setMaximumSize(QSize(16777215, 55));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 18pt \"Segoe Print\";\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        profileAvatarButton = new QToolButton(centralwidget);
        profileAvatarButton->setObjectName("profileAvatarButton");
        profileAvatarButton->setMinimumSize(QSize(100, 100));
        profileAvatarButton->setMaximumSize(QSize(100, 100));
        profileAvatarButton->setStyleSheet(QString::fromUtf8("/*QToolButton {\n"
"          background-color: #F497B6;\n"
"          color: white;\n"
"          font: 12px \"Arial\";\n"
"          border-radius: 8px;\n"
"          padding: 6px 12px;\n"
"      }\n"
"      QToolButton:hover\n"
"      {\n"
"      background-color: #e6769f;}\n"
"      "));

        horizontalLayout->addWidget(profileAvatarButton);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 3);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);

        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setMinimumSize(QSize(0, 70));
        welcomeLabel->setMaximumSize(QSize(16777215, 70));

        verticalLayout_2->addWidget(welcomeLabel);

        quotelabel = new QLabel(centralwidget);
        quotelabel->setObjectName("quotelabel");
        quotelabel->setMinimumSize(QSize(800, 400));
        quotelabel->setMaximumSize(QSize(400, 400));
        quotelabel->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(quotelabel);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        trackerpb = new QPushButton(centralwidget);
        trackerpb->setObjectName("trackerpb");
        trackerpb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}\n"
""));

        verticalLayout->addWidget(trackerpb);

        moodmgmt = new QPushButton(centralwidget);
        moodmgmt->setObjectName("moodmgmt");
        moodmgmt->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}\n"
""));

        verticalLayout->addWidget(moodmgmt);

        yogapb = new QPushButton(centralwidget);
        yogapb->setObjectName("yogapb");
        yogapb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}\n"
""));

        verticalLayout->addWidget(yogapb);

        sanitarycarepb = new QPushButton(centralwidget);
        sanitarycarepb->setObjectName("sanitarycarepb");
        sanitarycarepb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}\n"
""));

        verticalLayout->addWidget(sanitarycarepb);

        nutripb = new QPushButton(centralwidget);
        nutripb->setObjectName("nutripb");
        nutripb->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}\n"
""));

        verticalLayout->addWidget(nutripb);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        Dashboard->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1503, 18));
        Dashboard->setMenuBar(menubar);
        statusbar = new QStatusBar(Dashboard);
        statusbar->setObjectName("statusbar");
        Dashboard->setStatusBar(statusbar);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "MainWindow", nullptr));
        label_3->setText(QString());
        label_2->setText(QCoreApplication::translate("Dashboard", "PERIOD\360\237\251\270", nullptr));
        profileAvatarButton->setText(QString());
        welcomeLabel->setText(QString());
        quotelabel->setText(QString());
        trackerpb->setText(QCoreApplication::translate("Dashboard", "\360\237\227\223\357\270\217Tracking", nullptr));
        moodmgmt->setText(QCoreApplication::translate("Dashboard", "\360\237\230\212mood ", nullptr));
        yogapb->setText(QCoreApplication::translate("Dashboard", "\360\237\247\230\342\200\215Yoga", nullptr));
        sanitarycarepb->setText(QCoreApplication::translate("Dashboard", "\360\237\251\270Sanitary Care", nullptr));
        nutripb->setText(QCoreApplication::translate("Dashboard", "\360\237\245\254Nutrients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
