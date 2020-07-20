#ifndef CUSTOMERVIEWCHOICE_H
#define CUSTOMERVIEWCHOICE_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
#include <QCompleter>
#include <customerviewone.h>
//#include <QMessageBox>
#include "customerviewall.h"
namespace Ui {
class CustomerViewChoice;
}

class CustomerViewChoice : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerViewChoice(QWidget *parent , loggedUser &currentLoggedInUser);
    ~CustomerViewChoice();

private slots:
    void on_btnViewAllCustomers_clicked();

    void on_btnCloseWindow_clicked();

    void on_btnOkay_clicked();

private:
    databaseConnection* customerViewerChoice;
    Ui::CustomerViewChoice *ui;
    loggedUser* currentUser;
    void loadCustomersToCompleter();
    QCompleter* customersCompleter;
    QString* customerName;

    void loadOneCustomer(QString &);
    Customer* customerToView;
    CustomerViewOne* viewCustomer;
    QString* customerPhoneToView;
    void openSingleCustomerViewer();

private slots:
    void receiveCustomerViewClosed();
    void receiveCloseCustomerViewer();
signals:
    void sendCloseViewCustomerWindow();


private:
    CustomerViewAll* viewAllCustomers;
};

#endif // CUSTOMERVIEWCHOICE_H
