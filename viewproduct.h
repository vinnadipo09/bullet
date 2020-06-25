#ifndef VIEWPRODUCT_H
#define VIEWPRODUCT_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class ViewProduct;
}

class ViewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit ViewProduct(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView);
    ~ViewProduct();

private:
    Ui::ViewProduct *ui;
};

#endif // VIEWPRODUCT_H
