#ifndef EXTENSIONSLISTFORM_H
#define EXTENSIONSLISTFORM_H

#include <QDialog>

namespace Ui {
class ExtensionsListForm;
}

class ExtensionsListForm : public QDialog
{
    Q_OBJECT

public:
    explicit ExtensionsListForm(double scaleX, double scaleY, QWidget *parent = nullptr);
    ~ExtensionsListForm();

private:
    Ui::ExtensionsListForm *ui;
};

#endif // EXTENSIONSLISTFORM_H
