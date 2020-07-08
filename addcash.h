#ifndef ADDCASH_H
#define ADDCASH_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"

namespace Ui {
class AddCash;
}

class AddCash : public QDialog
{
    Q_OBJECT

public:
    explicit AddCash(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AddCash();

private slots:
    void on_btnApply_clicked();
    void on_btnCancel_clicked();

private:
    void loadTransactionTypesToCombobox();

private:
    Ui::AddCash *ui;
private:
    void loadTransactions();
    void loadCashFromDatabase();
    databaseConnection* addCashConnection;
    loggedUser* currentUser;
    QString* myTransaction;
    QString* myTransactionEffect;
    double * availableCash;
    double* addedCash;
    QString* executedTransaction;
    void checkForEmptyFields();
    void addCashToDatabase();

    bool transactionTypeSelected = false;
    bool cashValidated = false;
    bool cashValueDefined = false;
    void getInputInformation();
    void updateCashValue();

private:
    void handleInvestment();
    double *previousInvestmentTotal;
    double* currentInvestTotal;
    double *previousCashTotal;
    double* currentCashTotal;
    double* currentInvestment;
    bool investmentAddedSuccessfully = false;
    bool cashUpdatedSuccessfully = false;
    int* lastTransactionId;
private:
    QDateTime* transactionTime;

};

#endif // ADDCASH_H
