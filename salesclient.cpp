#include "salesclient.h"
#include "ui_salesclient.h"

SalesClient::SalesClient(QWidget *parent, loggedUser &currentLoggedInUser) :
    QMainWindow(parent),
    ui(new Ui::SalesClient)
{
    ui->setupUi(this);
    this->setMinimumSize(1024, 768);
    this->showMaximized();
//    TURN ME ON LATER
//    disableSystems();
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
    addedProductId = new int;
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
    customerAgentToServe = new QString;
    ongoingSession = new session;
    newSession = new session;
    currentSaleId = new int;
    unitDiscount = new float ;
    unitReward = new float;
    unitSubTotal = new float;
    customerPhone = new QString;
    executionType = new QString;
    saleType = new QString;
    lastId = new int;
    totalTax = new float;
    *currentCashierUser = currentLoggedInUser;
    businessAuthorizedPaymentByRewards = new bool;
    currentServingCustomer = new Customer;
//    Debug(*currentCashierUser);

    *totalToPay = 0;
    itemsBought = new std::map<int, purchasedItem>;

    rewardTotal = new float ;
    discountTotal = new float ;
    stockQuantityAvailable = new int;
    loadItemsFromDbToCompleter();
    loadCustomersToCompleter();
    ui->le_barcodeEntry->setFocus();
    quantityToBeBought = new int;
    QObject::connect(ui->le_barcodeEntry, SIGNAL(returnPressed()),
                     this, SLOT(grabBarcodeFromEntry()));
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();
    rowToEdit = new int;
    rowToEditFromSelection = new int;

    enableRewards = new bool;
    enableDiscounts = new bool;
    *enableRewards = false;
    *enableDiscounts = false;
    isCurrentCustomerDefined = false;
    clientAuthorizedPaymentByRewards;
    businessAuthorizedPaymentByRewards;

    QObject::connect(ui->tableWidget->selectionModel(), SIGNAL(selectionChanged(const QItemSelection&,
                                                                       const QItemSelection&)), SLOT(getRowToEdit()));
    ui->cbSalesType->setCurrentIndex(0);
    *saleType = "Retail";
    QObject::connect(this, SIGNAL(enableSystemsSent()), this, SLOT(enableSystemsCalled()));
    connect(ui->cbSalesType, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){ /* ... */
    if(index==0) {
//    if(index==0 && ui->cbSalesType->currentIndex()!=0) {
        QMessageBox::StandardButton changeToRetail;

        changeToRetail = QMessageBox::warning(this, "Changing to Retail",
                                              "This change will clear all your data. Do you want to continue?",
                                              QMessageBox::Yes | QMessageBox::No);
        if (changeToRetail == QMessageBox::Yes) {
            *saleType = "Retail";
            ui->lblSaleType->setStyleSheet("background-color:green");
            ui->lblSaleType->setText("Retail");
            int numberOfRowsEntered = ui->tableWidget->rowCount();
            for(int i=0; i<numberOfRowsEntered+1; i++){
                ui->tableWidget->removeRow(i);
            }
            resetCashierRecords();
            setFocusForSales();
    }else{
            ui->cbSalesType->setCurrentIndex(1);

        }
//    }else if(index==1 && ui->cbSalesType->currentIndex()!=1){
    }else if(index==1){
        QMessageBox::StandardButton changeToRetail;

        changeToRetail = QMessageBox::warning(this, "Changing to Wholesale",
                                              "This change will clear all your data. Do you want to continue?",
                                              QMessageBox::Yes | QMessageBox::No);
        if (changeToRetail == QMessageBox::Yes) {
            *saleType = "Wholesale";
            ui->lblSaleType->setStyleSheet("background-color:blue");
            ui->lblSaleType->setText("Wholesale");
            establishWholesaleSale();
            int numberOfRowsEntered = ui->tableWidget->rowCount();
            for(int i=0; i<numberOfRowsEntered+1; i++){
                ui->tableWidget->removeRow(i);
            }
            resetCashierRecords();
            setFocusForSales();
        }else{
            ui->cbSalesType->setCurrentIndex(0);

        }
    }
    });
//    TURN ME ON LATER
//    sessionStartControl();
    ui->checkBoxClientRewardAuthorization->setDisabled(true);
//    if (*lastId==0){
//        *currentSaleId = QString::number(*lastId);
//    }else{
//        *currentSaleId = QString::number(*lastId+1);
//    }
    setCurrentSaleId();

    ui->lblOrderId->setText(QString::number(*currentSaleId));
    *rewardTotal = 0;
    *discountTotal = 0;


}

SalesClient::~SalesClient()
{
    delete ui;
}

