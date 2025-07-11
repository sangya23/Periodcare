#include "login.h"
#include "homepage.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

void connectToDatabase() {
    if (QSqlDatabase::contains("UserInfoConnection")) {
        return; // Connection already exists
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "UserInfoConnection");
    db.setDatabaseName("C:/Users/sangy/OneDrive/Desktop/Period/Periodcare/userinfo.db");

    if (!db.open()) {
        qDebug() << "Failed to open database:" << db.lastError().text();
    } else {
        qDebug() << "Database opened successfully.";
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connectToDatabase();
   Homepage h;
    h.show();

    return a.exec();
}
