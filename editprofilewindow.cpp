#include "editprofilewindow.h"
#include "ui_editprofilewindow.h"
#include "avatarutils.h"

#include <QDialog>
#include <QPushButton>
#include <QGridLayout>

EditProfileWindow::EditProfileWindow(QWidget *parent)
    : QDialog(parent), ui(new Ui::EditProfileWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #f49abe;");

    QString inputStyle = "QLineEdit, QTextEdit { background-color: white; border-radius: 10px; padding: 8px 12px; font-size: 14px; }";
    ui->lineEditName->setStyleSheet(inputStyle);
    ui->lineEditSurname->setStyleSheet(inputStyle);
    ui->textEditBio->setStyleSheet(inputStyle);

    connect(ui->buttonChooseAvatar, &QPushButton::clicked, this, &EditProfileWindow::onChooseAvatarClicked);
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &EditProfileWindow::onSaveClicked);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &EditProfileWindow::reject);
}

EditProfileWindow::~EditProfileWindow()
{
    delete ui;
}

void EditProfileWindow::setInitialData(const QString &name, const QString &surname, const QString &bio, const QString &avatarPath)
{
    ui->lineEditName->setText(name);
    ui->lineEditSurname->setText(surname);
    ui->textEditBio->setPlainText(bio);
    selectedAvatarPath = avatarPath;
    if (!avatarPath.isEmpty()) {
        ui->labelAvatar->setPixmap(getCircularPixmap(avatarPath, 100));
    }
}

void EditProfileWindow::onChooseAvatarClicked()
{
    QStringList avatars = {
        ":/images/avatar1.png", ":/images/avatar2.png", ":/images/avatar3.png",
        ":/images/avatar4.png", ":/images/avatar5.png", ":/images/avatar6.png"

    };

    QDialog dialog(this);
    dialog.setWindowTitle("Choose Avatar");
    dialog.setStyleSheet("background-color: #f49abe;");
    QGridLayout *layout = new QGridLayout(&dialog);

    int row = 0, col = 0;
    for (const QString &path : avatars) {
        QPushButton *btn = new QPushButton;
        btn->setIcon(QIcon(path));
        btn->setIconSize(QSize(80, 80));
        btn->setFixedSize(100, 100);
        btn->setStyleSheet("QPushButton { background-color: white; border-radius: 15px; border: 2px solid white; } QPushButton:hover { border: 2px solid gray; }");

        connect(btn, &QPushButton::clicked, [&dialog, this, path]() {
            selectedAvatarPath = path;
            ui->labelAvatar->setPixmap(getCircularPixmap(path, 100));
            dialog.accept();
        });

        layout->addWidget(btn, row, col++);
        if (col == 3) { col = 0; row++; }
    }

    dialog.exec();
}

void EditProfileWindow::onSaveClicked()
{
    emit profileUpdated(ui->lineEditName->text(), ui->lineEditSurname->text(), ui->textEditBio->toPlainText(), selectedAvatarPath);
    accept();
}
