#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class AddCustomer;
}

class AddCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit AddCustomer(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AddCustomer();

private slots:
    void on_btnDiscard_clicked();

private:
    Ui::AddCustomer *ui;
};

#endif // ADDCUSTOMER_H
