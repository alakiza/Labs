#include "risingpanel.h"
#include "ui_risingpanel.h"

RisingPanel::RisingPanel(QWidget *parent, double scaleX, double scaleY) :
    QWidget(parent),
    ui(new Ui::RisingPanel)
{
    ui->setupUi(this);

    ui->RefreshDevicesButton->setMinimumSize(static_cast<int>(ui->RefreshDevicesButton->minimumWidth()*scaleX),
                                             static_cast<int>(ui->RefreshDevicesButton->minimumHeight()*scaleY));
    ui->RefreshDevicesButton->setIconSize(QSize(static_cast<int>(ui->RefreshDevicesButton->iconSize().width()*scaleX),
                                                static_cast<int>(ui->RefreshDevicesButton->iconSize().height()*scaleY)));

    ui->ConnectButton->setMinimumSize(static_cast<int>(ui->ConnectButton->minimumWidth()*scaleX),
                                      static_cast<int>(ui->ConnectButton->minimumHeight()*scaleY));
    ui->ConnectButton->setIconSize(QSize(static_cast<int>(ui->ConnectButton->iconSize().width()*scaleX),
                                         static_cast<int>(ui->ConnectButton->iconSize().height()*scaleY)));
}

RisingPanel::~RisingPanel()
{
    delete ui;
}
