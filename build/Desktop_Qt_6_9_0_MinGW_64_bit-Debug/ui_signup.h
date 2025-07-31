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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame;
    QPushButton *createacc;
    QLabel *Signupheading;
    QLineEdit *passkeysule;
    QLineEdit *emailsule;
    QLineEdit *pwdsule;
    QPushButton *alreadyacc;
    QLabel *label;
    QTextBrowser *textBrowser;
    QCheckBox *showPasswordCheckBox;
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
        createacc = new QPushButton(frame);
        createacc->setObjectName("createacc");
        createacc->setGeometry(QRect(90, 360, 141, 31));
        createacc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        passkeysule = new QLineEdit(frame);
        passkeysule->setObjectName("passkeysule");
        passkeysule->setGeometry(QRect(30, 230, 251, 34));
        passkeysule->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        emailsule->setGeometry(QRect(30, 130, 251, 34));
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
        pwdsule->setGeometry(QRect(30, 180, 251, 34));
        pwdsule->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #FFFFFF;\n"
"    color: #3D3D3D;\n"
"    font: 13px \"Segoe UI\";\n"
"    border: 1px solid #CCCCCC;\n"
"    border-radius: 6px;\n"
"    padding: 6px;\n"
"}\n"
""));
        alreadyacc = new QPushButton(frame);
        alreadyacc->setObjectName("alreadyacc");
        alreadyacc->setGeometry(QRect(70, 400, 181, 31));
        alreadyacc->setAutoFillBackground(false);
        alreadyacc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #F497B6;      \n"
"    color: white;                   \n"
"    font: 12px \"Arial\";\n"
"    border-radius: 8px;\n"
"    padding: 6px 6px;\n"
"}\n"
"QPushButton:hover\n"
"{\n"
"background-color: #e6769f;}"));
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(360, 0, 390, 464));
        label->setMinimumSize(QSize(390, 464));
        label->setMaximumSize(QSize(390, 464));
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
        textBrowser = new QTextBrowser(frame);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 310, 301, 41));
        textBrowser->setStyleSheet(QString::fromUtf8("QTextBrowser\n"
"{\n"
"border-color:#fce4ec;\n"
"}"));
        showPasswordCheckBox = new QCheckBox(frame);
        showPasswordCheckBox->setObjectName("showPasswordCheckBox");
        showPasswordCheckBox->setGeometry(QRect(130, 280, 121, 16));
        showPasswordCheckBox->setStyleSheet(QString::fromUtf8("background-color: #fce4ec;"));

        gridLayout->addWidget(frame, 0, 0, 1, 1);

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
        createacc->setText(QCoreApplication::translate("Signup", "Create Account", nullptr));
        Signupheading->setText(QCoreApplication::translate("Signup", "Sign Up", nullptr));
        alreadyacc->setText(QCoreApplication::translate("Signup", "Already have an account?", nullptr));
        label->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("Signup", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">By signing in you're agreeing to your data being used by Period Care</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        showPasswordCheckBox->setText(QCoreApplication::translate("Signup", "Show Password", nullptr));
        menuSignup_Page->setTitle(QCoreApplication::translate("Signup", "Signup Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
