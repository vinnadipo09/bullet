#include "acquirestock.h"
#include "ui_acquirestock.h"

AcquireStock::AcquireStock(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AcquireStock)
{
    ui->setupUi(this);
    stockAcquisitionConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
}

AcquireStock::~AcquireStock()
{
    delete ui;
}

void AcquireStock::on_btnCalender_clicked()
{

}

void AcquireStock::on_btnApply_clicked()
{

}

void AcquireStock::on_btnCancel_clicked()
{

}

void AcquireStock::loadSuppliers() {

}

void AcquireStock::loadProducts() {

}
