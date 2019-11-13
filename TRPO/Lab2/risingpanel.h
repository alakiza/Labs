#ifndef RISINGPANEL_H
#define RISINGPANEL_H

#include <QWidget>

namespace Ui {
class RisingPanel;
}

class RisingPanel : public QWidget
{
    Q_OBJECT

public:
    explicit RisingPanel(QWidget *parent = nullptr);
    ~RisingPanel();

private:
    Ui::RisingPanel *ui;
};

#endif // RISINGPANEL_H
