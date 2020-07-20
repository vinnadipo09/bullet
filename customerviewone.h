#ifndef CUSTOMERVIEWONE_H
#define CUSTOMERVIEWONE_H

#include <QDialog>
#include <QCloseEvent>
//#include <QMessageBox>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class CustomerViewOne;
}

class CustomerViewOne : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerViewOne(QWidget *parent , loggedUser &currentLoggedInUser, Customer &currentCustomer);
    ~CustomerViewOne();

private:
    Ui::CustomerViewOne *ui;

private:
    loggedUser* currentUser;
    Customer* currentCustomerView;
    void closeEvent(QCloseEvent *event);

signals:
    void closeCustomerViewRequested();
    void sendCloseCustomerView();
};

#endif // CUSTOMERVIEWONE_H
