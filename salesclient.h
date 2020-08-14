#ifndef SALESCLIENT_H
#define SALESCLIENT_H

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
#include <map>
#include <QCompleter>
#include "debugger.h"
#include "databaseconnection.h"
#include "completepaymentwindow.h"
#include "addcustomer.h"
#include "customerviewall.h"
#include "customerviewone.h"
#include "customerviewchoice.h"
#include "sessioncontrol.h"
#include "existingsessionverifier.h"
namespace Ui {
class SalesClient;
}

class SalesClient : public QMainWindow
{
    Q_OBJECT

public:
    explicit SalesClient(QWidget *parent, loggedUser &currentLoggedInUser);
    ~SalesClient();

private:
    Ui::SalesClient *ui;
private:
    void closeEvent(QCloseEvent *event);
signals:
    void send_salesClientClosed();

private:
    databaseConnection* salesConnection;
    void loadItemsFromDbToCompleter();

private:
    void scannedProductManagement(QString &, int& databaseId, int & stockAvailable);
    std::map<int, int>*itemsBought;
    void modifyProductInRowCreated( int &rowAffected, int &quantityValue);
    int initial_quantity=1;
    void createRowsToAddProductPurchased(int& quantityValue);
    int currentRowBeingInserted;
    int* totalToPay;
    void addProductInRowCreated( int &rowCreated, int& quantityPurchased);
    void getScannedProductFromDB(QString barcodeScanned);
    QString uniqueID;
    QString *addedProductName;
    int *addedProductId;
    QString *productQuantity;
    QString* discountOnItem;
    QString* pointsOnItem;
    QString* unitPrice;
    QString *itemTotalPrice;
    QString *itemQuantityPurchased;
    int *productPrice;
    int productId;
    QString productName;
    QString *customerPhone;
    QCompleter *completer;
    QCompleter *customerCompleter;
    QStandardItemModel *model;
    QStandardItem *item;
    productFromDb* addedProduct;
    loggedUser* currentCashierUser;
private:
    void goToPaymentAndCompleteSale();
    CompletePaymentWindow* completePayment;
    QMap<int, QString> productsCompleter;
    QStringListModel* completerList;

private slots:
    void grabBarcodeFromEntry();
    void on_btnCompleteSales_clicked();
    void addCompleterProductToSales(std::map<QString, int>&);
    void on_btn_addNewCustomer_clicked();
    void showTime();
    void on_btn_viewCustomers_clicked();

    void receiveCustomerAdditionComplete();
    void receiveCustomerSingleViewComplete();

private:
    void addProductToCart();
    loggedUser* currentUser;
    AddCustomer* addNewCustomer;

    void addProductFromCompleter();
    void grabBarcodeFromCompleter(QString&);
    QString* barCodeFromName;
    QString* processedProduct;
    float* unitDiscount;
    float* unitReward;
    float* discountTotal;
    float* rewardTotal;
    float* unitSubTotal;
    float* totalTax;

private:
    CustomerViewChoice* customerViewChoice;
signals:
    void customerAdditionViaSalesClientComplete();

private:
    void reduceQuantityAndUpdateValues();
    void increaseQuantityAndUpdateValues();
    void deleteQuantityAndUpdateValues();
    bool rowDefined = false;
    int* rowToEdit;
    int* rowToEditFromSelection;
    void modifyProductsInTableReduction(int &rowAffected, int &quantityValue);
    void deleteProductFromCart(int &rowAffected, int &quantityValue);

    void loadCustomersToCompleter();

private slots:
    void getRowToEdit();
    void reducedQuantityPurchased();
    void on_btnReduceQtyByOne_clicked();

    void on_btnOpenClose_clicked();

private:
    int* stockQuantityAvailable;
    void updateStockAndStockLogs(QString &, int &, int &);
    int* quantityToBeBought;
private:
    bool customerDefined = false;
    bool discountsEnabled = false;
    bool rewardsEnabled = false;
    bool rewardsPaymentOptionEnabled = false;
    bool wholesalePricesOption = false;
    bool rewardsPaymentAuthorizedByCustomer = false;
    bool thereIsOpenSession;

private:
    void disableSystems();
    void enableSystems();
    void checkLastSession();
    session* ongoingSession;
    session* newSession;
    QString* executionType;

private:
    SessionControl* sessionControl;
    QMessageBox * sessionStarter;

private slots:
    void enableSystemsCalled();
    void disableSystemsCalled();
    void receiveClosingComplete();
    void receiveOpeningComplete();

    void on_checkBoxEnableRewardPayment_toggled(bool checked);

    void on_checkBoxClientRewardAuthorization_toggled(bool checked);

    void on_checkBoxEnableDiscount_toggled(bool checked);

    void on_checkBoxEnableRewards_toggled(bool checked);

signals:
    void enableSystemsSent();
    void openingClosingDataChanged();

private:
    void openNewSession();
    void sessionStartControl();
    ExistingSessionVerifier* verifySession;
//SALES EXECUTION
private:
    QString *saleType;
    bool enableRewards;
    bool enableDiscounts;
    bool isCurrentCustomerDefined;
    bool clientAuthorizedPaymentByRewards;
    bool businessAuthorizedPaymentByRewards;
    void loadCustomerAgentFromCompleter(QString&);
    QString *customerAgentToServe;
    Customer* currentServingCustomer;
    void loadSingleCustomerFromDb(QString &customerPhone);
    QString* currentSaleId;
    void setCurrentSaleId();
    int* lastId;
    void establishWholesaleSale();
    void resetCashierRecords();
    void clearCustomerDetails();
    void clearSalesData();
    void setDefaultSalesValue();
    void setFocusForSales();

private:
    void addCustomerAndDefineClient();
    void selectLastCustomerAdded();
    void addNewCustomerToDatabase();
};


#endif // SALESCLIENT_H