void SalesClient::closeEvent(QCloseEvent *event) {
    if(thereIsOpenSession){
        QMessageBox::StandardButton reply;

        reply = QMessageBox::warning(this
                , "Active Session Warning!"
                , "You have an active session for "+currentUser->username+" . Do you wish to close without ending the session?"
                , QMessageBox::Yes | QMessageBox::No|QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            event->accept();
            send_salesClientClosed();
        }else if(reply==QMessageBox::No){
            *executionType = "Closing";
            sessionControl = new SessionControl(this, *currentUser, *executionType);
            sessionControl->setModal(true);
            sessionControl->show();
            thereIsOpenSession = false;
        }else{
            return;
        }
    }else{
        QMessageBox::StandardButton close;

        close = QMessageBox::warning(this
                , "Cashier Window Closing!"
                , "Do you wish to close Cashier Window?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(close==QMessageBox::Yes){
            event->accept();
            send_salesClientClosed();
        }else{
            event->ignore();

        }
    }







//    QMessageBox msgBox;
//    msgBox.setText("Closing Sales Window will discard all  your unsaved data!");
//    msgBox.setInformativeText("Do you want to close the window anyway?");
//    msgBox.setStandardButtons(QMessageBox::Close | QMessageBox::Cancel);
//    msgBox.setDefaultButton(QMessageBox::Cancel);
//    int ret = msgBox.exec();
//    switch (ret) {
//        case QMessageBox::Close:
//            event->accept();
//            emit send_salesClientClosed();
//            break;
//        case QMessageBox::Cancel:
//            event->ignore();
////            return;
//            break;
//        default:
//            LOGx("Program broken");
//            // should never be reached
//            break;
//    }
}
void SalesClient::scannedProductManagement(QString& barcode, int & currentProductId, int & stockAvailable) {
    std::map<int, purchasedItem>::iterator it;
    it = itemsBought->find(currentProductId);
    if(it!=itemsBought->end()){
        if(it->second.quantity_purchased+1<= stockAvailable){
            it->second.quantity_purchased +=1;
            int rowsSearch = ui->tableWidget->rowCount();
            for(int i = 0; i<rowsSearch; i++){
                if(ui->tableWidget->item(i,0)->text().toInt()==currentProductId){
                    modifyProductInRowCreated(i, it->second.quantity_purchased);
                }
            }
            ui->le_barcodeEntry->clear();
            ui->le_barcodeEntry->setFocus();
        }else{
            QMessageBox::critical(this, "Out of Stock Error!", "Manage your stock. The maximum available stock has been depleted!");
            ui->le_barcodeEntry->clear();
            ui->le_barcodeEntry->setFocus();
            return;
        }
    }else{
        purchasedItem myItem;
        if (*enableDiscounts && addedProduct->discounted){
            myItem.prod_discounted = true;
            myItem.discount_amount = addedProduct->product_discount;
            myItem.salePrice = addedProduct->product_rtprice - addedProduct->product_discount;
        }else{
            myItem.prod_discounted = false;
            myItem.discount_amount = 0;
            myItem.salePrice = addedProduct->product_rtprice;
        }
        if(*enableRewards && addedProduct->rewarded){
            myItem.prod_rewarded = true;
            myItem.reward_amount = addedProduct->product_rewards;
        }else{
            myItem.prod_rewarded = false;
            myItem.reward_amount = 0;
        }
        myItem.quantity_purchased = initial_quantity;
        itemsBought->insert(std::pair<int, purchasedItem>(currentProductId, myItem));
        createRowsToAddProductPurchased(initial_quantity);
        ui->le_barcodeEntry->clear();
        ui->le_barcodeEntry->setFocus();
    }
}
void SalesClient::modifyProductInRowCreated(int &rowAffected, int &quantityValue) {
    float singleItemDiscount = 0;
    float singleItemReward = 0;
    int columnsToModifyProducts = 9;
    float singleItemDiscountTotal =0;
    float singleItemRewardsTotal =0;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==5){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==6){
            if(*enableDiscounts){
                singleItemDiscount = addedProduct->product_discount;
                singleItemDiscountTotal= singleItemDiscount*quantityValue;
                *discountTotal = *discountTotal+singleItemDiscount;
                ui->lblPossibleDiscounts->setText(QString::number(*discountTotal));
            } else{
                *discountTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemDiscountTotal));
        }else if(i==7){
            if (*enableRewards){
                singleItemReward = addedProduct->product_rewards;
                singleItemRewardsTotal = singleItemReward*quantityValue;
                *rewardTotal = *rewardTotal+singleItemReward;
                ui->lblPossibleRewards->setText(QString::number(*rewardTotal));

            }else{
//                *rewardTotal = singleItemReward*quantityValue;
                *rewardTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemRewardsTotal));
        }else if(i==8){
            int unitPrice = ui->tableWidget->item(rowAffected, 4)->text().toInt();
            if(*enableDiscounts){
                *unitSubTotal = (unitPrice-singleItemDiscount)*quantityValue;
            } else{
                *unitSubTotal = unitPrice*quantityValue;
            }
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*unitSubTotal));
            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 4)->text().toInt();
            float tax = 0.16*(*totalToPay);
            float sale_value = *totalToPay - tax;

            QString tempTax = QString::number(tax, 'f', 2);
            QString tempSales = QString::number(sale_value, 'f', 2);
            ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");
            ui->lblSaleValue->setText(tempSales);
            ui->lblSaleTax->setText(tempTax);
            ui->lblThisSaleTotal->setText(QString::number(*totalToPay)+".00");
        }
    }
}
void SalesClient::createRowsToAddProductPurchased(int &quantityValue) {
    currentRowBeingInserted = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    addProductInRowCreated(currentRowBeingInserted, quantityValue);
    *totalToPay = *totalToPay + ui->tableWidget->item(currentRowBeingInserted, 4)->text().toInt();
    *rewardTotal = *rewardTotal+addedProduct->product_rewards;
    *discountTotal = *discountTotal+addedProduct->product_discount;
    ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");


    float tax = 0.16*(*totalToPay);
    float sale_value = *totalToPay - tax;

    QString tempTax = QString::number(tax, 'f', 2);
    QString tempSales = QString::number(sale_value, 'f', 2);
    ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");
    ui->lblSaleValue->setText(tempSales);
    ui->lblSaleTax->setText(tempTax);
    ui->lblThisSaleTotal->setText(QString::number(*totalToPay)+".00");
    if(*enableRewards){
        ui->lblPossibleRewards->setText(QString::number(*rewardTotal));
    }
    if (*enableDiscounts){
        ui->lblPossibleDiscounts->setText(QString::number(*discountTotal));
    }
}

