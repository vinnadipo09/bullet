#ifndef CUSTOMERVIEWALL_H
#define CUSTOMERVIEWALL_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
#include <QMessageBox>
namespace Ui {
class CustomerViewAll;
}

class CustomerViewAll : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerViewAll(QWidget *parent , loggedUser &currentLoggedInUser);
    ~CustomerViewAll();

private:
    Ui::CustomerViewAll *ui;

private:
    void loadAllCustomers();
    databaseConnection* allViewConnection;
    loggedUser* currentUser;
    int rows, columns;

private slots:
    void receiveViewCustomer();
};

#endif // CUSTOMERVIEWALL_H
