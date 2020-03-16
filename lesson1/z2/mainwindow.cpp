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


void MainWindow::on_calculate_third_side_clicked()
{
    double side_A = ui->side_A->text().toInt();
    double side_B = ui->side_B->text().toInt();
    double side_C = -1;
    double angle_value = ui->angle_between_sides->text().toInt();

    if (side_A != 0 && side_B != 0 && angle_value != 0) {
        side_C = qSqrt(qPow(side_A, 2) + qPow(side_B, 2) - 2 * side_A * side_B * qCos(angle_value / 180 * M_PI));
        if (ui->angle_rad->isChecked()) {
            side_C = qSqrt(qPow(side_A, 2) + qPow(side_B, 2) - 2 * side_A * side_B * qCos(angle_value));
        }
        ui->result_third_side->setText(QString("Длина третьей стороны = %1").arg(side_C));
    } else {
        ui->result_third_side->setText(QString("Введите исходные данные"));
    }

}
