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
    QString* supplierName;
    QString* phoneNumber;
    QString* product;
    QCompleter *SupplierCompleter;
    QCompleter *ProductCompleter;

private:
    void grabStockDetails();
    void checkIfAllFieldsAreCaptured();
    void resolveDatabaseValues();
    bool allFieldsCaptured = false;
    bool stockAdditionSuccessful = false;
    void postPaymentToTable();
private:
    int* qtySupplied;
    bool paymentSelected = false;
    acquiredStock* newStock;
    int* supplierId;
    int* productId;


private slots:
    void paymentChanged(int);


};

#endif // ACQUIRESTOCK_H
