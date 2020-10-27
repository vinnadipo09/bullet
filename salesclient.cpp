#include "salesclient.h"
#include "ui_salesclient.h"
//CONSTRUCTOR STARTS
SalesClient::SalesClient(QWidget *parent, loggedUser &currentLoggedInUser) :
    QMainWindow(parent),
    ui(new Ui::SalesClient)
{
    //resolve rewards first
    //resolve display values
    //enable discounts - structure displays
    //enable rewards - structure displays
    //make payment
    //return sale_id
    //modify user interface
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
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Id"<<"Barcode"<<"Description"<<"Units"<<"Price"<<"Quantity"<<"Discount"<<"Rewards"<<"Total");
    addedProduct = new productFromDb;
    discountOnItem= new QString;
    pointsOnItem= new QString;
    itemTotalPrice = new QString;
    itemQuantityPurchased = new QString;
    sale_tax = new float;
    currentCashierUser = new loggedUser;
    barCodeFromName = new QString;
    processedProduct = new QString;
    customerAgentToServe = new QString;
    ongoingSession = new session;
    newSession = new session;
    currentSaleId = new int;
    unitSubTotal = new float;
    customerPhone = new QString;
    executionType = new QString;
    saleType = new QString;
    lastId = new int;
    totalTax = new float;
    *currentCashierUser = currentLoggedInUser;
    businessAuthorizedPaymentByRewards = new bool;
    currentServingCustomer = new Customer;

    total_discount_accrued = new float;
    total_rewards_accrued = new float;

    *total_discount_accrued = 0;
    *total_rewards_accrued = 0;

    minimumRewardForPayment = new int;
    maximumCreditAllowedByBusiness = new int;
//    Debug(*currentCashierUser);
    *sale_tax = 0;
    itemsBought = new std::map<int, purchasedItem>;
    rewardTotal = new float ;
    discountTotal = new float ;
    loadItemsFromDbToCompleter();
    loadCustomersToCompleter();
    ui->le_barcodeEntry->setFocus();
    quantityToBeBought = new int;
    priorityRow = new int;
    *priorityRow = -1;
    QObject::connect(ui->le_barcodeEntry, SIGNAL(returnPressed()),
                     this, SLOT(grabBarcodeFromEntry()));
    QObject::connect(ui->le_SearchProduct, SIGNAL(returnPressed()),
                     this, SLOT(load_product_by_product_name()));
    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();
    rowToEdit = new int;
    quantityChange = new int;
    originallyAssignedQty = new int;
    *quantityChange =0;
    *originallyAssignedQty = 0;
    rowToEditFromSelection = new int;
    occupied_queues = new int;
    *occupied_queues =0;

    product_rewards_enabled = new bool;
    product_discounts_enabled = new bool;
    base_price = new float ;
    *base_price = 0;
    price_to_pay = new float ;
    amount_to_pay = new float ;
    *amount_to_pay = 0;
    price_to_pay = 0;
    *product_rewards_enabled = false;
    *product_discounts_enabled = false;
    isCurrentCustomerDefined = false;
    discountEnabledBeforeWholesale = new bool;
    rewardsEnabledBeforeWholesale= new bool;
    rewardsPaymentEnabledBeforeWholesale= new bool;
    clientAuthorizedPaymentByRewards;
    businessAuthorizedPaymentByRewards;
    QObject::connect(ui->tableWidget->selectionModel(), SIGNAL(selectionChanged(const QItemSelection&,
                                                                       const QItemSelection&)), SLOT(getRowToEdit()));
    ui->cbSalesType->setCurrentIndex(0);
    *saleType = "Retail";
    QObject::connect(this, SIGNAL(enableSystemsSent()), this, SLOT(enableSystemsCalled()));
    connect(ui->cbSalesType, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){ /* ... */
        if (index==0){
            if (ui->tableWidget->columnCount()<1){
                QMessageBox::StandardButton changeToRetail;
                changeToRetail = QMessageBox::warning(this, "Migrate to Retail",
                                                      "You are leaving Wholesale Prices and Terms. Want to Proceed?",
                                                      QMessageBox::Yes | QMessageBox::No);
                if (changeToRetail == QMessageBox::Yes) {
                    *saleType = "Retail";
                    ui->lblSaleType->setStyleSheet("background-color:green");
                    ui->lblSaleType->setText("Retail");
                    setToRetailMigration();
                    setFocusForSales();
                }else{
                    ui->cbSalesType->setCurrentIndex(1);
                }
            }else{
                QMessageBox::StandardButton changeToRetail;
                changeToRetail = QMessageBox::warning(this, "Migrate to Retail",
                                                      "All your prices will be changed to retail. Sure to proceed?",
                                                      QMessageBox::Yes | QMessageBox::No);
                if (changeToRetail == QMessageBox::Yes) {
                    *saleType = "Retail";
                    ui->lblSaleType->setStyleSheet("background-color:green");
                    ui->lblSaleType->setText("Retail");
                    setToRetailMigration();
                    setFocusForSales();
                }else{
                    ui->cbSalesType->setCurrentIndex(1);
                }
            }

        }else if(index==1) {
            if (ui->tableWidget->columnCount()<1){
                QMessageBox::StandardButton changeToRetail;
                changeToRetail = QMessageBox::warning(this, "Migrate to Wholesale",
                                                      "You are leaving Retail Prices and Terms. Want to Proceed?",
                                                      QMessageBox::Yes | QMessageBox::No);
                if (changeToRetail == QMessageBox::Yes) {
                    *saleType = "Wholesale";
                    ui->lblSaleType->setStyleSheet("background-color:green");
                    ui->lblSaleType->setText("Wholesale");
                    setToWholesaleMigration();
                    setFocusForSales();
                }else{
                    ui->cbSalesType->setCurrentIndex(1);
                }
            }else{
                QMessageBox::StandardButton changeToRetail;
                changeToRetail = QMessageBox::warning(this, "Migrate to Wholesale",
                                                      "All your prices will be changed to retail. Sure to proceed?",
                                                      QMessageBox::Yes | QMessageBox::No);
                if (changeToRetail == QMessageBox::Yes) {
                    *saleType = "Wholesale";
                    ui->lblSaleType->setStyleSheet("background-color:green");
                    ui->lblSaleType->setText("Wholesale");
                    setToWholesaleMigration();
                    setFocusForSales();
                }else{
                    ui->cbSalesType->setCurrentIndex(1);

                }
            }
        }
    });
    connect(ui->cbmaximumCredit, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){ /* ... */
                std::string maxOutCredit = ui->cbmaximumCredit->currentText().toStdString();
                std::string myMaxCreditValue = maxOutCredit.substr(maxOutCredit.find("|") + 1);
                *maximumCreditAllowedByBusiness = std::stoi(myMaxCreditValue);
    });
    connect(ui->cbMinimumReward, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){ /* ... */
                std::string rewardPayment = ui->cbMinimumReward->currentText().toStdString();
                std::string myRewardValue = rewardPayment.substr(rewardPayment.find("|") + 1);
                *minimumRewardForPayment = std::stoi(myRewardValue);
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

    addLimitsToCombobox();
    setDefaultMinimumRewardLimit();
    setDefaultMaximumCredit();

    ui->cbmaximumCredit->setDisabled(true);
    ui->cbMinimumReward->setDisabled(true);
    ui->tableWidget->
    connect(ui->tableWidget, SIGNAL(cellClicked(int, int)),
            this, SLOT(edit_item_in_row(int, int)));
    queue_items = new std::map<int, queue_item>;
    queue_control = new std::map<int, bool>;
    initialize_queue(*queue_control);
}

//CONSTRUCTOR ENDS

//DESTRUCTOR STARTS
SalesClient::~SalesClient()
{
    delete ui;
}
//DESTRUCTOR ENDS

//SALE CLIENT CLOSE EVENT STARTS
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
//SALE CLIENT CLOSE EVENT ENDS






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

//LOAD PRODUCT TO TABLE WITHOUT BARCODE
void SalesClient::load_product_by_product_name() {
    QString product_name = ui->le_SearchProduct->text();
    if (ui->le_SearchProduct->text().isEmpty()){
        QMessageBox::critical(this, "EMPTY PRODUCT!", "No Data to Process. Please Type in Product Name!");
        ui->le_SearchProduct->setFocus();

    }else{
        get_product_from_db_no_barcode(product_name);
        ui->le_SearchProduct->clear();
    }
}
//MANAGE SCANNED PRODUCT TO AVOID DUPLICATES IN TABLE

