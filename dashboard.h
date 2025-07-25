#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>

namespace Ui {
class Dashboard;
}

// Forward declaration of Loginpage
class Loginpage;

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    // Pass Loginpage pointer in constructor and save it
    explicit Dashboard(Loginpage *loginPage, QWidget *parent = nullptr);
    ~Dashboard();

private slots:
    void openProfile();
    void logoutUser();
    void on_moodmgmt_clicked();
    void on_yogapb_clicked();
    void on_sanitarycarepb_clicked();
    void on_nutripb_clicked();
    void on_trackerpb_clicked();

private:
    void loadProfileAvatar();
    void showRandomQuote();

    Ui::Dashboard *ui;

    // Pointer to Loginpage to show it again on logout
    Loginpage *m_loginPage;
};

#endif // DASHBOARD_H
