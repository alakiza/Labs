#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "QPainter"
#include "QBitArray"
#include "QDebug"
#include "QImage"
#include "math.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void paintEvent(QPaintEvent *event);
private slots:

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QImage* buff;
};

class MyWindow
{
private:
    double x1, y1, x2, y2;

    QBitArray getCode(QPointF A);
public:
    MyWindow(double Left, double Top, double Width, double Height);
    ~MyWindow();

    QVector<QPointF> GetLineCoord(QPointF A, QPointF B, int iterCount);
};

#endif // MAINWINDOW_H
