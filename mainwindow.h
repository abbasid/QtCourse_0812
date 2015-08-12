#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QString>
#include <QFileDialog>
#include <QDateTime>
#include <QTime>
#include <QTimer>
#include <QVector>
#include <QList>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTimer *clock;
    QVector<QString> timeSequence;
    QList<QString> dateSequence;


private slots:
    void updateTime();
    void updateDate();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
