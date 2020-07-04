#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent, loggedUser &currentLoggedInUser) :
    QMainWindow(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    adminUser=new loggedUser;

    *adminUser = currentLoggedInUser;

    QTimer *timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()), this, SLOT(showAdminTime()));
        timer->start();
    ui->lbl_myusername->setText(adminUser->username);
    QPixmap mypix(adminUser->user_avatar);
    ui->lbl_current_avatar->setPixmap(mypix.scaled(ui->lbl_current_avatar->size(), Qt::KeepAspectRatio));
    ui->lbl_myavatar->setPixmap(mypix.scaled(ui->lbl_myavatar->size(), Qt::KeepAspectRatio));
    mainWindowConnection = new databaseConnection;
    loadUsersDataFromDb();
    loadAllProducts();
    loadTransactionTypes();
    loadProductCategory();
    loadSuppliers();
    loadZones();
}

AdminWindow::~AdminWindow()
{
    delete ui;
}
void AdminWindow::showAdminTime() {

    QTime admintime= QTime::currentTime();
    QString time_text = admintime.toString("hh: mm: ss");
    QDate admindate = QDate::currentDate();
    QString currentDate = admindate.toString("dd /MM /yyyy");

    if((admintime.second()%2)==0){
        time_text[2]=' ';
        time_text[6]=' ';
    }
    ui->lbl_date->setText(time_text);
    ui->lbl_time->setText(currentDate);
}

void AdminWindow::on_pushButton_dashboard_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void AdminWindow::on_pushButton_users_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
void AdminWindow::on_pushButton_products_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void AdminWindow::on_pushButton_stock_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void AdminWindow::on_pushButton_customers_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
void AdminWindow::on_btn_transactions_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void AdminWindow::on_pushButton_agents_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}

void AdminWindow::on_pushButton_sales_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void AdminWindow::on_pushButton_orders_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
}

void AdminWindow::on_pushButton_suppliers_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void AdminWindow::on_pushButton_openingClosing_clicked()
{
    ui->stackedWidget->setCurrentIndex(9);
}

void AdminWindow::on_pushButton_profitsManager_clicked()
{
    ui->stackedWidget->setCurrentIndex(10);
}

void AdminWindow::on_pushButton_creditManager_clicked()
{
    ui->stackedWidget->setCurrentIndex(11);
}

void AdminWindow::on_pushButton_infoCenter_clicked()
{
    ui->stackedWidget->setCurrentIndex(12);
}

void AdminWindow::on_pushButton_assets_clicked()
{
    ui->stackedWidget->setCurrentIndex(13);
}

void AdminWindow::on_pushButton_businessWorth_clicked()
{
    ui->stackedWidget->setCurrentIndex(14);
}

void AdminWindow::on_pushButton_be_a_cashier_clicked()
{

}
void AdminWindow::on_pushbutton_logout_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    emit send_admin_logged_out();
}

void AdminWindow::on_pushButton_addNewUser_clicked()
{
    addUser = new AddNewUser(this, *adminUser);
    addUser->setModal(true);
    addUser->show();
    QObject::connect(addUser, SIGNAL(sendUserAdditionComplete()), this,
                     SLOT(userAddedFromAddUser()));
}
void AdminWindow::loadCashiers(){
    ui->tableWidgetCashiers->horizontalHeader()->setVisible(true);
    ui->tableWidgetCashiers->horizontalHeader()->setDefaultSectionSize(120);
    ui->tableWidgetCashiers->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QString databaseCashiers = "cashier";
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(user_id) FROM users WHERE user_role = :userRole"));
        query.bindValue(":userRole", databaseCashiers);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()){
                num_rows=query.value(0).toInt();
                ui->tableWidgetCashiers->setRowCount(num_rows);

                query.prepare("SELECT O.user_id, O.name, O.phone, O.email, O.username, O.user_role, O.avatar"
                              ",E.name, O.created_on, O.user_status, O.modifiedBy_authorizing_user_id, O.modified_on "
                              "FROM users O, users E WHERE O.user_role=:userRole AND O.createdBy_user_id = E.user_id"
                              "");
                query.bindValue(":userRole", databaseCashiers);
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{
                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<13; columns++){
                            if(columns==12){
                                QPushButton* btn_viewCahier = new QPushButton;
                                btn_viewCahier->setText("View");
                                ui->tableWidgetCashiers->setCellWidget(rows, 12, btn_viewCahier);
                                QObject::connect(btn_viewCahier, &QPushButton::clicked, this, &AdminWindow::viewCashier);
                            }
                            ui->tableWidgetCashiers->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));

                        }
                    }
                }
            }
        }
    }
}
void AdminWindow::loadSupervisors() {
    ui->tw_supervisors->horizontalHeader()->setVisible(true);
    ui->tw_supervisors->horizontalHeader()->setDefaultSectionSize(120);
    ui->tw_supervisors->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QString databeSupervisors = "supervisor";
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(user_id) FROM users WHERE user_role = :userRole"));
        query.bindValue(":userRole", databeSupervisors);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()){
                num_rows=query.value(0).toInt();
                ui->tw_supervisors->setRowCount(num_rows);

                query.prepare("SELECT O.user_id, O.name, O.phone, O.email, O.username, O.user_role, O.avatar"
                              ",E.name, O.created_on, O.user_status, O.modifiedBy_authorizing_user_id, O.modified_on "
                              "FROM users O, users E WHERE O.user_role=:userRole AND O.createdBy_user_id = E.user_id"
                              "");
                query.bindValue(":userRole", databeSupervisors);
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{
                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<13; columns++){
                            if(columns==12){
                                QPushButton* btnViewSupervisor = new QPushButton;
                                btnViewSupervisor->setText("View");
                                ui->tw_supervisors->setCellWidget(rows, 12, btnViewSupervisor);
                                QObject::connect(btnViewSupervisor, &QPushButton::clicked, this, &AdminWindow::viewSupervisor);
                            }
                            ui->tw_supervisors->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));

                        }
                    }
                }
            }
        }
    }
}

