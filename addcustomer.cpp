#include "addcustomer.h"
#include "ui_addcustomer.h"

AddCustomer::AddCustomer(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddCustomer)
{
    ui->setupUi(this);
}

AddCustomer::~AddCustomer()
{
    delete ui;
}

void AddCustomer::on_btnDiscard_clicked()
{

}