void SalesClient::scannedProductManagement(QString& barcode, int & currentProductId, int & stockAvailable) {
    std::map<int, purchasedItem>::iterator it;

    it = itemsBought->find(currentProductId);
    if(it!=itemsBought->end()){
        *originallyAssignedQty = it->second.quantity_purchased;
        if(it->second.quantity_purchased+1<= stockAvailable){
            it->second.quantity_purchased +=1;
            int rowsSearch = ui->tableWidget->rowCount();
            for(int i = 0; i<rowsSearch; i++){
                if(ui->tableWidget->item(i,0)->text().toInt()==currentProductId){
                    increaseProductInExistingRow(i, it->second.quantity_purchased);
                    LOGxy("QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", *total_discount_accrued);

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
        myItem.discount_amount = addedProduct->product_discount;
        myItem.actual_price = addedProduct->product_rtprice;
        myItem.reward_amount = addedProduct->product_rewards;
        int temp_discount_value;
        int temp_reward_value;

        if (*product_discounts_enabled){
            *base_price =  *base_price + addedProduct->product_rtprice;
            *amount_to_pay =  *amount_to_pay + ((addedProduct->product_rtprice)-(addedProduct->product_discount));
            *total_discount_accrued = *total_discount_accrued + addedProduct->product_discount;
        }else{
            *base_price = *base_price + addedProduct->product_rtprice;
            *amount_to_pay = *amount_to_pay + addedProduct->product_rtprice;
        }
        if(*product_rewards_enabled){
            *total_rewards_accrued = *total_rewards_accrued+addedProduct->product_rewards;
        }else{
            *total_rewards_accrued = *total_rewards_accrued;
        }
        myItem.quantity_purchased = initial_quantity;
        itemsBought->insert(std::pair<int, purchasedItem>(currentProductId, myItem));
        LOGxy("M ", *base_price);
        LOGxy("N ", *amount_to_pay);
        createRowsToAddProductPurchased(initial_quantity);
        ui->le_barcodeEntry->clear();
        uniqueID = "";
        ui->le_barcodeEntry->setFocus();
    }
    set_sale_data();
}
//void SalesClient::alteredProductManagement(int &currentProductId, int &stockAvailable, int &newQty) {
//    std::map<int, purchasedItem>::iterator it;
//    it = itemsBought->find(currentProductId);
//    if(it!=itemsBought->end()){
//        if(it->second.quantity_purchased != newQty){
//            it->second.quantity_purchased = newQty;
//            int rowsSearch = ui->tableWidget->rowCount();
//            for(int i = 0; i<rowsSearch; i++){
//                if(ui->tableWidget->item(i,0)->text().toInt()==currentProductId){
//                    modifyProductInRowCreated(i, it->second.quantity_purchased);
//                }
//            }
//            ui->le_barcodeEntry->clear();
//            ui->le_barcodeEntry->setFocus();
//        }else{
//            QMessageBox::critical(this, "Out of Stock Error!", "Manage your stock. The maximum available stock has been depleted!");
//            ui->le_barcodeEntry->clear();
//            ui->le_barcodeEntry->setFocus();
//            return;
//        }
//    }else{
//        purchasedItem myItem;
//        if (*product_discounts_enabled && addedProduct->discounted){
//            myItem.prod_discounted = true;
//            myItem.discount_amount = addedProduct->product_discount;
//            myItem.salePrice = addedProduct->product_rtprice - addedProduct->product_discount;
//        }else{
//            myItem.prod_discounted = false;
//            myItem.discount_amount = 0;
//            myItem.salePrice = addedProduct->product_rtprice;
//        }
//        if(*product_rewards_enabled && addedProduct->rewarded){
//            myItem.prod_rewarded = true;
//            myItem.reward_amount = addedProduct->product_rewards;
//        }else{
//            myItem.prod_rewarded = false;
//            myItem.reward_amount = 0;
//        }
//        myItem.quantity_purchased = initial_quantity;
//        itemsBought->insert(std::pair<int, purchasedItem>(currentProductId, myItem));
//        createRowsToAddProductPurchased(initial_quantity);
//        ui->le_barcodeEntry->clear();
//        uniqueID = "";
//        ui->le_barcodeEntry->setFocus();
//    }
//}
//void SalesClient::modifyProductInRowCreated(int &rowAffected, int &qtyIncrease) {
//    float singleItemDiscount = 0;
//    float singleItemReward = 0;
//    int columnsToModifyProducts = 9;
//    float singleItemDiscountTotal =0;
//    float singleItemRewardsTotal =0;
//    for(int i =0; i<columnsToModifyProducts; i++){
//        if(i==5){
//            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
//        }else if(i==6){
//            if(*product_discounts_enabled){
//                singleItemDiscount = addedProduct->product_discount;
//                singleItemDiscountTotal= singleItemDiscount*quantityValue;
//                *discountTotal = *discountTotal+singleItemDiscount;
//                ui->lblPossibleDiscounts->setText(QString::number(*discountTotal));
//            } else{
//                *discountTotal = 0;
//            }
//            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemDiscountTotal));
//        }else if(i==7){
//            if (*product_rewards_enabled){
//                singleItemReward = addedProduct->product_rewards;
//                singleItemRewardsTotal = singleItemReward*quantityValue;
//                *rewardTotal = *rewardTotal+singleItemReward;
//                ui->lblPossibleRewards->setText(QString::number(*rewardTotal));
//
//            }else{
////                *rewardTotal = singleItemReward*quantityValue;
//                *rewardTotal = 0;
//            }
//            ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemRewardsTotal));
//        }else if(i==8){
//            int unitPrice = ui->tableWidget->item(rowAffected, 4)->text().toInt();
//            if(*product_discounts_enabled){
//                *unitSubTotal = (unitPrice-singleItemDiscount)*quantityValue;
//            } else{
//                *unitSubTotal = unitPrice*quantityValue;
//            }
//            ui->tableWidget->item(rowAffected, i)->setText(QString::number(*unitSubTotal));
//            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 4)->text().toInt();
//            float tax = 0.16*(*totalToPay);
//            float sale_value = *totalToPay - tax;
//
//            QString tempTax = QString::number(tax, 'f', 2);
//            QString tempSales = QString::number(sale_value, 'f', 2);
//            ui->lblComputedTotal->setText(QString::number(*totalToPay)+".00");
//            ui->lblSaleValue->setText(tempSales);
//            ui->lblSaleTax->setText(tempTax);
//            ui->lblThisSaleTotal->setText(QString::number(*totalToPay)+".00");
//        }
//    }
//}

//INCREASE PRODUCT COUNT IN TABLE WHEN QUANTITY IS GREATER THAN ONE
void SalesClient::increaseProductInExistingRow(int &rowAffected, int &quantityValue) {
    float singleItemDiscount = 0;
    float singleItemReward = 0;
    int columnsToModifyProducts = 9;
    float singleItemDiscountTotal =0;
    float singleItemRewardsTotal =0;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==5){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==6){
            if(*product_discounts_enabled){
                float item_total_discount = (addedProduct->product_discount)*(quantityValue-1);
                *discountTotal = item_total_discount+addedProduct->product_discount;
                *total_discount_accrued = *total_discount_accrued + addedProduct->product_discount;
                *amount_to_pay = *amount_to_pay+(addedProduct->product_rtprice - addedProduct->product_discount);
                *base_price = *base_price + addedProduct->product_rtprice;
                LOGxy("PPPPPPPPPPPPPPPPPPPPPPPPPPPPP", item_total_discount);
            } else{
                *base_price =*base_price + addedProduct->product_rtprice;
                *amount_to_pay =*amount_to_pay + addedProduct->product_rtprice;
                *discountTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText("Kshs. "+QString::number(*discountTotal)+"["+QString::number(addedProduct->product_discount)+"]");

        }else if(i==7){
            if (*product_rewards_enabled){
                float item_total_rewards = (addedProduct->product_rewards)*(quantityValue-1);
                *rewardTotal = item_total_rewards+addedProduct->product_rewards;
                *total_rewards_accrued +=  addedProduct->product_rewards;
            }else{
//                *rewardTotal = singleItemReward*quantityValue;
                *rewardTotal = 0;
            }
            ui->tableWidget->item(rowAffected, i)->setText("Kshs. "+QString::number(*rewardTotal)+"["+QString::number(addedProduct->product_rewards)+"]");

        }else if(i==8){
            float current_sub_total;
            int unitPrice = addedProduct->product_rtprice;
            if(*product_discounts_enabled){
                current_sub_total = (addedProduct->product_rtprice - addedProduct->product_discount)*(quantityValue-1);
                *unitSubTotal = current_sub_total +(addedProduct->product_rtprice - addedProduct->product_discount);
            } else{
                current_sub_total = (addedProduct->product_rtprice)*(quantityValue-1);
                *unitSubTotal = current_sub_total+addedProduct->product_rtprice;
            }
            ui->tableWidget->item(rowAffected, 8)->setText("KShs. "+QString::number(*unitSubTotal));
            int modifiedQtyPrice = quantityValue-*originallyAssignedQty;
        }
    }
    set_sale_data();
}
//DECREASE PRODUCT COUNT IN EXISTING ROWS
void SalesClient::decreaseProductInExistingRow(int &rowAffected, int &quantityValue) {
    if (quantityValue==0){
        LOGx("[IMPLEMENT DELETE]");
    }else{
        float singleItemDiscount = 0;
        float singleItemReward = 0;
        int columnsToModifyProducts = 9;
        float singleItemDiscountTotal =0;
        float singleItemRewardsTotal =0;
        for(int i =0; i<columnsToModifyProducts; i++){
            if(i==5){
                ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
            }else if(i==6){
                if(*product_discounts_enabled){
                    singleItemDiscount = addedProduct->product_discount;
                    singleItemDiscountTotal= singleItemDiscount*quantityValue;
                    *discountTotal = *discountTotal+singleItemDiscount;
                    ui->lblPossibleDiscounts->setText(QString::number(*discountTotal));
                } else{
                    *discountTotal = 0;
                }
                ui->tableWidget->item(rowAffected, i)->setText(QString::number(singleItemDiscountTotal)+"["+quantityValue+"]");
            }else if(i==7){
                if (*product_rewards_enabled){
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
                if(*product_discounts_enabled){
                    *unitSubTotal = (unitPrice-singleItemDiscount)*quantityValue;
                } else{
                    *unitSubTotal = unitPrice*quantityValue;
                }
                ui->tableWidget->item(rowAffected, i)->setText(QString::number(*unitSubTotal));
                int modifiedQtyPrice = quantityValue-*originallyAssignedQty;
                *amount_to_pay = *amount_to_pay - (ui->tableWidget->item(rowAffected, 4)->text().toInt()*quantityValue);
                set_sale_data();
            }
        }
    }

}
//MAINTAIN PRODUCT IN EXISTING ROW
void SalesClient::maintainProductInExistingRow(int &rowAffected, int &quantityValue) {
    LOGx("[USELESS HUMAN BEING]");
}
//CREATE ROW AND ADD PRODUCT PURCHASED - CONSIDER DELETING THIS
void SalesClient::createRowsToAddProductPurchased(int &quantityValue) {
    currentRowBeingInserted = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());

    addProductInRowCreated(currentRowBeingInserted, quantityValue);

//    *amount_to_pay = *amount_to_pay + ui->tableWidget->item(currentRowBeingInserted, 4)->text().toInt();
//    *rewardTotal = *rewardTotal+addedProduct->product_rewards;
//    *discountTotal = *discountTotal+addedProduct->product_discount;
//    ui->lblComputedTotal->setText("KShs. "+QString::number(*amount_to_pay)+".00");
//
//
//    float tax = 0.16*(*amount_to_pay);
//    float sale_value = *amount_to_pay - tax;
//
//    QString tempTax = QString::number(tax, 'f', 2);
//    QString tempSales = QString::number(sale_value, 'f', 2);
//    ui->lblComputedTotal->setText(QString::number(*amount_to_pay)+".00");
//    ui->lblSaleValue->setText(tempSales);
//    ui->lblSaleTax->setText(tempTax);
//    ui->lblThisSaleTotal->setText(QString::number(*amount_to_pay)+".00");
//    if(*product_rewards_enabled){
//        ui->lblPossibleRewards->setText(QString::number(*rewardTotal));
//    }
//    if (*product_discounts_enabled){
//        ui->lblPossibleDiscounts->setText(QString::number(*discountTotal));
//    }
//    *priorityRow +=1;
}
//ADD PRODUCT IN THE ROW CREATED
void SalesClient::addProductInRowCreated(int &rowCreated, int &quantityPurchased) {
    int columnsToAddProducts = 9;
    for(int i =0; i<columnsToAddProducts; i++){

        if (*saleType=="Retail"){
            if(i==0){
                QTableWidgetItem* idEntry = ui->tableWidget->item(rowCreated, i);
                if(!idEntry){
                    idEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, idEntry);
                }if(addedProduct->product_id!=NULL){
                    idEntry->setText(QString::number(addedProduct->product_id));
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
                if (addedProduct->product_rtprice!=NULL) {
                    if (*product_discounts_enabled){
                        unitPriceEntry->setText("KShs. "+QString::number(addedProduct->product_rtprice)+" ["+QString::number(addedProduct->product_rtprice-addedProduct->product_discount)+" ]");
                    }else{
                        unitPriceEntry->setText(QString::number(addedProduct->product_rtprice));
                    }
                }
            }else if(i==5) {
                QTableWidgetItem *itemQtyPurchased = ui->tableWidget->item(rowCreated, i);
                if(!itemQtyPurchased){
                    itemQtyPurchased = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, itemQtyPurchased);
                }
                QString tempQuantityPurchased = QString::number(quantityPurchased);
                *itemQuantityPurchased = tempQuantityPurchased;
                if(!itemQuantityPurchased->isEmpty()){
                    itemQtyPurchased->setText(*itemQuantityPurchased);
                }
            }else if(i==6) {
                int null_discount = 0;
                QTableWidgetItem *discountEntry = ui->tableWidget->item(rowCreated, i);
                if(!discountEntry){
                    discountEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, discountEntry);
                }
                if (*product_discounts_enabled){
                    QString tempDiscount = QString::number(addedProduct->product_discount);
                    *discountOnItem = tempDiscount;
                }else{
                    QString tempDiscount = QString::number(0);
                    *discountOnItem = tempDiscount;
                }
                if(!discountOnItem->isEmpty()){
                    if (*product_discounts_enabled){
                        discountEntry->setText("KShs. "+*discountOnItem+" ["+QString::number(addedProduct->product_discount)+" ]");
                    }else{
                        discountEntry->setText("KShs. "+QString::number(null_discount)+" ["+QString::number(null_discount)+" ]");
                    }
                }
            }else if(i==7) {
                int null_rewards = 0;
                QTableWidgetItem *rewardEntry = ui->tableWidget->item(rowCreated, i);
                if (!rewardEntry) {
                    rewardEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, rewardEntry);
                }
                if(*product_rewards_enabled){
                    QString tempPoints = QString::number(addedProduct->product_rewards);
                    *pointsOnItem = tempPoints;
                }else{
                    QString tempPoints = QString::number(0);
                    *pointsOnItem = tempPoints;
                }
                if (!pointsOnItem->isEmpty()) {
                    if (*product_rewards_enabled){
                        rewardEntry->setText("KShs. "+*pointsOnItem+" ["+QString::number(addedProduct->product_rewards)+" ]");
                    }else{
                        rewardEntry->setText("KShs. "+QString::number(null_rewards)+" ["+QString::number(null_rewards)+" ]");
                    }
                }
            }else if(i==8) {
                float total;
                QTableWidgetItem *unitSubTotalEntry = ui->tableWidget->item(rowCreated, i);
                if(!unitSubTotalEntry){
                    unitSubTotalEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, unitSubTotalEntry);
                }
                if(*product_discounts_enabled){
                    total = quantityPurchased*(addedProduct->product_rtprice-addedProduct->product_discount);
                    *itemTotalPrice = QString::number(total);
                }else{
                    total = quantityPurchased*(addedProduct->product_rtprice);
                    *itemTotalPrice = QString::number(total);
                }

                if(!itemTotalPrice->isEmpty()){
                    unitSubTotalEntry->setText("KShs. "+*itemTotalPrice);
                }


            }else{

            }
        }else if(*saleType=="Wholesale"){
            if(i==0){
                QTableWidgetItem* idEntry = ui->tableWidget->item(rowCreated, i);
                if(!idEntry){
                    idEntry = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, idEntry);
                }if(addedProduct->product_id!=NULL){
                    idEntry->setText(QString::number(addedProduct->product_id));
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
                if (addedProduct->product_wsprice!=NULL) {
                    unitPriceEntry->setText(QString::number(addedProduct->product_wsprice));
                }
            }else if(i==5) {
                QTableWidgetItem *itemQtyPurchased = ui->tableWidget->item(rowCreated, i);
                if(!itemQtyPurchased){
                    itemQtyPurchased = new QTableWidgetItem;
                    ui->tableWidget->setItem(rowCreated, i, itemQtyPurchased);
                }
                int total = quantityPurchased*(addedProduct->product_wsprice);
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
                if (*product_discounts_enabled){
                    QString tempDiscount = QString::number(addedProduct->product_discount);
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
                if(*product_rewards_enabled){
                    QString tempPoints = QString::number(addedProduct->product_rewards);
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
                if(*product_discounts_enabled){
                    int total = quantityPurchased*(addedProduct->product_wsprice-addedProduct->product_discount);
                    *itemTotalPrice = QString::number(total);
                }else{
                    int total = quantityPurchased*(addedProduct->product_wsprice);
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
//LOAD PRODUCT NAMES TO COMPLETER
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

//COMPLETE SALE
void SalesClient::goToPaymentAndCompleteSale() {
    //come back to me for complete payment
    int sale_id = *currentSaleId;
    completePayment = new CompletePaymentWindow(this, *currentCashierUser,sale_id,
                                                *itemsBought, *product_rewards_enabled, *rewardTotal,
                                                *product_discounts_enabled, *discountTotal,
                                                *currentServingCustomer, *amount_to_pay,
                                                *minimumRewardForPayment, *maximumCreditAllowedByBusiness);
    completePayment->setModal(true);
    completePayment->show();
}
void SalesClient::on_btnCompleteSales_clicked()
{
//    std::map<int, purchasedItem>::iterator it;

    if(!isCurrentCustomerDefined){
        QMessageBox::StandardButton defineCustomer;

        defineCustomer = QMessageBox::information(this
                , "NO CUSTOMER/ AGENT DEFINED"
                , "No customer defined. Do you want to add customer to the database?"
                , QMessageBox::Yes | QMessageBox::No, QMessageBox::No );
        if(defineCustomer==QMessageBox::No){
            goToPaymentAndCompleteSale();

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
            *amount_to_pay = *amount_to_pay - ui->tableWidget->item(rowAffected, 8)->text().toInt();
            set_sale_data();
        }
    }
}



//void SalesClient::on_btnReduceQtyByOne_clicked()
//{
//    reducedQuantityPurchased();
//}

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
            *amount_to_pay = *amount_to_pay - ui->tableWidget->item(rowAffected, 4)->text().toInt();
            set_sale_data();
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
        if(ui->tableWidget->rowCount()==0){
            *product_discounts_enabled = true;
        }else{
            *product_discounts_enabled = true;
            updateDiscountsMidway(*itemsBought);
        }
    }else{
        if(ui->tableWidget->rowCount()==0){
            *product_discounts_enabled = false;
        }else{
            *product_discounts_enabled = false;
            updateDiscountsMidway(*itemsBought);
        }
    }
}

void SalesClient::on_checkBoxEnableRewards_toggled(bool checked)
{
    if(checked){
        if(ui->tableWidget->rowCount()==0){
            *product_rewards_enabled = true;
        }else{
            *product_rewards_enabled = true;
            updateRewardsMidway(*itemsBought);
        }
    }else{
        if(ui->tableWidget->rowCount()==0){
            *product_rewards_enabled = false;
        }else{
            *product_rewards_enabled = false;
            updateRewardsMidway(*itemsBought);
        }
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
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT  IFNULL(sales.sale_id, 0) FROM sales ORDER BY sales.sale_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            *lastId = query.value(0).toInt();
            *currentSaleId = *lastId+1;
            while (query.next()){
                *lastId = query.value(0).toInt();
                *currentSaleId = *lastId+1;
            }
        }
    }
}

void SalesClient::establishWholesaleSale() {
    *product_rewards_enabled = false;
    *product_discounts_enabled = false;
    ui->checkBoxEnableRewardPayment->setDisabled(true);
    ui->checkBoxClientRewardAuthorization->setDisabled(true);
    ui->checkBoxEnableRewards->setDisabled(true);
    ui->checkBoxEnableDiscount->setDisabled(true);
}

void SalesClient::setToWholesaleMigration() {
    *amount_to_pay = 0;
    toWholeSaleDisableSystems();
    if (*product_discounts_enabled){
        *discountEnabledBeforeWholesale = true;
        ui->checkBoxEnableDiscount->setChecked(false);
    } else{
        *discountEnabledBeforeWholesale = false;
    }
    if (*product_rewards_enabled){
        *rewardsEnabledBeforeWholesale = true;
        ui->checkBoxEnableRewards->setChecked(false);
    } else{
        *rewardsEnabledBeforeWholesale = false;
    }
    if (rewardsPaymentOptionEnabled){
        *rewardsPaymentEnabledBeforeWholesale = true;
    }else{
        *rewardsPaymentEnabledBeforeWholesale = false;
    }

    setWholesalePrices(*itemsBought);
}

void SalesClient::setToRetailMigration() {
    *amount_to_pay = 0;
    fromWholeSaleEnableSystems();
    if (*discountEnabledBeforeWholesale){
        ui->checkBoxEnableDiscount->setChecked(true);
    } else{
        ui->checkBoxEnableDiscount->setChecked(false);
    }
    if (*rewardsEnabledBeforeWholesale){
        ui->checkBoxEnableRewards->setChecked(true);
    } else{
        ui->checkBoxEnableRewards->setChecked(false);
    }
    if (*rewardsPaymentEnabledBeforeWholesale){
        ui->checkBoxEnableRewardPayment->setChecked(true);
    }else{
        ui->checkBoxEnableRewardPayment->setChecked(false);
    }
    setRetailPrices(*itemsBought);
}

void SalesClient::setWholesalePrices(std::map<int, purchasedItem> &itemsBought) {
    int mapSize = itemsBought.size();
        for (auto const & myPair: itemsBought) {
            int productId = myPair.first;
            int quantityPurchased = myPair.second.quantity_purchased;
            obtainWholesaleValuesAndUpdateTable(productId);
        }
}
void SalesClient::obtainWholesaleValuesAndUpdateTable(int & productId) {
    int unitSubTotal;
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT productWSPrice FROM products WHERE product_id = :productId"));
        query.bindValue(":productId", productId);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()) {
                int wholesalePrice = query.value(0).toInt();
                //update table
                int rowsSearch = ui->tableWidget->rowCount();
                for(int i = 0; i<rowsSearch; i++){
                    if(ui->tableWidget->item(i,0)->text().toInt()==productId){
                        ui->tableWidget->item(i, 4)->setText(QString::number(wholesalePrice));
                        int quantityPurchased = ui->tableWidget->item(i,5)->text().toInt();
                        unitSubTotal = quantityPurchased*wholesalePrice;
                        ui->tableWidget->item(i, 8)->setText(QString::number(unitSubTotal));
                    }
                }
                *amount_to_pay+=unitSubTotal;
                setUpdatedSalesValues();
            }
        }
    }else{
        LOGx("[DATABASE ERROR]");

    }
}

