#ifndef VIADDIALOG_H
#define VIADDIALOG_H

#include <QDialog>

namespace Ui {
class ViadDialog;
}

class ViadDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ViadDialog(QWidget *parent = nullptr);
    ~ViadDialog();

private:
    Ui::ViadDialog *ui;
};

#endif // VIADDIALOG_H
