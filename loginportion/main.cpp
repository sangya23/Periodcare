
#include "login.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

void connectToDatabase() {
    if (QSqlDatabase::contains("UserInfoConnection")) {
        return; // Connection already exists
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "UserInfoConnection");
    db.setDatabaseName("C:/Users/sangy/OneDrive/Desktop/Login/PeriodcareLogin/Period/userinfo.db");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
    } else {
        qDebug() << "Database opened successfully.";
    }
}


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    connectToDatabase();

    MainWindow w;
    w.show();
    return a.exec();
}