void SalesClient::addProductInRowCreated(int &rowCreated, int &quantityPurchased) {
    int columnsToAddProducts = 9;
    for(int i =0; i<columnsToAddProducts; i++){

        if (*saleType=="Retail"){
            if(i==0){
                QTableWidgetItem* idEntry = ui->tableWidget->item(rowCreated, i);
                if(!idEntry){
                    idEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, idEntry);
                }if(!addedProductId==NULL){
                    idEntry->setText(QString::number(*addedProductId));
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
                if (*enableDiscounts){
                    QString tempDiscount = QString::number(*unitDiscount);
                    *discountOnItem = tempDiscount;
                }else{
                    QString tempDiscount = QString::number(0);
                    *discountOnItem = tempDiscount;
                }
                if(!discountOnItem->isEmpty()){
                    discountEntry->setText(*discountOnItem);
                }
            }else if(i==7) {
                QTableWidgetItem *rewardEntry = ui->tableWidget->item(rowCreated, i);
                if (!rewardEntry) {
                    rewardEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, rewardEntry);
                }
                if(*enableRewards){
                    QString tempPoints = QString::number(*unitReward);
                    *pointsOnItem = tempPoints;
                }else{
                    QString tempPoints = QString::number(0);
                    *pointsOnItem = tempPoints;
                }
                if (!pointsOnItem->isEmpty()) {
                    rewardEntry->setText(*pointsOnItem);
                }
            }else if(i==8) {
                QTableWidgetItem *unitSubTotalEntry = ui->tableWidget->item(rowCreated, i);
                if(!unitSubTotalEntry){
                    unitSubTotalEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, unitSubTotalEntry);
                }
                if(*enableDiscounts){
                    int total = quantityPurchased*(*productPrice-*unitDiscount);
                    *itemTotalPrice = QString::number(total);
                }else{
                    int total = quantityPurchased*(*productPrice);
                    *itemTotalPrice = QString::number(total);
                }

                if(!itemTotalPrice->isEmpty()){
                    unitSubTotalEntry->setText(*itemTotalPrice);
                }
            }else{

            }
        }else if(*saleType=="Wholesale"){
            if(i==0){
                QTableWidgetItem* idEntry = ui->tableWidget->item(rowCreated, i);
                if(!idEntry){
                    idEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, idEntry);
                }if(!addedProductId==NULL){
                    idEntry->setText(QString::number(*addedProductId));
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
                    unitPriceEntry->setText(QString::number(addedProduct->product_wsprice));
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
                if (*enableDiscounts){
                    QString tempDiscount = QString::number(*unitDiscount);
                    *discountOnItem = tempDiscount;
                }else{
                    QString tempDiscount = QString::number(0);
                    *discountOnItem = tempDiscount;
                }
                if(!discountOnItem->isEmpty()){
                    discountEntry->setText(*discountOnItem);
                }
            }else if(i==7) {
                QTableWidgetItem *rewardEntry = ui->tableWidget->item(rowCreated, i);
                if (!rewardEntry) {
                    rewardEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, rewardEntry);
                }
                if(*enableRewards){
                    QString tempPoints = QString::number(*unitReward);
                    *pointsOnItem = tempPoints;
                }else{
                    QString tempPoints = QString::number(0);
                    *pointsOnItem = tempPoints;
                }
                if (!pointsOnItem->isEmpty()) {
                    rewardEntry->setText(*pointsOnItem);
                }
            }else if(i==8) {
                QTableWidgetItem *unitSubTotalEntry = ui->tableWidget->item(rowCreated, i);
                if(!unitSubTotalEntry){
                    unitSubTotalEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, unitSubTotalEntry);
                }
                if(*enableDiscounts){
                    int total = quantityPurchased*(*productPrice-*unitDiscount);
                    *itemTotalPrice = QString::number(total);
                }else{
                    int total = quantityPurchased*(*productPrice);
                    *itemTotalPrice = QString::number(total);
                }

                if(!itemTotalPrice->isEmpty()){
                    unitSubTotalEntry->setText(*itemTotalPrice);
                }
            }else{

            }
        }else{
            QMessageBox::critical(this, "Sale Type Error", "You haven't selected the sale type(Retail/ Wholesale)");
//                should never get here
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
    //come back to me for complete payment
    int sale_id = *currentSaleId;
    completePayment = new CompletePaymentWindow(this, *currentCashierUser,sale_id,
                                                *itemsBought, *enableRewards, *rewardTotal,
                                                *enableDiscounts, *discountTotal, *currentServingCustomer, *totalToPay);
    completePayment->setModal(true);
    completePayment->show();
}
void SalesClient::on_btnCompleteSales_clicked()
{
//    std::map<int, purchasedItem>::iterator it;

    if(!isCurrentCustomerDefined){
        LOGx("false not defined");
        QMessageBox::StandardButton defineCustomer;

        defineCustomer = QMessageBox::information(this
                , "Customer/ Agent not defined"
                , "It is advisable to get as many customers as possible into the database. Continue anyway?"
                , QMessageBox::Yes | QMessageBox::No);
        if(defineCustomer==QMessageBox::Yes){
            LOGx("fala");
        }else{
            addCustomerAndDefineClient();
            LOGx("ps4");
        }
    }else{
        LOGx("true customer is defined");

        goToPaymentAndCompleteSale();

    }
}

