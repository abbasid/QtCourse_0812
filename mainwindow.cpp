#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString str = "HEllo";
    qDebug() << str;
    str.prepend("hahaha");
    qDebug() << str;
    str.append("yaya");
    qDebug() << str;
    QString str2 = "momo";
    QString str3 = str + str2;
    qDebug() << str3;
    str3.clear();
    qDebug() << str3;

}

MainWindow::~MainWindow()
{
    delete ui;
}
