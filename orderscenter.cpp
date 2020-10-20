#include "orderscenter.h"
#include "ui_orderscenter.h"

OrdersCenter::OrdersCenter(QWidget *parent, loggedUser &current_user, bool &enable_discounts, bool &enable_rewards, bool&business_reward_authorization) :
    QMainWindow(parent),
    ui(new Ui::OrdersCenter)
{
    ui->setupUi(this);
    this->setMinimumSize(1024, 768);
    this->showMaximized();

    currentAuthorizedUser = new loggedUser;
    discountsEnabled = new bool ;
    rewardsEnabled = new bool ;
    rewardPaymentEnabled = new bool;
    business_auth_rewards = new bool;

    *currentAuthorizedUser = current_user;
    *discountsEnabled = enable_discounts;
    *rewardsEnabled = enable_rewards;
    *business_auth_rewards = business_reward_authorization;

    scannedProduct = new productFromDb;

    ui->lbl_username->setText(currentAuthorizedUser->name);
    QPixmap mypix(currentAuthorizedUser->user_avatar);
    ui->lbl_avatar->setPixmap(mypix.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));
    ui->lbl_avatar->setPixmap(mypix.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));

    QTimer *timer = new QTimer(this);
    QObject::connect(timer,SIGNAL(timeout()), this, SLOT(showTime()));

    QObject::connect(ui->le_barcode, SIGNAL(returnPressed()),
                     this, SLOT(grabBarcodeFromEntry()));
    timer->start();
    ordersConnection = new databaseConnection;
    lastOrderId = new int;
    currentOrderId = new int;
    processedProduct = new QString;
    saleType = new QString;
    totalToPay = new float ;
    originallyAssignedQty = new int;
    discountTotal = new float;
    rewardTotal = new float;
    addedProduct = new productFromDb;
    unitSubTotal = new float;
    priorityRow = new int;
    itemsOrdered = new std::map<int, purchasedItem>;

    loadOrderId();
    ui->lbl_order_id->setText(QString::number(*currentOrderId));

    loadItemsFromDbToCompleter();
    //REMOVE
    *saleType = "Wholesale";

}

OrdersCenter::~OrdersCenter()
{
    delete ui;
}

void OrdersCenter::closeEvent(QCloseEvent *event) {
    QWidget::closeEvent(event);
}

void OrdersCenter::showTime() {
    QTime time= QTime::currentTime();
    QString time_text = time.toString("hh: mm: ss");
    QDate date = QDate::currentDate();
    QString currentDate = date.toString("dd /MM /yyyy");

    if((time.second()%2)==0){
        time_text[2]=' ';
        time_text[6]=' ';
    }
    ui->lbl_time->setText(time_text);
    ui->lbl_date->setText(currentDate);
}

void OrdersCenter::grabBarcodeFromEntry() {
    if (ui->le_barcode->text().isEmpty()&&uniqueID==""){
        QMessageBox::critical(this, "Barcode Empty Cell Error!", "No barcode entered. Please enter a valid barcode!");
    }else{
        uniqueID = ui->le_barcode->text();
        getScannedProductFromDb(uniqueID);
    }
}

void OrdersCenter::loadOrderId() {
    if(ordersConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT  IFNULL(orders.order_id, 0) FROM orders ORDER BY orders.order_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            *lastOrderId = query.value(0).toInt();
            *currentOrderId = *lastOrderId+1;
            while (query.next()){
                *lastOrderId = query.value(0).toInt();
                *currentOrderId = *lastOrderId+1;
            }
        }
    }
}

void OrdersCenter::loadItemsFromDbToCompleter() {
    QStringList completionList;
    if (ordersConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT productName FROM products"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + ordersConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                productName = query.value(0).toString();
                completionList<<productName;
            }
            completer = new QCompleter(completionList,this);
            completer->setCaseSensitivity(Qt::CaseInsensitive);
            completer->setFilterMode(Qt::MatchContains);
            ui->le_search_product->setCompleter(completer);
        }

    } else{
        qDebug() << "Failed to connect to database: " + ordersConnection->db.lastError().text();
    }

    connect(completer, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
                *processedProduct = text;
//                grabBarcodeFromCompleter(*processedProduct);
            });
}