void SalesClient::addCompleterProductToSales(std::map<QString, int>&) {
}

void SalesClient::addProductToCart() {

}

void SalesClient::on_btn_addNewCustomer_clicked()
{
    addNewCustomerToDatabase();
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
    if(addNewCustomerAtPurchase){
        LOGx("am back to set");
        selectLastCustomerAdded();
    }else{
        LOGx("am back but passing by");
        emit customerAdditionViaSalesClientComplete();
    }
    addNewCustomer->close();
}

void SalesClient::receiveCustomerSingleViewComplete() {
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
    }else{
        *rowToEdit = ui->tableWidget->rowCount()-1;
    }
    barcodeToModify = ui->tableWidget->item(*rowToEdit, 1)->text();

    std::map<int, purchasedItem>::iterator it;
//    it = itemsBought->find(barcodeToModify);
    if(it!=itemsBought->end()){
        if(it->second.quantity_purchased >1){
            it->second.quantity_purchased -=1;
            int rowsSearch = ui->tableWidget->rowCount();
            for(int i = 0; i<rowsSearch; i++) {
//                std::string currentItemScheduled = it->first.toStdString();
//                if (ui->tableWidget->item(i, 1)->text().toStdString() == currentItemScheduled) {
//                    modifyProductsInTableReduction(i, it->second);
//                }
            }
            //REDUCE VALUE
        }else if(it->second.quantity_purchased==1){
//            deleteProductFromCart(i, );
//            itemsBought->erase(barcodeToModify);
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

    connect(customerCompleter, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
                *customerAgentToServe = text;
                loadCustomerAgentFromCompleter(*customerAgentToServe);
            });
}


void SalesClient::updateStockAndStockLogs(QString &currentBarCode, int &productPurchased, int &productAvailable) {
    int remainingStock = productAvailable - productPurchased;
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("UPDATE stock SET quantity = :remainingStock WHERE product_barcode = :currentBarCode"));
        query.bindValue(":remainingStock", remainingStock);
        query.bindValue(":currentBarCode", currentBarCode);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while(query.next()){
                query.prepare(QString("INSERT INTO stock_log (manipulationType, product_id, quantity, total, effect, acquisition_id, user_id, timeStamp)"
                                      "VALUES(:manipulationType, :productId, :quantity, :total,:effect, :acquisitionId, :userId, :timeStamp)"));
                *customerPhone = query.value(0).toString();
//                completionList<<*customerPhone;
            }
//            customerCompleter = new QCompleter(completionList,this);
            customerCompleter->setCaseSensitivity(Qt::CaseInsensitive);
            customerCompleter->setFilterMode(Qt::MatchContains);
            ui->leClient->setCompleter(customerCompleter);
        }

    } else{
        qDebug() << "Failed to connect to database: " + salesConnection->db.lastError().text();
    }
}

void SalesClient::on_btnOpenClose_clicked()
{
    openNewSession();
    //    checkLastSession();
//    if(thereIsOpenSession){
//        *executionType = "Closing";
//        sessionControl = new SessionControl(this, *currentUser, *executionType);
//        sessionControl->setModal(true);
//        sessionControl->show();
//    }else{
//        *executionType = "Opening";
//        sessionControl = new SessionControl(this, *currentUser, *executionType);
//        sessionControl->setModal(true);
//        sessionControl->show();
//    }
}

