#ifndef SALESCLIENT_H
#define SALESCLIENT_H

#include <QMainWindow>
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
#include "debugger.h"
#include "databaseconnection.h"
#include "completepaymentwindow.h"
#include "addcustomer.h"
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
    void scannedProductManagement(QString& barcodeScanned);
    std::map<QString, int>*itemsBought;
    void modifyProductInRowCreated( int &rowAffected, int &quantityValue);
    int initial_quantity=1;
    void createRowsToAddProductPurchased(int& quantityValue);
    int currentRowBeingInserted;
    int* totalToPay;
    void addProductInRowCreated( int &rowCreated, int& quantityPurchased);
    void getScannedProductFromDB(QString barcodeScanned);
    QString uniqueID;
    QString *addedProductName;
    QString *productQuantity;
    QString* discountOnItem;
    QString* pointsOnItem;
    QString* unitPrice;
    QString *itemTotalPrice;
    QString *itemQuantityPurchased;
    int *productPrice;
    int productId;
    QString productName;
    QCompleter *completer;
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

private:
    void addProductToCart();
    loggedUser* currentUser;
    AddCustomer* addNewCustomer;
};

#endif // SALESCLIENT_H