void AdminWindow::loadAdmins() {
    ui->tw_admins->horizontalHeader()->setVisible(true);
    ui->tw_admins->horizontalHeader()->setDefaultSectionSize(120);
    ui->tw_admins->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QString databaseAdmins = "admin";
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(user_id) FROM users WHERE user_role = :userRole"));
        query.bindValue(":userRole", databaseAdmins);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()){
                num_rows=query.value(0).toInt();
                ui->tw_admins->setRowCount(num_rows);

                query.prepare("SELECT O.user_id, O.name, O.phone, O.email, O.username, O.user_role, O.avatar"
                              ",E.name, O.created_on, O.user_status, O.modifiedBy_authorizing_user_id, O.modified_on "
                              "FROM users O, users E WHERE O.user_role=:userRole AND O.createdBy_user_id = E.user_id"
                              "");
                query.bindValue(":userRole", databaseAdmins);
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{
                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<13; columns++){
                            if(columns==12){
                                QPushButton* btnViewAdmin = new QPushButton;
                                btnViewAdmin->setText("View");
                                ui->tw_admins->setCellWidget(rows, 12, btnViewAdmin);
                                QObject::connect(btnViewAdmin, &QPushButton::clicked, this, &AdminWindow::viewAdmin);
                            }
                            ui->tw_admins->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));

                        }
                    }
                }
            }
        }
    }
}

void AdminWindow::loadSuperAdmins() {
    ui->tw_superadmins->horizontalHeader()->setVisible(true);
    ui->tw_superadmins->horizontalHeader()->setDefaultSectionSize(120);
    ui->tw_superadmins->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QString databaseSuperAdmin = "superadmin";
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(user_id) FROM users WHERE user_role = :userRole"));
        query.bindValue(":userRole", databaseSuperAdmin);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()){
                num_rows=query.value(0).toInt();
                ui->tw_superadmins->setRowCount(num_rows);

                query.prepare("SELECT O.user_id, O.name, O.phone, O.email, O.username, O.user_role, O.avatar"
                              ",E.name, O.created_on, O.user_status, O.modifiedBy_authorizing_user_id, O.modified_on "
                              "FROM users O, users E WHERE O.user_role=:userRole AND O.createdBy_user_id = E.user_id"
                              "");
                query.bindValue(":userRole", databaseSuperAdmin);
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{
                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<13; columns++){
                            if(columns==12){
                                QPushButton* btnViewSuperAdmin = new QPushButton;
                                btnViewSuperAdmin->setText("View");
                                ui->tw_superadmins->setCellWidget(rows, 12, btnViewSuperAdmin);
                                QObject::connect(btnViewSuperAdmin, &QPushButton::clicked, this, &AdminWindow::viewSuperAdmin);
                            }
                            ui->tw_superadmins->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));

                        }
                    }
                }
            }
        }
    }
}

void AdminWindow::userAddedFromAddUser() {
    loadUsersDataFromDb();
    addUser->close();
}

