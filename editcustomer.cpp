#include "editcustomer.h"
#include "ui_editcustomer.h"

EditCustomer::EditCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditCustomer)
{
    ui->setupUi(this);
}

EditCustomer::~EditCustomer()
{
    delete ui;
}
