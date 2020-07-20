#include "salesclient.h"
#include "ui_salesclient.h"

SalesClient::SalesClient(QWidget *parent, loggedUser &currentLoggedInUser) :
    QMainWindow(parent),
    ui(new Ui::SalesClient)
{
    ui->setupUi(this);
    this->showMaximized();
    this->setMinimumSize(1024, 768);

    salesConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    ui->lblUserName->setText(currentUser->name);
    QPixmap mypix(currentUser->user_avatar);
    ui->lblUserAvatar->setPixmap(mypix.scaled(ui->lblUserAvatar->size(), Qt::KeepAspectRatio));
    ui->lblUserAvatar->setPixmap(mypix.scaled(ui->lblUserAvatar->size(), Qt::KeepAspectRatio));

    ui->tableWidget->horizontalHeader()->setVisible(true);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(180);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    addedProduct = new productFromDb;
    addedProductName = new QString;
    productQuantity = new QString;
    addedProductId = new QString;
    discountOnItem= new QString;
    pointsOnItem= new QString;
    unitPrice = new QString;
    itemTotalPrice = new QString;
    itemQuantityPurchased = new QString;
    productPrice = new int;
    totalToPay = new int;
    currentCashierUser = new loggedUser;
    barCodeFromName = new QString;
    processedProduct = new QString;

    unitDiscount = new float ;
    unitReward = new float;
    unitSubTotal = new float;
    customerPhone = new QString;
    *currentCashierUser = currentLoggedInUser;
//    Debug(*currentCashierUser);

    *totalToPay = 0;
    itemsBought = new std::map<QString, int>;

    rewardTotal = new float ;
    discountTotal = new float ;
    stockQuantityAvailable = new int;
    loadItemsFromDbToCompleter();
    loadCustomersToCompleter();
    ui->le_barcodeEntry->setFocus();

    QObject::connect(ui->le_barcodeEntry, SIGNAL(returnPressed()),
                     this, SLOT(grabBarcodeFromEntry()));
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();
    rowToEdit = new int;
    rowToEditFromSelection = new int;
    QObject::connect(ui->tableWidget->selectionModel(), SIGNAL(selectionChanged(const QItemSelection&,
                                                                       const QItemSelection&)), SLOT(getRowToEdit()));
}