void AdminWindow::on_btn_loadUsers_clicked()
{
    loadCashiers();
}
void AdminWindow::viewSupervisor() {
    int row;
    int col;
    for(row=0; row<ui->tw_supervisors->rowCount(); row++){
        for(col=0; col<ui->tw_supervisors->columnCount(); col++){

            if(sender() == ui->tw_supervisors->cellWidget(row,col)){
                currentViewUserId = ui->tw_supervisors->item(row, 0)->text();
                grabUserToView();
                viewUser->setModal(true);
                viewUser->show();
                Debug(currentViewUserId);
            }
        }
    }
}

void AdminWindow::viewAdmin() {
    int row;
    int col;
    for(row=0; row<ui->tw_admins->rowCount(); row++){
        for(col=0; col<ui->tableWidgetCashiers->columnCount(); col++){

            if(sender() == ui->tw_admins->cellWidget(row,col)){
                currentViewUserId = ui->tw_admins->item(row, 0)->text();
                grabUserToView();
                viewUser->setModal(true);
                viewUser->show();
                Debug(currentViewUserId);
            }
        }
    }
}

void AdminWindow::viewSuperAdmin() {
    int row;
    int col;
    for(row=0; row<ui->tw_superadmins->rowCount(); row++){
        for(col=0; col<ui->tableWidgetCashiers->columnCount(); col++){

            if(sender() == ui->tw_superadmins->cellWidget(row,col)){
                currentViewUserId = ui->tw_superadmins->item(row, 0)->text();
                grabUserToView();
                viewUser->setModal(true);
                viewUser->show();
                Debug(currentViewUserId);
            }
        }
    }
}

void AdminWindow::viewCashier() {
    int row;
    int col;
    for(row=0; row<ui->tableWidgetCashiers->rowCount(); row++){
        for(col=0; col<ui->tableWidgetCashiers->columnCount(); col++){

            if(sender() == ui->tableWidgetCashiers->cellWidget(row,col)){
                currentViewUserId = ui->tableWidgetCashiers->item(row, 0)->text();
                grabUserToView();
                viewUser->setModal(true);
                viewUser->show();
                Debug(currentViewUserId);
            }
        }
    }
}

void AdminWindow::grabUserToView() {
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
//    query.prepare(QString("SELECT * FROM users WHERE user_id = :userId"));

    query.prepare("SELECT O.user_id, O.name, O.phone, O.email, O.username, O.user_role, O.avatar"
                  ",E.name, O.created_on, O.user_status, O.password, O.modifiedBy_authorizing_user_id, O.modified_on "
                  "FROM users O, users E WHERE O.user_id=:userId AND O.createdBy_user_id = E.user_id"
                  "");

    query.bindValue(":userId", currentViewUserId);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else{
        while(query.next()){
            currentUserView = new posUser;
            currentUserView->user_id = query.value(0).toInt();
            currentUserView->name = query.value(1).toString();
            currentUserView->phone = query.value(2).toString();
            currentUserView->email=query.value(3).toString();
            currentUserView->username = query.value(4).toString();
//            currentUserView->password = query.value(5).toString();
            currentUserView->user_role = query.value(5).toString();
            currentUserView->avatar = query.value(6).toString();
            currentUserView->timestamp = query.value(8).toDateTime();
            currentUserView->user_status = query.value(9).toString();
            currentUserView->password = query.value(10).toString();
//            currentUserView->admin_id = query.value(7).toInt();
            currentUserView->authorizingAdmin = query.value(7).toString();

            viewUser = new ViewUser(this, *adminUser, *currentUserView);
        }
    }
    QObject::connect(viewUser, SIGNAL(sendDelitionComplete()), this, SLOT(receiveUserDeleted()));
}

void AdminWindow::on_btn_viewProfile_clicked()
{
    profileViewer = new ProfileViewer(this, *adminUser);
    profileViewer->setModal(true);
    profileViewer->show();
    QObject::connect(profileViewer, SIGNAL(sendAvatarChanged(QString*)), this, SLOT(receiveNewAvatar(QString*)));
}

void AdminWindow::receiveNewAvatar(QString *newAvatar) {
    QPixmap mypix(*newAvatar);
    ui->lbl_current_avatar->setPixmap(mypix.scaled(ui->lbl_current_avatar->size(), Qt::KeepAspectRatio));
    ui->lbl_myavatar->setPixmap(mypix.scaled(ui->lbl_myavatar->size(), Qt::KeepAspectRatio));
}

