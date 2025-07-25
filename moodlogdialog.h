#ifndef MOODLOGDIALOG_H
#define MOODLOGDIALOG_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class MoodLogDialog;
}

class MoodLogDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MoodLogDialog(const QString& userEmail, QWidget *parent = nullptr);
    ~MoodLogDialog();

private slots:
    void on_closeButton_clicked();

private:
    Ui::MoodLogDialog *ui;
    QSqlTableModel *moodModel;
};

#endif // MOODLOGDIALOG_H
