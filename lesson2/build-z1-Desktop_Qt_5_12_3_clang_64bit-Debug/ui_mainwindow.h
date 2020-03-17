/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *text_box;
    QTextEdit *text_field;
    QGroupBox *special_symbols_box;
    QLabel *special_symbols_label;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 419);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        text_box = new QGroupBox(centralwidget);
        text_box->setObjectName(QString::fromUtf8("text_box"));
        text_box->setGeometry(QRect(40, 0, 301, 151));
        text_field = new QTextEdit(text_box);
        text_field->setObjectName(QString::fromUtf8("text_field"));
        text_field->setGeometry(QRect(20, 30, 261, 111));
        special_symbols_box = new QGroupBox(centralwidget);
        special_symbols_box->setObjectName(QString::fromUtf8("special_symbols_box"));
        special_symbols_box->setGeometry(QRect(40, 180, 311, 181));
        special_symbols_label = new QLabel(special_symbols_box);
        special_symbols_label->setObjectName(QString::fromUtf8("special_symbols_label"));
        special_symbols_label->setGeometry(QRect(20, 40, 271, 131));
        special_symbols_label->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 150, 271, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        text_box->setTitle(QApplication::translate("MainWindow", "\320\242\320\265\320\272\321\201\321\202", nullptr));
        special_symbols_box->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\265 \321\201\320\270\320\274\320\262\320\276\320\273\321\213", nullptr));
        special_symbols_label->setText(QApplication::translate("MainWindow", "<html><head/><body><p>#@AUTHOR@ \342\200\223 \321\201\320\270\320\274\320\262\320\276\320\273 \320\260\320\262\321\202\320\276\321\200\321\201\320\272\320\276\320\263\320\276 \320\277\321\200\320\260\320\262\320\260</p><p>#@PROMIL@ \342\200\223 \321\201\320\270\320\274\320\262\320\276\320\273 \320\277\321\200\320\276\320\274\320\270\320\273\320\273\320\265</p><p>#@PRODUCT@ \342\200\223 \321\201\320\270\320\274\320\262\320\276\320\273 \321\202\320\276\320\262\320\260\321\200\320\275\320\276\320\263\320\276 \320\267\320\275\320\260\320\272\320\260</p><p>#@EURO@ \342\200\223 \321\201\320\270\320\274\320\262\320\276\320\273 \320\265\320\262\321\200\320\276</p><p>#@RUB@ \342\200\223 \321\201\320\270\320\274\320\262\320\276\320\273 \321\200\321\203\320\261\320\273\321\217</p><p><br/></p></body></html>", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