void AdminWindow::receiveNewPhone(QString *newPhone) {

}

void AdminWindow::receiveNewPassword(QString *newPassword) {

}

void AdminWindow::receiveNewusername(QString *newUsername) {

}

void AdminWindow::loadAllProducts() {
    if(mainWindowConnection->conn_open()){
        QSqlQuery queryOne(QSqlDatabase::database("MyConnect"));
        queryOne.prepare(QString("SELECT COUNT(product_id) FROM products"));
        if(!queryOne.exec()){
            QMessageBox::critical(this, "Database Error", queryOne.lastError().text());
            return;
        }else{
            while (queryOne.next()){
                numrowsAllProducts=queryOne.value(0).toInt();
                ui->tableWidget_allProducts->setRowCount(numrowsAllProducts);
                QSqlQuery query(QSqlDatabase::database("MyConnect"));
                query.prepare(QString("SELECT  products.product_id, products.productName,products.productCategory, products.productZone,"
                                      "products.productBarcode, products.productShortCode, products.productMeasurement,"
                                      " products.productWSPrice, products.productRPrice,"
                                      "products.productImage, productDiscounts.amount,  productRewards.reward_amount FROM ((products LEFT JOIN productDiscounts ON"
                                      " products.product_id = productDiscounts.product_id)LEFT JOIN productRewards ON"
                                      " productRewards.product_id=products.product_id)"));
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                    Debug(query.lastError());
                }else{
                    for(allProductsRows=0, query.first(); query.isValid(); query.next(), allProductsRows++){
                        for(allProductsColumns=0; allProductsColumns<13; allProductsColumns++){
                            if(allProductsColumns==12){
                                QPushButton* btn_edit_allProducts = new QPushButton;
                                btn_edit_allProducts->setText("View");
                                ui->tableWidget_allProducts->setCellWidget(allProductsRows, 12, btn_edit_allProducts);
                                QObject::connect(btn_edit_allProducts, &QPushButton::clicked, this, &AdminWindow::on_btn_viewFromAllProductsClicked);
                            }
                            ui->tableWidget_allProducts->setItem(allProductsRows, allProductsColumns, new QTableWidgetItem(query.value(allProductsColumns).toString()));

                        }
                    }
                }
            }
        }
    }
}
void AdminWindow::on_btn_viewFromAllProductsClicked() {
//    DO MEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE
    int row;
    int col;
    for(row=0; row<ui->tableWidget_allProducts->rowCount(); row++){
        for(col=0; col<ui->tableWidget_allProducts->columnCount(); col++){
            if(sender() == ui->tableWidget_allProducts->cellWidget(row,col)){
                currentProductViewId = ui->tableWidget_allProducts->item(row, 0)->text();
                grabAllProductsProductToView();
                viewProduct->setModal(true);
                viewProduct->show();
            }
        }
    }
}
void AdminWindow::grabAllProductsProductToView() {
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT  products.product_id, products.productName, products.productCategory, products.productZone, "
                          "products.productBarcode, products.productShortCode, products.productMeasurement,"
                          " products.productWSPrice, products.productRPrice,"
                          "products.productImage, productDiscounts.amount,  productRewards.reward_amount, products.productUpdatedById, products.productUpdatedOnDate FROM ((products LEFT JOIN productDiscounts ON"
                          " products.product_id = productDiscounts.product_id)LEFT JOIN productRewards ON"
                          " productRewards.product_id=products.product_id)  WHERE products.product_id = :productId"));
    query.bindValue(":productId", currentProductViewId);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else{
        while(query.next()){;
            productToView = new productFromDb;
            productToView->product_id = query.value(0).toString();
            productToView->product_name = query.value(1).toString();
            productToView->product_category = query.value(2).toString();
            productToView->productZone = query.value(3).toString();
            productToView->product_barcode = query.value(4).toString();
            productToView->product_shortcode = query.value(5).toString();
            productToView->product_quantity = query.value(6).toString();
            productToView->product_wsprice = query.value(7).toDouble();
            productToView->product_rtprice = query.value(8).toDouble();
            productToView->product_image = query.value(9).toString();
            productToView->product_discount = query.value(10).toDouble();
            productToView->product_rewards = query.value(11).toDouble();
            productToView->modifiedBy = query.value(12).toInt();
            productToView->modifiedAt = query.value(13).toDateTime();
            viewProduct = new ViewProduct(this, *adminUser, *productToView);
        }
    }
    QObject::connect(viewProduct, SIGNAL(reloadProductWithNewValues(int)), this, SLOT(receiveReloadProductWithNewValues(int)));
}