void SalesClient::setRetailPrices(std::map<int, purchasedItem> &itemsBought) {
    int mapSize = itemsBought.size();
    for (auto const & myPair: itemsBought) {
        int productId = myPair.first;
        obtainRetailValuesAndUpdateTable(productId);
    }
}

void SalesClient::obtainRetailValuesAndUpdateTable(int &productId) {
    int unitSubTotal;
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT productRPrice FROM products WHERE product_id = :productId"));
        query.bindValue(":productId", productId);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()) {
                int wholesalePrice = query.value(0).toInt();
                //update table
                int rowsSearch = ui->tableWidget->rowCount();
                for(int i = 0; i<rowsSearch; i++){
                    if(ui->tableWidget->item(i,0)->text().toInt()==productId){
                        ui->tableWidget->item(i, 4)->setText(QString::number(wholesalePrice));
                        int quantityPurchased = ui->tableWidget->item(i,5)->text().toInt();
                        unitSubTotal = quantityPurchased*wholesalePrice;
                        ui->tableWidget->item(i, 8)->setText(QString::number(unitSubTotal));
                    }
                }
                *amount_to_pay+=unitSubTotal;
                setUpdatedSalesValues();
            }
        }
    }else{
        LOGx("[DATABASE ERROR]");

    }
}

