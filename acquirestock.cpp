#include "acquirestock.h"
#include "ui_acquirestock.h"

AcquireStock::AcquireStock(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AcquireStock)
{
    ui->setupUi(this);
    stockAcquisitionConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    supplierName = new QString;
    phoneNumber = new QString;
    product = new QString;
    qtySupplied = new int;
    productId = new int;
    supplierId = new int;
    *qtySupplied = 0;
    loadSuppliers();
    loadProducts();
    stockAmount = new double;
    cashAmount = new double;
    creditAmount = new double;
    newCashTotalAfterStockPurchase = new double ;
    currentTotalDebt = new double ;
    newTotalDebt = new double;

   stockQuantityAvailable = new int;
   stockQuantityAdded = new int;
   stockQuantityUpdated = new int;
   productIdToUpdateInStock = new int;
   acquisitionId = new int;

    intResolvedProductId = new int;
    intResolvedSupplierId = new int;

    resetPayment();
    *cashAmount = 0;
    *creditAmount = 0;
    ui->leCreditAmount->setText(QString::number(*creditAmount));
    ui->leCashAmount->setText(QString::number(*cashAmount));
    newStock = new acquiredStock;
    availableCash = new double;
    totalCredit = new double;
    resetPayment();
//    connect(ui->cbPaymentMethod, SIGNAL(currentIndexChanged(int)),
//            this, SLOT(paymentChanged(int)));
    connect(ui->cbPaymentMethod, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){ /* ... */
        *stockAmount = ui->leStockPrice->text().toDouble();
        if(index==0){
        resetPayment();
        }else if(index==1){
            changePaymentValuesToDefault();
            *creditAmount = 0;
            *cashAmount = *stockAmount;
            ui->leCashAmount->setText(ui->leStockPrice->text());
            ui->btnCalender->setDisabled(true);
            ui->leCreditAmount->setDisabled(true);
            ui->leCreditAmount->setText(QString::number(0));
        }else if(index==2){
            changePaymentValuesToDefault();
            *cashAmount = 0;
            *creditAmount = *stockAmount;
            ui->leCashAmount->setText(QString::number(*cashAmount));
            ui->leCashAmount->setDisabled(true);
            ui->leCreditAmount->setText(ui->leStockPrice->text());
            ui->leCashAmount->setText(QString::number(0));

        }else if(index==3){
                    changePaymentValuesToDefault();
                    *cashAmount = NULL;
                    *creditAmount = NULL;
//                    *cashAmount =  ui->leStockPrice->text().toDouble();
        }
            QObject::connect(ui->leStockPrice, SIGNAL(textChanged(const QString &)),
                                 this, SLOT(resetPayment()));
            QObject::connect(ui->leCashAmount, SIGNAL(textChanged(const QString &)),
                                 this, SLOT(setCredit()));
            QObject::connect(ui->leCreditAmount, SIGNAL(textChanged(const QString &)),
                                 this, SLOT(setCash()));
            });

}

AcquireStock::~AcquireStock()
{
    LOGx("ACQUIRE STOCK DELETED");
    delete ui;
}

void AcquireStock::on_btnCalender_clicked()
{
    calendar = new QCalendarWidget(this);
    calendar->setGridVisible(true);
    calendar->show();
    calendar->setMinimumDate(QDate::currentDate());

    QObject::connect(calendar, &QCalendarWidget::activated, this,  &AcquireStock::grabCurrentDate);
}

