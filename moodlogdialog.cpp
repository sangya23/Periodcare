#include "moodlogdialog.h"
#include "ui_moodlogdialog.h"
#include <QSqlDatabase>

MoodLogDialog::MoodLogDialog(const QString& userEmail, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoodLogDialog),
    moodModel(nullptr)
{
    ui->setupUi(this);

    moodModel = new QSqlTableModel(this, QSqlDatabase::database("UserConnection"));
    moodModel->setTable("MoodLog");
    moodModel->setFilter(QString("email = '%1'").arg(userEmail));
    moodModel->select();

    moodModel->setHeaderData(moodModel->fieldIndex("date"), Qt::Horizontal, "Date");
    moodModel->setHeaderData(moodModel->fieldIndex("mood"), Qt::Horizontal, "Mood");

    ui->moodTableView->setModel(moodModel);
    ui->moodTableView->hideColumn(moodModel->fieldIndex("email"));
}

MoodLogDialog::~MoodLogDialog()
{
    delete ui;
}

void MoodLogDialog::on_closeButton_clicked()
{
    this->close();

}

