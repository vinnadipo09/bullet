#include "verifynewproduct.h"
#include "ui_verifynewproduct.h"

VerifyNewProduct::VerifyNewProduct(QWidget *parent, loggedUser &currentLoggedInUser, productToDatabase& productToDb) :
    QDialog(parent),
    ui(new Ui::VerifyNewProduct)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    productVerConnection = new databaseConnection;
    verifyProduct = new productToDatabase;
    *currentUser = currentLoggedInUser;
    *verifyProduct = productToDb;
    productIdToDiscount = new int;
    ui->lblImage->setText(verifyProduct->product_image);
    ui->lblName->setText(verifyProduct->product_name);
    ui->lblCategory->setText(verifyProduct->product_cat);
    ui->lblBarCode->setText(verifyProduct->product_barcode);
    ui->lblShortCode->setText(verifyProduct->product_shortcode);
    ui->lblProdQty->setText(verifyProduct->product_quantity);
    ui->lblWPrice->setText(QString::number(verifyProduct->product_wsprice));
    ui->lblRtPrice->setText(QString::number(verifyProduct->product_rtprice));
    ui->lblDate->setText(verifyProduct->modifiedAt.date().toString());
    ui->lblTime->setText(verifyProduct->modifiedAt.time().toString());
    ui->lblUser->setText(currentUser->username);

    QPixmap mypix(verifyProduct->product_image);
    ui->lbl_avatar->setPixmap(mypix.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));

}

VerifyNewProduct::~VerifyNewProduct()
{
    delete ui;
}

void VerifyNewProduct::on_btnApply_clicked(){
    enterNewIntoDb();
    if(!productAdditionSuccessful){
        QMessageBox::information(this, "Entry Error", "Errors encountered while entering PRODUCT!");
    }else{
        enterDiscount();
        if(!discountAdditionSuccessful){
            QMessageBox::information(this, "Entry Error", "Errors encountered while entering DISCOUNT!");
        }else {
            if (!rewardsAdditionSuccessful) {
                QMessageBox::information(this, "Entry Error", "Errors encountered while entering REWARDS!");

            } else {
                QMessageBox::information(this, "Product Addition Successful", "Product SuccessfullyAdded!");
                emit productAdditionJobComplete();
            }
        }
    }
}

void VerifyNewProduct::on_btnCancel_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::warning(this
            , "Unsaved Changes"
            , "You have unsaved changes. Closing the Program will discard all your work. Continue?"
            , QMessageBox::Yes | QMessageBox::Cancel);
    if(reply==QMessageBox::Yes){
        emit discardRequested();
    }else{
        return;
    }


}

void VerifyNewProduct::enterNewIntoDb() {
    productVerConnection->conn_open();
    if(productVerConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO products(product_name, product_category, product_barcode,"
                              "product_shortcode, product_quantity, product_wsprice, product_rtprice, "
                              "product_image, product_addedby, product_addedon, product_updatedby, product_updatedon) "
                              "VALUES(:name, :category, :barcode, :shortCode, :prodQty"
                              ",:wsPrice, :rtPrice, :image, :addingUser, :addingDate,"
                              "NULL, NULL)"));
        query.bindValue(":name", verifyProduct->product_name);
        query.bindValue(":category", verifyProduct->product_category);
        query.bindValue(":barcode", verifyProduct->product_barcode);
        query.bindValue(":shortCode", verifyProduct->product_shortcode);
        query.bindValue(":prodQty", verifyProduct->product_quantity);
        query.bindValue(":wsPrice", verifyProduct->product_wsprice);
        query.bindValue(":rtPrice", verifyProduct->product_rtprice);
        query.bindValue(":image", verifyProduct->product_image);
        query.bindValue(":addingUser", currentUser->user_id);
        query.bindValue(":addingDate", verifyProduct->modifiedAt);
        if(query.exec()){
            productAdditionSuccessful = true;
        }else{
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            productAdditionSuccessful = false;
        }
    }
}

void VerifyNewProduct::enterDiscount() {
    if(productVerConnection->conn_open()){
        QSqlQuery queryOne(QSqlDatabase::database("MyConnect"));
        queryOne.prepare(QString("SELECT product_id FROM products WHERE product_barcode = :uniqueId"));
        queryOne.bindValue(":uniqueId", verifyProduct->product_barcode);
        LOGx(verifyProduct->product_barcode.toStdString());
        if(!queryOne.exec()){
            LOGx("db error");
            QMessageBox::critical(this, "Database Error", queryOne.lastError().text());
        }else{
            while (queryOne.next()){
                *productIdToDiscount = queryOne.value(0).toInt();;
                    addDiscountToDatabase();
                }
            }
        }

}

void VerifyNewProduct::enterRewards(int &productId) {
    if(productVerConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO productRewards(reward_amount, product_id,  authorizing_user_id, "
                              "authorized_date, modified_user_id, modified_on) "
                              "VALUES(:amount, :product_id, :userId, :insertDate, NULL, "
                              "NULL)"));
        query.bindValue(":amount", 0.00);
        query.bindValue(":product_id", productId);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":insertDate", verifyProduct->modifiedAt);

        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
                rewardsAdditionSuccessful = true;
            }

        }
}

void VerifyNewProduct::addDiscountToDatabase() {

    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("INSERT INTO productDiscounts(amount, product_id,  authorizing_user_id, "
                          "authorized_date, modified_user_id, modified_date) "
                          "VALUES(:amount, :product_id, :userId, :insertDate, NULL, "
                          "NULL)"));
    query.bindValue(":amount", 0.00);
    query.bindValue(":product_id", *productIdToDiscount);
    query.bindValue(":userId", currentUser->user_id);
    query.bindValue(":insertDate", verifyProduct->modifiedAt);
    if (!query.exec()) {
        LOGx("db error");
        QMessageBox::critical(this, "Database Error", query.lastError().text());
        Debug(query.lastError());
    } else {
            discountAdditionSuccessful = true;
            enterRewards(*productIdToDiscount);
    }
}


void VerifyNewProduct::on_editRecord_clicked()
{
    emit editRequested();
}