void AdminWindow::receiveReloadProductWithNewValues(int productId) {
    loadAllProducts();
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT  products.product_id, products.productName, products.productCategory, products.productZone, "
                          "products.productBarcode, products.productShortCode, products.productMeasurement,"
                          " products.productWSPrice, products.productRPrice,"
                          "products.productImage, productDiscounts.amount,  productRewards.reward_amount, products.productUpdatedById, products.productUpdatedOnDate FROM ((products LEFT JOIN productDiscounts ON"
                          " products.product_id = productDiscounts.product_id)LEFT JOIN productRewards ON"
                          " productRewards.product_id=products.product_id)  WHERE products.product_id = :productId"));
    query.bindValue(":productId", productId);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else{
        while(query.next()){
            productToView->product_id = query.value(0).toString();
            productToView->product_name = query.value(1).toString();
            productToView->product_category = query.value(2).toString();
            productToView->productZone = query.value(3).toString();
            productToView->product_barcode = query.value(4).toString();
            productToView->product_shortcode = query.value(5).toString();
            productToView->product_quantity = query.value(6).toString();
            productToView->product_wsprice = query.value(7).toDouble();
            productToView->product_rtprice = query.value(8).toDouble();
            productToView->product_image = query.value(9).toString();
            productToView->product_discount = query.value(10).toDouble();
            productToView->product_rewards = query.value(11).toDouble();
            productToView->modifiedBy = query.value(12).toInt();
            productToView->modifiedAt = query.value(13).toDateTime();

            viewProduct = new ViewProduct(this, *adminUser, *productToView);
            viewProduct->setModal(true);
            viewProduct->hideButtons();
            viewProduct->show();
        }
    }
}
void AdminWindow::on_pb_addNewProducts_clicked()
{
    addProduct = new AddProduct(this, *adminUser);
    addProduct->setModal(true);
    addProduct->show();
//    addNewProduct = new AddNewProduct(this, *adminUser);
//    addNewProduct->setModal(true);
//    addNewProduct->show();
    QObject::connect(addProduct, SIGNAL(productAdditionCompleted()), this, SLOT(receiveProdAdditionComplete()));
}


void AdminWindow::on_pb_testButton_clicked()
{
    salesClient = new SalesClient(this, *adminUser);
    salesClient->show();
    salesClient->showMaximized();
    this->hide();
    QObject::connect(salesClient, SIGNAL(send_salesClientClosed()), this, SLOT(receive_salesClientClosed()));
}

void AdminWindow::receive_salesClientClosed() {
    salesClient->close();
    this->show();
}
void AdminWindow::on_pb_addTransactionTypes_clicked()
{
    addTransactionType = new AddTransactionType(this, *adminUser);
    addTransactionType->setModal(true);
    addTransactionType->show();
    QObject::connect(addTransactionType, SIGNAL(send_addingTransactionTypeComplete()), this,
            SLOT(receiveLoadTransactionTypeAfterAddingNew()));

}
void AdminWindow::receiveLoadTransactionTypeAfterAddingNew() {
    this->loadTransactionTypes();
    addTransactionType->close();
}

void AdminWindow::on_pb_loadTransactionTypes_clicked()
{

}

void AdminWindow::loadTransactionTypes() {
    ui->tw_transactionTypes->horizontalHeader()->setVisible(true);
    ui->tw_transactionTypes->horizontalHeader()->setDefaultSectionSize(200);
    ui->tw_transactionTypes->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(trans_type_id) FROM transaction_type"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()){
                int num_transaction_type_rows = query.value(0).toInt();
                ui->tw_transactionTypes->setRowCount(num_transaction_type_rows);
                query.prepare("SELECT transaction_type.transaction_type, transaction_type.effect, users.username FROM (transaction_type "
                              "INNER JOIN users ON transaction_type.user_id = users.user_id)");
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{

                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<5; columns++){
                            if(columns==3){
                                QPushButton* btn_viewTransaction = new QPushButton;
                                btn_viewTransaction->setText("View");
                                ui->tw_transactionTypes->setCellWidget(rows, 3, btn_viewTransaction);
                                QObject::connect(btn_viewTransaction, &QPushButton::clicked, this, &AdminWindow::receiveViewTransType);
                            }else if(columns==4){
                                QPushButton* btn_deleteTransType = new QPushButton;
                                btn_deleteTransType->setText("Delete");
                                ui->tw_transactionTypes->setCellWidget(rows, 4, btn_deleteTransType);
                                QObject::connect(btn_deleteTransType, &QPushButton::clicked, this, &AdminWindow::receiveDeleteTransType);
                            }
                            ui->tw_transactionTypes->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));

                        }
                    }
                }
            }
        }

    }
}

