#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "risingpanel.h"
#include "extensionslistform.h"
#include "logger.h"
#include <QDesktopWidget>
#include <QMessageBox>
#include "QtNetwork/QAbstractSocket"
#include "tsettingsmaster.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    virtual void resizeEvent(QResizeEvent* re);

private slots:
    void on_quit_Menu_action_triggered();

    void on_action_Qt_triggered();

    void on_ShowPanelButton_clicked();

    void on_ExtensionsListShow_Action_triggered();

    void on_action_Download_triggered();

    void on_action_Upload_triggered();

    void on_action_About_triggered();

    void on_action_Editor_triggered();

    void on_action_Rebuild_triggered();

    void on_action_DownloadThrough_triggered();

    void on_action_UploadThrough_triggered();

    void on_action_Information_triggered();

private:
    Ui::MainWindow *ui;

    RisingPanel* risingPanel;

    void ResizePanel();
};
#endif // MAINWINDOW_H
