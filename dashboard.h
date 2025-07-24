#ifndef DASHBOARD_H
#define DASHBOARD_H
#include "mainwindow.h"
#include "moodmanagement.h"
#include "yoga.h"
#include "sanitarycare.h"
#include "nutrients.h"
#include "periodcalendar.h"
#include <QMainWindow>

namespace Ui {
class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void on_moodmgmt_clicked();
    void on_yogapb_clicked();

    void on_sanitarycarepb_clicked();

    void on_nutripb_clicked();

    void on_trackerpb_clicked();

    void on_profileAvatarButton_clicked();

private:
    MainWindow *w;
    Moodmanagement *mood;
    yoga *yog;
    SanitaryCare *scare;
    nutrients *nutri;
    PeriodCalendar *track;
    void loadProfileAvatar();

private:
    Ui::Dashboard *ui;
};

#endif // DASHBOARD_H
