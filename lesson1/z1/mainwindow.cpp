#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtMath>

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


void MainWindow::on_calculate_rootsButton_clicked()
{
    double a = ui->k_a->text().toInt();
    double b = ui->k_b->text().toInt();
    double c = ui->k_c->text().toInt();
    double D, x1, x2;

    if (a == 0) {
        x1 = -c / b;
        ui->result_label->setText(QString("x = %1").arg(x1));
    } else {
        D = qPow(b, 2) - 4 * a * c;
        if (D < 0) {
            ui->result_label->setText(QString("Нет корней."));
            return;
        }
        x1 = (-b - qSqrt(D)) / 2 * a;
        if (D == 0) ui->result_label->setText(QString("x = %1").arg(x1));
        else {
            x2 = (-b + qSqrt(D)) / 2 * a;
            ui->result_label->setText(QString("x1 = %1 \n x2 = %2").arg(x1).arg(x2));
        }
    }
}
