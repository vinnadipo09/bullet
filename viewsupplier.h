#ifndef VIEWSUPPLIER_H
#define VIEWSUPPLIER_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class ViewSupplier;
}

class ViewSupplier : public QDialog
{
    Q_OBJECT

public:
    explicit ViewSupplier(QWidget *parent, loggedUser &currentLoggedInUser, supplierUser &supplier);
    ~ViewSupplier();

private slots:
    void on_btnEditSupplier_clicked();
    void on_btnClose_clicked();

private:
    Ui::ViewSupplier *ui;

private:
    databaseConnection* viewSupplierConnection;
    loggedUser* currentUser;
    supplierUser* currentSupplier;
};

#endif // VIEWSUPPLIER_H
