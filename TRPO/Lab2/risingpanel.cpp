#include "risingpanel.h"
#include "ui_risingpanel.h"

RisingPanel::RisingPanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RisingPanel)
{
    ui->setupUi(this);
}

RisingPanel::~RisingPanel()
{
    delete ui;
}
