#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDateTime>
#include <QTimer>
#include <QHeaderView>
#include"debugger.h"
#include"addnewuser.h"
#include"databaseconnection.h"
#include"viewuser.h"
#include "profileviewer.h"
#include "viewproduct.h"
#include "salesclient.h"
#include "addtransactiontype.h"
#include "addproductcategory.h"
#include "editproductcategory.h"
#include "addsupplier.h"
#include "viewsupplier.h"
#include "acquirestock.h"
#include "addproductzone.h"
#include "editproductzone.h"
#include "addproduct.h"
#include "addcash.h"
namespace Ui {
class AdminWindow;
}

class AdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent, loggedUser &currentLoggedInUser);
    ~AdminWindow();

private slots:
    void on_pushButton_dashboard_clicked();
    void on_pushButton_users_clicked();
    void on_pushbutton_logout_clicked();
    void on_pushButton_addNewUser_clicked();
private:
    AddNewUser* addUser;
    loggedUser* adminUser;

    databaseConnection* mainWindowConnection;
    void loadCashiers();
    int num_rows;
    int rows;
    int columns;
    int column;
    int row;
    int currentRow;
    QString current_id;
private:
    Ui::AdminWindow *ui;
signals:
    void send_admin_logged_out();
private slots:
    void userAddedFromAddUser();
    void on_btn_loadUsers_clicked();
//    view user
    void on_btn_viewProfile_clicked();

private:
    ViewUser* viewUser;
    posUser* currentUserView;
    QString currentViewUserId;
    void grabUserToView();
private slots:
    void showAdminTime();
    void receiveNewAvatar(QString* newAvatar);
    void receiveNewPhone(QString* newPhone);
    void receiveNewPassword(QString* newPassword);
    void receiveNewusername(QString* newUsername);

//    view profile
    void on_pushButton_products_clicked();
    void on_pushButton_stock_clicked();
    void on_pushButton_customers_clicked();
    void on_pushButton_agents_clicked();
    void on_pushButton_sales_clicked();
    void on_pushButton_orders_clicked();
    void on_pushButton_suppliers_clicked();
    void on_pushButton_openingClosing_clicked();
    void on_pushButton_profitsManager_clicked();
    void on_pushButton_creditManager_clicked();
    void on_pushButton_infoCenter_clicked();
    void on_pushButton_assets_clicked();
    void on_pushButton_businessWorth_clicked();
    void on_pushButton_be_a_cashier_clicked();

private:
//    products section
    void loadAllProducts();
    int numrowsAllProducts;
    int allProductsRows;
    int allProductsColumns;
    void grabAllProductsProductToView();
    QString currentProductViewId;
    productFromDb* productToView;
    ViewProduct* viewProduct;
    ViewProduct* viewProduct2;
//    Add new product
private slots:
    void receiveProdAdditionComplete();
private slots:
    void on_btn_viewFromAllProductsClicked();
    void on_pb_addNewProducts_clicked();
    void receive_salesClientClosed();
    void receiveLoadTransactionTypeAfterAddingNew();
    void receiveUserDeleted();


    void on_pb_testButton_clicked();

    void on_btn_transactions_clicked();

    void on_pb_addTransactionTypes_clicked();
    void on_pb_loadTransactionTypes_clicked();


private:
    ProfileViewer* profileViewer;
private:
    SalesClient* salesClient;
private:
    AddTransactionType* addTransactionType;
    void loadTransactionTypes();
    void viewTransactionType();
    void receiveViewTransType();
    void receiveDeleteTransType();
    void deleteTransactionType(QString &);

private:
    void loadSupervisors();
    void loadAdmins();
    void loadSuperAdmins();
private slots:
    void viewSupervisor();
    void viewAdmin();
    void viewSuperAdmin();
    void viewCashier();
    void on_btnAddCategory_clicked();
    void receiveOperationsCompleteAddProductCategory();

private:
    void loadUsersDataFromDb();
    AddProductCategory* addProductCategory;
    void loadProductCategory();
    void editProductCategory(QString&);
    void deleteProductCategory(QString&);
    EditProductCategory* editCategory;
    QString *category;
    QString* description;
    int* category_id;
private slots:
    void receive_editProductCategory();
    void receive_deleteProductCategory();
    void receiveEditCategoryComplete();
    void receiveReloadProductWithNewValues(int);
    void receiveViewSupplier();
    void receiveSupplierWorkComplete();

    void on_btnAddSupplier_clicked();

    void on_btnAcquireStock_clicked();

    void on_btnAddZone_clicked();

private:
    AddSupplier* addNewSupplier;
private:
    void loadSuppliers();

private:
    ViewSupplier* viewSupplier;
    AcquireStock* acquireStock;

private:
    AddProductZone* addZone;
    void loadZones();
    void deleteProductZone(QString&);
    void editProductZone(QString&);

private slots:
    void receiveZoneWorkComplete();
    void on_btn_ProductsCenter_clicked();
    void receiveEditProductZone();
    void receiveDeleteProductZone();
    void receiveZoneEditComplete();

    void on_btnAddProdcts_clicked();

    void on_btnAddCash_clicked();

private:
    EditProductZone* editProdZone;
    QString *prodZone;
    QString* zoneDescription;
    int* zoneId;
private:
    AddProduct* addProduct;
    AddCash* addCashToBusiness;
};

#endif // ADMINWINDOW_H
