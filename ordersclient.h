#ifndef ORDERSCLIENT_H
#define ORDERSCLIENT_H

#include <QDialog>
#include <QMainWindow>
#include <QCompleter>
#include <QModelIndex>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QCloseEvent>
#include <QAbstractButton>
#include <QTableWidget>
#include <QMessageBox>
#include <iostream>
#include <iterator>
#include <QTimer>
#include <map>
#include <QCompleter>
#include "debugger.h"
#include "databaseconnection.h"
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
private:
    loggedUser* currentAuthorizedUser;
    bool* discountsEnabled;
    bool* rewardsEnabled;
    bool* rewardPaymentEnabled;

private:
    void closeEvent(QCloseEvent *event);
private slots:
    void showTime();
private:
    databaseConnection* ordersConnection;
    int* lastOrderId;
    int* currentOrderId;
    void loadOrderId();
    void loadItemsFromDbToCompleter();
    QString productName;
    QCompleter *completer;
    QString* processedProduct;

//    databaseConnection* salesConnection;
//    void loadItemsFromDbToCompleter();


private:
//    void scannedProductManagement(QString &, int& databaseId, int & stockAvailable);
//    std::map<int, purchasedItem>*orderedItems;
//    void modifyProductInRowCreated( int &rowAffected, int &quantityValue);
//    int initial_quantity=1;
//    void createRowsToAddProductPurchased(int& quantityValue);
//    int currentRowBeingInserted;
//    int* totalToPay;
//    void addProductInRowCreated( int &rowCreated, int& quantityPurchased);
//    void getScannedProductFromDB(QString barcodeScanned);
//    QString uniqueID;
//    QString *addedProductName;
//    int *addedProductId;
//    QString *productQuantity;
//    QString* discountOnItem;
//    QString* pointsOnItem;
//    QString* unitPrice;
//    QString *itemTotalPrice;
//    QString *itemQuantityPurchased;
//    int *productPrice;
//    int productId;
//    QString productName;
//    QString *customerPhone;
//    QCompleter *completer;
//    QCompleter *customerCompleter;
//    QStandardItemModel *model;
//    QStandardItem *item;
//    productFromDb* addedProduct;
//    loggedUser* currentCashierUser;

private:
//    void goToPaymentAndCompleteSale();
////    CompletePaymentWindow* completePayment;
//    QMap<int, QString> productsCompleter;
//    QStringListModel* completerList;

private slots:
//    void grabBarcodeFromEntry();
private:
//    void addProductToCart();
//    loggedUser* currentUser;
//    void addProductFromCompleter();
//    void grabBarcodeFromCompleter(QString&);
//    QString* barCodeFromName;
//    QString* processedProduct;
//    float* unitDiscount;
//    float* unitReward;
//    float* discountTotal;
//    float* rewardTotal;
//    float* unitSubTotal;
//    float* totalTax;
private:
//    CustomerViewChoice* customerViewChoice;
signals:
//    void customerAdditionViaSalesClientComplete();

private:
//    void reduceQuantityAndUpdateValues();
//    void increaseQuantityAndUpdateValues();
//    void deleteQuantityAndUpdateValues();
//    bool rowDefined = false;
//    int* rowToEdit;
//    int* rowToEditFromSelection;
//    void modifyProductsInTableReduction(int &rowAffected, int &quantityValue);
//    void deleteProductFromCart(int &rowAffected, int &quantityValue);
//
//    void loadCustomersToCompleter();

private slots:
//    void getRowToEdit();
//    void reducedQuantityPurchased();
//    void on_btnReduceQtyByOne_clicked();
//
//    void on_btnOpenClose_clicked();

private:
//    int* stockQuantityAvailable;
//    void updateStockAndStockLogs(QString &, int &, int &);
//    int* quantityToBeBought;
private:
//    bool customerDefined = false;
//    bool discountsEnabled = false;
//    bool rewardsEnabled = false;
//    bool rewardsPaymentOptionEnabled = false;
//    bool wholesalePricesOption = false;
//    bool rewardsPaymentAuthorizedByCustomer = false;
//    bool thereIsOpenSession;

private:
//    void disableSystems();
//    void enableSystems();
//    void checkLastSession();
//    session* ongoingSession;
//    session* newSession;
//    QString* executionType;

private:
//    QMessageBox * sessionStarter;

private slots:
//    void enableSystemsCalled();
//    void disableSystemsCalled();
//    void receiveClosingComplete();
//    void receiveOpeningComplete();


signals:
//    void enableSystemsSent();
//    void openingClosingDataChanged();

private:
//    void openNewSession();
//    void sessionStartControl();
//SALES EXECUTION
private:
//    QString *saleType;
//    bool *enableRewards;
//    bool *enableDiscounts;
//    bool isCurrentCustomerDefined;
//    bool clientAuthorizedPaymentByRewards;
//    bool *businessAuthorizedPaymentByRewards;
//    void loadCustomerAgentFromCompleter(QString&);
//    QString *customerAgentToServe;
//    Customer* currentServingCustomer;
//    void loadSingleCustomerFromDb(QString &customerPhone);
//    int* currentSaleId;
//    void setCurrentSaleId();
//    int* lastId;
//    void establishWholesaleSale();
//    void resetCashierRecords();
//    void clearCustomerDetails();
//    void clearSalesData();
//    void setDefaultSalesValue();
//    void setFocusForSales();

private:
//    void addCustomerAndDefineClient();
//    void selectLastCustomerAdded();
//    void addNewCustomerToDatabase();
//    bool addNewCustomerAtPurchase = false;
//    void loadLabelsWithCustomerData();


};

#endif // ORDERSCLIENT_H