void AcquireStock::on_btnApply_clicked()
{
    resolveProduct();
    if(!productResolved){
        QMessageBox::warning(this, "Product does not Exist!", "Please select a valid Product or Add it to the Database!");
        return;
    }else{
        resolveSupplier();
        if(!supplierResolved){
            QMessageBox::warning(this, "Supplier does not Exist!", "Please select a valid Supplier or Add them to the Database!");
            return;
        }else{
            grabStockDetails();
            checkIfAllFieldsAreCaptured();
            if(!allFieldsCaptured){
                QMessageBox::warning(this, "Empty Cells Error!", "Please fill in all the required fields!");
                return;
            }else{
                fetchCashFromDatabase();
                fetchCreditFromDatabase();
                if(ui->cbPaymentMethod->currentIndex()==1){
                    if(*availableCash>= *stockAmount){
                        postCash();
                        LOGx("go load cash and stock");
                    }else{
                        QMessageBox::warning(this, "Insufficient Funds!", "You do not have enough funds to complete this transaction!");
                        return;
                    }
                }else if(ui->cbPaymentMethod->currentIndex()==2){
                    postCredit();
                    LOGx("CREDIT LOAD and stock");


                }else if(ui->cbPaymentMethod->currentIndex()==3){
                    if(*cashAmount + *creditAmount == *stockAmount && *cashAmount<=*availableCash && *creditAmount>0 && *cashAmount>0){
                        QMessageBox::information(this, "Partial Cash and Credit Purchase Successful!", "Go to cash and credit sections to see more information!");
                        postCashCredit();
                        LOGx("It is all done");
                    }else if(*cashAmount==0 || *creditAmount==0){
                        QMessageBox::warning(this, "Credit or Cash Transaction Error!", "This can be a standalone credit/ cash transaction!");
                        return;
                    }else if(*cashAmount>*availableCash){
                        QMessageBox::warning(this, "Insufficient Funds!", "You do not have enough funds to complete this transaction!");
                        return;
                    }else{
                        QMessageBox::warning(this, "Insertion Error!", "There was a problem entering your record!");
                        return;
                    }
                }else if(ui->cbPaymentMethod->currentIndex()==0){
//                    No payment avenue selected
                }
             updateStockLogs();
                if(!stockLogUpdated){
                    QMessageBox::warning(this, "Stock Log Update Error!", "There was a problem updating your stock logs!");
                    return;
                }else{
                    if(cashPostSuccessful){
                        QMessageBox::information(this, "CASH ACQUISITION SUCCESS!", "Stock Successfully Updated!");

                        emit stockAcquisitionTaskComplete();

                    }else if(creditPostSuccessful){
                        QMessageBox::information(this, "CREDIT ACQUISITION SUCCESS!", "Stock Successfully Updated!");

                        emit stockAcquisitionTaskComplete();
                    }else if(cashCreditPostSuccessful){
                        QMessageBox::information(this, "CASH AND CREDIT ACQUISITION SUCCESS!", "Stock Successfully Updated!");
                        emit stockAcquisitionTaskComplete();
                    }else{
//                        No post took place
                    }
                }
            }
        }
    }

}

void AcquireStock::on_btnCancel_clicked()
{

}

void AcquireStock::loadSuppliers() {
    stockAcquisitionConnection->conn_open();
    QStringList supplierList;
    if (stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT phone FROM suppliers"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                *phoneNumber = query.value(0).toString();
                supplierList<<*phoneNumber;
            }
            SupplierCompleter = new QCompleter(supplierList,this);
            SupplierCompleter->setCaseSensitivity(Qt::CaseInsensitive);
            SupplierCompleter->setFilterMode(Qt::MatchContains);
            ui->leSupplier->setCompleter(SupplierCompleter);
        }

    } else{
        qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
    }

    connect(SupplierCompleter, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
        LOGx("supplier");
            });
}

void AcquireStock::loadProducts() {
    QStringList productList;
    if (stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT productName FROM products"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                *product = query.value(0).toString();

                productList<<*product;
            }
            ProductCompleter = new QCompleter(productList,this);
            ProductCompleter->setCaseSensitivity(Qt::CaseInsensitive);
            ProductCompleter->setFilterMode(Qt::MatchContains);
            ui->leProduct->setCompleter(ProductCompleter);
        }

    } else{
        qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
    }

    connect(SupplierCompleter, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
                LOGx("product");
            });
}

void AcquireStock::grabCurrentDate() {
    QDate paymentDate = calendar->selectedDate();
    QString resolvedPaymentDate = paymentDate.toString("yyyy-MM-dd");
    ui->lePaymentDate->setText(resolvedPaymentDate);
    calendar->hide();
}