SalesClient::~SalesClient()
{
    delete ui;
}
void SalesClient::grabBarcodeFromEntry() {
    uniqueID = ui->le_barcodeEntry->text();
    getScannedProductFromDB(uniqueID);
}
void SalesClient::grabBarcodeFromCompleter(QString& currentProduct) {
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT products.product_id, products.productName, products.productBarcode, products.productMeasurement, products.productWSPrice"
                              ", products.productRPrice, products.productImage, productDiscounts.amount, productRewards.reward_amount FROM products "
                              "LEFT JOIN productDiscounts ON productDiscounts.product_id=products.product_id "
                              "LEFT JOIN productRewards ON productRewards.product_id= products.product_id WHERE productName = :currentProduct"));
        query.bindValue(":currentProduct", currentProduct);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()) {
                *barCodeFromName = query.value(4).toString();
                addedProduct->product_barcode = *barCodeFromName;
                addedProduct->product_id = query.value(0).toInt();
                addedProduct->product_name = query.value(1).toString();
                addedProduct->product_quantity = query.value(3).toString();
                addedProduct->product_wsprice = query.value(4).toInt();
                addedProduct->product_rtprice = query.value(5).toInt();
                addedProduct->product_image = query.value(6).toInt();
                addedProduct->product_discount = query.value(7).toInt();
                addedProduct->product_rewards = query.value(8).toInt();
                *addedProductName = addedProduct->product_name;
                *productQuantity = addedProduct->product_quantity;
                *productPrice = addedProduct->product_rtprice;
                *unitPrice = QString::number(*productPrice);

            }
            if(!addedProductName->isEmpty()){
                scannedProductManagement(*barCodeFromName);
            }else{

            }
        }
    }
}
void SalesClient::getScannedProductFromDB(QString barcodeScanned) {
    barcodeScanned = ui->le_barcodeEntry->text();
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT products.product_id, products.productName, products.productBarcode, products.productMeasurement, products.productWSPrice"
                          " , products.productRPrice, products.productImage, productDiscounts.amount, productRewards.reward_amount FROM products "
                          " LEFT JOIN productDiscounts ON productDiscounts.product_id=products.product_id "
                          " LEFT JOIN productRewards ON productRewards.product_id= products.product_id WHERE productBarcode = :scannedBarcode"));
    query.bindValue(":scannedBarcode", uniqueID);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else{
        while (query.next()) {
            addedProduct->product_id = query.value(0).toString();
            addedProduct->product_name = query.value(1).toString();
            addedProduct->product_barcode = query.value(2).toString();
            addedProduct->product_quantity = query.value(3).toString();
            addedProduct->product_wsprice = query.value(4).toInt();
            addedProduct->product_rtprice = query.value(5).toInt();
            addedProduct->product_image = query.value(6).toInt();
            addedProduct->product_discount = query.value(7).toFloat();
            addedProduct->product_rewards = query.value(8).toFloat();

            *addedProductId = addedProduct->product_id;
            *addedProductName = addedProduct->product_name;
            *productQuantity = addedProduct->product_quantity;
            *productPrice = addedProduct->product_rtprice;
            *unitPrice = QString::number(*productPrice);
            *unitReward = addedProduct->product_rewards;
            *unitDiscount = addedProduct->product_discount;
        }
        if(!addedProductName->isEmpty()){
            scannedProductManagement(barcodeScanned);
        }else{

        }
    }
}
void SalesClient::closeEvent(QCloseEvent *event) {
    QMessageBox msgBox;
    msgBox.setText("Closing Sales Window will discard all  your unsaved data!");
    msgBox.setInformativeText("Do you want to close the window anyway?");
    msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Cancel);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    int ret = msgBox.exec();
    switch (ret) {
        case QMessageBox::Close:
            event->accept();
            emit send_salesClientClosed();
            break;
        case QMessageBox::Cancel:
            event->ignore();
//            return;
            break;
        default:
            LOGx("Program broken");
            // should never be reached
            break;
    }
}
void SalesClient::scannedProductManagement(QString &barcodeScanned) {
    std::map<QString, int>::iterator it;
    it = itemsBought->find(barcodeScanned);
    if(it!=itemsBought->end()){
        it->second +=1;

        int rowsSearch = ui->tableWidget->rowCount();
        for(int i = 0; i<rowsSearch; i++){
            std::string currentItemScheduled = it->first.toStdString();
            if(ui->tableWidget->item(i,1)->text().toStdString()==currentItemScheduled){
                modifyProductInRowCreated(i, it->second);
            }
        }
    }else{

        itemsBought->insert(std::pair<QString, int>(barcodeScanned, initial_quantity));
        createRowsToAddProductPurchased(initial_quantity);
    }
}
void SalesClient::modifyProductInRowCreated(int &rowAffected, int &quantityValue) {
    int columnsToModifyProducts = 9;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==5){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==6){
//            float singleItemDiscount = ui->tableWidget->item(rowAffected, 6)->text().toFloat();
            float singleItemDiscount = addedProduct->product_discount;
            *discountTotal = singleItemDiscount*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*discountTotal));
//            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 5)->text().toInt();
//            ui->lblComputedTotal->setText(QString::number(*totalToPay));
        }else if(i==7){
            float singleItemReward = addedProduct->product_rewards;
            *rewardTotal = singleItemReward*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*rewardTotal));
//            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 5)->text().toInt();
//            ui->lblComputedTotal->setText(QString::number(*totalToPay));
        }else if(i==8){
            int unitPrice = ui->tableWidget->item(rowAffected, 4)->text().toInt();
            *unitSubTotal = unitPrice*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*unitSubTotal));
            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 4)->text().toInt();
            ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");
        }
    }
}
void SalesClient::createRowsToAddProductPurchased(int &quantityValue) {
    currentRowBeingInserted = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    addProductInRowCreated(currentRowBeingInserted, quantityValue);
    *totalToPay = *totalToPay + ui->tableWidget->item(currentRowBeingInserted, 4)->text().toInt();
    ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");
}

