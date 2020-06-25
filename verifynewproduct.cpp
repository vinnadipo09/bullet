#include "verifynewproduct.h"
#include "ui_verifynewproduct.h"

VerifyNewProduct::VerifyNewProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VerifyNewProduct)
{
    ui->setupUi(this);
}

VerifyNewProduct::~VerifyNewProduct()
{
    delete ui;
}
