#include "extensionslistform.h"
#include "ui_extensionslistform.h"

ExtensionsListForm::ExtensionsListForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ExtensionsListForm)
{
    ui->setupUi(this);
}

ExtensionsListForm::~ExtensionsListForm()
{
    delete ui;
}
