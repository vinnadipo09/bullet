#ifndef ORDERSCENTER_H
#define ORDERSCENTER_H

#include <QMainWindow>
#include <QModelIndex>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QCloseEvent>
#include <QAbstractButton>
#include <QTableWidget>
#include <QMessageBox>
#include <iostream>
#include <iterator>
#include <map>
#include <QFocusEvent>
#include <QKeyEvent>
#include "debugger.h"
#include "databaseconnection.h"
#include "completepaymentwindow.h"
#include "addcustomer.h"
#include "customerviewall.h"
#include "customerviewone.h"
#include "customerviewchoice.h"
#include "sessioncontrol.h"
#include "existingsessionverifier.h"
#include "ordersclient.h"
#include "quantitycontrol.h"
#include "adminauthentication.h"

namespace Ui {
class OrdersCenter;
}

class OrdersCenter : public QMainWindow
{
    Q_OBJECT

public:
    explicit OrdersCenter(QWidget *parent, loggedUser &currentLoggedInUser, bool &, bool &, bool&);
    ~OrdersCenter();
private:
    loggedUser* currentAuthorizedUser;
    bool* discountsEnabled;
    bool* rewardsEnabled;
    bool* rewardPaymentEnabled;
    bool* business_auth_rewards;

private:
    void closeEvent(QCloseEvent *event);
private slots:
    void showTime();
    void grabBarcodeFromEntry();

private:
    databaseConnection* ordersConnection;
    int* lastOrderId;
    int* currentOrderId;
    void loadOrderId();
    void loadItemsFromDbToCompleter();
    QString productName;
    QCompleter *completer;
    QString* processedProduct;

private:
    std::map<int, purchasedItem>*itemsOrdered;
    productFromDb* scannedProduct;
    QString uniqueID;
    int initial_quantity=1;
    float* discountTotal;
    float* rewardTotal;
    float* totalToPay;
    int currentRowBeingInserted;
    int* originallyAssignedQty;
    productFromDb* addedProduct;
    float* unitSubTotal;
    int* priorityRow;


private:
    void scannedProductManagement(QString& barcode, int & currentProductId, int & stockAvailable);
    void modifyProductInRowCreated(int &rowAffected, int &quantityValue);
    void createRowsToAddProductPurchased(int &quantityValue);
    void addProductInRowCreated(int &rowCreated, int &quantityPurchased);
    void checkOutOrder();
    void loadCustomerToCompleter();
    void getScannedProductFromDb(QString &barcodeScanned);
    void increaseProductInExistingRow(int &rowAffected, int &quantityValue);
    QString *saleType;

private:
    Ui::OrdersCenter *ui;
};

#endif // ORDERSCENTER_H
