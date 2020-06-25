#include "viewcustomer.h"
#include "ui_viewcustomer.h"

ViewCustomer::ViewCustomer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewCustomer)
{
    ui->setupUi(this);
}

ViewCustomer::~ViewCustomer()
{
    delete ui;
}