void AcquireStock::grabStockDetails() {
    QDateTime acquisitionTime = QDateTime::currentDateTime();
    newStock->acquisitionDate = acquisitionTime;
    newStock->acquisitionUserId = currentUser->user_id.toInt();
    newStock->acquisitionPaymentDate = QDate::fromString(ui->lePaymentDate->text(), "yyyy-MM-dd");
    newStock->acquisitionPaymentMethod = ui->cbPaymentMethod->currentText();
    newStock->acquisitionQuantity = ui->leQuantity->text().toInt();
    newStock->acquisitionStockPrice = ui->leStockPrice->text().toDouble();
    newStock->stockCash = ui->leCashAmount->text().toDouble();
    newStock->stockCredit = ui->leCreditAmount->text().toDouble();
}

void AcquireStock::checkIfAllFieldsAreCaptured() {
    if(newStock->acquisitionStockPrice==NULL||newStock->acquisitionQuantity==NULL||newStock->acquisitionPaymentMethod.isEmpty()||
            *productId==NULL|| *supplierId==NULL){
        if(ui->cbPaymentMethod->currentIndex()==1){
            if(newStock->stockCash==NULL){
                allFieldsCaptured = false;
            }
        }else if(ui->cbPaymentMethod->currentIndex()==2){
            if(newStock->stockCredit==NULL){
                allFieldsCaptured = false;
            }
        }else if(ui->cbPaymentMethod->currentIndex()==3){
            if((newStock->stockCash||newStock->stockCredit)==NULL){
                allFieldsCaptured = false;
            }
        }else if(ui->cbPaymentMethod->currentIndex()==0){
            allFieldsCaptured= false;
        }
    } else{
        allFieldsCaptured = true;
    }
}

void AcquireStock::on_btnClear_clicked()
{
    ui->leQuantity->clear();
    *qtySupplied = 0;
    ui->leQuantity->setText(QString::number(*qtySupplied));
    ui->leQuantity->setFocus();
}

void AcquireStock::on_btnSix_clicked()
{
    *qtySupplied += 6;
    ui->leQuantity->setText(QString::number(*qtySupplied));
    ui->leQuantity->setFocus();
}

void AcquireStock::on_btnTwelve_clicked()
{
    *qtySupplied += 12;
    ui->leQuantity->setText(QString::number(*qtySupplied));
    ui->leQuantity->setFocus();
}

void AcquireStock::on_btnTwentyFour_clicked()
{
    *qtySupplied += 24;
    ui->leQuantity->setText(QString::number(*qtySupplied));
    ui->leQuantity->setFocus();
}

void AcquireStock::on_btnThirtySix_clicked()
{
    *qtySupplied += 36;
    ui->leQuantity->setText(QString::number(*qtySupplied));
    ui->leQuantity->setFocus();
}

void AcquireStock::on_btnFortyEight_clicked()
{
    *qtySupplied += 48;
    ui->leQuantity->setText(QString::number(*qtySupplied));
    ui->leQuantity->setFocus();
}

void AcquireStock::paymentChanged(int) {
//    if (ui->cbPaymentMethod->currentIndexChanged(0)){}
//    ui->leCashAmount->clear();
//    ui->leCreditAmount->clear();


//ssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss
}

void AcquireStock::resolveDatabaseValues() {
    stockAcquisitionConnection->conn_open();
    resolveProduct();
    resolveSupplier();
}

void AcquireStock::postPaymentToTable() {

    LOGx("WE ARE GOLDEN");
}

void AcquireStock::resetPayment() {
    *stockAmount = ui->leStockPrice->text().toDouble();
    ui->leCashAmount->clear();
    ui->leCreditAmount->clear();
    ui->leCashAmount->setEnabled(true);
    ui->leCreditAmount->setEnabled(true);
    ui->btnCalender->setEnabled(true);
}
void AcquireStock::setCredit() {
    *creditAmount = *stockAmount - *cashAmount;
    *cashAmount = ui->leCashAmount->text().toDouble();
    if(*creditAmount>=0 && *creditAmount<=*stockAmount){
        ui->leCreditAmount->setText(QString::number(*creditAmount));
    }else{
        ui->leCreditAmount->setText(QString::number(0));
    }
    ui->leCashAmount->setText(QString::number(*cashAmount));
    ui->leCreditAmount->setText(QString::number(*creditAmount));
}