void SalesClient::disableSystems() {
    ui->cbSalesType->setDisabled(true);
    ui->checkBoxEnableDiscount->setDisabled(true);
    ui->checkBoxEnableRewards->setDisabled(true);
    ui->checkBoxEnableRewardPayment->setDisabled(true);
    ui->le_barcodeEntry->setDisabled(true);
    ui->leClient->setDisabled(true);
    ui->le_SearchProduct->setDisabled(true);
    ui->btnOpenClose->setStyleSheet("background-color:rgb(78, 154, 6)");
    ui->btnOpenClose->setText("Open Session");
}

void SalesClient::enableSystems() {
    ui->cbSalesType->setEnabled(true);
    ui->checkBoxEnableDiscount->setEnabled(true);
    ui->checkBoxEnableRewards->setEnabled(true);
    ui->checkBoxEnableRewardPayment->setEnabled(true);
    ui->le_barcodeEntry->setEnabled(true);
    ui->leClient->setEnabled(true);
    ui->le_SearchProduct->setEnabled(true);
    ui->btnOpenClose->setStyleSheet("background-color:red");
    ui->btnOpenClose->setText("Close Session");
}

void SalesClient::checkLastSession() {

}

void SalesClient::enableSystemsCalled() {
    LOGx("enable systems called");
//    thereIsOpenSession = true;
    enableSystems();
    ui->le_barcodeEntry->setFocus();
    ui->btnOpenClose->setStyleSheet("background-color:red");
    ui->btnOpenClose->setText("Close Session");
}

void SalesClient::receiveClosingComplete() {
    LOGx("CLOSE SIGNAL RECEIVED");
    thereIsOpenSession = false;
    disableSystems();
    emit openingClosingDataChanged();
}

void SalesClient::receiveOpeningComplete() {
    LOGx("OPEN SIGNAL RECEIVED");
    thereIsOpenSession = true;
    enableSystems();
    emit openingClosingDataChanged();
}

void SalesClient::openNewSession() {
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT salesSessionManager.session_id, salesSessionManager.session_type , salesSessionManager.session_time, users.name,salesSessionManager.drawer_cash  FROM salesSessionManager LEFT JOIN users ON users.user_id = salesSessionManager.user_id ORDER "
                              "BY salesSessionManager.session_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while (query.next()) {
                ongoingSession->sessionType = query.value(1).toString();
                ongoingSession->sessionTime = query.value(2).toDateTime();
                ongoingSession->userName = query.value(3).toString();
                ongoingSession->drawerCash = query.value(4).toInt();
                if((ongoingSession->sessionType=="Opened" ) && ongoingSession->userName==currentUser->name){
                    thereIsOpenSession = true;
                    LOGx("mitini");
                    QMessageBox msgBox;
                    msgBox.setWindowTitle("Active Session for "+currentUser->name);
                    msgBox.setText("You have an active session. Do you wish to continue?");
                    QPushButton *connectButton = msgBox.addButton(tr("Continue Session"), QMessageBox::ActionRole);
                    QPushButton *connectButton2 = msgBox.addButton(tr("Continue Session"), QMessageBox::ActionRole);
                    QPushButton *abortButton = msgBox.addButton( QMessageBox::Abort);

                    QMessageBox::StandardButton reply;

                    reply = QMessageBox::warning(this
                            , "You have an active session"
                            , "Do you wish to continue?"
                            , QMessageBox::Yes | QMessageBox::No);
                    if(reply==QMessageBox::Yes){
                        QString openSessionType = ongoingSession->sessionType;
                        QString openingDrawerCash = QString::number(ongoingSession->drawerCash);
                        QString cash="popo";
                        QDateTime openingTime = ongoingSession->sessionTime;
                        verifySession = new ExistingSessionVerifier(this, *currentUser, ongoingSession->sessionType,
                                ongoingSession->drawerCash, ongoingSession->sessionTime);
                        verifySession->setModal(true);
                        verifySession->show();
//                        enableSystemsCalled();
//                        emit openingClosingDataChanged();
//                        this->show();
                    }else{
                        *executionType = "Closing";
//                    SYSTEM CLOSE AND THEN OPEN
                        sessionControl = new SessionControl(this, *currentUser, *executionType);
                        sessionControl->setModal(true);
                        sessionControl->show();
                        thereIsOpenSession = false;

                    }
                }else if(( ongoingSession->sessionType=="Opened" ) && ongoingSession->userName!=currentUser->name){
//                    QMessageBox::critical(this, "Unattended Session", "There is an active session that must be closed before continuing!");
                    *executionType = "Closing";
//                    SYSTEM CLOSE AND THEN OPEN
                    sessionControl = new SessionControl(this, *currentUser, *executionType);
                    sessionControl->setModal(true);
                    sessionControl->show();
                    thereIsOpenSession = false;
                }else if(ongoingSession->sessionType=="Closed"){
//                    QMessageBox::critical(this, "Open a session to continue", "Please Open a session to continue!");
                    thereIsOpenSession = false;
                    *executionType = "Opening";
                    //session opener
                    sessionControl = new SessionControl(this, *currentUser, *executionType);
                    sessionControl->setModal(true);
                    sessionControl->show();
                }else{
                    LOGxy("ongoing session ", ongoingSession->sessionType.toStdString());
                    LOGxy("ongoing session ", ongoingSession->userName.toStdString());
                    LOGxy("current user ", currentUser->name.toStdString());
//                    WE NEVER GET HERE
                }

            }
        }
    }
    QObject::connect(sessionControl, SIGNAL(sendClosingComplete()), this, SLOT(disableSystemsCalled()));
    QObject::connect(sessionControl, SIGNAL(sendOpeningComplete()), this, SLOT(receiveOpeningComplete()));

}

