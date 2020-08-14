#ifndef SALESCENTER_H
#define SALESCENTER_H

#include <QDialog>
#include <QCompleter>
#include <QModelIndex>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QCloseEvent>
#include <QTableWidget>
#include <iostream>
#include <iterator>
#include <map>
#include <QCompleter>
#include <QMessageBox>
#include "debugger.h"
#include "databaseconnection.h"
#include "completepaymentwindow.h"
#include "addcustomer.h"
#include "customerviewall.h"
#include "customerviewone.h"
#include "customerviewchoice.h"
#include "sessioncontrol.h"
namespace Ui {
class SalesCenter;
}

class SalesCenter : public QDialog
{
    Q_OBJECT

public:
    explicit SalesCenter(QWidget *parent, loggedUser &currentLoggedInUser);
    ~SalesCenter();

private:
    Ui::SalesCenter *ui;
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
    void reduceQuantityPurchased();
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
    void receiveClosingComplete();
    void receiveOpeningComplete();

    void on_btnReduceQtyByOne_2_clicked();

signals:
    void enableSystemsSent();
    void openingClosingDataChanged();
};

#endif // SALESCENTER_H