void OrdersCenter::scannedProductManagement(QString &barcode, int &currentProductId, int &stockAvailable) {
    std::map<int, purchasedItem>::iterator it;
    it = itemsOrdered->find(currentProductId);
    if(it!=itemsOrdered->end()){
        *originallyAssignedQty = it->second.quantity_purchased;
        if(it->second.quantity_purchased+1<= stockAvailable){
            it->second.quantity_purchased +=1;
            int rowsSearch = ui->tableWidget->rowCount();
            for(int i = 0; i<rowsSearch; i++){
                if(ui->tableWidget->item(i,0)->text().toInt()==currentProductId){
                    LOGx("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");

                    increaseProductInExistingRow(i, it->second.quantity_purchased);
                }
            }
            ui->le_barcode->clear();
            ui->le_barcode->setFocus();
        }else{
            QMessageBox::critical(this, "Out of Stock Error!", "Manage your stock. The maximum available stock has been depleted!");
            ui->le_barcode->clear();
            ui->le_barcode->setFocus();
            return;
        }
    }else{
        purchasedItem myItem;
        if (*discountsEnabled && scannedProduct->discounted){
            myItem.prod_discounted = true;
            myItem.discount_amount = scannedProduct->product_discount;
            myItem.salePrice = scannedProduct->product_rtprice - scannedProduct->product_discount;
        }else{
            myItem.prod_discounted = false;
            myItem.discount_amount = 0;
            myItem.salePrice = scannedProduct->product_rtprice;
        }
        if(*rewardsEnabled && scannedProduct->rewarded){
            myItem.prod_rewarded = true;
            myItem.reward_amount = scannedProduct->product_rewards;
        }else{
            myItem.prod_rewarded = false;
            myItem.reward_amount = 0;
        }
        myItem.quantity_purchased = initial_quantity;
        itemsOrdered->insert(std::pair<int, purchasedItem>(currentProductId, myItem));
        createRowsToAddProductPurchased(initial_quantity);
        ui->le_barcode->clear();
        uniqueID = "";
        ui->le_barcode->setFocus();
    }
}

void OrdersCenter::modifyProductInRowCreated(int &rowAffected, int &quantityValue) {
    LOGx("CALLEDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDDD");
    float singleItemDiscount = 0;
    float singleItemReward = 0;
    int columnsToModifyProducts = 9;
    float singleItemDiscountTotal =0;
    float singleItemRewardsTotal =0;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==5){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==6){
            if(*discountsEnabled){
                singleItemDiscount = scannedProduct->product_discount;
                singleItemDiscountTotal= singleItemDiscount*quantityValue;
                *discountTotal = *discountTotal+singleItemDiscount;
                ui->lbl_discount->setText(QString::number(*discountTotal));
            } else{
                *discountTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemDiscountTotal));
        }else if(i==7){
            if (*rewardsEnabled){
                singleItemReward = scannedProduct->product_rewards;
                singleItemRewardsTotal = singleItemReward*quantityValue;
                *rewardTotal = *rewardTotal+singleItemReward;
                ui->lbl_possible_reward->setText(QString::number(*rewardTotal));

            }else{
//                *rewardTotal = singleItemReward*quantityValue;
                *rewardTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemRewardsTotal));
        }else if(i==8){
            float unitSubTotal;
            int unitPrice = ui->tableWidget->item(rowAffected, 4)->text().toInt();
            if(*discountsEnabled){
                unitSubTotal = (unitPrice-singleItemDiscount)*quantityValue;
            } else{
                unitSubTotal = unitPrice*quantityValue;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(unitSubTotal));
            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 4)->text().toInt();
            float tax = 0.16*(*totalToPay);
            float sale_value = *totalToPay - tax;

            QString tempTax = QString::number(tax, 'f', 2);
            QString tempSales = QString::number(sale_value, 'f', 2);
            ui->lbl_computed_total->setText(QString::number(*totalToPay)+".00");
            ui->lbl_sale_value->setText(tempSales);
            ui->lbl_sale_tax->setText(tempTax);
            ui->lbl_total->setText(QString::number(*totalToPay)+".00");
        }
    }
}

