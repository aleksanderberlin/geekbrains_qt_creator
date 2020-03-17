#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextDocument>

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


void MainWindow::on_pushButton_clicked()
{
   QTextDocument *doc = ui->textEdit->document();

}
