#include "addproduct.h"
#include "ui_addproduct.h"
AddProduct::AddProduct(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddProduct)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    addProductConnection = new databaseConnection;

    productTodB = new productToDatabase;

    loadProductZonesToCBox();
    loadProductCategoryToComboBox();


}

AddProduct::~AddProduct()
{
    delete ui;
}

void AddProduct::on_btnAvatar_clicked()
{
    productTodB->product_image = QFileDialog::getOpenFileName(this,
                                                                                   tr("Open Image"), "/home/", tr("Image Files (*.png *.jpg *.bmp .*jpeg)"));
    QFileInfo fileName = productTodB->product_image;
    ui->leProductImage->setText(productTodB->product_image);
    QPixmap productImg(productTodB->product_image);
    ui->lbl_avatar->setPixmap(productImg.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));
}

void AddProduct::loadProductCategoryToComboBox() {
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

void AddProduct::loadProductZonesToCBox() {
    addProductConnection->conn_open();
    if(addProductConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT zone_name FROM product_zone"));
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                QString zone_name = query.value(0).toString();
                ui->cbProductZone->addItem(zone_name);
            }
        }
    }
}

void AddProduct::on_btnOkay_clicked()
{
    grabAllProductDetails();
    checkIfAllFieldsCaptured();
    checkForDuplicateProducts();
    if(!allValuesCaptured){
        QMessageBox::warning(this, "Empty Cells Error!", "Pleaase fill in all the required fields!");
        return;
    }else{
        if(!selectionFilled){
            QMessageBox::warning(this, "Selection Error!", "Please select product category");
            return;
        }else{
            if(!zoneSelectionFilled){
                QMessageBox::warning(this, "Selection Error!", "Please Select Product Zone");
                return;
            }else{
                if(productAlreadyExists){
                    QMessageBox::warning(this, "Duplicate Error!", "Product already exists in the database");
                    return;
                }else{
                    proceedToVerification();
                }
            }
//            IMPLEMENT FIRST IN THE MORNING

        }
    }
}

void AddProduct::on_btnCancel_clicked()
{

}

void AddProduct::proceedToVerification() {
    verifyProduct = new VerifyNewProduct(this, *currentUser, *productTodB);
//    this->hide();
    verifyProduct->show();
    QObject::connect(verifyProduct, SIGNAL(productAdditionJobComplete()), this, SLOT(receiveAdditionCompletion()));
    QObject::connect(verifyProduct, SIGNAL(editRequested()), this, SLOT(receiveEditRequest()));
    QObject::connect(verifyProduct, SIGNAL(discardRequested()), this, SLOT(receiveDiscardRequest()));
}

void AddProduct::grabAllProductDetails() {
    productTodB->product_name = ui->leProductName->text();
    productTodB->product_image = ui->leProductImage->text();
    productTodB->product_category = ui->cbProductCategory->currentText();
    productTodB->productZone = ui->cbProductZone->currentText();
    productTodB->product_barcode = ui->leProductUniqueId->text();
    productTodB->product_shortcode = ui->leProductShortCode->text();
    productTodB->product_quantity = ui->leProductQuantity->text();
    productTodB->product_wsprice = ui->leWholeSalePrice->text().toDouble();
    productTodB->product_rtprice = ui->leRetailPrice->text().toDouble();
    productTodB->modifiedBy = currentUser->user_id.toInt();
    productTodB->modifiedAt = QDateTime::currentDateTime();
}

void AddProduct::checkIfAllFieldsCaptured() {
    if(productTodB->product_name.isEmpty()||productTodB->product_image.isEmpty() ||productTodB->product_category.isEmpty() ||
    productTodB->product_barcode.isEmpty() ||productTodB->product_shortcode.isEmpty() ||productTodB->product_quantity.isEmpty() ||
            productTodB->product_wsprice== NULL||productTodB->product_rtprice ==NULL ||productTodB->modifiedAt.isNull()||productTodB->modifiedBy==
                                                                                                                               NULL){
        allValuesCaptured = false;
        return;
    }else{
        allValuesCaptured = true;
        if(ui->cbProductCategory->currentIndex()==0){
            selectionFilled = false;
            return;
        }else{
            selectionFilled = true;
            if(ui->cbProductZone->currentIndex()==0){
                zoneSelectionFilled = false;
            }else{
                zoneSelectionFilled = true;
            }
        }
    }
}

void AddProduct::checkForDuplicateProducts() {
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

void AddProduct::receiveEditRequest() {
    verifyProduct->close();
    this->show();;
}

void AddProduct::receiveDiscardRequest() {
    verifyProduct->close();
    emit productAdditionCompleted();
}

void AddProduct::receiveAdditionCompletion() {
    verifyProduct->close();
    emit productAdditionCompleted();
}
