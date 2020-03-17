#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMap>

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

void MainWindow::on_text_field_textChanged()
{
    QMap<QString, QString> types;
    types.insert("AUTHOR", "&copy;");
    types.insert("PROMILE", "&permil;");
    types.insert("PRODUCT", "&reg;");
    types.insert("EURO", "&#8364;");
    types.insert("RUB", "&#8381;");

    QString text = ui->text_field->document()->toPlainText();

    qint32 index_start = text.indexOf("#@");
    if (index_start == -1) return;

    qint32 index_end = text.indexOf("@", index_start + 2);
    if (index_end == -1) return;

    QString value = text.mid(index_start + 2, index_end - index_start - 2);

    if (types.contains(value)) {
        text.replace(index_start, value.size() + 3, types.lowerBound(value).value());
    } else {
        text.remove(index_start, index_end - index_start + 1);
    }

    ui->text_field->setHtml(text);
}