void OrdersCenter::getScannedProductFromDb(QString &barcodeScanned) {
    barcodeScanned = ui->le_barcode->text();
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT products.product_id, products.productName, products.productBarcode, products.productMeasurement, products.productWSPrice"
                          " , products.productRPrice, products.productImage, IFNULL(productDiscounts.amount, 0), IFNULL(productRewards.reward_amount, 0), stock.quantity  FROM products "
                          " LEFT JOIN productDiscounts ON productDiscounts.product_id=products.product_id "
                          " LEFT JOIN productRewards ON productRewards.product_id= products.product_id LEFT JOIN stock ON stock.product_id = products.product_id WHERE productBarcode = :scannedBarcode"));
    query.bindValue(":scannedBarcode", uniqueID);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else{
        while (query.next()) {
            scannedProduct->product_id = query.value(0).toInt();
            scannedProduct->product_name = query.value(1).toString();
            scannedProduct->product_barcode = query.value(2).toString();
            scannedProduct->product_quantity = query.value(3).toString();
            scannedProduct->product_wsprice = query.value(4).toInt();
            scannedProduct->product_rtprice = query.value(5).toInt();
            scannedProduct->product_image = query.value(6).toInt();
            scannedProduct->product_discount = query.value(7).toFloat();
            scannedProduct->product_rewards = query.value(8).toFloat();
            scannedProduct->stockQuantity = query.value(9).toFloat();

        }
        if(!QString::number(scannedProduct->product_id).isEmpty()){
            if(scannedProduct->stockQuantity>0){
                scannedProductManagement(barcodeScanned, scannedProduct->product_id, scannedProduct->stockQuantity);
            }else{
                QMessageBox::critical(this, "Out of Stock Error!", "Manage your stock. You are trying to sell a product out of stock!");
                return;
            }
        }else{

        }
    }
}

void OrdersCenter::loadCustomerToCompleter() {

}

void OrdersCenter::checkOutOrder() {

}