void SalesClient::toWholeSaleDisableSystems() {
    ui->checkBoxEnableRewards->setDisabled(true);
    ui->checkBoxEnableDiscount->setDisabled(true);
    ui->checkBoxEnableRewardPayment->setDisabled(true);
    ui->checkBoxClientRewardAuthorization->setDisabled(true);
}

void SalesClient::fromWholeSaleEnableSystems() {
    ui->checkBoxEnableRewards->setEnabled(true);
    ui->checkBoxEnableDiscount->setEnabled(true);
    ui->checkBoxEnableRewardPayment->setEnabled(true);
    ui->checkBoxClientRewardAuthorization->setEnabled(true);
}






//============================================================================================================














void SalesClient::resetCashierRecords() {
    if(customerDefined){
        clearCustomerDetails();
    }
    clearSalesData();
    setDefaultSalesValue();
}

void SalesClient::clearCustomerDetails() {
    isCurrentCustomerDefined = false;
//    ui->lblCustomerPhone->clear();
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
    *amount_to_pay =0;
    *base_price = 0;
    *total_discount_accrued = 0;
    *total_rewards_accrued = 0;
    ui->tableWidget->clear();
    ui->tableWidget->clearContents();
    ui->tableWidget->model()->removeRows(0, ui->tableWidget->rowCount());
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"Id"<<"Barcode"<<"Description"<<"Units"<<"Price"<<"Quantity"<<"Discount"<<"Rewards"<<"Total");
    ui->le_barcodeEntry->setFocus();



}

void SalesClient::setDefaultSalesValue() {
    *amount_to_pay = 0;
    set_sale_data();
//    ui->lblComputedTotal->setText("0.00");
//    ui->lblSaleValue->setText("0.00");
//    ui->lblSaleTax->setText("0.00");
//    ui->lblThisSaleTotal->setText("0.00");
//    *amount_to_pay = 0;
}