void AcquireStock::setCash() {
    *creditAmount = ui->leCreditAmount->text().toDouble();
    *cashAmount = *stockAmount - *creditAmount;
    if(*cashAmount>=0 && *cashAmount<=*stockAmount){
        ui->leCashAmount->setText(QString::number(*cashAmount));
    }else{
        ui->leCashAmount->setText(QString::number(0));

    }
    ui->leCashAmount->setText(QString::number(*cashAmount));
    ui->leCreditAmount->setText(QString::number(*creditAmount));
}

void AcquireStock::resolveProduct() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT product_id  FROM products WHERE productName = :productName"));;
        query.bindValue(":productName", ui->leProduct->text());
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            while(query.next()){
                *intResolvedProductId = query.value(0).toInt();
                if(std::isnan(*intResolvedProductId)){
                    productResolved = false;
                }else{
                    newStock->acquisitionProductId = *intResolvedProductId;
                    productResolved = true;
                }
            }

        }

    }
}
void AcquireStock::resolveStock() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT quantity FROM stock WHERE product_id = :productIdToUpdate"));
        query.bindValue(":productIdToUpdate", *intResolvedProductId);;
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        } else {
            while (query.next()) {
                *stockQuantityAvailable = query.value(0).toInt();
                *stockQuantityUpdated = *stockQuantityAvailable + newStock->acquisitionQuantity;
                stockQuantityAcquired = true;
            }
        }
    }
}
void AcquireStock::updateStockQuantity() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("UPDATE stock SET quantity = :newQuantity, user_id=:updatingUser, manipulatedOnDate=:dateManipulated"
                              " WHERE product_id = :productId"));;
        query.bindValue(":newQuantity", *stockQuantityUpdated);
        query.bindValue(":updatingUser", currentUser->user_id);
        query.bindValue(":dateManipulated", newStock->acquisitionDate);
        query.bindValue(":productId", *intResolvedProductId);

        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
                stockQuantitySuccessfullyUpdated = true;
        }
    }

}

void AcquireStock::resolveSupplier() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT supplier_id  FROM suppliers WHERE phone = :supplierPhone"));;
        query.bindValue(":supplierPhone", ui->leSupplier->text());

        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            while (query.next()){
                *intResolvedSupplierId = query.value(0).toInt();
                if(std::isnan(*intResolvedSupplierId)){
                    supplierResolved = false;
                }else{
                    newStock->acquisitionSupplierId = *intResolvedSupplierId;
                    supplierResolved = true;
                }
            }
        }
    }
}

void AcquireStock::changePaymentValuesToDefault() {
    *stockAmount = ui->leStockPrice->text().toDouble();
    ui->leCashAmount->clear();
    ui->leCreditAmount->clear();
    ui->leCashAmount->setEnabled(true);
    ui->leCreditAmount->setEnabled(true);
    ui->btnCalender->setEnabled(true);
}

void AcquireStock::postCash() {
    updateCashAcquisition();
    if (!cashStockAcquisitionSuccessful){
        QMessageBox::warning(this, "Stock Acquisition Error!", "There was a problem posting your acquisition!");
        return;
    }else{
        resolveStock();
        if(!stockQuantityAcquired){
            QMessageBox::warning(this, "Stock Update Error!", "There was a problem getting your stock values!");
            return;
        }else{
            updateStockQuantity();
            if(!stockQuantitySuccessfullyUpdated){
                QMessageBox::warning(this, "Stock Quantity Update Error!", "There was a problem getting your stock quantity!");
                return;
            }else{
                resolveAcquisition();
                if(!acquisitionIdObtained){
                    QMessageBox::warning(this, "Error Acquiring Acquisition Details!", "There was a problem getting your stock purchase details!");
                    return;
                }else{
                    reduceCash();
                    if(!stockCashAcquisitionComplete){
                        QMessageBox::warning(this, "Error Updating Cash Details!", "There was a problem Updating Cash Records!");
                        return;
                    }else{
                        cashPostSuccessful = true;
                    }

                }
            }
        }
    }
}