void OrdersCenter::addProductInRowCreated(int &rowCreated, int &quantityPurchased) {
    int columnsToAddProducts = 9;
    for(int i =0; i<columnsToAddProducts; i++){
        if (*saleType=="Retail"){
            if(i==0){
                QTableWidgetItem* idEntry = ui->tableWidget->item(rowCreated, i);
                if(!idEntry){
                    idEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, idEntry);
                }if(!scannedProduct->product_id==NULL){
                    idEntry->setText(QString::number(scannedProduct->product_id));
                }
            }else if(i==1){
                QTableWidgetItem* barCodeEntry = ui->tableWidget->item(rowCreated, i);
                if(!barCodeEntry){
                    barCodeEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, barCodeEntry);
                }if(!scannedProduct->product_barcode.isEmpty()){
                    barCodeEntry->setText(scannedProduct->product_barcode);
                }
            }else if(i==2) {
                QTableWidgetItem* descriptionEntry = ui->tableWidget->item(rowCreated, i);
                if(!descriptionEntry){
                    descriptionEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, descriptionEntry);
                }if(!scannedProduct->product_name.isEmpty()){
                    descriptionEntry->setText(scannedProduct->product_name);
                }
            }else if(i==3){
                QTableWidgetItem *measurementEntry = ui->tableWidget->item(rowCreated, i);
                if (!measurementEntry) {
                    measurementEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, measurementEntry);
                }
                if (!scannedProduct->product_quantity.isEmpty()) {
                    measurementEntry->setText(scannedProduct->product_quantity);
                }
            }else if(i==4) {
                QTableWidgetItem *unitPriceEntry = ui->tableWidget->item(rowCreated, i);
                if (!unitPriceEntry) {
                    unitPriceEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, unitPriceEntry);
                }
                if (scannedProduct->product_rtprice!=NULL) {
                    unitPriceEntry->setText(QString::number(scannedProduct->product_rtprice));
                }
            }else if(i==5) {
                QTableWidgetItem *itemQtyPurchased = ui->tableWidget->item(rowCreated, i);
                if(!itemQtyPurchased){
                    itemQtyPurchased = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, itemQtyPurchased);
                }
                int total = quantityPurchased*(scannedProduct->product_rtprice);
                QString tempQuantityPurchased = QString::number(initial_quantity);
                if(!tempQuantityPurchased.isEmpty()){
                    itemQtyPurchased->setText(tempQuantityPurchased);
                }
            }else if(i==6) {
                QString tempDiscount;
                QTableWidgetItem *discountEntry = ui->tableWidget->item(rowCreated, i);
                if(!discountEntry){
                    discountEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, discountEntry);
                }
                if (*discountsEnabled){
                    tempDiscount = QString::number(scannedProduct->product_discount);
                }else{
                    QString tempDiscount = QString::number(0);
                }
                if(!tempDiscount.isEmpty()){
                    discountEntry->setText(tempDiscount);
                }
            }else if(i==7) {
                QString tempPoints;
                QTableWidgetItem *rewardEntry = ui->tableWidget->item(rowCreated, i);
                if (!rewardEntry) {
                    rewardEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, rewardEntry);
                }
                if(*rewardsEnabled){
                    tempPoints = QString::number(scannedProduct->product_rewards);
                }else{
                    tempPoints = QString::number(0);
                }
                if (!tempPoints.isEmpty()) {
                    rewardEntry->setText(tempPoints);
                }
            }else if(i==8) {
                QString itemTotalPrice;
                QTableWidgetItem *unitSubTotalEntry = ui->tableWidget->item(rowCreated, i);
                if(!unitSubTotalEntry){
                    unitSubTotalEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, unitSubTotalEntry);
                }
                if(*discountsEnabled){
                    int total = quantityPurchased*(scannedProduct->product_rtprice-scannedProduct->product_discount);
                    itemTotalPrice = QString::number(total);
                }else{
                    int total = quantityPurchased*(scannedProduct->product_rtprice);
                    itemTotalPrice = QString::number(total);
                }

                if(!itemTotalPrice.isEmpty()){
                    unitSubTotalEntry->setText(itemTotalPrice);
                }
            }else{

            }
        }else if(*saleType=="Wholesale"){
            if(i==0){
                QTableWidgetItem* idEntry = ui->tableWidget->item(rowCreated, i);
                if(!idEntry){
                    idEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, idEntry);
                }if(scannedProduct->product_id==NULL){
                    idEntry->setText(QString::number(scannedProduct->product_id));
                }
            }else if(i==1){
                QTableWidgetItem* barCodeEntry = ui->tableWidget->item(rowCreated, i);
                if(!barCodeEntry){
                    barCodeEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, barCodeEntry);
                }if(!scannedProduct->product_barcode.isEmpty()){
                    barCodeEntry->setText(scannedProduct->product_barcode);
                }
            }else if(i==2) {
                QTableWidgetItem* descriptionEntry = ui->tableWidget->item(rowCreated, i);
                if(!descriptionEntry){
                    descriptionEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, descriptionEntry);
                }if(!scannedProduct->product_name.isEmpty()){
                    descriptionEntry->setText(scannedProduct->product_name);
                }
            }else if(i==3){
                QTableWidgetItem *measurementEntry = ui->tableWidget->item(rowCreated, i);
                if (!measurementEntry) {
                    measurementEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, measurementEntry);
                }
                if (!scannedProduct->product_quantity.isEmpty()) {
                    measurementEntry->setText(scannedProduct->product_quantity);
                }
            }else if(i==4) {
                QTableWidgetItem *unitPriceEntry = ui->tableWidget->item(rowCreated, i);
                if (!unitPriceEntry) {
                    unitPriceEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, unitPriceEntry);
                }
                if (scannedProduct->product_wsprice!=NULL) {
                    unitPriceEntry->setText(QString::number(scannedProduct->product_wsprice));
                }
            }else if(i==5) {
                QTableWidgetItem *itemQtyPurchased = ui->tableWidget->item(rowCreated, i);
                if(!itemQtyPurchased){
                    itemQtyPurchased = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, itemQtyPurchased);
                }
                int total = quantityPurchased*(scannedProduct->product_rtprice);
                QString tempQuantityPurchased = QString::number(quantityPurchased);
                if(!tempQuantityPurchased.isEmpty()){
                    itemQtyPurchased->setText(tempQuantityPurchased);
                }
            }else if(i==6) {
                QString tempDiscount;
                QTableWidgetItem *discountEntry = ui->tableWidget->item(rowCreated, i);
                if(!discountEntry){
                    discountEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, discountEntry);
                }
                if (*discountsEnabled){
                    tempDiscount = QString::number(scannedProduct->product_discount);
                }else{
                    tempDiscount = QString::number(0);
                }
                if(!tempDiscount.isEmpty()){
                    discountEntry->setText(tempDiscount);
                }
            }else if(i==7) {
                QString tempPoints;
                QTableWidgetItem *rewardEntry = ui->tableWidget->item(rowCreated, i);
                if (!rewardEntry) {
                    rewardEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, rewardEntry);
                }
                if(*rewardsEnabled){
                    tempPoints = QString::number(scannedProduct->product_rewards);
                }else{
                    tempPoints = QString::number(0);
                }
                if (!tempPoints.isEmpty()) {
                    rewardEntry->setText(tempPoints);
                }
            }else if(i==8) {
                QString itemTotalPrice;
                QTableWidgetItem *unitSubTotalEntry = ui->tableWidget->item(rowCreated, i);
                if(!unitSubTotalEntry){
                    unitSubTotalEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, unitSubTotalEntry);
                }
                if(*discountsEnabled){
                    int total = quantityPurchased*(scannedProduct->product_wsprice-scannedProduct->product_discount);
                    itemTotalPrice = QString::number(total);
                }else{
                    int total = quantityPurchased*(scannedProduct->product_rtprice);
                    itemTotalPrice = QString::number(total);
                }

                if(!itemTotalPrice.isEmpty()){
                    unitSubTotalEntry->setText(itemTotalPrice);
                }
            }else{

            }
        }else{
            QMessageBox::critical(this, "Sale Type Error", "You haven't selected the sale type(Retail/ Wholesale)");
//                should never get here
        }
    }
}