void SalesClient::setFocusForSales() {
    ui->le_barcodeEntry->clear();
    ui->leClient->clear();
    ui->le_SearchProduct->clear();
    ui->le_barcodeEntry->setFocus();
}
//PRODUCT MANAGEMENT
void SalesClient::grabBarcodeFromEntry() {
    if (ui->le_barcodeEntry->text().isEmpty()&&uniqueID==""){
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
//                *addedProductName = addedProduct->product_name;
//                *productQuantity = addedProduct->product_quantity;
//                *productPrice = addedProduct->product_rtprice;
//                *unitPrice = QString::number(*productPrice);
//                *stockQuantityAvailable = addedProduct->stockQuantity;

            }
//            if(!addedProductName->isEmpty()){
////                scannedProductManagement(*barCodeFromName, *quantityToBeBought);
//            }else{


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


        }
        if(addedProduct->product_id!=NULL && uniqueID==addedProduct->product_barcode){
            if(addedProduct->stockQuantity>0){
                scannedProductManagement(barcodeScanned, addedProduct->product_id, addedProduct->stockQuantity );
            }else{
                QMessageBox::critical(this, "Out of Stock Error!", "Manage your stock. You are trying to sell a product out of stock!");
                return;
            }
        }else{
            QMessageBox::critical(this, "Wrong Barcode!", "Barcode does not exist!");
            ui->le_barcodeEntry->clear();
            uniqueID = "";
            ui->le_barcodeEntry->setFocus();
            return;
        }
    }
}
void SalesClient::get_product_from_db_no_barcode(QString &product_name) {
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT products.product_id, products.productName, products.productBarcode, products.productMeasurement, products.productWSPrice"
                          " , products.productRPrice, products.productImage, IFNULL(productDiscounts.amount, 0), IFNULL(productRewards.reward_amount, 0), stock.quantity  FROM products "
                          " LEFT JOIN productDiscounts ON productDiscounts.product_id=products.product_id "
                          " LEFT JOIN productRewards ON productRewards.product_id= products.product_id LEFT JOIN stock ON stock.product_id = products.product_id WHERE products.productName = :product_name"));
    query.bindValue(":product_name", product_name);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else{
        while (query.next()) {
            addedProduct->product_id = query.value(0).toInt();
            addedProduct->product_name = query.value(1).toString();
            addedProduct->product_barcode = query.value(2).toString();
            addedProduct->product_quantity = query.value(3).toString();
            addedProduct->product_wsprice = query.value(4).toInt();
            addedProduct->product_rtprice = query.value(5).toInt();
            addedProduct->product_image = query.value(6).toInt();
            addedProduct->product_discount = query.value(7).toFloat();
            addedProduct->product_rewards = query.value(8).toFloat();
            addedProduct->stockQuantity = query.value(9).toFloat();
        }
        if(addedProduct->product_id!=NULL && addedProduct->product_name==product_name){
            if(addedProduct->stockQuantity>0){
                scannedProductManagement(addedProduct->product_barcode, addedProduct->product_id, addedProduct->stockQuantity );
            }else{
                QMessageBox::critical(this, "Out of Stock Error!", "Manage your stock. You are trying to sell a product out of stock!");
                return;
            }
        }else{
            QMessageBox::critical(this, "Wrong Barcode!", "Barcode does not exist!");
            ui->le_barcodeEntry->clear();
            uniqueID = "";
            ui->le_barcodeEntry->setFocus();
            return;
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
//    ui->lblCustomerPhone->setText(currentServingCustomer->phone);
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

//void SalesClient::on_btnPlaceOrder_clicked()
//{
//    orderClient = new OrdersClient(this, *currentUser, *product_discounts_enabled, *product_rewards_enabled, *businessAuthorizedPaymentByRewards);
//    orderClient->show();
//    orderClient->setModal(true);
//}

void SalesClient::on_btnViewPlacedOrders_clicked()
{

}

void SalesClient::on_btnViewProcessedOrders_clicked()
{

}

void SalesClient::on_btnViewDeliveredOrders_clicked()
{

}

void SalesClient::on_actionOrder_Center_triggered()
{
//    orderClient = new OrdersClient(this, *currentUser, *product_discounts_enabled, *product_rewards_enabled, *businessAuthorizedPaymentByRewards);
//    orderClient->show();
//    orderClient->setModal(true);
    ordersCenter = new OrdersCenter(this, *currentUser, *product_discounts_enabled, *product_rewards_enabled, *businessAuthorizedPaymentByRewards);
    ordersCenter->show();
    this->hide();
}

void SalesClient::modifyItemQuantity(int &productId, int &currentQty, int current_row) {
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT products.product_id, products.productName, products.productBarcode, products.productMeasurement, products.productWSPrice"
                          " , products.productRPrice, products.productImage, IFNULL(productDiscounts.amount, 0), IFNULL(productRewards.reward_amount, 0), stock.quantity  FROM products "
                          " LEFT JOIN productDiscounts ON productDiscounts.product_id=products.product_id "
                          " LEFT JOIN productRewards ON productRewards.product_id= products.product_id LEFT JOIN stock ON stock.product_id = products.product_id WHERE products.product_id = :productId"));
    query.bindValue(":productId", productId);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else {
        while (query.next()) {
            addedProduct->product_id = query.value(0).toInt();
            addedProduct->product_name = query.value(1).toString();
            addedProduct->product_barcode = query.value(2).toString();
            addedProduct->product_quantity = query.value(3).toString();
            addedProduct->product_wsprice = query.value(4).toInt();
            addedProduct->product_rtprice = query.value(5).toInt();
            addedProduct->product_image = query.value(6).toInt();
            addedProduct->product_discount = query.value(7).toFloat();
            addedProduct->product_rewards = query.value(8).toFloat();
            addedProduct->stockQuantity = query.value(9).toFloat();
            Debug(addedProduct->product_id);
            Debug(addedProduct->stockQuantity);
            quantityControl = new QuantityControl(this, *currentUser, productId, addedProduct->product_name, currentQty,addedProduct->stockQuantity, current_row);
            quantityControl->show();
            quantityControl->setModal(true);
            QObject::connect(quantityControl, SIGNAL(sendQuantityChanged(int &, int &, int &)), this, SLOT(receiveQtyChange(int &, int &, int &)));
        }

    }
}

void SalesClient::keyPressEvent(QKeyEvent *event) {
    if (event->key()==Qt::Key_Up){
        ui->tableWidget->setFocus();
        tableRows = ui->tableWidget->rowCount();
        if(*priorityRow<0){
            QMessageBox::critical(this, "Item Increase Error!", "There are no items to modify");
        }else {
            int rowToModify = *priorityRow;
            ui->tableWidget->setCurrentCell(rowToModify, 5);
        }

    }else if (event->key()==Qt::Key_Down){
        ui->tableWidget->setFocus();
        tableRows = ui->tableWidget->rowCount();
        int rowToModify = 0;
        if(*priorityRow<0){
            QMessageBox::critical(this, "Item Increase Error!", "There are no items to modify");
        }else {
            ui->tableWidget->setCurrentCell(rowToModify, 5);
        }

    }else if(event->key()==Qt::Key_Delete){
        QMessageBox::StandardButton deleteProduct;

        deleteProduct = QMessageBox::warning(this, "Complete Deletion",
                                              "Are you sure you want to delet [ITEM]?",
                                              QMessageBox::Yes | QMessageBox::No,  QMessageBox::Yes);
        if (deleteProduct == QMessageBox::Yes) {
            int current_row = ui->tableWidget->currentRow();
            int product_id = ui->tableWidget->item(current_row, 0)->text().toInt();
            int unit_subTotal =  ui->tableWidget->item(current_row, 8)->text().toInt();
            int rewardsAccrued =  ui->tableWidget->item(current_row, 7)->text().toInt();
            int discountAccrued =  ui->tableWidget->item(current_row, 6)->text().toInt();
            deleteProductFromCart(current_row, product_id, unit_subTotal, rewardsAccrued, discountAccrued);
        }else{
            //set focus to the barcode scanner
            LOGx("No");

        }
    }

}


//void SalesClient::receive_modifyProductQuantity(int &productID, int &new_Quantity) {
//    std::map<int, purchasedItem>::iterator it;
//    it = itemsBought->find(productID);
//    if (it != itemsBought->end()) {
//        it->second.quantity_purchased = new_Quantity;
//            int rowsSearch = ui->tableWidget->rowCount();
//            for (int i = 0; i < rowsSearch; i++) {
//                if (ui->tableWidget->item(i, 0)->text().toInt() == productID) {
//                    modifyProductInRowCreated(i, it->second.quantity_purchased);
//                }
//            }
//            quantityControl->close();
//
//            ui->tableWidget->setFocusPolicy(Qt::NoFocus);
//            ui->le_barcodeEntry->clear();
//
//            ui->le_barcodeEntry->setFocus();
//        //update vector and update table
//
//    }
//}


void SalesClient::on_tableWidget_cellActivated(int row, int column)
{
    product_id_to_modify = ui->tableWidget->item(row, 0)->text().toInt();
    quantity_assigned = ui->tableWidget->item(row, 5)->text().toInt();

//    modifyItemQuantity(product_id_to_modify, quantity_assigned);
}

void SalesClient::receiveQtyChange(int &productId, int &originalQty, int &newQty) {
    *quantityChange = newQty - originalQty;
    std::map<int, purchasedItem>::iterator it;
    it = itemsBought->find(productId);
    if (it != itemsBought->end()) {
        *originallyAssignedQty = originalQty;
        it->second.quantity_purchased = newQty;
        int rowsSearch = ui->tableWidget->rowCount();
        for (int i = 0; i < rowsSearch; i++) {
            if (ui->tableWidget->item(i, 0)->text().toInt() == productId) {
                if ((newQty-originalQty)>0){
                    increaseProductInExistingRow(i, it->second.quantity_purchased);
                }else if ((newQty-originalQty)==0){
                    maintainProductInExistingRow(i, it->second.quantity_purchased);
                }else if ((newQty-originalQty)<0){
                    decreaseProductInExistingRow(i, it->second.quantity_purchased);
                }else if (newQty<originalQty){
                    decreaseProductInExistingRow(i, it->second.quantity_purchased);
                }else{
                    LOGx("[WE SHOULD NEVE GET HERE]");
                }
            }
        }
        quantityControl->close();

        ui->tableWidget->setFocusPolicy(Qt::NoFocus);
        ui->le_barcodeEntry->clear();

        ui->le_barcodeEntry->setFocus();
        //update vector and update table

    }
}

