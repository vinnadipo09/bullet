#include "customerviewone.h"
#include "ui_customerviewone.h"

CustomerViewOne::CustomerViewOne(QWidget *parent, loggedUser &currentLoggedInUser, Customer &currentCustomer) :
    QDialog(parent),
    ui(new Ui::CustomerViewOne)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    currentCustomerView = new Customer;
    *currentUser = currentLoggedInUser;
    *currentCustomerView = currentCustomer;
    //SOME WORK TO DO FROM ORDERS AND REWARDS AND DEBTS
    ui->lblName->setText(currentCustomerView->name);
    ui->lblPhone->setText(currentCustomerView->phone);
    ui->lblCusType->setText(currentCustomerView->customerType);
    ui->lblCreditAllowed->setText(QString::number(currentCustomerView->creditAllowed));
    ui->lblCreditRating->setText(QString::number(currentCustomerView->creditRating));
    ui->lblAwardsAccrued->setText(QString::number(currentCustomerView->rewardsAvailable));
    ui->lblCashOnBusiness->setText(QString::number(currentCustomerView->cashOnBusiness));
//    ui->lblPendingOrders->setText(QString::number(currentCustomerView->ordersId));
//    ui->lblName->setText(currentCustomerView->name);
}

CustomerViewOne::~CustomerViewOne()
{
    delete currentCustomerView;
    delete ui;
}

void CustomerViewOne::closeEvent(QCloseEvent *event) {
    QMessageBox msgBox;
    msgBox.setText("What Next!");
    msgBox.setInformativeText("View another Client ?");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    int ret = msgBox.exec();
    switch (ret) {
        case QMessageBox::Yes:
            event->accept();
            emit closeCustomerViewRequested();
            break;
        case QMessageBox::No:
            LOGx("signal one sent");
            emit sendCloseCustomerView();

//            return;
            break;
        default:
            LOGx("Program broken");
            // should never be reached
            break;
    }
}

