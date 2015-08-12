#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clock = new QTimer;
    clock->setInterval(1000);
  //  QString fileName;

//    fileName = QFileDialog::getOpenFileName(this,
//        tr("Open Image"), "/home/jana", tr("Image Files (*.png *.jpg *.bmp)"));

//    QString FileName;
//    QFileDialog fd;
//    FileName = fd.getOpenFileName();
   connect(clock, SIGNAL(timeout()), this, SLOT(updateTime()));
   clock->start();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateTime()
{
    QTime time;
    time = time.currentTime();
    qDebug() << time.toString("hh:mm:ss");
}
