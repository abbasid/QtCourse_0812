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
   connect(clock, SIGNAL(timeout()), this, SLOT(updateDate()));
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
    timeSequence.append(time.toString("hh:mm:ss"));
}

void MainWindow::updateDate()
{
     QDateTime date;
     date = date.currentDateTime();
     qDebug() << date.toString("yyyy-MM-dd");
     dateSequence << date.toString("yyyy-MM-dd");
}

void MainWindow::on_pushButton_clicked()
{
    clock->stop();
    for(int i = 0; i < timeSequence.size(); i++)
        qDebug() << timeSequence.at(i);
    for(int j = 0; j < dateSequence.size(); j++)
        qDebug() << dateSequence.at(j);
}
