#include "addnewproduct.h"
#include "ui_addnewproduct.h"

AddNewProduct::AddNewProduct(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddNewProduct)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    addProductConnection = new databaseConnection;
    *currentUser = currentLoggedInUser;
    productTodB = new productToDatabase;

    loadProductCategoryToComboBox();
}

AddNewProduct::~AddNewProduct()
{
    delete ui;
}
void AddNewProduct::on_btnAvatar_clicked()
{
    productTodB->product_image = QFileDialog::getOpenFileName(this,
                                                     tr("Open Avatar"), "/home/Pictures",
                                                     tr("Image Files (*.jpg *.jpeg *.png)"));
    QFileInfo name = productTodB->product_image;
    ui->leProductImage->setText(productTodB->product_image);
    QPixmap mypix(productTodB->product_image);
    ui->lbl_avatar->setPixmap(mypix.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));
}
void AddNewProduct::on_btnOkay_clicked()
{
    grabAllProductDetails();
    resolveDatabaseValues();
    checkIfAllFieldsCaptured();
    Debug(productTodB->product_category);
    Debug(productTodB->product_rtprice);
    Debug(productTodB->product_wsprice);
    Debug(productTodB->product_quantity);
    Debug(productTodB->product_shortcode);
    Debug(productTodB->product_barcode);
    Debug(productTodB->product_image);
    Debug(productTodB->product_name);
    Debug(productTodB->modifiedAt);
    Debug(productTodB->modifiedBy);
    if(!allvaluesTyped){
        QMessageBox::warning(this, "Empty Cells Error!", "Pleaase fill in all the required fields!");
        return;
    }else{
        if(!selectionFilled){
            QMessageBox::warning(this, "Selection Error!", "Please select product category");
            return;
        }else{
            if(productAlreadyExists){
                QMessageBox::warning(this, "Duplicate Error!", "Product already exists in the database");
                return;
            }else{
                proceedToVerification();
            }
//            IMPLEMENT FIRST IN THE MORNING

        }
    }
}

void AddNewProduct::on_btnCancel_clicked()
{

}

void AddNewProduct::loadProductCategoryToComboBox() {
    addProductConnection->conn_open();
    if(addProductConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT category FROM product_category"));
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                QString category = query.value(0).toString();
                ui->cbProductCategory->addItem(category);
            }
        }
    }
}

void AddNewProduct::grabAllProductDetails() {
    productTodB->product_name = ui->leProductName->text();
    productTodB->product_image = ui->leProductImage->text();
    productTodB->product_cat = ui->cbProductCategory->currentText();
    productTodB->product_barcode = ui->leProductUniqueId->text();
    productTodB->product_shortcode = ui->leProductShortCode->text();
    productTodB->product_quantity = ui->leProductQuantity->text();
    productTodB->product_wsprice = ui->leWholeSalePrice->text().toDouble();
    productTodB->product_rtprice = ui->leRetailPrice->text().toDouble();
    productTodB->modifiedBy = currentUser->user_id.toInt();
    productTodB->modifiedAt = QDateTime::currentDateTime();


}

void AddNewProduct::checkIfAllFieldsCaptured() {
    if(productTodB->product_name.isEmpty()||productTodB->product_image.isEmpty() ||productTodB->product_category==
                                                                                   NULL ||
    productTodB->product_barcode.isEmpty() ||productTodB->product_shortcode.isEmpty() ||productTodB->product_quantity.isEmpty() ||
            productTodB->product_wsprice== NULL||productTodB->product_rtprice ==NULL ||productTodB->modifiedAt.isNull()||productTodB->modifiedBy==
                                                                                                                               NULL){
        allvaluesTyped = false;
        return;
    }else{
        allvaluesTyped = true;
        if(ui->cbProductCategory->currentIndex()==0){
            selectionFilled = false;
            return;
        }else{
            selectionFilled = true;
        }
    }
}

void AddNewProduct::resolveDatabaseValues() {
    if(addProductConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT category_id FROM product_category WHERE category = :categoryEntered"));
        query.bindValue(":categoryEntered", productTodB->product_cat);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            query.exec();
            while (query.next()){
                int categoryIdentification = query.value(0).toInt();
                productTodB->product_category = categoryIdentification;
            }
        }
    }
}
void AddNewProduct::checkForDuplicateProducts() {
    if(addProductConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(product_id) FROM products WHERE product_barcode = :uniqueId"));
        query.bindValue(":uniqueId", productTodB->product_barcode);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                int numberOfProducts = query.value(0).toInt();
                LOGxy("Number of count", numberOfProducts);
                if(numberOfProducts>0){
                    LOGx(numberOfProducts);
                    productAlreadyExists=true;
                    return;
                } else{
                    productAlreadyExists= false;
                }
            }
        }
    }
}

void AddNewProduct::proceedToVerification() {
    verifyProduct = new VerifyNewProduct(this, *currentUser, *productTodB);
//    this->hide();
    verifyProduct->show();
    QObject::connect(verifyProduct, SIGNAL(productAdditionJobComplete()), this, SLOT(receiveAdditionCompletion()));
    QObject::connect(verifyProduct, SIGNAL(editRequested()), this, SLOT(receiveEditRequest()));
    QObject::connect(verifyProduct, SIGNAL(discardRequested()), this, SLOT(receiveDiscardRequest()));
}

void AddNewProduct::receiveEditRequest() {
    verifyProduct->close();
    this->show();
}

void AddNewProduct::receiveDiscardRequest() {
    verifyProduct->close();
    emit productAdditionCompleted();
}

void AddNewProduct::receiveAdditionCompletion() {
    verifyProduct->close();
    emit productAdditionCompleted();
}