void AcquireStock::postCredit() {
    if(ui->lePaymentDate->text().isEmpty()){
        QMessageBox::warning(this, "Payment Date Error!", "You have to define expected payment date!");
        return;
    }else{
        updateCreditAcquisition();
        if (!creditStockAcquisitionSuccessful){
            QMessageBox::warning(this, "Stock Acquisition Error!", "There was a problem posting your acquisition!");
            return;
        }else{
            resolveStock();
            if(!stockQuantityAcquired){
                QMessageBox::warning(this, "Stock Update Error!", "There was a problem getting your stock values!");
                return;
            }else{
                updateStockQuantity();
                if(!stockQuantitySuccessfullyUpdated){
                    QMessageBox::warning(this, "Stock Quantity Update Error!", "There was a problem getting your stock quantity!");
                    return;
                }else{
                    resolveAcquisition();
                    if(!acquisitionIdObtained){
                        QMessageBox::warning(this, "Error Acquiring Acquisition Details!", "There was a problem getting your stock purchase details!");
                        return;
                    }else{
                        resolveDebt();
                        if(!debtSuccessfullyFetchedFromDb){
                            QMessageBox::warning(this, "Error Acquiring Previous Credit Data!", "There was a problem getting your credit data!");
                            return;
                        }else{
                            increaseCredit();
                            if(!creditStockAcquisitionSuccessful){
                                QMessageBox::warning(this, "Error Updating Credit Details!", "There was a problem Updating Credit Records!");
                                return;
                            }else{
                                creditPostSuccessful = true;
                            }
                        }

                    }
                }
            }
        }
    }

}

void AcquireStock::postCashCredit() {
    if(ui->lePaymentDate->text().isEmpty()){
        QMessageBox::warning(this, "Payment Date Error!", "You have to define expected payment date!");
        return;
    }else{
        updateCashCreditAcquisition();
        if (!cashCreditStockAcquisitionSuccessful){
            QMessageBox::warning(this, "Stock Acquisition Error!", "There was a problem posting your acquisition!");
            return;
        }else{
            resolveStock();
            if(!stockQuantityAcquired){
                QMessageBox::warning(this, "Stock Update Error!", "There was a problem getting your stock values!");
                return;
            }else{
                updateStockQuantity();
                if(!stockQuantitySuccessfullyUpdated){
                    QMessageBox::warning(this, "Stock Quantity Update Error!", "There was a problem getting your stock quantity!");
                    return;
                }else{
                    resolveAcquisition();
                    if(!acquisitionIdObtained){
                        QMessageBox::warning(this, "Error Acquiring Acquisition Details!", "There was a problem getting your stock purchase details!");
                        return;
                    }else{
                       reduceCash();
                        if(!stockCashAcquisitionComplete){
                            QMessageBox::warning(this, "Error Updating Cash Value!", "There was a problem Updating Cash Records!");
                            return;
                        }else{
                            resolveDebt();
                            if(!debtSuccessfullyFetchedFromDb){
                                QMessageBox::warning(this, "Error Acquiring Previous Credit Data!", "There was a problem getting your credit data!");
                                return;
                            }else{
                                increaseCredit();
                                if(!creditStockAcquisitionSuccessful){
                                    QMessageBox::warning(this, "Error Updating Credit Details!", "There was a problem Updating Credit Records!");
                                    return;
                                }else{
                                    cashCreditPostSuccessful = true;
                                }
                            }
                        }

                    }
                }
            }
        }
    }
}

void AcquireStock::fetchCashFromDatabase() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT total FROM cash ORDER BY transaction_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{

            while(query.next()){
                *availableCash = query.value(0).toDouble();
            }
        }
    }
}

void AcquireStock::fetchCreditFromDatabase() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT total FROM business_debts ORDER BY debt_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{

            while(query.next()){
                *currentTotalDebt = query.value(0).toDouble();
            }
        }
    }

}