void OrdersCenter::createRowsToAddProductPurchased(int &quantityValue) {
    currentRowBeingInserted = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    addProductInRowCreated(currentRowBeingInserted, quantityValue);
    *totalToPay = *totalToPay + ui->tableWidget->item(currentRowBeingInserted, 4)->text().toInt();
    *rewardTotal = *rewardTotal+scannedProduct->product_rewards;
    *discountTotal = *discountTotal+scannedProduct->product_discount;
    ui->lbl_computed_total->setText(QString::number(*totalToPay)+".00");


    float tax = 0.16*(*totalToPay);
    float sale_value = *totalToPay - tax;

    QString tempTax = QString::number(tax, 'f', 2);
    QString tempSales = QString::number(sale_value, 'f', 2);
    ui->lbl_computed_total->setText(QString::number(*totalToPay)+".00");
    ui->lbl_sale_value->setText(tempSales);
    ui->lbl_sale_tax->setText(tempTax);
    ui->lbl_total->setText(QString::number(*totalToPay)+".00");
    if(*rewardsEnabled){
        ui->lbl_possible_reward->setText(QString::number(*rewardTotal));
    }
    if (*discountsEnabled){
        ui->lbl_discount->setText(QString::number(*discountTotal));
    }
    *priorityRow+=1;
}

void OrdersCenter::increaseProductInExistingRow(int &rowAffected, int &quantityValue) {
    LOGx("MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");

    float singleItemDiscount = 0;
    float singleItemReward = 0;
    int columnsToModifyProducts = 9;
    float singleItemDiscountTotal =0;
    float singleItemRewardsTotal =0;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==5){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==6){
            if(*discountsEnabled){
                singleItemDiscount = scannedProduct->product_discount;
                singleItemDiscountTotal= singleItemDiscount*quantityValue;
                *discountTotal = *discountTotal+singleItemDiscount;
                ui->lbl_discount->setText(QString::number(*discountTotal));
            } else{
                *discountTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemDiscountTotal));
        }else if(i==7){
            if (*rewardsEnabled){
                singleItemReward = scannedProduct->product_rewards;
                singleItemRewardsTotal = singleItemReward*quantityValue;
                *rewardTotal = *rewardTotal+singleItemReward;
                ui->lbl_possible_reward->setText(QString::number(*rewardTotal));

            }else{
//                *rewardTotal = singleItemReward*quantityValue;
                *rewardTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemRewardsTotal));
        }else if(i==8){
            int unitPrice = ui->tableWidget->item(rowAffected, 4)->text().toInt();
            if(*discountsEnabled){
                *unitSubTotal = (unitPrice-singleItemDiscount)*quantityValue;
            } else{
                *unitSubTotal = unitPrice*quantityValue;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*unitSubTotal));
            int modifiedQtyPrice = quantityValue-*originallyAssignedQty;
            *totalToPay = *totalToPay + (ui->tableWidget->item(rowAffected, 4)->text().toInt()*modifiedQtyPrice);
            float tax = 0.16*(*totalToPay);
            float sale_value = *totalToPay - tax;
            QString tempTax = QString::number(tax, 'f', 2);
            QString tempSales = QString::number(sale_value, 'f', 2);
            ui->lbl_computed_total->setText(QString::number(*totalToPay)+".00");
            ui->lbl_total->setText(tempSales);
            ui->lbl_sale_tax->setText(tempTax);
            ui->lbl_total->setText(QString::number(*totalToPay)+".00");
        }
    }
}
