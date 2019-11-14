#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    risingPanel = new RisingPanel(this);
    risingPanel->setGeometry(this->width()-200, 0, 200, this->height());
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
    risingPanel->setGeometry(this->width()-200, height, 200, this->height()-height);
}

void MainWindow::on_ExtensionsListShow_Action_triggered()
{
    ExtensionsListForm* extListForm = new ExtensionsListForm(nullptr);
    extListForm->exec();
}
