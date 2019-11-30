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
    QPushButton *OpenDirectoryButton;
    QPushButton *RefreshButton;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QListView *listView;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QListView *listView_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *EditButton;
    QPushButton *BuildButton;

    void setupUi(QDialog *ExtensionsListForm)
    {
        if (ExtensionsListForm->objectName().isEmpty())
            ExtensionsListForm->setObjectName(QString::fromUtf8("ExtensionsListForm"));
        ExtensionsListForm->resize(320, 480);
        gridLayout = new QGridLayout(ExtensionsListForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        OpenDirectoryButton = new QPushButton(ExtensionsListForm);
        OpenDirectoryButton->setObjectName(QString::fromUtf8("OpenDirectoryButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OpenDirectoryButton->sizePolicy().hasHeightForWidth());
        OpenDirectoryButton->setSizePolicy(sizePolicy);
        OpenDirectoryButton->setMinimumSize(QSize(36, 36));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/Folder_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        OpenDirectoryButton->setIcon(icon);
        OpenDirectoryButton->setIconSize(QSize(24, 24));
        OpenDirectoryButton->setFlat(true);

        gridLayout->addWidget(OpenDirectoryButton, 0, 0, 1, 1);

        RefreshButton = new QPushButton(ExtensionsListForm);
        RefreshButton->setObjectName(QString::fromUtf8("RefreshButton"));
        RefreshButton->setMinimumSize(QSize(36, 36));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/Refresh_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        RefreshButton->setIcon(icon1);
        RefreshButton->setIconSize(QSize(24, 24));
        RefreshButton->setFlat(true);

        gridLayout->addWidget(RefreshButton, 0, 3, 1, 1);

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

        EditButton = new QPushButton(ExtensionsListForm);
        EditButton->setObjectName(QString::fromUtf8("EditButton"));
        EditButton->setMinimumSize(QSize(36, 36));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icons/Edit_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        EditButton->setIcon(icon2);
        EditButton->setIconSize(QSize(24, 24));
        EditButton->setFlat(true);

        gridLayout->addWidget(EditButton, 0, 1, 1, 1);

        BuildButton = new QPushButton(ExtensionsListForm);
        BuildButton->setObjectName(QString::fromUtf8("BuildButton"));
        BuildButton->setMinimumSize(QSize(36, 36));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icons/Build_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        BuildButton->setIcon(icon3);
        BuildButton->setIconSize(QSize(24, 24));
        BuildButton->setFlat(true);

        gridLayout->addWidget(BuildButton, 0, 4, 1, 1);


        retranslateUi(ExtensionsListForm);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ExtensionsListForm);
    } // setupUi

    void retranslateUi(QDialog *ExtensionsListForm)
    {
        ExtensionsListForm->setWindowTitle(QApplication::translate("ExtensionsListForm", "\320\240\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\321\217", nullptr));
        OpenDirectoryButton->setText(QString());
        RefreshButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("ExtensionsListForm", "\320\227\320\260\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("ExtensionsListForm", "\320\222\321\213\320\263\321\200\321\203\320\267\320\272\320\260", nullptr));
        EditButton->setText(QString());
        BuildButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExtensionsListForm: public Ui_ExtensionsListForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTENSIONSLISTFORM_H
