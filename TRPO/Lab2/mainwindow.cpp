#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDesktopWidget"
#include <QMessageBox>
#include "QtNetwork/QAbstractSocket"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    //QAbstractSocket* socket = new QAbstractSocket(QAbstractSocket::SocketType::UnknownSocketType, this);
    ui->setupUi(this);
    QDesktopWidget* desk = QApplication::desktop();

    double coeffX = desk->physicalDpiX()/96.0;
    double coeffY = desk->physicalDpiY()/96.0;

    QString message;
    message.setNum(coeffX);
    QMessageBox::warning(this, "", message);

    message.setNum(coeffY);
    QMessageBox::warning(this, "", message);

//    ui->DownloadButton->setGeometry(ui->DownloadButton->x(),
//                                    ui->DownloadButton->y(),
//                                    static_cast<int>(ui->DownloadButton->width()*coeffX),
//                                    static_cast<int>(ui->DownloadButton->height()*coeffY));

    ui->DownloadButton->setMinimumSize(static_cast<int>(ui->DownloadButton->minimumWidth()*coeffX),
                                       static_cast<int>(ui->DownloadButton->minimumHeight()*coeffY));
    ui->DownloadButton->setIconSize(QSize(static_cast<int>(ui->DownloadButton->iconSize().width()*coeffX),
                                          static_cast<int>(ui->DownloadButton->iconSize().height()*coeffY)));

//    ui->UploadButton->setGeometry(ui->UploadButton->x(),
//                                    ui->UploadButton->y(),
//                                    static_cast<int>(ui->UploadButton->width()*coeffX),
//                                    static_cast<int>(ui->UploadButton->height()*coeffY));

    ui->UploadButton->setMinimumSize(static_cast<int>(ui->UploadButton->minimumWidth()*coeffX),
                                       static_cast<int>(ui->UploadButton->minimumHeight()*coeffY));
    ui->UploadButton->setIconSize(QSize(static_cast<int>(ui->UploadButton->iconSize().width()*coeffX),
                                        static_cast<int>(ui->UploadButton->iconSize().height()*coeffY)));

//    ui->ShowPanelButton->setGeometry(ui->ShowPanelButton->x(),
//                                    ui->ShowPanelButton->y(),
//                                    static_cast<int>(ui->ShowPanelButton->width()*coeffX),
//                                    static_cast<int>(ui->ShowPanelButton->height()*coeffY));

    ui->ShowPanelButton->setMinimumSize(static_cast<int>(ui->ShowPanelButton->minimumWidth()*coeffX),
                                        static_cast<int>(ui->ShowPanelButton->minimumHeight()*coeffY));



    risingPanel = new RisingPanel(this, coeffX, coeffY);

    #ifdef ANDROID
        risingPanel->setGeometry(0, 0, this->width(), this->height());
    #else
        risingPanel->setGeometry(this->width()-200, 0, 200, this->height());
    #endif

    QPalette pall = this->palette();
    //pall.setColor(risingPanel->backgroundRole(), this->palette().color(this->backgroundRole()));
    risingPanel->setPalette(pall);
    risingPanel->setAutoFillBackground(true);
    risingPanel->hide();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::resizeEvent(QResizeEvent *re)
{
    if(risingPanel->isVisible()) ResizePanel();
}

void MainWindow::on_quit_Menu_action_changed()
{

}

void MainWindow::on_quit_Menu_action_hovered()
{
   // QMessageBox::information(0, "Information", "hovered") ;
}

void MainWindow::on_quit_Menu_action_triggered()
{

}

void MainWindow::on_action_Qt_triggered()
{
    QMessageBox::aboutQt(nullptr, "About Qt5");
}

void MainWindow::on_ShowPanelButton_clicked()
{
    ResizePanel();
    if(risingPanel->isVisible())
        risingPanel->hide();
    else
        risingPanel->show();

    Logger::Log(QDateTime::currentDateTime().toString() + " Нажали");
}

void MainWindow::ResizePanel()
{
    int height = ui->menuBar->height() + ui->ShowPanelButton->y() + ui->ShowPanelButton->height();
    #ifdef ANDROID
        risingPanel->setGeometry(0, height, this->width(), this->height()-height);
    #else
        risingPanel->setGeometry(this->width()-200, height, 200, this->height()-height);
    #endif
}

void MainWindow::on_ExtensionsListShow_Action_triggered()
{
    double coeffX = QApplication::desktop()->physicalDpiX()/96.0;
    double coeffY = QApplication::desktop()->physicalDpiY()/96.0;
    ExtensionsListForm* extListForm = new ExtensionsListForm(coeffX, coeffY, nullptr);
    #ifdef ANDROID
        extListForm->setGeometry(0, 0, this->width(), this->height());
    #endif
    extListForm->exec();
}
