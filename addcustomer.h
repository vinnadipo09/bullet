#ifndef ADDCUSTOMER_H
#define ADDCUSTOMER_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class AddCustomer;
}

class AddCustomer : public QDialog
{
    Q_OBJECT

public:
    explicit AddCustomer(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AddCustomer();

private slots:
    void on_btnDiscard_clicked();
    void on_btnOkay_clicked();

private:
    Ui::AddCustomer *ui;
private:
    void checkForEmptyFields();
    void checkForDuplicatePhones(QString &);
    void addCustomerToDb();
    databaseConnection* addNewCustomerConnection;
    bool phoneExists = false;
    Customer* newCustomer;
    bool fieldEmpty = true;
    bool noCustomerTypeDefinition;
    loggedUser* currentUser;
    void loadCustomerTypesToCb();

private:
    bool customerAdded = false;
    bool creditUpdated = false;
    int* customerId;
    void addCustomerInitialCredit();
signals:
    void customerAdditionTaskComplete();
};

#endif // ADDCUSTOMER_H