void AcquireStock::updateStock() {
    if (stockAcquisitionConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT product_id FROM products WHERE product_name = :productName"));
        query.bindValue(":productName", ui->leProduct->text());
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        } else {
            while (query.next()) {
                *productIdToUpdateInStock = query.value(0).toInt();
            }
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("SELECT quantity FROM stock WHERE product_id = :productIdToUpdate"));
            query.bindValue(":productIdToUpdate", *productIdToUpdateInStock);
            if (!query.exec()) {
                QMessageBox::critical(this, "Database Error", query.lastError().text());
            } else {
                while (query.next()) {
                    *stockQuantityAvailable = query.value(0).toInt();
                    *stockQuantityUpdated = *stockQuantityAvailable + *stockAmount;
                    QSqlQuery query(QSqlDatabase::database("MyConnect"));
                    query.prepare(QString("SELECT quantity FROM stock WHERE product_id = :productIdToUpdate"));
                    query.bindValue(":productIdToUpdate", *productIdToUpdateInStock);
                    if (!query.exec()) {
                        QMessageBox::critical(this, "Database Error", query.lastError().text());
                    } else {
                    }
                }
            }
        }
    }
}

void AcquireStock::updateCashAcquisition() {
    if (stockAcquisitionConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO stock_acquisition( quantity, stock_price, product_id, payment_type, "
                              "cash_amount, credit_amount, supplier_id, user_id, acq_date, exp_payment_date) VALUES(:quantity, :stockPrice, :productId, "
                              ":paymentType, :cashAmount, :creditAmount, :supplierId, :userId, :acquisitionDate, NULL)"));
        query.bindValue(":quantity", newStock->acquisitionQuantity);
        query.bindValue(":stockPrice", newStock->acquisitionStockPrice);
        query.bindValue(":productId", newStock->acquisitionProductId);
        query.bindValue(":paymentType", newStock->acquisitionPaymentMethod);
        query.bindValue(":cashAmount", newStock->stockCash);
        query.bindValue(":creditAmount", "0");
        query.bindValue(":supplierId", newStock->acquisitionSupplierId);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":acquisitionDate", newStock->acquisitionDate);
        if(!query.exec()){
            LOGx("died here");
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            cashStockAcquisitionSuccessful = true;
        }
    }
}

void AcquireStock::updateCreditAcquisition() {
    if (stockAcquisitionConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO stock_acquisition( quantity, stock_price, product_id, payment_type, "
                              "cash_amount, credit_amount, supplier_id, user_id, acq_date, exp_payment_date) VALUES(:quantity, :stockPrice, :productId, "
                              ":paymentType, :cashAmount, :creditAmount, :supplierId, :userId, :acquisitionDate, :expectedPaymentDate)"));
        query.bindValue(":quantity", newStock->acquisitionQuantity);
        query.bindValue(":stockPrice", newStock->acquisitionStockPrice);
        query.bindValue(":productId", newStock->acquisitionProductId);
        query.bindValue(":paymentType", newStock->acquisitionPaymentMethod);
        query.bindValue(":cashAmount", newStock->stockCash);
        query.bindValue(":creditAmount", newStock->acquisitionStockPrice);
        query.bindValue(":supplierId", newStock->acquisitionSupplierId);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":acquisitionDate", newStock->acquisitionDate);
        query.bindValue(":acquisitionDate", newStock->acquisitionDate);
        query.bindValue(":expectedPaymentDate", newStock->acquisitionPaymentDate);
        if(!query.exec()){
            LOGx("died here");
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            creditStockAcquisitionSuccessful = true;
        }
    }
}

void AcquireStock::updateCashCreditAcquisition() {
    if (stockAcquisitionConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO stock_acquisition( quantity, stock_price, product_id, payment_type, "
                              "cash_amount, credit_amount, supplier_id, user_id, acq_date, exp_payment_date) VALUES(:quantity, :stockPrice, :productId, "
                              ":paymentType, :cashAmount, :creditAmount, :supplierId, :userId, :acquisitionDate, :expectedPaymentDate)"));
        query.bindValue(":quantity", newStock->acquisitionQuantity);
        query.bindValue(":stockPrice", newStock->acquisitionStockPrice);
        query.bindValue(":productId", newStock->acquisitionProductId);
        query.bindValue(":paymentType", newStock->acquisitionPaymentMethod);
        query.bindValue(":cashAmount", newStock->stockCash);
        query.bindValue(":creditAmount", newStock->stockCredit);
        query.bindValue(":supplierId", newStock->acquisitionSupplierId);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":acquisitionDate", newStock->acquisitionDate);
        query.bindValue(":acquisitionDate", newStock->acquisitionDate);
        query.bindValue(":expectedPaymentDate", newStock->acquisitionPaymentDate);
        if(!query.exec()){
            LOGx("died here");
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            cashCreditStockAcquisitionSuccessful = true;
        }
    }
}

