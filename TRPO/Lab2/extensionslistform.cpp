#include "extensionslistform.h"
#include "ui_extensionslistform.h"

ExtensionsListForm::ExtensionsListForm(double scaleX, double scaleY, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExtensionsListForm)
{
    ui->setupUi(this);

    ui->OpenDirectoryButton->setMinimumSize(static_cast<int>(ui->OpenDirectoryButton->minimumWidth()*scaleX),
                                             static_cast<int>(ui->OpenDirectoryButton->minimumHeight()*scaleY));
    ui->OpenDirectoryButton->setIconSize(QSize(static_cast<int>(ui->OpenDirectoryButton->iconSize().width()*scaleX),
                                                static_cast<int>(ui->OpenDirectoryButton->iconSize().height()*scaleY)));

    ui->RefreshButton->setMinimumSize(static_cast<int>(ui->RefreshButton->minimumWidth()*scaleX),
                                      static_cast<int>(ui->RefreshButton->minimumHeight()*scaleY));
    ui->RefreshButton->setIconSize(QSize(static_cast<int>(ui->RefreshButton->iconSize().width()*scaleX),
                                         static_cast<int>(ui->RefreshButton->iconSize().height()*scaleY)));

    ui->EditButton->setMinimumSize(static_cast<int>(ui->EditButton->minimumWidth()*scaleX),
                                      static_cast<int>(ui->EditButton->minimumHeight()*scaleY));
    ui->EditButton->setIconSize(QSize(static_cast<int>(ui->EditButton->iconSize().width()*scaleX),
                                         static_cast<int>(ui->EditButton->iconSize().height()*scaleY)));

    ui->BuildButton->setMinimumSize(static_cast<int>(ui->BuildButton->minimumWidth()*scaleX),
                                      static_cast<int>(ui->BuildButton->minimumHeight()*scaleY));
    ui->BuildButton->setIconSize(QSize(static_cast<int>(ui->BuildButton->iconSize().width()*scaleX),
                                         static_cast<int>(ui->BuildButton->iconSize().height()*scaleY)));
}

ExtensionsListForm::~ExtensionsListForm()
{
    delete ui;
}
