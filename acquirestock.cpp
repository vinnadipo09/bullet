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
    resetPayment();
    *cashAmount = 0.00;
    *creditAmount = 0.00;
    ui->leCreditAmount->setText(QString::number(*creditAmount));
    ui->leCashAmount->setText(QString::number(*cashAmount));
    newStock = new acquiredStock;
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
                *creditAmount = 0.0;

            ui->leCashAmount->setText(ui->leStockPrice->text());
                ui->btnCalender->setDisabled(true);
                ui->leCreditAmount->setDisabled(true);
            ui->leCreditAmount->setText(QString::number(0.00));


        }else if(index==2){
                    *cashAmount = 0.0;
                    changePaymentValuesToDefault();
                    ui->leCashAmount->setDisabled(true);
                    ui->leCreditAmount->setText(ui->leStockPrice->text());
                    ui->leCashAmount->setText(QString::number(0.00));
                }else if(index==3){
                    changePaymentValuesToDefault();
                    *cashAmount = 0.0;
                    *creditAmount = 0.0;



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
    grabStockDetails();
    checkIfAllFieldsAreCaptured();
    if(!allFieldsCaptured){
        QMessageBox::warning(this, "Empty Cells Error!", "Please fill in all the required fields!");
        return;
    }else{
        resolveDatabaseValues();
        if(!productResolved){
            QMessageBox::warning(this, "Product does not Exist!", "Please select a valid Product or Add it to the Database!");
            return;
        }else if(!supplierResolved){
            QMessageBox::warning(this, "Supplier does not Exist!", "Please select a valid Supplier or Add them to the Database!");
            return;
        }else{
            if(ui->cbPaymentMethod->currentIndex()==1){
                LOGx("posting cash");
            }else if(ui->cbPaymentMethod->currentIndex()==2){
                LOGx("posting credit");

            }else if(ui->cbPaymentMethod->currentIndex()==3){
                LOGx("posting cash and credit");

            }else if(ui->cbPaymentMethod->currentIndex()==0){

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
    newStock->acquisitionProductId = *productId;
    newStock->acquisitionSupplierId = *supplierId;
    newStock->acquisitionDate = acquisitionTime;
    newStock->acquisitionUserId = currentUser->user_id.toInt();
    newStock->acquisitionPaymentDate = QDate::fromString(ui->lePaymentDate->text(), "yyyy-MM-dd");
    newStock->acquisitionPaymentMethod = ui->cbPaymentMethod->currentText();
    newStock->acquisitionQuantity = ui->leQuantity->text().toInt();
    newStock->acquisitionStockPrice = ui->leQuantity->text().toDouble();
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
    if(*creditAmount>0){
        ui->leCreditAmount->setText(QString::number(*creditAmount));
    }
    ui->leCashAmount->setText(QString::number(*cashAmount));
    ui->leCreditAmount->setText(QString::number(*creditAmount));
}

void AcquireStock::setCash() {
    *cashAmount = *stockAmount - *creditAmount;
    *creditAmount = ui->leCreditAmount->text().toDouble();
    if(*cashAmount>0){
        ui->leCashAmount->setText(QString::number(*cashAmount));
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
            productResolved = true;
            newStock->acquisitionProductId = query.value(0).toInt();
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
            supplierResolved = true;
            newStock->acquisitionSupplierId = query.value(0).toInt();
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

}

void AcquireStock::postCredit() {

}

void AcquireStock::postCashCredit() {

}