void SalesClient::sessionStartControl() {
    QMessageBox::information(this, "Session Security", "You must open a session to continue. Click Open Session to Proceed!");
}

void SalesClient::disableSystemsCalled() {
    thereIsOpenSession = false;
    LOGx("disable systems called");
    disableSystems();
    ui->le_barcodeEntry->setFocus();
    ui->btnOpenClose->setStyleSheet("background-color:green");
    ui->btnOpenClose->setText("Open Session");
}

void SalesClient::on_checkBoxEnableRewardPayment_toggled(bool checked)
{
    if(checked){
        *businessAuthorizedPaymentByRewards = true;
        ui->checkBoxClientRewardAuthorization->setEnabled(true);
    }else{
        *businessAuthorizedPaymentByRewards = false;
        ui->checkBoxClientRewardAuthorization->setDisabled(true);

    }
}

void SalesClient::on_checkBoxClientRewardAuthorization_toggled(bool checked)
{
    if(checked){
        clientAuthorizedPaymentByRewards = true;
    }else{
        clientAuthorizedPaymentByRewards = false;
    }
}

void SalesClient::on_checkBoxEnableDiscount_toggled(bool checked)
{
    if(checked){
        *enableDiscounts = true;
    }else{
        *enableDiscounts = false;
    }
}

void SalesClient::on_checkBoxEnableRewards_toggled(bool checked)
{
    if(checked){
        *enableRewards = true;
    }else{
        *enableRewards = false;
    }
}

void SalesClient::loadCustomerAgentFromCompleter(QString &customerPhone) {
    loadSingleCustomerFromDb(customerPhone);
    loadLabelsWithCustomerData();
    isCurrentCustomerDefined = true;
    ui->leClient->clear();
    ui->le_barcodeEntry->setFocus();
}

void SalesClient::loadSingleCustomerFromDb(QString &customerPhone) {
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT customers.customer_id, customers.customer_name, customers.customer_type, customers.customer_phone, "
                              "users.name, customers.modified_on,customerCash.total, customerCredits.credit_allowed, customerCredits.credit_remaining, "
                              "customerCredits.credit_rating, customerRewards.total_rewards, (SELECT COUNT(IFNULL(customerDebt.debt_id, '0')) "
                              "WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Active') as activeDebtCount, "
                              "(SELECT SUM(IFNULL(customerDebt.amount, '0')) WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Active') "
                              "as activeDebtTotal, (SELECT COUNT(IFNULL(customerDebt.debt_id, '0')) WHERE customerDebt.customer_id=customers.customer_id "
                              "AND customerDebt.status='Overdue') as overdueDebtCount, (SELECT SUM(IFNULL(customerDebt.amount, '0')) "
                              "WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Overdue') as overdueDebtTotal "
                              "FROM customers  LEFT JOIN users ON users.user_id = customers.customer_id LEFT JOIN customerDebt ON "
                              "customerDebt.customer_id = customers.customer_id LEFT JOIN  customerRewards ON customerRewards.customer_id = customers.customer_id "
                              "LEFT JOIN customerCredits ON customerCredits.customer_id = customers.customer_id LEFT JOIN customerCash ON "
                              "customerCash.customerCash_id = customers.customer_id WHERE customers.customer_phone = :customerPhone GROUP BY customerDebt.customer_id, customers.customer_id, "
                              "customerCash.customerCash_id, customerCredits.credit_remaining, customerRewards.customer_id, "
                              "customerCredits.credit_allowed, customerRewards.total_rewards, customerDebt.status, customerCredits.credit_rating"));
        query.bindValue(":customerPhone", customerPhone);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()){
                currentServingCustomer->customer_id = query.value(0).toInt();
                currentServingCustomer->name = query.value(1).toString();
                currentServingCustomer->customerType = query.value(2).toString();
                currentServingCustomer->phone = query.value(3).toString();
                currentServingCustomer->authorizingUser = query.value(4).toString();
                currentServingCustomer->lastModified = query.value(5).toDateTime();
                currentServingCustomer->cashOnBusiness = query.value(6).toDouble();
                currentServingCustomer->creditAllowed = query.value(7).toDouble();
                currentServingCustomer->creditRemaining = query.value(8).toDouble();
                currentServingCustomer->rewardsAvailable = query.value(9).toDouble();
                currentServingCustomer->activeDebts = query.value(10).toInt();
                currentServingCustomer->totalActiveDebts = query.value(11).toDouble();
                currentServingCustomer->badDebts = query.value(12).toInt();
                currentServingCustomer->totalBadDebts = query.value(13).toDouble();
            }
        }
    }
}

