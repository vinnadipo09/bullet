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

    ui->tableWidget->horizontalHeader()->setVisible(true);
    ui->tableWidget->horizontalHeader()->setDefaultSectionSize(200);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    addedProduct = new productFromDb;
    addedProductName = new QString;
    productQuantity = new QString;
    discountOnItem= new QString;
    pointsOnItem= new QString;
    unitPrice = new QString;
    itemTotalPrice = new QString;
    itemQuantityPurchased = new QString;
    productPrice = new int;
    totalToPay = new int;
    currentCashierUser = new loggedUser;
    *currentCashierUser = currentLoggedInUser;
//    Debug(*currentCashierUser);

    *totalToPay = 0;
    itemsBought = new std::map<QString, int>;

    loadItemsFromDbToCompleter();
    ui->le_barcodeEntry->setFocus();
    QObject::connect(ui->le_barcodeEntry, SIGNAL(returnPressed()),
                     this, SLOT(grabBarcodeFromEntry()));
}

SalesClient::~SalesClient()
{
    delete ui;
}
void SalesClient::grabBarcodeFromEntry() {
    uniqueID = ui->le_barcodeEntry->text();
    getScannedProductFromDB(uniqueID);
}
void SalesClient::getScannedProductFromDB(QString barcodeScanned) {
    barcodeScanned = ui->le_barcodeEntry->text();
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT * FROM products WHERE product_barcode = :scannedBarcode"));
    query.bindValue(":scannedBarcode", uniqueID);
    if(!query.exec()){
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        return;
    }else{
        while (query.next()) {
            addedProduct->product_name = query.value(1).toString();
            addedProduct->product_quantity = query.value(4).toString();
            addedProduct->product_rtprice = query.value(6).toInt();
            *addedProductName = addedProduct->product_name;
            *productQuantity = addedProduct->product_quantity;
            *productPrice = addedProduct->product_rtprice;
            *unitPrice = QString::number(*productPrice);

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
            if(ui->tableWidget->item(i,0)->text().toStdString()==currentItemScheduled){
                modifyProductInRowCreated(i, it->second);
            }
        }
    }else{
        itemsBought->insert(std::pair<QString, int>(barcodeScanned, initial_quantity));
        createRowsToAddProductPurchased(initial_quantity);
    }
}
void SalesClient::modifyProductInRowCreated(int &rowAffected, int &quantityValue) {
    int columnsToModifyProducts = 8;
    int papa = 9;
    for(int i =0; i<columnsToModifyProducts; i++){
        if(i==6){
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(quantityValue));
        }else if(i==7){
            int unitPrice = ui->tableWidget->item(rowAffected, 5)->text().toInt();
            int subTotal = unitPrice*quantityValue;
            ui->tableWidget->item(rowAffected, i)->setText(QString::number(subTotal));
            *totalToPay = *totalToPay + ui->tableWidget->item(rowAffected, 5)->text().toInt();
            ui->lblComputedTotal->setText(QString::number(*totalToPay));
        }
    }
}
void SalesClient::createRowsToAddProductPurchased(int &quantityValue) {
    currentRowBeingInserted = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    addProductInRowCreated(currentRowBeingInserted, quantityValue);
    *totalToPay = *totalToPay + ui->tableWidget->item(currentRowBeingInserted, 7)->text().toInt();
    ui->lblComputedTotal->setText(QString::number(*totalToPay));
}

void SalesClient::addProductInRowCreated(int &rowCreated, int &quantityPurchased) {
    int discount = 50;
    int points = 30;
    int columnsToAddProducts = 8;
    for(int i =0; i<columnsToAddProducts; i++){
        if(i==0){
            QTableWidgetItem* barCodeEntry = ui->tableWidget->item(rowCreated, i);
            if(!barCodeEntry){
                barCodeEntry = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, barCodeEntry);
            }if(!uniqueID.isEmpty()){
                barCodeEntry->setText(uniqueID);
            }
        }else if(i==1) {
            QTableWidgetItem *itemName = ui->tableWidget->item(rowCreated, i);
            if (!itemName) {
                itemName = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, itemName);
            }
            if (!addedProductName->isEmpty()) {
                itemName->setText(*addedProductName);
            }

        }else if(i==2) {
            QTableWidgetItem *itemQty = ui->tableWidget->item(rowCreated, i);
            if (!itemQty) {
                itemQty = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, itemQty);
            }
            if (!productQuantity->isEmpty()) {
                itemQty->setText(*productQuantity);
            }
        }else if(i==3){
            QTableWidgetItem *itemDiscount = ui->tableWidget->item(rowCreated, i);
            if(!itemDiscount){
                itemDiscount = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, itemDiscount);
            }
            QString tempDiscount = QString::number(discount);
            *discountOnItem = tempDiscount;
            if(!discountOnItem->isEmpty()){
                itemDiscount->setText(*discountOnItem);
            }
        }else if(i==4) {
            QTableWidgetItem *itemPoints = ui->tableWidget->item(rowCreated, i);
            if (!itemPoints) {
                itemPoints = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, itemPoints);
            }
            QString tempPoints = QString::number(points);
            *pointsOnItem = tempPoints;
            if (!pointsOnItem->isEmpty()) {
                itemPoints->setText(*pointsOnItem);
            }
        }else if(i==5) {
            QTableWidgetItem *itemUnitPrice = ui->tableWidget->item(rowCreated, i);
            if (!itemUnitPrice) {
                itemUnitPrice = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, itemUnitPrice);
            }
            if (!unitPrice->isEmpty()) {
                itemUnitPrice->setText(*unitPrice);
            }
        }else if(i==6) {
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

        }else if(i==7) {
            QTableWidgetItem *itemSubTotal = ui->tableWidget->item(rowCreated, i);
            if(!itemSubTotal){
                itemSubTotal = new QTableWidgetItem;
                ui->tableWidget->setItem(rowCreated, i, itemSubTotal);
            }
            int total = quantityPurchased*(*productPrice);
            *itemTotalPrice = QString::number(total);
            if(!itemTotalPrice->isEmpty()){
                itemSubTotal->setText(*itemTotalPrice);
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
        query.prepare(QString("SELECT product_name FROM products"));
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
}