void SalesClient::addProductInRowCreated(int &rowCreated, int &quantityPurchased) {
    int columnsToAddProducts = 9;
    for(int i =0; i<columnsToAddProducts; i++){
        if(i==0){
            QTableWidgetItem* idEntry = ui->tableWidget->item(rowCreated, i);
            if(!idEntry){
                idEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, idEntry);
            }if(!addedProductId->isEmpty()){
                idEntry->setText(*addedProductId);
            }
        }else if(i==1){
            QTableWidgetItem* barCodeEntry = ui->tableWidget->item(rowCreated, i);
            if(!barCodeEntry){
                barCodeEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, barCodeEntry);
            }if(!addedProduct->product_barcode.isEmpty()){
                barCodeEntry->setText(addedProduct->product_barcode);
            }
        }else if(i==2) {
            QTableWidgetItem* descriptionEntry = ui->tableWidget->item(rowCreated, i);
            if(!descriptionEntry){
                descriptionEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, descriptionEntry);
            }if(!addedProduct->product_name.isEmpty()){
                descriptionEntry->setText(addedProduct->product_name);
            }
        }else if(i==3){
            QTableWidgetItem *measurementEntry = ui->tableWidget->item(rowCreated, i);
            if (!measurementEntry) {
                measurementEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, measurementEntry);
            }
            if (!addedProduct->product_quantity.isEmpty()) {
                measurementEntry->setText(addedProduct->product_quantity);
            }
        }else if(i==4) {
            QTableWidgetItem *unitPriceEntry = ui->tableWidget->item(rowCreated, i);
            if (!unitPriceEntry) {
                unitPriceEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, unitPriceEntry);
            }
            if (!unitPrice->isEmpty()) {
                unitPriceEntry->setText(QString::number(addedProduct->product_rtprice));
            }
        }else if(i==5) {
            QTableWidgetItem *itemQtyPurchased = ui->tableWidget->item(rowCreated, i);
            if(!itemQtyPurchased){
                itemQtyPurchased = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, itemQtyPurchased);
            }
            int total = quantityPurchased*(*productPrice);
            QString tempQuantityPurchased = QString::number(quantityPurchased);
            *itemQuantityPurchased = tempQuantityPurchased;
            if(!itemQuantityPurchased->isEmpty()){
                itemQtyPurchased->setText(*itemQuantityPurchased);
            }
        }else if(i==6) {
            QTableWidgetItem *discountEntry = ui->tableWidget->item(rowCreated, i);
            if(!discountEntry){
                discountEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, discountEntry);
            }
            QString tempDiscount = QString::number(*unitDiscount);
            *discountOnItem = tempDiscount;
            if(!discountOnItem->isEmpty()){
                discountEntry->setText(*discountOnItem);
            }
        }else if(i==7) {
            QTableWidgetItem *rewardEntry = ui->tableWidget->item(rowCreated, i);
            if (!rewardEntry) {
                rewardEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, rewardEntry);
            }
            QString tempPoints = QString::number(*unitReward);
            *pointsOnItem = tempPoints;
            if (!pointsOnItem->isEmpty()) {
                rewardEntry->setText(*pointsOnItem);
            }
        }else if(i==8) {
            QTableWidgetItem *unitSubTotalEntry = ui->tableWidget->item(rowCreated, i);
            if(!unitSubTotalEntry){
                unitSubTotalEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, unitSubTotalEntry);
            }
            int total = quantityPurchased*(*productPrice);
            *itemTotalPrice = QString::number(total);
            if(!itemTotalPrice->isEmpty()){
                unitSubTotalEntry->setText(*itemTotalPrice);
            }
        }else{

        }
    }
}
void SalesClient::loadItemsFromDbToCompleter() {
    QStringList completionList;
    salesConnection->conn_open();
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT productName FROM products"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + salesConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                productName = query.value(0).toString();
                completionList<<productName;
                LOGx(productName.toStdString());
            }
            completer = new QCompleter(completionList,this);
            completer->setCaseSensitivity(Qt::CaseInsensitive);
            completer->setFilterMode(Qt::MatchContains);
            ui->le_SearchProduct->setCompleter(completer);
        }

    } else{
        qDebug() << "Failed to connect to database: " + salesConnection->db.lastError().text();
    }

    connect(completer, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
        *processedProduct = text;
                grabBarcodeFromCompleter(*processedProduct);
 });

}
void SalesClient::goToPaymentAndCompleteSale() {
    completePayment = new CompletePaymentWindow(this, *currentCashierUser, *itemsBought, *totalToPay);
    completePayment->setModal(true);
    completePayment->show();
}
void SalesClient::on_btnCompleteSales_clicked()
{
    goToPaymentAndCompleteSale();
}

