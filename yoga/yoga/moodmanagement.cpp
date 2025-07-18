#include "ui_moodmanagement.h"
#include "moodmanagement.h"

MoodManagement::MoodManagement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MoodManagement)
{
    ui->setupUi(this);
}

MoodManagement::~MoodManagement()
{
    delete ui;
}
