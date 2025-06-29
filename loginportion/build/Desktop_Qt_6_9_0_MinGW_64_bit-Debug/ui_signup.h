/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QCheckBox *checkBox;
    QPushButton *createacc;
    QLabel *Signupheading;
    QLineEdit *usersule;
    QLineEdit *emailsule;
    QLineEdit *pwdsule;
    QPushButton *createaccount;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuSignup_Page;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName("Signup");
        Signup->resize(800, 600);
        QPalette palette;
        QLinearGradient gradient(0, 0, 0, 1);
        gradient.setSpread(QGradient::Spread::PadSpread);
        gradient.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient.setColorAt(0, QColor(247, 198, 217, 255));
        gradient.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush(gradient);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Button, brush);
        QLinearGradient gradient1(0, 0, 0, 1);
        gradient1.setSpread(QGradient::Spread::PadSpread);
        gradient1.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient1.setColorAt(0, QColor(247, 198, 217, 255));
        gradient1.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush1(gradient1);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Base, brush1);
        QLinearGradient gradient2(0, 0, 0, 1);
        gradient2.setSpread(QGradient::Spread::PadSpread);
        gradient2.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient2.setColorAt(0, QColor(247, 198, 217, 255));
        gradient2.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush2(gradient2);
        palette.setBrush(QPalette::ColorGroup::Active, QPalette::ColorRole::Window, brush2);
        QLinearGradient gradient3(0, 0, 0, 1);
        gradient3.setSpread(QGradient::Spread::PadSpread);
        gradient3.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient3.setColorAt(0, QColor(247, 198, 217, 255));
        gradient3.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush3(gradient3);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Button, brush3);
        QLinearGradient gradient4(0, 0, 0, 1);
        gradient4.setSpread(QGradient::Spread::PadSpread);
        gradient4.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient4.setColorAt(0, QColor(247, 198, 217, 255));
        gradient4.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush4(gradient4);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Base, brush4);
        QLinearGradient gradient5(0, 0, 0, 1);
        gradient5.setSpread(QGradient::Spread::PadSpread);
        gradient5.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient5.setColorAt(0, QColor(247, 198, 217, 255));
        gradient5.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush5(gradient5);
        palette.setBrush(QPalette::ColorGroup::Inactive, QPalette::ColorRole::Window, brush5);
        QLinearGradient gradient6(0, 0, 0, 1);
        gradient6.setSpread(QGradient::Spread::PadSpread);
        gradient6.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient6.setColorAt(0, QColor(247, 198, 217, 255));
        gradient6.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush6(gradient6);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Button, brush6);
        QLinearGradient gradient7(0, 0, 0, 1);
        gradient7.setSpread(QGradient::Spread::PadSpread);
        gradient7.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient7.setColorAt(0, QColor(247, 198, 217, 255));
        gradient7.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush7(gradient7);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Base, brush7);
        QLinearGradient gradient8(0, 0, 0, 1);
        gradient8.setSpread(QGradient::Spread::PadSpread);
        gradient8.setCoordinateMode(QGradient::CoordinateMode::ObjectBoundingMode);
        gradient8.setColorAt(0, QColor(247, 198, 217, 255));
        gradient8.setColorAt(1, QColor(230, 230, 250, 255));
        QBrush brush8(gradient8);
        palette.setBrush(QPalette::ColorGroup::Disabled, QPalette::ColorRole::Window, brush8);
        Signup->setPalette(palette);
        Signup->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, \n"
"	stop: 0 #f7c6d9,  \n"
"   stop: 1 #e6e6fa\n"
");\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(Signup);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        verticalSpacer = new QSpacerItem(50, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout_3->addItem(verticalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(50, 50, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 0, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background-color: #fce4ec;\n"
"    border: 2px solid #F497B6 ;\n"
"    border-radius: 20px;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(60, 290, 221, 21));
        checkBox->setStyleSheet(QString::fromUtf8("QCheckBox\n"
"{\n"
"	background-color:#fce4ec\n"
"}"));
        createacc = new QPushButton(frame);
        createacc->setObjectName("createacc");
        createacc->setGeometry(QRect(70, 330, 141, 31));
        createacc->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:12px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
""));
        Signupheading = new QLabel(frame);
        Signupheading->setObjectName("Signupheading");
        Signupheading->setGeometry(QRect(80, 60, 121, 41));
        Signupheading->setStyleSheet(QString::fromUtf8("QLabel{\n"
"    background-color: #F497B6;      \n"
"    color: #3D3D3D;                   \n"
"    font: bold 20px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 12px;\n"
"}"));
        usersule = new QLineEdit(frame);
        usersule->setObjectName("usersule");
        usersule->setGeometry(QRect(30, 130, 251, 31));
        usersule->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));
        emailsule = new QLineEdit(frame);
        emailsule->setObjectName("emailsule");
        emailsule->setGeometry(QRect(30, 180, 251, 31));
        emailsule->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));
        pwdsule = new QLineEdit(frame);
        pwdsule->setObjectName("pwdsule");
        pwdsule->setGeometry(QRect(30, 240, 251, 31));
        pwdsule->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));
        createaccount = new QPushButton(frame);
        createaccount->setObjectName("createaccount");
        createaccount->setGeometry(QRect(50, 380, 181, 31));
        createaccount->setAutoFillBackground(false);
        createaccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size:12px;\n"
"}\n"
"QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 6px;\n"
"}\n"
""));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 0, 341, 441));
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color:#fff1f1;\n"
"}"));
        label->setFrameShape(QFrame::Shape::NoFrame);
        label->setPixmap(QPixmap(QString::fromUtf8(":/loginicons/periodsimg2.jpg")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        label->setMargin(5);
        label->setIndent(1);

        gridLayout_3->addWidget(frame, 1, 1, 1, 1);

        Signup->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Signup);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 18));
        menuSignup_Page = new QMenu(menubar);
        menuSignup_Page->setObjectName("menuSignup_Page");
        Signup->setMenuBar(menubar);
        statusbar = new QStatusBar(Signup);
        statusbar->setObjectName("statusbar");
        Signup->setStatusBar(statusbar);

        menubar->addAction(menuSignup_Page->menuAction());

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QMainWindow *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "MainWindow", nullptr));
        checkBox->setText(QCoreApplication::translate("Signup", "  I agree to the terms and conditions", nullptr));
        createacc->setText(QCoreApplication::translate("Signup", "Create Account", nullptr));
        Signupheading->setText(QCoreApplication::translate("Signup", "Sign Up", nullptr));
        createaccount->setText(QCoreApplication::translate("Signup", "Already have an account?", nullptr));
        label->setText(QString());
        menuSignup_Page->setTitle(QCoreApplication::translate("Signup", "Signup Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