void SalesClient::addCompleterProductToSales(std::map<QString, int>&) {
    LOGx("ssssssssssssssssssssssssssssssssssssssss");
}

void SalesClient::addProductToCart() {

}

void SalesClient::on_btn_addNewCustomer_clicked()
{
    addNewCustomer = new AddCustomer(this, *currentUser);
    addNewCustomer->setModal(true);
    addNewCustomer->show();
    QObject::connect(addNewCustomer, SIGNAL(customerAdditionTaskComplete()), this, SLOT(receiveCustomerAdditionComplete()));
}

void SalesClient::showTime() {
    QTime time= QTime::currentTime();
    QString time_text = time.toString("hh: mm: ss");
    QDate date = QDate::currentDate();
    QString currentDate = date.toString("dd /MM /yyyy");

    if((time.second()%2)==0){
        time_text[2]=' ';
        time_text[6]=' ';
    }
    ui->lblTime->setText(time_text);
    ui->lblDate->setText(currentDate);
}

void SalesClient::on_btn_viewCustomers_clicked()
{
    customerViewChoice = new CustomerViewChoice(this, *currentUser);
    customerViewChoice->setModal(true);
    customerViewChoice->show();
    QObject::connect(customerViewChoice, SIGNAL(sendCloseViewCustomerWindow()), this, SLOT(receiveCustomerSingleViewComplete()));

}

void SalesClient::receiveCustomerAdditionComplete() {
    addNewCustomer->close();
    emit customerAdditionViaSalesClientComplete();
}

void SalesClient::receiveCustomerSingleViewComplete() {
    LOGx("signal three received");

    customerViewChoice->close();
    this->show();
}

void SalesClient::addProductFromCompleter() {

}

void SalesClient::reduceQuantityAndUpdateValues() {

}

void SalesClient::reducedQuantityPurchased() {
    QString barcodeToModify;
    if(rowDefined){
        *rowToEdit = *rowToEditFromSelection;
        LOGx("++++++++++++++===========================++++++++++++++++++++");
    }else{
        *rowToEdit = ui->tableWidget->rowCount()-1;
    }
    barcodeToModify = ui->tableWidget->item(*rowToEdit, 1)->text();

    std::map<QString, int>::iterator it;
    it = itemsBought->find(barcodeToModify);
    if(it!=itemsBought->end()){
        if(it->second >1){
            it->second -=1;
            int rowsSearch = ui->tableWidget->rowCount();
            for(int i = 0; i<rowsSearch; i++) {
                std::string currentItemScheduled = it->first.toStdString();
                if (ui->tableWidget->item(i, 1)->text().toStdString() == currentItemScheduled) {
                    modifyProductsInTableReduction(i, it->second);
                }
            }
            //REDUCE VALUE
        }else if(it->second==1){
//            deleteProductFromCart(i, );
            itemsBought->erase(barcodeToModify);
            ui->tableWidget->removeRow(*rowToEdit);
            //DELETE THE ROW
        }else{
            LOGx("YOU PULLED THEM ALL OUT");
        }
    }else{

//        itemsBought->insert(std::pair<QString, int>(barcodeScanned, initial_quantity));
//        createRowsToAddProductPurchased(initial_quantity);
    }
//   ENTER SETS ROW DEFINED TO FALSE
}

void SalesClient::getRowToEdit() {
    *rowToEditFromSelection = ui->tableWidget->currentRow();
    rowDefined = true;
}

void SalesClient::modifyProductsInTableReduction(int &rowAffected, int &quantityValue) {
    int columnsToModifyProducts = 9;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==5){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==6){
//            float singleItemDiscount = ui->tableWidget->item(rowAffected, 6)->text().toFloat();
            float singleItemDiscount = addedProduct->product_discount;
            *discountTotal = singleItemDiscount*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*discountTotal));
