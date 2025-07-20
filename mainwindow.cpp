#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "EditProfileWindow.h"
#include "avatarutils.h"
#include "globals.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QDialog>
#include <QGridLayout>
#include <QPushButton>
#include <QStringList>
#include <QMouseEvent>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lineEdit_1->setPlaceholderText("Name");
    ui->lineEdit_2->setPlaceholderText("Surname");
    ui->textEdit->setPlaceholderText("Short Bio...");

    ui->labelavatar->installEventFilter(this);

    connect(ui->button_edit, &QPushButton::clicked, this, [=]() {
        EditProfileWindow *editWindow = new EditProfileWindow(this);
        editWindow->setInitialData(
            ui->lineEdit_1->text(),
            ui->lineEdit_2->text(),
            ui->textEdit->toPlainText(),
            currentAvatarPath
            );

        connect(editWindow, &EditProfileWindow::profileUpdated, this, [=](const QString &name, const QString &surname, const QString &bio, const QString &avatarPath){
            ui->lineEdit_1->setText(name);
            ui->lineEdit_2->setText(surname);
            ui->textEdit->setPlainText(bio);
            setCircularAvatar(avatarPath);
            saveProfileToDatabase();
        });

        editWindow->exec();
    });

    loadProfileFromDatabase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == ui->labelavatar && event->type() == QEvent::MouseButtonPress) {
        openAvatarSelectionDialog();
        return true;
    }
    return QMainWindow::eventFilter(obj, event);
}

void MainWindow::setCircularAvatar(const QString &path)
{
    if (path.isEmpty()) {
        ui->labelavatar->clear();
        ui->labelavatar->setText("Choose\nAvatar");
        return;
    }

    currentAvatarPath = path;
    int size = std::min(ui->labelavatar->width(), ui->labelavatar->height());
    QPixmap pixmap = getCircularPixmap(path, size);
    ui->labelavatar->setPixmap(pixmap);
    ui->labelavatar->setText("");
}

void MainWindow::openAvatarSelectionDialog()
{
    QStringList avatars = {
        ":/images/avatar1.png", ":/images/avatar2.png", ":/images/avatar3.png",
        ":/images/avatar4.png", ":/images/avatar5.png", ":/images/avatar6.png",
        ":/images/avatar7.png"
    };

    QDialog dialog(this);
    dialog.setWindowTitle("Choose Avatar");
    dialog.setStyleSheet("background-color: rgb(244, 154, 186);");
    QGridLayout *layout = new QGridLayout(&dialog);

    int row = 0, col = 0;
    for (const QString &path : avatars) {
        QPushButton *btn = new QPushButton;
        btn->setIcon(QIcon(path));
        btn->setIconSize(QSize(80, 80));
        btn->setFixedSize(100, 100);
        btn->setStyleSheet("QPushButton { background-color: white; border-radius: 15px; border: 2px solid white; } QPushButton:hover { border: 2px solid gray; }");

        connect(btn, &QPushButton::clicked, [&dialog, this, path]() {
            setCircularAvatar(path);
            dialog.accept();
        });

        layout->addWidget(btn, row, col++);
        if (col >= 3) { col = 0; ++row; }
    }

    dialog.exec();
}

void MainWindow::saveProfileToDatabase()
{

    QString dbPath = "C:/Users/sangy/OneDrive/Desktop/Period/Periodcare/user_profiles.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "SaveConnection");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "Failed to open DB for save:" << db.lastError().text();
        return;
    }

    QSqlQuery query(db);
    query.exec("CREATE TABLE IF NOT EXISTS profiles (id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, surname TEXT, bio TEXT, avatar_path TEXT, email TEXT)");

    QSqlQuery checkQuery(db);
    checkQuery.prepare("SELECT COUNT(*) FROM profiles WHERE email = ?");
    checkQuery.addBindValue(currentUserEmail);

    if (!checkQuery.exec()) {
        qDebug() << "Email check failed:" << checkQuery.lastError().text();
        db.close();
        return;
    }

    bool userExists = false;
    if (checkQuery.next()) {
        userExists = (checkQuery.value(0).toInt() > 0);
    }

    if (userExists) {
        query.prepare("UPDATE profiles SET name = ?, surname = ?, bio = ?, avatar_path = ? WHERE email = ?");
        query.addBindValue(ui->lineEdit_1->text());
        query.addBindValue(ui->lineEdit_2->text());
        query.addBindValue(ui->textEdit->toPlainText());
        query.addBindValue(currentAvatarPath);
        query.addBindValue(currentUserEmail);
    } else {
        query.prepare("INSERT INTO profiles (name, surname, bio, avatar_path, email) VALUES (?, ?, ?, ?, ?)");
        query.addBindValue(ui->lineEdit_1->text());
        query.addBindValue(ui->lineEdit_2->text());
        query.addBindValue(ui->textEdit->toPlainText());
        query.addBindValue(currentAvatarPath);
        query.addBindValue(currentUserEmail);
    }

    if (!query.exec()) {
        qDebug() << "Save failed:" << query.lastError().text();
    } else {
        qDebug() << (userExists ? "Profile updated!" : "New profile inserted!");
    }

    db.close();


}

void MainWindow::loadProfileFromDatabase()
{
    QString dbPath = "C:/Users/sangy/OneDrive/Desktop/Period/Periodcare/user_profiles.db";
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "LoadConnection");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        qDebug() << "DB Load Error:" << db.lastError().text();
        return;
    }

    QSqlQuery query(db);
    query.prepare("SELECT name, surname, bio, avatar_path FROM profiles WHERE email = ?");
    query.addBindValue(currentUserEmail);

    if (!query.exec()) {
        qDebug() << "Profile load query failed:" << query.lastError().text();
    }

    if (query.next()) {
        ui->lineEdit_1->setText(query.value(0).toString());
        ui->lineEdit_2->setText(query.value(1).toString());
        ui->textEdit->setPlainText(query.value(2).toString());
        setCircularAvatar(query.value(3).toString());
    } else {
        qDebug() << "No profile found for email:" << currentUserEmail;
    }

    db.close();
}