void AdminWindow::viewTransactionType() {
}

void AdminWindow::receiveViewTransType() {
    LOGx("view requested");

}

void AdminWindow::receiveDeleteTransType() {

    int row;
    int col;
    for(row=0; row<ui->tw_transactionTypes->rowCount(); row++){
        for(col=0; col<ui->tw_transactionTypes->columnCount(); col++){
            if(sender() == ui->tw_transactionTypes->cellWidget(row,col)){
                QString currentTransactionType = ui->tw_transactionTypes->item(row, 0)->text();
                deleteTransactionType(currentTransactionType);
            }
        }
    }
    this->loadTransactionTypes();

}

void AdminWindow::deleteTransactionType(QString &currentTransType) {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Delete Data", "This Process CANNOT be undone. Are you sure?",
                                 QMessageBox::Yes | QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("DELETE FROM transaction_type WHERE "
                              "transaction_type = :currentTransactionType"));
        query.bindValue(":currentTransactionType", currentTransType);
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        } else {
            while (query.next()) {
                QMessageBox::information(this, "Successfully Deleted!", "Record Successfully Deleted!");

            }
            LOGx("delete requested");
        }
    }else{
        return;
    }

}

void AdminWindow::loadUsersDataFromDb() {
    loadSuperAdmins();
    loadAdmins();
    loadSupervisors();
    loadCashiers();
}

void AdminWindow::receiveUserDeleted() {
    LOGx("deletion communicated back");
    viewUser->close();
    loadUsersDataFromDb();
}




void AdminWindow::on_btnAddCategory_clicked()
{
    addProductCategory = new AddProductCategory(this, *adminUser);
    addProductCategory->setModal(true);
    addProductCategory->show();
    QObject::connect(addProductCategory, SIGNAL(productCategoryOperationsComplete()), this,
            SLOT(receiveOperationsCompleteAddProductCategory()));
}

void AdminWindow::receiveOperationsCompleteAddProductCategory() {
//IMPLEMENT LOAD TRANSACTION TYPES
    loadProductCategory();
    addProductCategory->close();
}

void AdminWindow::loadProductCategory() {
    ui->twProductCategory->horizontalHeader()->setVisible(true);
    ui->twProductCategory->horizontalHeader()->setDefaultSectionSize(200);
    ui->twProductCategory->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(category_id) FROM product_category"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()){
                int num_transaction_type_rows = query.value(0).toInt();
                ui->twProductCategory->setRowCount(num_transaction_type_rows);
                query.prepare("SELECT product_category.category, product_category.description, users.name FROM (product_category "
                              "INNER JOIN users ON product_category.user_id = users.user_id)");
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{

                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<5; columns++){
                            if(columns==3){
                                QPushButton* btn_viewProductCategory = new QPushButton;
                                btn_viewProductCategory->setText("Edit");
                                ui->twProductCategory->setCellWidget(rows, 3, btn_viewProductCategory);
                                QObject::connect(btn_viewProductCategory, &QPushButton::clicked, this, &AdminWindow::receive_editProductCategory);
                            }else if(columns==4){
                                QPushButton* btn_deleteProductCategory = new QPushButton;
                                btn_deleteProductCategory->setText("Delete");
                                ui->twProductCategory->setCellWidget(rows, 4, btn_deleteProductCategory);
                                QObject::connect(btn_deleteProductCategory, &QPushButton::clicked, this, &AdminWindow::receive_deleteProductCategory);
                            }
                            ui->twProductCategory->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));

                        }
                    }
                }
            }
        }

    }
}

void AdminWindow::editProductCategory(QString& productCategory) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT category_id, category, description FROM product_category WHERE "
                              "category = :currentCategory"));
        query.bindValue(":currentCategory", productCategory);
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        } else {
            while (query.next()) {
                category = new QString;
                description = new QString;
                category_id = new int;
                *category_id = query.value(0).toInt();
                *category = query.value(1).toString();
                *description = query.value(2).toString();
                editCategory = new EditProductCategory(this, *adminUser,*category, *description, *category_id);
                editCategory->show();
                QObject::connect(editCategory, SIGNAL(editJobCompleted()), this, SLOT(receiveEditCategoryComplete()));
            }
        }
}