void SalesClient::setCurrentSaleId() {
    LOGx("setting your id");
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT  IFNULL(sales.sale_id, 0) FROM sales ORDER BY sales.sale_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            *lastId = query.value(0).toInt();
            LOGxy("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", *lastId);

            *currentSaleId = *lastId+1;
            LOGxy("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", *currentSaleId);
            while (query.next()){
                *lastId = query.value(0).toInt();
                LOGxy("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", *lastId);

                *currentSaleId = *lastId+1;
                LOGxy("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", *currentSaleId);
            }
        }
    }
}

void SalesClient::establishWholesaleSale() {
    *enableRewards = false;
    *enableDiscounts = false;
    ui->checkBoxEnableRewardPayment->setDisabled(true);
    ui->checkBoxClientRewardAuthorization->setDisabled(true);
    ui->checkBoxEnableRewards->setDisabled(true);
    ui->checkBoxEnableDiscount->setDisabled(true);
}

void SalesClient::resetCashierRecords() {
    if(customerDefined){
        clearCustomerDetails();
    }
    clearSalesData();
    setDefaultSalesValue();
}

void SalesClient::clearCustomerDetails() {
    isCurrentCustomerDefined = false;
    ui->lblCustomerPhone->clear();
    ui->lblServing->clear();
    ui->lblAvailableRewards->clear();
    ui->lblAvailableCredit->clear();
    ui->lblCashOnBusiness->clear();
    ui->lblDebt->clear();
    ui->leClient->clear();
    ui->le_barcodeEntry->setFocus();

}

void SalesClient::clearSalesData() {
    itemsBought->clear();

}

void SalesClient::setDefaultSalesValue() {
    ui->lblComputedTotal->setText("0.00");
    ui->lblSaleValue->setText("0.00");
    ui->lblSaleTax->setText("0.00");
    ui->lblThisSaleTotal->setText("0.00");
    *totalToPay = 0;
}

void SalesClient::setFocusForSales() {
    ui->le_barcodeEntry->clear();
    ui->leClient->clear();
    ui->le_SearchProduct->clear();
    ui->le_barcodeEntry->setFocus();
}
//PRODUCT MANAGEMENT
void SalesClient::grabBarcodeFromEntry() {
    if (ui->le_barcodeEntry->text().isEmpty()){
        QMessageBox::critical(this, "Barcode Empty Cell Error!", "No barcode entered. Please enter a valid barcode!");
    }else{
        uniqueID = ui->le_barcodeEntry->text();
        getScannedProductFromDB(uniqueID);
    }

}
void SalesClient::grabBarcodeFromCompleter(QString& currentProduct) {
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT products.product_id, products.productName, products.productBarcode, products.productMeasurement, products.productWSPrice"
                              ", products.productRPrice, products.productImage, IFNULL(productDiscounts.amount, 0), IFNULL(productRewards.reward_amount, 0), stock.quantity FROM products "
                              "LEFT JOIN productDiscounts ON productDiscounts.product_id=products.product_id "
                              "LEFT JOIN productRewards ON productRewards.product_id= products.product_id LEFT JOIN stock ON stock.product_id = products.product_id WHERE productName = :currentProduct"));
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
                addedProduct->stockQuantity = query.value(9).toInt();
                addedProduct->discounted = true;
                addedProduct->rewarded = true;
                *addedProductName = addedProduct->product_name;
                *productQuantity = addedProduct->product_quantity;
                *productPrice = addedProduct->product_rtprice;
                *unitPrice = QString::number(*productPrice);
                *stockQuantityAvailable = addedProduct->stockQuantity;

            }
            if(!addedProductName->isEmpty()){
//                scannedProductManagement(*barCodeFromName, *quantityToBeBought);
            }else{

            }
        }
    }
}

//SCANNED PRODUCT FROM DATABASE
void SalesClient::getScannedProductFromDB(QString barcodeScanned) {
    barcodeScanned = ui->le_barcodeEntry->text();
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
            addedProduct->product_id = query.value(0).toInt();
//            LOGxy("we grabbed", addedProduct->product_id.toInt());
            addedProduct->product_name = query.value(1).toString();
            addedProduct->product_barcode = query.value(2).toString();
            addedProduct->product_quantity = query.value(3).toString();
            addedProduct->product_wsprice = query.value(4).toInt();
            addedProduct->product_rtprice = query.value(5).toInt();
            addedProduct->product_image = query.value(6).toInt();
            addedProduct->product_discount = query.value(7).toFloat();
            addedProduct->product_rewards = query.value(8).toFloat();
            addedProduct->stockQuantity = query.value(9).toFloat();

            *addedProductId = addedProduct->product_id;
            *addedProductName = addedProduct->product_name;
            *productQuantity = addedProduct->product_quantity;
            *productPrice = addedProduct->product_rtprice;
            *unitPrice = QString::number(*productPrice);
            *unitReward = addedProduct->product_rewards;
            *unitDiscount = addedProduct->product_discount;
            *stockQuantityAvailable = addedProduct->stockQuantity;

        }
        if(!addedProductName->isEmpty()){
            if(*stockQuantityAvailable>0){
                scannedProductManagement(barcodeScanned, *addedProductId, *stockQuantityAvailable);
            }else{
                QMessageBox::critical(this, "Out of Stock Error!", "Manage your stock. You are trying to sell a product out of stock!");
                return;
            }
        }else{

        }
    }
}

