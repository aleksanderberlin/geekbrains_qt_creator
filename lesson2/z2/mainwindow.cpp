#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QInputDialog>
#include <QString>
#include <QListWidget>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_delete_pushButton_clicked()
{
    qDeleteAll(ui->listWidget->selectedItems());
}

void MainWindow::on_add_pushButton_clicked()
{
    // QString language = QInputDialog::getText(this,"Добавление языка","Язык программирования");
    QListWidgetItem* Item = new QListWidgetItem(QIcon(":logos/logos/reddot.png"),
                                QInputDialog::getText(this,"Добавление языка","Язык программирования"));
    ui->listWidget->addItem(Item);
}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1) {
        ui->listWidget->setViewMode(QListWidget::IconMode);
    } else {
        ui->listWidget->setViewMode(QListWidget::ListMode);
    }
}
