#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

private:
    Ui::MainWindow *ui;
    QString currentAvatarPath;

    void openAvatarSelectionDialog();
    void setCircularAvatar(const QString &path);
    void loadProfileFromDatabase();
    void saveProfileToDatabase();
};

#endif // MAINWINDOW_H
