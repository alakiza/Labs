/********************************************************************************
** Form generated from reading UI file 'risingpanel.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RISINGPANEL_H
#define UI_RISINGPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RisingPanel
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *ConnectButton;
    QPushButton *RefreshDevicesButton;
    QComboBox *InterfacesComboBox;
    QListView *DevicesListView;

    void setupUi(QWidget *RisingPanel)
    {
        if (RisingPanel->objectName().isEmpty())
            RisingPanel->setObjectName(QString::fromUtf8("RisingPanel"));
        RisingPanel->resize(240, 320);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RisingPanel->sizePolicy().hasHeightForWidth());
        RisingPanel->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(RisingPanel);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        ConnectButton = new QPushButton(RisingPanel);
        ConnectButton->setObjectName(QString::fromUtf8("ConnectButton"));
        sizePolicy.setHeightForWidth(ConnectButton->sizePolicy().hasHeightForWidth());
        ConnectButton->setSizePolicy(sizePolicy);
        ConnectButton->setMinimumSize(QSize(24, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/Connect_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConnectButton->setIcon(icon);
        ConnectButton->setIconSize(QSize(16, 16));
        ConnectButton->setFlat(true);

        gridLayout_2->addWidget(ConnectButton, 0, 2, 1, 1);

        RefreshDevicesButton = new QPushButton(RisingPanel);
        RefreshDevicesButton->setObjectName(QString::fromUtf8("RefreshDevicesButton"));
        sizePolicy.setHeightForWidth(RefreshDevicesButton->sizePolicy().hasHeightForWidth());
        RefreshDevicesButton->setSizePolicy(sizePolicy);
        RefreshDevicesButton->setMinimumSize(QSize(24, 24));
        RefreshDevicesButton->setBaseSize(QSize(0, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/Refresh_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        RefreshDevicesButton->setIcon(icon1);
        RefreshDevicesButton->setIconSize(QSize(16, 16));
        RefreshDevicesButton->setFlat(true);

        gridLayout_2->addWidget(RefreshDevicesButton, 0, 1, 1, 1);

        InterfacesComboBox = new QComboBox(RisingPanel);
        InterfacesComboBox->setObjectName(QString::fromUtf8("InterfacesComboBox"));

        gridLayout_2->addWidget(InterfacesComboBox, 0, 0, 1, 1);

        DevicesListView = new QListView(RisingPanel);
        DevicesListView->setObjectName(QString::fromUtf8("DevicesListView"));

        gridLayout_2->addWidget(DevicesListView, 1, 0, 1, 3);


        retranslateUi(RisingPanel);

        QMetaObject::connectSlotsByName(RisingPanel);
    } // setupUi

    void retranslateUi(QWidget *RisingPanel)
    {
        RisingPanel->setWindowTitle(QApplication::translate("RisingPanel", "Form", nullptr));
        ConnectButton->setText(QString());
        RefreshDevicesButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RisingPanel: public Ui_RisingPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RISINGPANEL_H
