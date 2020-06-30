#include "viewsupplier.h"
#include "ui_viewsupplier.h"

ViewSupplier::ViewSupplier(QWidget *parent, loggedUser &currentLoggedInUser, supplierUser &supplier) :
    QDialog(parent),
    ui(new Ui::ViewSupplier)
{
    ui->setupUi(this);
    viewSupplierConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    currentSupplier = new supplierUser;
    *currentSupplier = supplier;

}

ViewSupplier::~ViewSupplier()
{
    delete ui;
}

void ViewSupplier::on_btnEditSupplier_clicked()
{

}

void ViewSupplier::on_btnClose_clicked()
{

}
