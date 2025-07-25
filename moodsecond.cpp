#include "moodsecond.h"
#include "ui_moodsecond.h"
#include "globals.h"
#include "moodsecond.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
moodsecond::moodsecond(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::moodsecond)
{
    ui->setupUi(this);
    this->showMaximized();
}

moodsecond::~moodsecond()
{
    delete ui;
}

void moodsecond::on_pushButton_clicked()
{
    QString selectedMood = ui->comboBox->currentText();

    if (selectedMood.isEmpty()) {
        qDebug() << "No mood selected.";
        this->close();
        return;
    }

    QSqlDatabase db = QSqlDatabase::database("UserConnection");
    if (!db.isOpen()) {
        qDebug() << "Database is not open!";
        this->close();
        return;
    }

    QSqlQuery query(db);
    query.prepare("INSERT INTO MoodLog (date, email, mood) VALUES (DATE('now'), ?, ?)");
    query.addBindValue(currentUserEmail);
    query.addBindValue(selectedMood);

    if (!query.exec()) {
        qDebug() << "Failed to insert mood:" << query.lastError().text();
    } else {
        qDebug() << "Mood logged for" << currentUserEmail << "as" << selectedMood;
    }

    this->close();
}


void moodsecond::on_pushButton_2_clicked()
{
    MoodLogDialog *dialog = new MoodLogDialog(currentUserEmail, this);
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->exec();
}

