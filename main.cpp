#include "homepage.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QSqlError>
#include <QDebug>

void connectToDatabase() {
    if (QSqlDatabase::contains("UserConnection")) {
        return;
    }

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "UserConnection");
    db.setDatabaseName("C:/Users/sangy/OneDrive/Desktop/Period/Periodcare/periodcare.db");

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