void AdminWindow::deleteProductCategory(QString& productCategory) {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Delete Category", "This Process CANNOT be undone. Are you sure?",
                                 QMessageBox::Yes | QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("DELETE FROM product_category WHERE "
                              "category = :currentCategory"));
        query.bindValue(":currentCategory", productCategory);
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        } else {
            while (query.next()) {
                QMessageBox::information(this, "Successfully Deleted!", "Category Successfully Deleted!");

            }
            LOGx("delete requested");
        }
    }else{
        return;
    }
}

void AdminWindow::receive_editProductCategory() {
    int row;
    int col;
    for(row=0; row<ui->twProductCategory->rowCount(); row++){
        for(col=0; col<ui->twProductCategory->columnCount(); col++){
            if(sender() == ui->twProductCategory->cellWidget(row,col)){
                QString currentProductCategory = ui->twProductCategory->item(row, 0)->text();
                editProductCategory(currentProductCategory);
            }
        }
    }
    this->loadProductCategory();
}

void AdminWindow::receive_deleteProductCategory() {
    int row;
    int col;
    for(row=0; row<ui->twProductCategory->rowCount(); row++){
        for(col=0; col<ui->twProductCategory->columnCount(); col++){
            if(sender() == ui->twProductCategory->cellWidget(row,col)){
                QString currentProductCategory = ui->twProductCategory->item(row, 0)->text();
                deleteProductCategory(currentProductCategory);
            }
        }
    }
    this->loadProductCategory();
}

void AdminWindow::receiveEditCategoryComplete() {
    this->loadProductCategory();
    editCategory->close();
}

void AdminWindow::receiveProdAdditionComplete() {
    loadAllProducts();
    addProduct->close();

}

void AdminWindow::on_btnAddSupplier_clicked()
{
    addNewSupplier = new AddSupplier(this, *adminUser);
    addNewSupplier->setModal(true);
    addNewSupplier->show();
    QObject::connect(addNewSupplier, SIGNAL(supplierAdditionSuccess()), this, SLOT(receiveSupplierWorkComplete()));


}

void AdminWindow::loadSuppliers() {
    ui->twSuppliers->horizontalHeader()->setVisible(true);
    ui->twSuppliers->horizontalHeader()->setDefaultSectionSize(120);
    ui->twSuppliers->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QSqlQuery queryOne(QSqlDatabase::database("MyConnect"));
        queryOne.prepare(QString("SELECT COUNT(supplier_id) FROM suppliers"));
        if(!queryOne.exec()){
            QMessageBox::critical(this, "Database Error", queryOne.lastError().text());
            return;
        }else{
            while(queryOne.next()){
                int num_transaction_type_rows = queryOne.value(0).toInt();
                ui->twSuppliers->setRowCount(num_transaction_type_rows);
                QSqlQuery query(QSqlDatabase::database("MyConnect"));
                query.prepare("SELECT supplier_id, name, alias, company, phone, email, product_supplied FROM suppliers");
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                    Debug(query.lastError());
                }else{
                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<11; columns++){
                            if(columns==10) {
                                QPushButton *btn_viewProductCategory = new QPushButton;
                                btn_viewProductCategory->setText("View");
                                ui->twSuppliers->setCellWidget(rows, 10, btn_viewProductCategory);
                                QObject::connect(btn_viewProductCategory, &QPushButton::clicked, this,
                                                 &AdminWindow::receiveViewSupplier);
                            }
                            ui->twSuppliers->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));
                        }
                    }

                }

            }}
        }

    }


void AdminWindow::receiveViewSupplier() {
//    viewSupplier = new ViewSupplier(this, *adminUser, *edi);
//    viewSupplier->setModal(true);
//    viewSupplier->show();
}

void AdminWindow::receiveSupplierWorkComplete() {
    addNewSupplier->close();
    loadSuppliers();
}

void AdminWindow::on_btnAcquireStock_clicked()
{
    acquireStock = new AcquireStock(this, *adminUser);
    acquireStock->setModal(true);
    acquireStock->show();
}

void AdminWindow::on_btnAddZone_clicked()
{
    addZone = new AddProductZone(this, *adminUser);
    addZone->setModal(true);
    addZone->show();

    QObject::connect(addZone, SIGNAL(zoneAdditionComplete()), this, SLOT(receiveZoneWorkComplete()));

}

void AdminWindow::receiveZoneWorkComplete() {
    loadZones();
    addZone->close();
}

