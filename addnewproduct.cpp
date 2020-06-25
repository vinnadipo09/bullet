#include "addnewproduct.h"
#include "ui_addnewproduct.h"

AddNewProduct::AddNewProduct(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddNewProduct)
{
    ui->setupUi(this);
}

AddNewProduct::~AddNewProduct()
{
    delete ui;
}
