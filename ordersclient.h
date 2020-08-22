#ifndef ORDERSCLIENT_H
#define ORDERSCLIENT_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class OrdersClient;
}

class OrdersClient : public QDialog
{
    Q_OBJECT

public:
    explicit OrdersClient(QWidget *parent, loggedUser &currentUser, bool &discountEnabled, bool &rewardsEnabled,
            bool &businessAuthorizedRewardPayment);
    ~OrdersClient();

private:
    Ui::OrdersClient *ui;
};

#endif // ORDERSCLIENT_H
