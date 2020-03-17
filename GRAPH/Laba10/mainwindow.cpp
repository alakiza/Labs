#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Создание буфера
    buff = new QImage(this->width(), this->height(), QImage::Format_RGB32);
    buff->fill(Qt::GlobalColor::white);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    //Создание "контекста рисования"
    QPainter painter1(this);
    //Рисование буфера
    painter1.drawImage(0, 0, *buff);
}

//========

QBitArray MyWindow::getCode(QPointF A)
{
    QBitArray code(4);
    code[3] = (A.rx() < x1);// < 0;
    code[2] = (A.rx() > x2);// > 0;
    code[1] = (A.ry() < y1);// < 0;
    code[0] = (A.ry() > y2);// > 0;

    return code;
}

MyWindow::MyWindow(double Left, double Top, double Width, double Height)
{
    x1 = Left;
    y1 = Top;
    x2 = Left + Width;
    y2 = Top + Height;
}

QVector<QPointF> MyWindow::GetLineCoord(QPointF A, QPointF B, int iterCount)
{
    //Массив точек, влезающих в окно
    QVector<QPointF> Res;
    //Если количество итераций не превысило допустимое количество.
    //Иначе возвращаем точки как есть.
    if(--iterCount)
    {
        //Коды каждой точки, описанные в лекции
        QBitArray codeA = getCode(A);
        QBitArray codeB = getCode(B);

        //Если коды не имеют на одинаковых позициях 1, то одна из них в окне
        if ((codeA & codeB) == QBitArray(4, 0))
        {
            //Заранее считаем среднюю точку
            QPointF M(((A.rx()+B.rx())/2),
                      ((A.ry()+B.ry())/2));
            //Если первая точка не в окне
            if (codeA != QBitArray(4, 0))
            {
                //Получаем пару точек, которые вместились в окно
                QVector<QPointF> res = GetLineCoord(A, M, iterCount);
                //Если слева от М нашли пару точек, то назначаем А - левую
                if (res.length() > 0)
                {
                    A = res[0];
                }
                else
                {
                    //Если же ничего не нашли слева от М, то ищем справа от М
                    res = GetLineCoord(M, B, iterCount);
                    //И если нашли, то А = левая
                    if (res.length() > 0)
                    {
                        A = res[0];
                    }
                }
            }
            //Если вторая точка не в окне
            if (codeB != QBitArray(4, 0))
            {
                //Алгоритм аналогичен, только для правой точки
                QVector<QPointF> res = GetLineCoord(M, B, iterCount);
                if (res.length() > 0)
                {
                    B = res[1];
                }
                else
                {
                    res = GetLineCoord(A, M, iterCount);
                    if (res.length() > 0)
                    {
                        B = res[1];
                    }
                }
            }
            //Мы нашли точки и записываем их в массив. сначала левую, потом правую
            Res.push_back(A);
            Res.push_back(B);
        }
    }
    else
    {
        //Записываем точки как есть
        Res.push_back(A);
        Res.push_back(B);
    }

    //Возвращаем точки. Пустой массив - не нашли ничего, иначе в нём две точки
    return Res;
}

MyWindow::~MyWindow()
{

}

void MainWindow::on_pushButton_clicked()
{
    //Можно красивее оформить, но времени нет
    //Создание painterа на буфере
    QPainter painter1;
    painter1.begin(buff);

    MyWindow wnd(150, 100, 300, 300);
    painter1.drawRect(150, 100, 300, 300);
    //Рисование первой линии
    {
        QPoint A(250, 0);
        QPoint B(500, 250);

        painter1.setPen(Qt::GlobalColor::black);
        //painter1.drawLine(A, B);

        QVector<QPointF> ResCoord = wnd.GetLineCoord(A, B, qMax(log2(300*10), log2(300*10)));

        qDebug() << ResCoord[0].rx() << ResCoord[0].ry() << ResCoord[1].rx() << ResCoord[1].ry();

        if (ResCoord.length() > 0)
        {
            painter1.setPen(Qt::GlobalColor::red);
            painter1.drawLine(ResCoord[0], ResCoord[1]);
        }
    }
    //Второй
    {
        QPoint A(500, 250);
        QPoint B(250, 500);

        painter1.setPen(Qt::GlobalColor::black);
        //painter1.drawLine(A, B);

        QVector<QPointF> ResCoord = wnd.GetLineCoord(A, B, qMax(log2(300*10), log2(300*10)));

        qDebug() << ResCoord[0].rx() << ResCoord[0].ry() << ResCoord[1].rx() << ResCoord[1].ry();

        if (ResCoord.length() > 0)
        {
            painter1.setPen(Qt::GlobalColor::red);
            painter1.drawLine(ResCoord[0], ResCoord[1]);
        }
    }

    {
        QPoint A(250, 500);
        QPoint B(0, 250);

        painter1.setPen(Qt::GlobalColor::black);
        //painter1.drawLine(A, B);

        QVector<QPointF> ResCoord = wnd.GetLineCoord(A, B, qMax(log2(300*10), log2(300*10)));

        qDebug() << ResCoord[0].rx() << ResCoord[0].ry() << ResCoord[1].rx() << ResCoord[1].ry();

        if (ResCoord.length() > 0)
        {
            painter1.setPen(Qt::GlobalColor::red);
            painter1.drawLine(ResCoord[0], ResCoord[1]);
        }
    }

    {
        QPoint A(0, 250);
        QPoint B(250, 0);

        painter1.setPen(Qt::GlobalColor::black);
        //painter1.drawLine(A, B);

        QVector<QPointF> ResCoord = wnd.GetLineCoord(A, B, qMax(log2(300*10), log2(300*10)));

        qDebug() << ResCoord[0].rx() << ResCoord[0].ry() << ResCoord[1].rx() << ResCoord[1].ry();

        if (ResCoord.length() > 0)
        {
            painter1.setPen(Qt::GlobalColor::red);
            painter1.drawLine(ResCoord[0], ResCoord[1]);
        }
    }

    painter1.end();

    this->repaint();
}
