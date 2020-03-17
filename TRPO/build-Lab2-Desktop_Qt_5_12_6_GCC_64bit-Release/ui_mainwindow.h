/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
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
    QAction *action_Download;
    QAction *action_Upload;
    QAction *action_About;
    QAction *action_Qt;
    QAction *action_Editor;
    QAction *ExtensionsListShow_Action;
    QAction *action_Rebuild;
    QAction *action_DownloadThrough;
    QAction *action_UploadThrough;
    QAction *action_Information;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QListView *EntrylistView;
    QPushButton *UploadButton;
    QToolButton *ShowPanelButton;
    QPushButton *DownloadButton;
    QSpacerItem *horizontalSpacer;
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
        action_Download = new QAction(MainWindow);
        action_Download->setObjectName(QString::fromUtf8("action_Download"));
        action_Upload = new QAction(MainWindow);
        action_Upload->setObjectName(QString::fromUtf8("action_Upload"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Qt = new QAction(MainWindow);
        action_Qt->setObjectName(QString::fromUtf8("action_Qt"));
        action_Editor = new QAction(MainWindow);
        action_Editor->setObjectName(QString::fromUtf8("action_Editor"));
        ExtensionsListShow_Action = new QAction(MainWindow);
        ExtensionsListShow_Action->setObjectName(QString::fromUtf8("ExtensionsListShow_Action"));
        action_Rebuild = new QAction(MainWindow);
        action_Rebuild->setObjectName(QString::fromUtf8("action_Rebuild"));
        action_DownloadThrough = new QAction(MainWindow);
        action_DownloadThrough->setObjectName(QString::fromUtf8("action_DownloadThrough"));
        action_UploadThrough = new QAction(MainWindow);
        action_UploadThrough->setObjectName(QString::fromUtf8("action_UploadThrough"));
        action_Information = new QAction(MainWindow);
        action_Information->setObjectName(QString::fromUtf8("action_Information"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        EntrylistView = new QListView(centralwidget);
        EntrylistView->setObjectName(QString::fromUtf8("EntrylistView"));

        gridLayout->addWidget(EntrylistView, 1, 0, 1, 4);

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

        ShowPanelButton = new QToolButton(centralwidget);
        ShowPanelButton->setObjectName(QString::fromUtf8("ShowPanelButton"));
        sizePolicy.setHeightForWidth(ShowPanelButton->sizePolicy().hasHeightForWidth());
        ShowPanelButton->setSizePolicy(sizePolicy);
        ShowPanelButton->setMinimumSize(QSize(24, 24));

        gridLayout->addWidget(ShowPanelButton, 0, 3, 1, 1);

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

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

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
        FileMenu->addAction(action_Download);
        FileMenu->addAction(action_DownloadThrough);
        FileMenu->addAction(action_Upload);
        FileMenu->addAction(action_UploadThrough);
        FileMenu->addSeparator();
        FileMenu->addAction(quit_Menu_action);
        menu_2->addAction(action_Editor);
        menu_2->addAction(ExtensionsListShow_Action);
        menu_2->addSeparator();
        menu_2->addAction(action_Rebuild);
        menu_4->addAction(action_Information);
        menu_4->addSeparator();
        menu_4->addAction(action_Qt);
        menu_4->addAction(action_About);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "DFile", nullptr));
        quit_Menu_action->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        action_Download->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\260\321\207\320\260\321\202\321\214", nullptr));
        action_Upload->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        action_About->setText(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        action_Qt->setText(QApplication::translate("MainWindow", "\320\236 Qt", nullptr));
        action_Editor->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\276\321\200", nullptr));
        ExtensionsListShow_Action->setText(QApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272", nullptr));
        action_Rebuild->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\321\201\320\276\320\261\321\200\320\260\321\202\321\214", nullptr));
        action_DownloadThrough->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\260\321\207\320\260\321\202\321\214 \321\207\320\265\321\200\320\265\320\267", nullptr));
        action_UploadThrough->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\207\320\265\321\200\320\265\320\267", nullptr));
        action_Information->setText(QApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
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