void AdminWindow::loadZones() {
    ui->twProductZones->horizontalHeader()->setVisible(true);
    ui->twProductZones->horizontalHeader()->setDefaultSectionSize(200);
    ui->twProductZones->horizontalHeader()->setStretchLastSection(true);
    if(mainWindowConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(zone_id) FROM product_zone"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()){
                int num_transaction_type_rows = query.value(0).toInt();
                ui->twProductZones->setRowCount(num_transaction_type_rows);
                query.prepare("SELECT product_zone.zone_name, product_zone.zone_description, users.name FROM (product_zone "
                              "INNER JOIN users ON product_zone.user_id = users.user_id)");
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{

                    for(rows=0, query.first(); query.isValid(); query.next(), rows++){
                        for(columns=0; columns<5; columns++){
                            if(columns==3){
                                QPushButton* btn_viewProductCategory = new QPushButton;
                                btn_viewProductCategory->setText("Edit");
                                ui->twProductZones->setCellWidget(rows, 3, btn_viewProductCategory);
                                QObject::connect(btn_viewProductCategory, &QPushButton::clicked, this, &AdminWindow::receiveEditProductZone);
                            }else if(columns==4){
                                QPushButton* btn_deleteProductCategory = new QPushButton;
                                btn_deleteProductCategory->setText("Delete");
                                ui->twProductZones->setCellWidget(rows, 4, btn_deleteProductCategory);
                                QObject::connect(btn_deleteProductCategory, &QPushButton::clicked, this, &AdminWindow::receiveDeleteProductZone);
                            }
                            ui->twProductZones->setItem(rows, columns, new QTableWidgetItem(query.value(columns).toString()));

                        }
                    }
                }
            }
        }

    }
}

void AdminWindow::on_btn_ProductsCenter_clicked()
{
    ui->stackedWidget->setCurrentIndex(16);
}

void AdminWindow::receiveEditProductZone() {
    int row;
    int col;
    for(row=0; row<ui->twProductZones->rowCount(); row++){
        for(col=0; col<ui->twProductZones->columnCount(); col++){
            if(sender() == ui->twProductZones->cellWidget(row,col)){
                QString currentProductZone = ui->twProductZones->item(row, 0)->text();
                editProductZone(currentProductZone);
            }
        }
    }
}

void AdminWindow::receiveDeleteProductZone() {
    int row;
    int col;
    for(row=0; row<ui->twProductZones->rowCount(); row++){
        for(col=0; col<ui->twProductZones->columnCount(); col++){
            if(sender() == ui->twProductZones->cellWidget(row,col)){
                QString currentProductZone = ui->twProductZones->item(row, 0)->text();
                deleteProductZone(currentProductZone);
            }
        }
    }
    this->loadZones();
}

void AdminWindow::deleteProductZone(QString& productZone) {
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this, "Delete Zone", "This Process CANNOT be undone. Are you sure?",
                                 QMessageBox::Yes | QMessageBox::Cancel);
    if (reply == QMessageBox::Yes) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("DELETE FROM product_zone WHERE "
                              "zone_name = :currentProductZone"));
        query.bindValue(":currentProductZone", productZone);
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        } else {
            while (query.next()) {
                QMessageBox::information(this, "Successfully Deleted!", "Product Zone Successfully Deleted!");

            }
        }
    }else{
        return;
    }
}

void AdminWindow::editProductZone(QString& productZone) {
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT zone_id, zone_name, zone_description FROM product_zone WHERE "
                          "zone_name = :currentProductZone"));
    query.bindValue(":currentProductZone", productZone);
    if (!query.exec()) {
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    } else {
        while (query.next()) {



            prodZone = new QString;
            zoneDescription = new QString;
            zoneId = new int;
            *zoneId = query.value(0).toInt();
            *prodZone = query.value(1).toString();
            *zoneDescription = query.value(2).toString();
            editProdZone = new EditProductZone(this, *adminUser,*prodZone, *zoneDescription, *zoneId);
            editProdZone->setModal(true);
            editProdZone->show();
            QObject::connect(editProdZone, SIGNAL(editJobComplete()), this, SLOT(receiveZoneEditComplete()));
        }
    }
}

void AdminWindow::receiveZoneEditComplete() {
    loadZones();
    editProdZone->close();
}

void AdminWindow::on_btnAddProdcts_clicked()
{
//REMEMBER TO DELETE
}

void AdminWindow::on_btnAddCash_clicked()
{
    addCashToBusiness = new AddCash(this, *adminUser);
    addCashToBusiness->setModal(true);
    addCashToBusiness->show();
}
