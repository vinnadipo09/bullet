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
    loadSuppliers();
    loadProducts();
    newStock = new acquiredStock;
    connect(ui->cbPaymentMethod, SIGNAL(currentIndexChanged(int)),
            this, SLOT(paymentChanged(int)));

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
        query.prepare(QString("SELECT product_name FROM products"));
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
    calendar->hide();
    LOGx("SAITAN");
}

void AcquireStock::grabStockDetails() {
    qtySupplied = new int;
    productId = new int;
    supplierId = new int;
    QDateTime acquisitionTime = QDateTime::currentDateTime();
    newStock->acquisitionProductId = *productId;
    newStock->acquisitionSupplierId = *supplierId;
    newStock->acquisitionDate = acquisitionTime;
    newStock->acquisitionUserId = currentUser->user_id.toInt();
    newStock->acquisitionPaymentDate = QDate::fromString(ui->lePaymentDate->text(), "dd/MM/yyyy");
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
    if(ui->cbPaymentMethod->currentIndex()==1){
        ui->btnCalender->setDisabled(true);
        ui->leCreditAmount->setDisabled(true);
        paymentSelected = true;
    }else if (ui->cbPaymentMethod->currentIndex()==2){
        ui->btnCalender->setEnabled(true);
        ui->leCashAmount->setDisabled(true);
        paymentSelected = true;
    }else if (ui->cbPaymentMethod->currentIndex()==3){
        ui->btnCalender->setEnabled(true);
        ui->leCashAmount->setEnabled(true);
        ui->leCreditAmount->setEnabled(true);
        paymentSelected = true;

    }else{
        paymentSelected = false;
    }
}

void AcquireStock::resolveDatabaseValues() {

}

void AcquireStock::postPaymentToTable() {

}
