#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "risingpanel.h"
#include "extensionslistform.h"
#include "logger.h"

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
    void on_quit_Menu_action_changed();

    void on_quit_Menu_action_hovered();

    void on_quit_Menu_action_triggered();

    void on_action_Qt_triggered();

    void on_ShowPanelButton_clicked();

    void on_ExtensionsListShow_Action_triggered();

private:
    Ui::MainWindow *ui;

    RisingPanel* risingPanel;

    void ResizePanel();
};
#endif // MAINWINDOW_H
