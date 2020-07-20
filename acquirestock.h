#ifndef ACQUIRESTOCK_H
#define ACQUIRESTOCK_H

#include <QDialog>
#include <iostream>
#include <iterator>
#include <map>
#include <QCompleter>
#include <QCalendarWidget>
#include "databaseconnection.h"
#include "debugger.h"
namespace Ui {
class AcquireStock;
}

class AcquireStock : public QDialog
{
    Q_OBJECT

public:
    explicit AcquireStock(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AcquireStock();

private slots:
    void on_btnCalender_clicked();
    void on_btnApply_clicked();
    void on_btnCancel_clicked();
    void grabCurrentDate();

    void on_btnClear_clicked();
    void on_btnSix_clicked();
    void on_btnTwelve_clicked();
    void on_btnTwentyFour_clicked();
    void on_btnThirtySix_clicked();
    void on_btnFortyEight_clicked();

private:
    Ui::AcquireStock *ui;
private:
    databaseConnection* stockAcquisitionConnection;
    loggedUser* currentUser;
    QCalendarWidget *calendar;

private:
    void loadSuppliers();
    void loadProducts();

private:
    QString* phoneNumber;
    QString* product;
    QCompleter *SupplierCompleter;
    QCompleter *ProductCompleter;

private:
    void grabStockDetails();
    void checkIfAllFieldsAreCaptured();
    bool allFieldsCaptured = false;


private:
    int* qtySupplied;
    acquiredStock* newStock;
    int* supplierId;
    int* productId;
    void changePaymentValuesToDefault();


private slots:
    void paymentChanged(int);
    void resetPayment();
    void setCredit();
    void setCash();

private:
    double* stockAmount;
    double* cashAmount;
    double* creditAmount;
    void resolveProduct();
    void resolveSupplier();
    void resolveStock();
    void updateStockQuantity();
    bool productResolved = false;
    bool supplierResolved = false;
private:
    void postCash();
    void postCredit();
    void postCashCredit();
    void fetchCashFromDatabase();
    void fetchCreditFromDatabase();

private:
    double* availableCash;
    double* totalCredit;
private:
    void updateCashAcquisition();
    void updateCreditAcquisition();
    int* stockQuantityAvailable;
    int* stockQuantityUpdated;
    int* productIdToUpdateInStock;
    int* acquisitionId;
    double* newCashTotalAfterStockPurchase;
    bool acquisitionIdObtained = false;
    bool stockCashAcquisitionComplete = false;

    void resolveAcquisition();

    void reduceCash();
    void increaseCredit();
    void resolveDebt();
    double* currentTotalDebt;
    double* newTotalDebt;
    bool debtSuccessfullyFetchedFromDb = false;

    bool cashReductionAndStockPostSuccessful = false;
    bool cashStockAcquisitionSuccessful = false;
    bool creditStockAcquisitionSuccessful = false;
    bool cashCreditStockAcquisitionSuccessful = false;
    int* intResolvedProductId;
    int* intResolvedSupplierId;
    bool stockQuantityAcquired = false;
    bool stockQuantitySuccessfullyUpdated = false;
    void updateStockLogs();
    bool stockLogUpdated = false;
    bool cashCreditPostSuccessful = false;
    bool cashPostSuccessful = false;
    bool creditPostSuccessful = false;
signals:
    void stockAcquisitionTaskComplete();

//NOT USED YET/ CLEAN UP
private:
    void updateCashCreditAcquisition();
    void updateStock();
    bool cashSuffices = false;
    bool cashPurchaseComplete = false;
    bool creditPurchaseComplete = false;
    bool cashCreditComplete = false;
    int* stockQuantityAdded;
    bool cashSuccessfullyUpdated;
    bool stockAdditionSuccessful = false;
    void postPaymentToTable();
    void resolveDatabaseValues();
    bool paymentSelected = false;
    QString* supplierName;


};

#endif // ACQUIRESTOCK_H
