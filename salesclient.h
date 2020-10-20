#ifndef SALESCLIENT_H
#define SALESCLIENT_H

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
#include "orderscenter.h"
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
    std::map<int, purchasedItem>*itemsBought;
    void increaseProductInExistingRow( int &rowAffected, int &quantityValue);
    void decreaseProductInExistingRow( int &rowAffected, int &quantityValue);
    void maintainProductInExistingRow( int &rowAffected, int &quantityValue);
    int initial_quantity=1;
    void createRowsToAddProductPurchased(int& quantityValue);
    int currentRowBeingInserted;
    int* totalToPay;
    void addProductInRowCreated( int &rowCreated, int& quantityPurchased);
    void getScannedProductFromDB(QString barcodeScanned);
    QString uniqueID;
    QString* discountOnItem;
    QString* pointsOnItem;
    QString *itemTotalPrice;
    QString *itemQuantityPurchased;
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
//    void on_btnReduceQtyByOne_clicked();

    void on_btnOpenClose_clicked();

private:
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

//    void on_btnPlaceOrder_clicked();

    void on_btnViewPlacedOrders_clicked();

    void on_btnViewProcessedOrders_clicked();

    void on_btnViewDeliveredOrders_clicked();

    void on_actionOrder_Center_triggered();

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
    bool *enableRewards;
    bool *enableDiscounts;
    bool isCurrentCustomerDefined;
    bool clientAuthorizedPaymentByRewards;
    bool *businessAuthorizedPaymentByRewards;
    void loadCustomerAgentFromCompleter(QString&);
    QString *customerAgentToServe;
    Customer* currentServingCustomer;
    void loadSingleCustomerFromDb(QString &customerPhone);
    int* currentSaleId;
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
    bool addNewCustomerAtPurchase = false;
    void loadLabelsWithCustomerData();

private:
    OrdersClient* orderClient;
    //  QUANTITY CONTROL
private:
    QuantityControl* quantityControl;
    void modifyItemQuantity(int &productId, int &currentQty, int current_row);
    void keyPressEvent(QKeyEvent *event);
    int* productId_to_modify;
    int* productQty_to_modify;
    int tableRows;
    int row_to_modify;
    int product_id_to_modify;
    int quantity_available;
    int quantity_assigned;
    ModifiedQuantity beforeModification;
    //    ModifiedQuantity increaseItemQuantity();
    void alteredProductManagement(int & currentProductId, int & stockAvailable, int &newQty);
    int* quantityChange;
    int* originallyAssignedQty;
    int* priorityRow;
    void deleteProductFromCart(int & rowAffected, int &productId, int &subTotal, int &rewards, int &discount);
    void setUpdatedSalesValues();
private slots:
    void receiveQtyChange(int & productId, int &originalQty, int &newQty);
    void on_tableWidget_cellActivated(int row, int column);

    void on_cbAdminPriviledges_stateChanged(int arg1);

    void on_cbAdminPriviledges_clicked();

    void receiveAdminAuthenticationSuccessful();
    void receiveAdminAuthenticationFailed();

private:
    void updateDiscountEnable(int & productId, int & quantityBought);
    void updateDiscountDisable(int & productId);
    void updateRewardsEnable(int & productId, int & quantityBought);
    void updateRewardsDisable(int & productId);
    void updateRewardsMidway(std::map<int, purchasedItem>&itemsBought);
    void updateDiscountsMidway(std::map<int, purchasedItem>&itemsBought);
    void changeToWholesaleMidway(std::map<int, purchasedItem>&itemsBought);
    void changeToRetailMidway(std::map<int, purchasedItem>&itemsBought);

    bool* discountEnabledBeforeWholesale;
    bool* rewardsEnabledBeforeWholesale;
    bool* rewardsPaymentEnabledBeforeWholesale;

    void setToWholesaleMigration();
    void setToRetailMigration();

    void setWholesalePrices(std::map<int, purchasedItem> &itemsBought);
    void obtainWholesaleValuesAndUpdateTable(int & productId);

    void setRetailPrices(std::map<int, purchasedItem> &itemsBought);
    void obtainRetailValuesAndUpdateTable(int & productId);

    void toWholeSaleDisableSystems();
    void fromWholeSaleEnableSystems();

private:
    void addLimitsToCombobox();
    void setDefaultMinimumRewardLimit();
    void setDefaultMaximumCredit();

private:
    AdminAuthentication* adminAuthentication;
    int* minimumRewardForPayment;
    int* maximumCreditAllowedByBusiness;
private:
    OrdersCenter* ordersCenter;
    void delete_item_from_dialog();
private slots:
    void edit_item_in_row(int row, int column);
    void on_btn_queue_one_clicked();
    void on_btn_queue_two_clicked();
    void on_btn_queue_three_clicked();
    void on_btn_queue_four_clicked();

    void on_btnQueueSale_clicked();

private:
    std::map<int, bool>*queue_control;
    void initialize_queue(std::map<int, bool> &);
    void check_empty_queue(std::map<int, bool> &);
    void load_queue(int &);
    std::map<int, queue_item> *queue_items;
    bool check_queue_occupied();
    int free_queue;
    int *occupied_queues;
    void set_queue_button(int &);
    void update_queue_control(int &);
    bool queue_available = false;
    void reset_sale_values();
    void restore_queue_client(int &, std::map<int, queue_item> &);
    void check_if_sale_in_progress();
    void complete_queue_restoration(int &, std::map<int, queue_item> &);
    bool sale_in_progress = false;
    void load_items_with_predefined_quantity(QString &, int&);
    void empty_queue(int&);
    bool queue_one_occupied = false;
    bool queue_two_occupied = false;
    bool queue_three_occupied = false;
    bool queue_four_occupied = false;
    void set_queue_status_to_occupied(std::map<int, queue_item>&);








    bool check_if_products_on_table();
    bool products_on_table;
;
    //get products bought-all data
    //get discount enabled-if was enabled and now disabled
    //get customer data if defined
    //leave current id
    //assign a button
    //check if queue one is free
    //check if two is free
    //check if any quee is occupied
    //data pushed to a new vector


};


#endif // SALESCLIENT_H