void SalesClient::addCustomerAndDefineClient() {
    addNewCustomerAtPurchase = true;
    addNewCustomerToDatabase();
}

void SalesClient::selectLastCustomerAdded() {
    LOGx("we are getting you your last added customer");
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT customers.customer_id, customers.customer_name, customers.customer_type, customers.customer_phone, "
                              "users.name, customers.modified_on,customerCash.total, customerCredits.credit_allowed, customerCredits.credit_remaining, "
                              "customerCredits.credit_rating, customerRewards.total_rewards, (SELECT COUNT(IFNULL(customerDebt.debt_id, '0')) "
                              "WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Active') as activeDebtCount, "
                              "(SELECT SUM(IFNULL(customerDebt.amount, '0')) WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Active') "
                              "as activeDebtTotal, (SELECT COUNT(IFNULL(customerDebt.debt_id, '0')) WHERE customerDebt.customer_id=customers.customer_id "
                              "AND customerDebt.status='Overdue') as overdueDebtCount, (SELECT SUM(IFNULL(customerDebt.amount, '0')) "
                              "WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Overdue') as overdueDebtTotal "
                              "FROM customers  LEFT JOIN users ON users.user_id = customers.customer_id LEFT JOIN customerDebt ON "
                              "customerDebt.customer_id = customers.customer_id LEFT JOIN  customerRewards ON customerRewards.customer_id = customers.customer_id "
                              "LEFT JOIN customerCredits ON customerCredits.customer_id = customers.customer_id LEFT JOIN customerCash ON "
                              "customerCash.customerCash_id = customers.customer_id GROUP BY customerDebt.customer_id, customers.customer_id, "
                              "customerCash.customerCash_id, customerCredits.credit_remaining, customerRewards.customer_id, "
                              "customerCredits.credit_allowed, customerRewards.total_rewards, customerDebt.status, "
                              "customerCredits.credit_rating ORDER BY customers.customer_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()){
                currentServingCustomer->customer_id = query.value(0).toInt();
                currentServingCustomer->name = query.value(1).toString();
                currentServingCustomer->customerType = query.value(2).toString();
                currentServingCustomer->phone = query.value(3).toString();
                currentServingCustomer->authorizingUser = query.value(4).toString();
                currentServingCustomer->lastModified = query.value(5).toDateTime();
                currentServingCustomer->cashOnBusiness = query.value(6).toDouble();
                currentServingCustomer->creditAllowed = query.value(7).toDouble();
                currentServingCustomer->creditRemaining = query.value(8).toDouble();
                currentServingCustomer->rewardsAvailable = query.value(9).toDouble();
                currentServingCustomer->activeDebts = query.value(10).toInt();
                currentServingCustomer->totalActiveDebts = query.value(11).toDouble();
                currentServingCustomer->badDebts = query.value(12).toInt();
                currentServingCustomer->totalBadDebts = query.value(13).toDouble();

                loadLabelsWithCustomerData();
                isCurrentCustomerDefined = true;
                ui->leClient->clear();
                ui->le_barcodeEntry->setFocus();
                //call complete sales with the data added to the db
            }
        }
    }
}

void SalesClient::addNewCustomerToDatabase() {
    addNewCustomer = new AddCustomer(this, *currentUser);
    addNewCustomer->setModal(true);
    addNewCustomer->show();
    QObject::connect(addNewCustomer, SIGNAL(customerAdditionTaskComplete()), this, SLOT(receiveCustomerAdditionComplete()));
}

void SalesClient::loadLabelsWithCustomerData() {
    ui->lblCustomerPhone->setText(currentServingCustomer->phone);
    ui->lblServing->setText(currentServingCustomer->name +" :: "+
                            currentServingCustomer->phone);
    ui->lblAvailableRewards->setText(QString::number(currentServingCustomer->rewardsAvailable));
    ui->lblAvailableCredit->setText(QString::number(currentServingCustomer->creditRemaining));
    ui->lblCashOnBusiness->setText(QString::number(currentServingCustomer->cashOnBusiness));
    ui->lblDebt->setText(QString::number(currentServingCustomer->badDebts)+" / "+
                         QString::number(currentServingCustomer->totalBadDebts)+" :: "+
                         QString::number(currentServingCustomer->activeDebts)+" / "+
                         QString::number(currentServingCustomer->totalActiveDebts));
}

void SalesClient::on_btnPlaceOrder_clicked()
{

}

void SalesClient::on_btnViewPlacedOrders_clicked()
{

}

void SalesClient::on_btnViewProcessedOrders_clicked()
{

}

void SalesClient::on_btnViewDeliveredOrders_clicked()
{

}