void SalesClient::deleteProductFromCart(int & rowAffected, int &productId, int &subTotal, int &rewards, int &discount) {
    *priorityRow -=1;
    ui->tableWidget->removeRow(rowAffected);
    *amount_to_pay -= subTotal;
    *rewardTotal-=rewards;
    *discountTotal-= discount;
    setUpdatedSalesValues();
    std::map<int, purchasedItem>::iterator it;
    it = itemsBought->find(productId);
    if (it != itemsBought->end()) {
        itemsBought->erase(it);
    }
}

void SalesClient::setUpdatedSalesValues() {
    set_sale_data();
//    float tax = 0.16*(*amount_to_pay);
//    float sale_value = *amount_to_pay - tax;
//    QString tempTax = QString::number(tax, 'f', 2);
//    QString tempSales = QString::number(sale_value, 'f', 2);
//    QString tempValue = QString::number(*amount_to_pay, 'f', 2);
//    ui->lblPossibleDiscounts->setText("KShs. " + QString::number(*total_discount_accrued)+" .00");
//    ui->lblPossibleRewards->setText("KShs. " + QString::number(*total_rewards_accrued)+" .00");
//    ui->lblComputedTotal->setText(QString::number(*amount_to_pay)+".00");
//    ui->lblSaleValue->setText(tempSales);
//    ui->lblSaleTax->setText(tempTax);
//    ui->lblThisSaleTotal->setText(tempValue);
}







//=====================================================================================================================









void SalesClient::updateDiscountsMidway(std::map<int, purchasedItem> &itemsBought) {
    int mapSize = itemsBought.size();
    if(*product_discounts_enabled){
        for (auto const & myPair: itemsBought) {
            int productId = myPair.first;
            int quantityPurchased = myPair.second.quantity_purchased;
            enable_sale_discount_midway(productId, quantityPurchased);
        }
    }else{
        for (auto const & myPair: itemsBought) {
            int productId = myPair.first;
            int quantityPurchased = myPair.second.quantity_purchased;
            disable_discount_midway(productId, quantityPurchased);

        }
    }
}

void SalesClient::changeToWholesaleMidway(std::map<int, purchasedItem> &itemsBought) {
//check status and store it
    //if discount enabled - disable
//if rewards enabled - disable
//query wholesale  prices
//change the amount to pay
}

void SalesClient::changeToRetailMidway(std::map<int, purchasedItem> &itemsBought) {

}

void SalesClient::updateRewardsMidway(std::map<int, purchasedItem> &itemsBought) {
    int mapSize = itemsBought.size();
    if(*product_rewards_enabled){
        for (auto const & myPair: itemsBought) {
            int productId = myPair.first;
            int quantityPurchased = myPair.second.quantity_purchased;
            enable_rewards_midway(productId, quantityPurchased);
        }
    }else{
        for (auto const & myPair: itemsBought) {
            int productId = myPair.first;
            int quantityPurchased = myPair.second.quantity_purchased;
            disable_rewards_midway(productId, quantityPurchased);
        }
    }
}

void SalesClient::enable_sale_discount_midway(int &productId, int & quantityBought) {

    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT products.productRPrice, productDiscounts.amount FROM products "
                              "LEFT JOIN productDiscounts ON productDiscounts.product_id = products.product_id "
                              "WHERE products.product_id = :productId"));
        query.bindValue(":productId", productId);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()) {
                int unitPrice = query.value(0).toInt();
                int unitValueDiscount = query.value(1).toInt();
                int tempTotalDiscount = quantityBought*unitValueDiscount;
                int tempTotal = quantityBought*(unitPrice-unitValueDiscount);
                //update table
                int rowsSearch = ui->tableWidget->rowCount();
                for(int i = 0; i<rowsSearch; i++){
                    if(ui->tableWidget->item(i,0)->text().toInt()==productId){
                        ui->tableWidget->item(i, 4)->setText("Kshs. "+QString::number(unitPrice)+"["+QString::number(unitPrice-unitValueDiscount)+"]");
                        ui->tableWidget->item(i, 6)->setText("Kshs. "+QString::number(tempTotalDiscount)+"["+QString::number(unitValueDiscount)+"]");
                        ui->tableWidget->item(i, 8)->setText("Kshs. "+QString::number(tempTotal));
                    }
                }
                *total_discount_accrued+=tempTotalDiscount;
                *amount_to_pay = *amount_to_pay - tempTotalDiscount;
                setUpdatedSalesValues();
                //display the values
            }
    }
    }else{
        LOGx("[DATABASE ERROR]");

    }
}

void SalesClient::disable_discount_midway(int &productId, int &quantity_bought) {
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT products.productRPrice, productDiscounts.amount FROM products "
                              "LEFT JOIN productDiscounts ON productDiscounts.product_id = products.product_id "
                              "WHERE products.product_id = :productId"));
        query.bindValue(":productId", productId);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()) {
                int discount_value = 0;
                int unitPrice = query.value(0).toInt();
                int unitValueDiscount = query.value(1).toInt();
                int tempTotalDiscount = quantity_bought*unitValueDiscount;
                int tempTotal = quantity_bought*(unitPrice-unitValueDiscount);
                //update table
                int rowsSearch = ui->tableWidget->rowCount();
                for(int i = 0; i<rowsSearch; i++){
                    if(ui->tableWidget->item(i,0)->text().toInt()==productId){
                        ui->tableWidget->item(i, 4)->setText("Kshs. "+QString::number(unitPrice));
                        ui->tableWidget->item(i, 6)->setText("Kshs. "+QString::number(discount_value)+"["+QString::number(discount_value)+"]");
                        ui->tableWidget->item(i, 8)->setText("Kshs. "+QString::number(quantity_bought*unitPrice));
                    }
                }
                *total_discount_accrued=*total_discount_accrued - tempTotalDiscount;
                *amount_to_pay = *amount_to_pay + tempTotalDiscount;
                setUpdatedSalesValues();
                //display the values
            }
        }
    }else{
        LOGx("[DATABASE ERROR]");

    }
}

void SalesClient::enable_rewards_midway(int &productId, int &quantityBought) {
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT reward_amount FROM productRewards WHERE product_id = :productId"));
        query.bindValue(":productId", productId);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()) {
                int unitValueReward = query.value(0).toInt();
                int tempTotalReward = quantityBought*unitValueReward;
                //update table
                int rowsSearch = ui->tableWidget->rowCount();
                for(int i = 0; i<rowsSearch; i++){
                    if(ui->tableWidget->item(i,0)->text().toInt()==productId){
                        ui->tableWidget->item(i, 7)->setText("Kshs. "+QString::number(tempTotalReward)+"["+QString::number(unitValueReward)+"]");
                    }
                }
                *total_rewards_accrued = *total_rewards_accrued+tempTotalReward;
                setUpdatedSalesValues();
                //display the values
            }
        }
    }else{
        LOGx("[DATABASE ERROR]");

    }
}

void SalesClient::disable_rewards_midway(int &productId, int &quantity_bought) {
    if (salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT reward_amount FROM productRewards WHERE product_id = :productId"));
        query.bindValue(":productId", productId);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            while (query.next()) {
                int unitValueReward = query.value(0).toInt();
                int tempTotalReward = quantity_bought*unitValueReward;
                int null_reward = 0;
                //update table
                int rowsSearch = ui->tableWidget->rowCount();
                for(int i = 0; i<rowsSearch; i++){
                    if(ui->tableWidget->item(i,0)->text().toInt()==productId){
                        ui->tableWidget->item(i, 7)->setText("Kshs. "+QString::number(null_reward)+"["+QString::number(null_reward)+"]");
                    }
                }
                *total_rewards_accrued = *total_rewards_accrued - tempTotalReward;
                setUpdatedSalesValues();
                //display the values
            }
        }
    }else{
        LOGx("[DATABASE ERROR]");

    }
}

void SalesClient::addLimitsToCombobox() {
        if(salesConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("SELECT limit_name, limit_amount FROM business_limits"));
            if(!query.exec()){
                LOGx("DB not responding!");
            }else{
                while(query.next()){
                    QString limitName = query.value(0).toString();
                    int limitAmount = query.value(1).toInt();
                    QString limitData = limitName +" | "+QString::number(limitAmount);
                    ui->cbMinimumReward->addItem(limitData);
                    ui->cbmaximumCredit->addItem(limitData);
                }
            }
        }

}