void AcquireStock::reduceCash() {
    *newCashTotalAfterStockPurchase = *availableCash - *cashAmount;
    QString effect = "decrease";
    QString tempTransactionType = "Stock Acquisition";
    if (stockAcquisitionConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO cash (transaction_type, amount, acquisition_id, total, effect, user_id, transaction_timestamp)"
                              "VALUES(:transactionType, :amount, :acquisitionId, :total, :effect, :userId, :timeStamp)"));

        query.bindValue(":transactionType", tempTransactionType);
        query.bindValue(":amount", *cashAmount);
        query.bindValue(":acquisitionId", *acquisitionId);
        query.bindValue(":total", *newCashTotalAfterStockPurchase);
        query.bindValue(":effect", effect);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":timeStamp", newStock->acquisitionDate);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            stockCashAcquisitionComplete = true;
        }
    }
}

void AcquireStock::resolveAcquisition() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT acquisition_id FROM stock_acquisition ORDER BY acquisition_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{

            while(query.next()){
                *acquisitionId = query.value(0).toInt();
                if(std::isnan(*acquisitionId)){
                    acquisitionIdObtained = false;
                }else{
                    acquisitionIdObtained = true;
                }
            }
        }
    }

}

void AcquireStock::increaseCredit() {
    QString effect = "increase";
    QString status = "Active-Not Paid";
    QString tempTransactionType = "Stock Acquisition";
    *newTotalDebt = *currentTotalDebt+newStock->stockCredit;
    if (stockAcquisitionConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO business_debts (debt_type, amount, total, acquisition_id, effect, due_date, status, modifying_user_id, modified_date)"
                              "VALUES(:debtType, :amount, :total, :acquisitionId, :effect, :dueDate, :status, :userId, :timeStamp)"));
        query.bindValue(":debtType", tempTransactionType);
        query.bindValue(":amount", newStock->stockCredit);
        query.bindValue(":total", *newTotalDebt);
        query.bindValue(":acquisitionId", *acquisitionId);
        query.bindValue(":effect", effect);
        query.bindValue(":dueDate", newStock->acquisitionDate);
        query.bindValue(":status", status);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":timeStamp", newStock->acquisitionDate);
        if(!query.exec()){
            LOGx("Dead here");
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            LOGx("Successful here");

            creditStockAcquisitionSuccessful = true;
        }
    }
}

void AcquireStock::resolveDebt() {
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT total FROM business_debts ORDER BY debt_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            while(query.next()){
                *currentTotalDebt = query.value(0).toDouble();
                debtSuccessfullyFetchedFromDb = true;
            }
        }
    }
}

void AcquireStock::updateStockLogs() {
    QString effect = "increase";
    QString manipulationType = "Stock Acquisition";
    if(stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO stock_log (manipulationType, product_id, quantity, total, effect, acquisition_id, user_id, timeStamp)"
                              "VALUES(:manipulationType, :productId, :quantity, :total,:effect, :acquisitionId, :userId, :timeStamp)"));

        query.bindValue(":manipulationType", manipulationType);
        query.bindValue(":productId", newStock->acquisitionProductId);
        query.bindValue(":quantity", newStock->acquisitionQuantity);
        query.bindValue(":total", *stockQuantityUpdated);
        query.bindValue(":effect", effect);
        query.bindValue(":acquisitionId", *acquisitionId);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":timeStamp", newStock->acquisitionDate);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
                stockLogUpdated = true;
        }
    }
}






