#include "ordersclient.h"
#include "ui_ordersclient.h"

OrdersClient::OrdersClient(QWidget *parent, loggedUser &currentUser, bool &discountEnabled, bool &rewardsEnabled,
bool &businessAuthorizedRewardPayment) :
    QDialog(parent),
    ui(new Ui::OrdersClient)
{
    ui->setupUi(this);
}

OrdersClient::~OrdersClient()
{
    delete ui;
}
