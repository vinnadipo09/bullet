#ifndef ADDNEWPRODUCT_H
#define ADDNEWPRODUCT_H

#include <QDialog>
#include "debugger.h"

namespace Ui {
class AddNewProduct;
}

class AddNewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewProduct(QWidget *parent, loggedUser &currentLoggedInUser);
    ~AddNewProduct();

private:
    Ui::AddNewProduct *ui;
};

#endif // ADDNEWPRODUCT_H