void SalesClient::setDefaultMinimumRewardLimit() {
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT limit_name, limit_amount FROM business_limits where limit_name = :limitName"));
        query.bindValue(":limitName", "defaultMinReward");
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                QString limitName = query.value(0).toString();
                int limitAmount = query.value(1).toInt();
                QString rewardData = limitName +" | "+QString::number(limitAmount);
                LOGx(rewardData.toStdString());
                int index = ui->cbMinimumReward->findText(rewardData);
                if(index != -1){
                    LOGx("success");
                    ui->cbMinimumReward->setCurrentIndex(index);
                }else{
                    LOGx("error");
                }
            }
        }
    }

}

void SalesClient::setDefaultMaximumCredit() {
    if(salesConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT limit_name, limit_amount FROM business_limits where limit_name = :limitName"));
        query.bindValue(":limitName", "defaultMaxCredit");
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                QString limitName = query.value(0).toString();
                int limitAmount = query.value(1).toInt();
                QString rewardData = limitName +" | "+QString::number(limitAmount);
                LOGx(rewardData.toStdString());
                int index = ui->cbmaximumCredit->findText(rewardData);
                if(index != -1){
                    ui->cbmaximumCredit->setCurrentIndex(index);

                }else{
                }
            }
        }
    }
}















void SalesClient::on_cbAdminPriviledges_stateChanged(int arg1)
{
    if(arg1==0){
            ui->cbmaximumCredit->setDisabled(true);
            ui->cbMinimumReward->setDisabled(true);

    }else{
        ui->cbmaximumCredit->setEnabled(true);
        ui->cbMinimumReward->setEnabled(true);
    }
}

void SalesClient::on_cbAdminPriviledges_clicked()
{
    if(ui->cbAdminPriviledges->isChecked()){
        ui->cbAdminPriviledges->setChecked(false);
        adminAuthentication = new AdminAuthentication(this, *currentUser);
        adminAuthentication->setModal(true);
        adminAuthentication->show();
    }else{
        ui->cbAdminPriviledges->setChecked(false);

    }
    QObject::connect(adminAuthentication, SIGNAL(authenticationFailed()),
            this, SLOT(receiveAdminAuthenticationFailed()));
    QObject::connect(adminAuthentication, SIGNAL(authenticatedSuccessfully()),
                     this, SLOT(receiveAdminAuthenticationSuccessful()));

}

void SalesClient::receiveAdminAuthenticationSuccessful() {
    ui->cbAdminPriviledges->setChecked(true);
    adminAuthentication->close();
}

void SalesClient::receiveAdminAuthenticationFailed() {
    ui->cbAdminPriviledges->setChecked(false);
    adminAuthentication->close();

}

void SalesClient::edit_item_in_row(int row, int column) {
    int current_row = row;
    int product_id = ui->tableWidget->model()->index(row, 0).data().toInt();
    int current_quantity = ui->tableWidget->model()->index(row, 5).data().toInt();
//    modifyItemQuantity(product_id, current_quantity);

}

void SalesClient::on_btn_queue_one_clicked()
{
    int queue_value = 1;
    if (queue_one_occupied){
        check_if_sale_in_progress();
        restore_queue_client(queue_value, *queue_items);
        set_queue_status_to_free(queue_value, *queue_control, *queue_items);
    }else{
        QMessageBox::critical(this, "Empty Queue", "Queue ONE is empty, there is nothing to do here!");
    }
    queue_one_occupied = false;
}

void SalesClient::on_btn_queue_two_clicked()
{
    int queue_value = 2;
    if (queue_two_occupied){
        check_if_sale_in_progress();
        restore_queue_client(queue_value, *queue_items);
        set_queue_status_to_free(queue_value, *queue_control, *queue_items);
    }else{
        QMessageBox::critical(this, "Empty Queue", "Queue TWO is empty, there is nothing to do here!");
    }
    queue_two_occupied = false;
}

void SalesClient::on_btn_queue_three_clicked()
{
    int queue_value = 3;
    if (queue_three_occupied){
        check_if_sale_in_progress();
        restore_queue_client(queue_value, *queue_items);
        set_queue_status_to_free(queue_value, *queue_control, *queue_items);
    }else{
        QMessageBox::critical(this, "Empty Queue", "Queue THREE is empty, there is nothing to do here!");
    }
    queue_three_occupied = false;
}

void SalesClient::on_btn_queue_four_clicked()
{
    int queue_value = 4;
    if (queue_four_occupied){
        check_if_sale_in_progress();
        restore_queue_client(queue_value, *queue_items);
        set_queue_status_to_free(queue_value, *queue_control, *queue_items);
        queue_one_occupied = false;
    }else{
        QMessageBox::critical(this, "Empty Queue", "Queue FOUR is empty, there is nothing to do here!");
    }
    queue_four_occupied = false;
}

bool SalesClient::check_queue_occupied() {
    for (int i = 1; i < 5; ++i) {
        std::map<int,queue_item>::iterator it;
        it = queue_items->find(i);
        if (it==queue_items->end()){
            free_queue = i;
            queue_item queue_current;
            queue_current.list_products = *itemsBought;
            itemsBought->clear();
            if(customerDefined){
                queue_current.cus_id = currentServingCustomer->customer_id;
            }else{
                queue_current.cus_id.isEmpty();
            }
            if (*product_discounts_enabled){
                queue_current.discount_enabled = true;
            }else{
                queue_current.discount_enabled = false;

            }
            if (*product_rewards_enabled){
                queue_current.rewards_enabled = true;
            }else{
                queue_current.rewards_enabled = false;

            }
            queue_items->insert(std::pair<int, queue_item>(free_queue, queue_current));
            if (free_queue==1){
                LOGx("QUEUE ONE OCCUPIED");
                queue_one_occupied = true;
            }else if(free_queue==2){
                queue_two_occupied = true;
                LOGx("QUEUE TWO OCCUPIED");

            }else if(free_queue==3){
                queue_three_occupied = true;
                LOGx("QUEUE THREE OCCUPIED");

            }else if(free_queue==4){
                queue_four_occupied = true;
                LOGx("QUEUE FOUR OCCUPIED");

            }else{
                QMessageBox::critical(this, "Queue Limit Error", "You have reached queue limit [4]");
                return -1;
            }























        }else{

        }

    }
    LOGx("NOW WE ARE HERE");
    clearSalesData();
    setDefaultSalesValue();



}

void SalesClient::on_btnQueueSale_clicked()
{
    if (itemsBought->size()<1){
        QMessageBox::critical(this, "NOTHING TO QUEUE", "You have nothing to queue. Empty sale");
        return;
    }else{
        if (queue_items->size()<4){
            check_empty_queue(*queue_control);
            clearSalesData();
            reset_sale_values();
        }else{
            QMessageBox::critical(this, "QUE LIMIT REACHED", "All Queues Occupied");
            return;
        }
    }





























//    products_on_table = check_if_products_on_table();
//    if (products_on_table){
//        check_queue_occupied();
//
//    }else{
//        LOGx("nothing to queue");
//    }
}

bool SalesClient::check_if_products_on_table() {
    if (ui->tableWidget->rowCount()==0){
        return false;

    }else{
        return true;
    }
}

void SalesClient::initialize_queue(std::map<int, bool> &controlling_queue) {
    for (int i = 1; i < 5; ++i) {
        controlling_queue.insert({i, false});
    }
    std::map<int, bool>::iterator itr;
    for (itr = controlling_queue.begin(); itr != controlling_queue.end(); ++itr) {
        std::cout << '\t' << itr->first
             << '\t' << itr->second << '\n';
    }
    std::cout << endl;
}

void SalesClient::check_empty_queue(std::map<int, bool> &controlling_queue) {
        std::map<int, bool>::iterator itr;
        for (itr = controlling_queue.begin(); itr != controlling_queue.end();) {
            if (itr->second==1){
//                queue_available = true;
//                load_queue(const_cast<int &>(itr->first));
//                break;
                itr++;

            }else if (itr->second==0){
                load_queue(const_cast<int &>(itr->first));
                break;

//                queue_available = false;
//                itr++;
            } else{
                LOGx("GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG");
            }

        }
        LOGx(queue_items->size());





}

void SalesClient::load_queue(int &free_queue) {
    queue_item temp_item;
    if (customerDefined){
        temp_item.cus_id.isEmpty();
    }else{
        temp_item.cus_id = QString::number(currentServingCustomer->customer_id);
    }
    temp_item.list_products=*itemsBought;
    queue_items->insert({free_queue, temp_item});
    set_queue_button(free_queue);
    update_queue_control(free_queue);
    itemsBought->clear();
}

void SalesClient::set_queue_button(int &assigned_queue) {
    if (assigned_queue==1){
        queue_one_occupied = true;
        ui->btn_queue_one->setText("Queue One: Occupied");
        ui->btn_queue_one->setStyleSheet( "background-color: red");

        QMessageBox::information(this, "QUEUE ONE SUCCESS", "Customer successfully assigned QUEUE ONE");

    }else if (assigned_queue==2){
        queue_two_occupied = true;
        ui->btn_queue_two->setText("Queue Two: Occupied");
        ui->btn_queue_two->setStyleSheet( "background-color: red");
        QMessageBox::information(this, "QUEUE TWO SUCCESS", "Customer successfully assigned QUEUE TWO");

    }else if (assigned_queue==3){
        queue_three_occupied = true;
        ui->btn_queue_three->setText("Queue Three: Occupied");
        ui->btn_queue_three->setStyleSheet( "background-color: red");
        QMessageBox::information(this, "QUEUE THREE SUCCESS", "Customer successfully assigned QUEUE THREE");

    }else if (assigned_queue==4){
        queue_four_occupied = true;
        ui->btn_queue_four->setText("Queue Four: Occupied");
        ui->btn_queue_four->setStyleSheet( "background-color: red");
        QMessageBox::information(this, "QUEUE FOUR SUCCESS", "Customer successfully assigned QUEUE FOUR");

    }else{
        QMessageBox::critical(this, "Critical Error", "System Error! Contact System Administrator");

    }
}

