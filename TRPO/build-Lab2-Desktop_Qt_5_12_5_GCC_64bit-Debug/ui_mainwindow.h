/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *quit_Menu_action;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_Qt;
    QAction *action_8;
    QAction *ExtensionsListShow_Action;
    QAction *action_10;
    QAction *action_12;
    QAction *action_13;
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *UploadButton;
    QListView *EntrylistView;
    QToolButton *ShowPanelButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *DownloadButton;
    QMenuBar *menuBar;
    QMenu *FileMenu;
    QMenu *menu_2;
    QMenu *menu_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        MainWindow->setAutoFillBackground(true);
        quit_Menu_action = new QAction(MainWindow);
        quit_Menu_action->setObjectName(QString::fromUtf8("quit_Menu_action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_Qt = new QAction(MainWindow);
        action_Qt->setObjectName(QString::fromUtf8("action_Qt"));
        action_8 = new QAction(MainWindow);
        action_8->setObjectName(QString::fromUtf8("action_8"));
        ExtensionsListShow_Action = new QAction(MainWindow);
        ExtensionsListShow_Action->setObjectName(QString::fromUtf8("ExtensionsListShow_Action"));
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QString::fromUtf8("action_10"));
        action_12 = new QAction(MainWindow);
        action_12->setObjectName(QString::fromUtf8("action_12"));
        action_13 = new QAction(MainWindow);
        action_13->setObjectName(QString::fromUtf8("action_13"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        UploadButton = new QPushButton(centralwidget);
        UploadButton->setObjectName(QString::fromUtf8("UploadButton"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UploadButton->sizePolicy().hasHeightForWidth());
        UploadButton->setSizePolicy(sizePolicy);
        UploadButton->setMinimumSize(QSize(36, 36));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/Upload_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        UploadButton->setIcon(icon);
        UploadButton->setIconSize(QSize(24, 24));
        UploadButton->setFlat(true);

        gridLayout->addWidget(UploadButton, 0, 1, 1, 1);

        EntrylistView = new QListView(centralwidget);
        EntrylistView->setObjectName(QString::fromUtf8("EntrylistView"));

        gridLayout->addWidget(EntrylistView, 1, 0, 1, 4);

        ShowPanelButton = new QToolButton(centralwidget);
        ShowPanelButton->setObjectName(QString::fromUtf8("ShowPanelButton"));
        sizePolicy.setHeightForWidth(ShowPanelButton->sizePolicy().hasHeightForWidth());
        ShowPanelButton->setSizePolicy(sizePolicy);
        ShowPanelButton->setMinimumSize(QSize(24, 24));

        gridLayout->addWidget(ShowPanelButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        DownloadButton = new QPushButton(centralwidget);
        DownloadButton->setObjectName(QString::fromUtf8("DownloadButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(DownloadButton->sizePolicy().hasHeightForWidth());
        DownloadButton->setSizePolicy(sizePolicy1);
        DownloadButton->setMinimumSize(QSize(36, 36));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icons/Download_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        DownloadButton->setIcon(icon1);
        DownloadButton->setIconSize(QSize(24, 24));
        DownloadButton->setFlat(true);

        gridLayout->addWidget(DownloadButton, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 22));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy2);
        menuBar->setLayoutDirection(Qt::LeftToRight);
        menuBar->setNativeMenuBar(true);
        FileMenu = new QMenu(menuBar);
        FileMenu->setObjectName(QString::fromUtf8("FileMenu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(FileMenu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_4->menuAction());
        FileMenu->addAction(action_3);
        FileMenu->addAction(action_12);
        FileMenu->addAction(action_4);
        FileMenu->addAction(action_13);
        FileMenu->addSeparator();
        FileMenu->addAction(quit_Menu_action);
        menu_2->addAction(action_8);
        menu_2->addAction(ExtensionsListShow_Action);
        menu_2->addSeparator();
        menu_2->addAction(action_10);
        menu_4->addAction(action);
        menu_4->addSeparator();
        menu_4->addAction(action_Qt);
        menu_4->addAction(action_7);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DFile", nullptr));
        quit_Menu_action->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_3->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\260\321\207\320\260\321\202\321\214", nullptr));
        action_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        action_5->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        action_6->setText(QApplication::translate("MainWindow", "\320\241\320\276\320\265\320\264\320\270\320\275\320\265\320\275\320\270\320\265", nullptr));
        action_7->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        action_Qt->setText(QApplication::translate("MainWindow", "\320\236 Qt", nullptr));
        action_8->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200", nullptr));
        ExtensionsListShow_Action->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272", nullptr));
        action_10->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\321\201\320\276\320\261\321\200\320\260\321\202\321\214", nullptr));
        action_12->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\260\321\207\320\260\321\202\321\214 \321\207\320\265\321\200\320\265\320\267", nullptr));
        action_13->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\207\320\265\321\200\320\265\320\267", nullptr));
        action->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        UploadButton->setText(QString());
        ShowPanelButton->setText(QApplication::translate("MainWindow", "...", nullptr));
        DownloadButton->setText(QString());
        FileMenu->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\240\320\260\321\201\321\210\320\270\321\200\320\265\320\275\320\270\321\217", nullptr));
        menu_4->setTitle(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
