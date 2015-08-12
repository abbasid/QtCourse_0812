#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString fileName;

//    fileName = QFileDialog::getOpenFileName(this,
//        tr("Open Image"), "/home/jana", tr("Image Files (*.png *.jpg *.bmp)"));

    QString FileName;
    QFileDialog fd;
    FileName = fd.getOpenFileName();

}

MainWindow::~MainWindow()
{
    delete ui;
}
