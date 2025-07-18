#include "yoga.h"
#include "./ui_yoga.h"
#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent) , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Group all text boxes in a vector
    QVector<QTextBrowser*> textBoxes = {
        ui->text1, ui->text2, ui->text3,
        ui->text4, ui->text5, ui->text6
    };

    // Ensure proper size policy and hide all text boxes initially
    for (QTextBrowser* box : textBoxes) {
        box->setVisible(false);                            // Start hidden
        box->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);  // Allow vertical shrinking
        box->setMinimumHeight(0);                          // So it collapses fully when hidden
    }

    // Group all buttons
    QVector<QPushButton*> buttons = {
        ui->button1, ui->button2, ui->button3,
        ui->button4, ui->button5, ui->button6
    };

    // Connect buttons to toggle their respective text box
    for (int i = 0; i < buttons.size(); ++i) {
        connect(buttons[i], &QPushButton::clicked, this, [=]() {
            for (int j = 0; j < textBoxes.size(); ++j) {
                if (i == j) {
                    // Toggle clicked box
                    bool wasVisible = textBoxes[j]->isVisible();
                    textBoxes[j]->setVisible(!wasVisible);
                } else {
                    // Hide all others
                    textBoxes[j]->setVisible(false);
                }
            }
        });
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}