//            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 5)->text().toInt();
//            ui->lblComputedTotal->setText(QString::number(*totalToPay));
        }else if(i==7){
            float singleItemReward = addedProduct->product_rewards;
            *rewardTotal = singleItemReward*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*rewardTotal));
//            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 5)->text().toInt();
//            ui->lblComputedTotal->setText(QString::number(*totalToPay));
        }else if(i==8){
            int unitPrice = ui->tableWidget->item(rowAffected, 4)->text().toInt();
            *unitSubTotal = unitPrice*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*unitSubTotal));
            *totalToPay = *totalToPay - ui->tableWidget->item(rowAffected, 8)->text().toInt();
            ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");
        }
    }
}



void SalesClient::on_btnReduceQtyByOne_clicked()
{
    reducedQuantityPurchased();
}

void SalesClient::deleteProductFromCart(int &rowAffected, int &quantityValue) {
    int columnsToModifyProducts = 9;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==5){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==6){
//            float singleItemDiscount = ui->tableWidget->item(rowAffected, 6)->text().toFloat();
            float singleItemDiscount = addedProduct->product_discount;
            *discountTotal = singleItemDiscount*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*discountTotal));
//            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 5)->text().toInt();
//            ui->lblComputedTotal->setText(QString::number(*totalToPay));
        }else if(i==7){
            float singleItemReward = addedProduct->product_rewards;
            *rewardTotal = singleItemReward*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*rewardTotal));
//            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 5)->text().toInt();
//            ui->lblComputedTotal->setText(QString::number(*totalToPay));
        }else if(i==8){
            int unitPrice = ui->tableWidget->item(rowAffected, 4)->text().toInt();
            *unitSubTotal = unitPrice*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*unitSubTotal));
            *totalToPay = *totalToPay - ui->tableWidget->item(rowAffected, 4)->text().toInt();
            ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");
        }
    }
}

void SalesClient::loadCustomersToCompleter() {
    QStringList completionList;
    salesConnection->conn_open();
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT customer_phone FROM customers"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + salesConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                *customerPhone = query.value(0).toString();
                completionList<<*customerPhone;
            }
            customerCompleter = new QCompleter(completionList,this);
            customerCompleter->setCaseSensitivity(Qt::CaseInsensitive);
            customerCompleter->setFilterMode(Qt::MatchContains);
            ui->leClient->setCompleter(customerCompleter);
        }

    } else{
        qDebug() << "Failed to connect to database: " + salesConnection->db.lastError().text();
    }

    connect(completer, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
                *processedProduct = text;
                grabBarcodeFromCompleter(*processedProduct);
            });
}

void SalesClient::checkQuantityAndUpdateStock() {
    std::map<QString, int>::iterator salesIt;
    salesIt = itemsBought->begin();
    while(salesIt != itemsBought->end()){
        QString currentProduct = salesIt->first;
        int currentProductQuantity = salesIt->second;
        if (salesConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
            query.prepare(QString("SELECT IFNULL(quantity, 0) FROM stock WHERE product_barcode = :productBarcode"));
            query.bindValue(":productBarcode", currentProduct);
            if(!query.exec()){
                QMessageBox::critical(this, "Database Error", query.lastError().text());
                qDebug() << "Failed to connect to database: " + salesConnection->db.lastError().text();
                return;
            }else{
                while(query.next()){
                    *stockQuantityAvailable = query.value(0).toInt();
                    if(*stockQuantityAvailable<salesIt->second){
                        QMessageBox::information(this, "Stock Error!", "The Product "+ currentProduct +" is out of stock for "+ currentProductQuantity + "unit(s)");
                    }else{
//                        update stock and stock logs
                    }
//                    completionList<<productName;
//                    LOGx(productName.toStdString());
                }
//                completer = new QCompleter(completionList,this);
//                completer->setCaseSensitivity(Qt::CaseInsensitive);
//                completer->setFilterMode(Qt::MatchContains);
//                ui->le_SearchProduct->setCompleter(completer);
            }

        }
    }
}

void SalesClient::updateStockAndStockLogs(QString &, int &) {

}