void SalesClient::update_queue_control(int &occupied_queue) {
    auto it = queue_control->find(occupied_queue);
    if (it != queue_control->end())
        it->second = true;
}

void SalesClient::reset_sale_values() {
    *amount_to_pay = 0;
    set_sale_data();
}

void SalesClient::restore_queue_client(int &queue_id, std::map<int, queue_item> &queue) {
    if (itemsBought->size()>0){
        QMessageBox::StandardButton manage_table;

        manage_table = QMessageBox::warning(this, "You Have Incomplete Sale",
                                             "Do you want to queue sale?",
                                             QMessageBox::Yes | QMessageBox::No,  QMessageBox::Yes);
        if (manage_table == QMessageBox::Yes) {
            on_btnQueueSale_clicked();
            complete_queue_restoration(queue_id, queue);
        }else{
            clearSalesData();
            reset_sale_values();
            itemsBought->clear();
            complete_queue_restoration(queue_id, queue);
        }
    }else{
        complete_queue_restoration(queue_id, queue);
    }
}

void SalesClient::check_if_sale_in_progress() {
    if (ui->tableWidget->rowCount()>0){
        sale_in_progress = false;
    }else{
        sale_in_progress = true;
    }
}

void SalesClient::complete_queue_restoration(int &queue_id, std::map<int, queue_item> &queue) {
    std::map<int, queue_item>::iterator itr;
    for (itr = queue.begin(); itr != queue.end(); ++itr) {
        if (itr->first==queue_id){
            if (!itr->second.cus_id.isEmpty()){
                isCurrentCustomerDefined = false;
            }else{
                loadCustomerAgentFromCompleter(itr->second.cus_id);
            }
            for (auto i: itr->second.list_products) {
                LOGxy("price", i.second.salePrice);
                LOGxy("discount", i.second.discount_amount);
                LOGxy("reward", i.second.reward_amount);
                QString product_id = QString::number(i.first);
                load_items_with_predefined_quantity(product_id, i.second.quantity_purchased);
                if (*product_discounts_enabled){
                    *amount_to_pay = *amount_to_pay+i.second.quantity_purchased*(i.second.actual_price - i.second.discount_amount);
                    *total_discount_accrued = *total_discount_accrued+(i.second.quantity_purchased*(i.second.discount_amount));
                    *base_price = *amount_to_pay + *total_discount_accrued;
                }else{
                    *amount_to_pay = *amount_to_pay+i.second.quantity_purchased*(i.second.actual_price);
                }
                if (*product_rewards_enabled){
                    *total_rewards_accrued = *total_rewards_accrued+i.second.quantity_purchased*(i.second.reward_amount);
                }else{
                    *total_rewards_accrued = *total_rewards_accrued;
                }
                LOGxy("LLLLLLLLLLLLLLLLLLLLLLLL", *amount_to_pay);
            }
            *itemsBought = itr->second.list_products;
            set_sale_data();
            LOGxy("777777777777777777777777777777777777 ", *amount_to_pay);
            LOGxy("88888888888888888888888888888888888888888888 ", *total_rewards_accrued);
            LOGxy("999999999999999999999999999999999999999999999 ", *total_discount_accrued);
        }
    }
}

void SalesClient::load_items_with_predefined_quantity(QString &id, int &quantity) {
    const QString& unique_id = id;
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT products.product_id, products.productName, products.productBarcode, products.productMeasurement, products.productWSPrice"
                          " , products.productRPrice, products.productImage, IFNULL(productDiscounts.amount, 0), IFNULL(productRewards.reward_amount, 0), stock.quantity  FROM products "
                          " LEFT JOIN productDiscounts ON productDiscounts.product_id=products.product_id "
                          " LEFT JOIN productRewards ON productRewards.product_id= products.product_id LEFT JOIN stock ON stock.product_id = products.product_id WHERE products.product_id = :uniqueID"));
    query.bindValue(":uniqueID", unique_id);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else {
        while (query.next()) {
            addedProduct->product_id = query.value(0).toInt();
            addedProduct->product_name = query.value(1).toString();
            addedProduct->product_barcode = query.value(2).toString();
            addedProduct->product_quantity = query.value(3).toString();
            addedProduct->product_wsprice = query.value(4).toInt();
            addedProduct->product_rtprice = query.value(5).toInt();
            addedProduct->product_image = query.value(6).toInt();
            addedProduct->product_discount = query.value(7).toFloat();
            addedProduct->product_rewards = query.value(8).toFloat();
            addedProduct->stockQuantity = query.value(9).toFloat();

            createRowsToAddProductPurchased(quantity);


        }
    }
}

void SalesClient::empty_queue(int & queue_id) {
    std::map<int, queue_item>::iterator itr;
    for (itr = queue_items->begin(); itr != queue_items->end(); ++itr) {
        if (itr->first==queue_id){
            queue_items->erase(itr);
        }else{
            QMessageBox::critical(this, "Critical Error", "System Error! Contact System Administrator");

        }
    }
}


void SalesClient::check_occupancy() {
    if (itemsBought->size()<1){
        sales_occupied = false;
    } else{
        sales_occupied = true;
    }
}

void SalesClient::request_queue_current() {
    QMessageBox::StandardButton queue_current;
    queue_current = QMessageBox::warning(this, "Queue Current Sale",
                                        "Do you want to queue the current sale?",
                                        QMessageBox::Yes | QMessageBox::No,  QMessageBox::Yes);
    if (queue_current == QMessageBox::Yes) {

    }else{

    }
}

void SalesClient::set_queue_status_to_free(int & current_id, std::map<int, bool>&queue_control, std::map<int, queue_item>& current_queue) {
    std::map<int, bool>::iterator control_iterator;
    std::map<int, queue_item>::iterator queue_iterator;
    control_iterator = queue_control.find(current_id);
    if (control_iterator!=queue_control.end()){
        control_iterator->second = false;
    }

    queue_iterator = queue_items->find(current_id);
    if (queue_iterator!=queue_items->end()){
        queue_items->erase(current_id);
    }

    reset_queue_button(current_id);
}

void SalesClient::reset_queue_button(int &freed_queue) {
    if (freed_queue==1){
        ui->btn_queue_one->setText("Queue One: Free");
        ui->btn_queue_one->setStyleSheet( "background-color: green");
        QMessageBox::information(this, "SALE RESTORATION SUCCESS", "Sale from queue ONE successfully restored");

    }else if (freed_queue==2){
        ui->btn_queue_two->setText("Queue Two: Free");
        ui->btn_queue_two->setStyleSheet( "background-color: green");
        QMessageBox::information(this, "SALE RESTORATION SUCCESS", "Sale from queue TWO successfully restored");


    }else if (freed_queue==3){
        ui->btn_queue_three->setText("Queue Three: Free");
        ui->btn_queue_three->setStyleSheet( "background-color: green");
        QMessageBox::information(this, "SALE RESTORATION SUCCESS", "Sale from queue THREE successfully restored");


    }else if (freed_queue==4){
        ui->btn_queue_four->setText("Queue Four: Free");
        ui->btn_queue_four->setStyleSheet( "background-color: green");
        QMessageBox::information(this, "SALE RESTORATION SUCCESS", "Sale from queue FOUR successfully restored");


    }else{
        QMessageBox::critical(this, "Critical Error", "System Error! Contact System Administrator");

    }
}

void SalesClient::set_sale_data() {
    float total_sale_tax;
    float computed_sale_value;
    total_sale_tax = 0.16*(*amount_to_pay);
    computed_sale_value = *amount_to_pay - total_sale_tax;
    QString tempTax = QString::number(total_sale_tax, 'f', 2);
    QString tempSales = QString::number(computed_sale_value, 'f', 2);
    //total sales values
    if (*product_discounts_enabled){
        ui->lblComputedTotal->setText("KShs. "+QString::number(*base_price) +"[" +QString::number(*amount_to_pay)+"]");
    }else{
        ui->lblComputedTotal->setText("KShs. "+QString::number(*amount_to_pay));
    }
    ui->lblThisSaleTotal->setText("KShs. "+QString::number(*amount_to_pay));
    ui->lblSaleValue->setText("KShs. "+QString::number(computed_sale_value));
    ui->lblSaleTax->setText("KShs. "+QString::number(total_sale_tax));

    ui->lblPossibleDiscounts->setText("KShs. " + QString::number(*total_discount_accrued));
    ui->lblPossibleRewards->setText("KShs. " + QString::number(*total_rewards_accrued));

}




