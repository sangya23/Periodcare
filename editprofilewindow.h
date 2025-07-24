#ifndef EDITPROFILEWINDOW_H
#define EDITPROFILEWINDOW_H

#include <QDialog>

namespace Ui {
class EditProfileWindow;
}

class EditProfileWindow : public QDialog
{
    Q_OBJECT

public:
    explicit EditProfileWindow(QWidget *parent = nullptr);
    ~EditProfileWindow();

    void setInitialData(const QString &name, const QString &surname, const QString &bio, const QString &avatarPath);

signals:
    void profileUpdated(const QString &name, const QString &surname, const QString &bio, const QString &avatarPath);

private:
    Ui::EditProfileWindow *ui;
    QString selectedAvatarPath;

private slots:
    void onChooseAvatarClicked();
    void onSaveClicked();
};

#endif // EDITPROFILEWINDOW_H
