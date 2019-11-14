/********************************************************************************
** Form generated from reading UI file 'extensionslistform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTENSIONSLISTFORM_H
#define UI_EXTENSIONSLISTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtensionsListForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QListView *listView_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;

    void setupUi(QDialog *ExtensionsListForm)
    {
        if (ExtensionsListForm->objectName().isEmpty())
            ExtensionsListForm->setObjectName(QString::fromUtf8("ExtensionsListForm"));
        ExtensionsListForm->resize(320, 480);
        gridLayout = new QGridLayout(ExtensionsListForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(ExtensionsListForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setMinimumSize(QSize(36, 36));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/Folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(ExtensionsListForm);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(36, 36));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/Refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(24, 24));
        pushButton_3->setFlat(true);

        gridLayout->addWidget(pushButton_3, 0, 3, 1, 1);

        tabWidget = new QTabWidget(ExtensionsListForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listView = new QListView(tab);
        listView->setObjectName(QString::fromUtf8("listView"));

        gridLayout_2->addWidget(listView, 1, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        listView_2 = new QListView(tab_2);
        listView_2->setObjectName(QString::fromUtf8("listView_2"));

        gridLayout_3->addWidget(listView_2, 0, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        pushButton_4 = new QPushButton(ExtensionsListForm);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(36, 36));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/Edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon2);
        pushButton_4->setIconSize(QSize(24, 24));
        pushButton_4->setFlat(true);

        gridLayout->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(ExtensionsListForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(36, 36));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/Build.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(24, 24));
        pushButton_2->setFlat(true);

        gridLayout->addWidget(pushButton_2, 0, 4, 1, 1);


        retranslateUi(ExtensionsListForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ExtensionsListForm);
    } // setupUi

    void retranslateUi(QDialog *ExtensionsListForm)
    {
        ExtensionsListForm->setWindowTitle(QApplication::translate("ExtensionsListForm", "Dialog", nullptr));
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ExtensionsListForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ExtensionsListForm", "\320\222\321\213\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
        pushButton_4->setText(QString());
        pushButton_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExtensionsListForm: public Ui_ExtensionsListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENSIONSLISTFORM_H
