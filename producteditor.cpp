#include "producteditor.h"
#include "ui_producteditor.h"

ProductEditor::ProductEditor(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView) :
    QDialog(parent),
    ui(new Ui::ProductEditor)
{
    ui->setupUi(this);
    productEdit = new productFromDb;
    *productEdit = currentProductToView;
    editProductConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    loadProductCategoryToComboBox();
    loadProductZoneToComboBox();
    ui->leProductImage->setText(productEdit->product_image);
    ui->leProductName->setText(productEdit->product_name);
    ui->cbProductCategory->setCurrentText(productEdit->product_category);
    ui->cbProductZone->setCurrentText(productEdit->productZone);
    ui->leProductUniqueId->setText(productEdit->product_barcode);
    ui->leProductShortCode->setText(productEdit->product_shortcode);
    ui->leProductQuantity->setText(productEdit->product_quantity);
    ui->leWholeSalePrice->setText(QString::number(productEdit->product_wsprice));
    ui->leRetailPrice->setText(QString::number(productEdit->product_rtprice));
    QPixmap viewPixmap(productEdit->product_image);
    ui->lbl_avatar->setPixmap(viewPixmap.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));


}

ProductEditor::~ProductEditor()
{
    delete ui;
}

void ProductEditor::on_btnUpdate_clicked()
{
    grabAllProductDetails();
    checkIfAllFieldsCaptured();
    if(ui->leProductUniqueId->text()!=productEdit->product_barcode){
        checkForDuplicateProducts();
    }else{
        if(!allValuesTyped){
            QMessageBox::warning(this, "Empty Cells Error!", "Please fill in all the required fields!");
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
                    updateProduct();
                    if(updateComplete){
                        QMessageBox::information(this, "Data Update Successful!", "Product successfully updated");
                        emit productEditingCompleted();
                    }else{
                        QMessageBox::warning(this, "Update Error!", "There was a problem updating your record");
                        return;
                    }
                }
//            IMPLEMENT FIRST IN THE MORNING

            }
        }
    }
}

void ProductEditor::on_btnCancel_clicked()
{

}

void ProductEditor::on_btnAvatar_clicked()
{

}

void ProductEditor::updateProduct() {
    QDateTime updateTime = QDateTime::currentDateTime();
    if(editProductConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("UPDATE products SET productName=:name, productCategory=:category, productZone=:productZone, productBarcode=:barcode,"
                              "productShortCode=:shortCode, productMeasurement=:prodQty, productWSPrice=:wsPrice, productRPrice=:rtPrice, "
                              "productImage=:image, productUpdatedById=:addingUser, productUpdatedOnDate=:addingDate WHERE product_id=:productId"));
        query.bindValue(":name", ui->leProductName->text());
        query.bindValue(":productId", productEdit->product_id.toInt());
        query.bindValue(":category", ui->cbProductCategory->currentText());
        query.bindValue(":productZone", ui->cbProductZone->currentText());
        query.bindValue(":barcode", ui->leProductUniqueId->text());
        query.bindValue(":shortCode", ui->leProductShortCode->text());
        query.bindValue(":prodQty", ui->leProductQuantity->text());
        query.bindValue(":wsPrice", ui->leWholeSalePrice->text());
        query.bindValue(":rtPrice", ui->leRetailPrice->text());
        query.bindValue(":image", ui->leProductImage->text());
        query.bindValue(":addingUser", currentUser->user_id);
        query.bindValue(":addingDate", updateTime);
        if(query.exec()){
            updateComplete = true;
        }else{
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            updateComplete = false;
        }
    }
}

void ProductEditor::loadProductCategoryToComboBox() {
    editProductConnection->conn_open();
    if(editProductConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT category FROM product_category"));
        if(!query.exec()){
            LOGx("DB not responding!");
            QMessageBox::information(this, "Discount Update Success!", "You have successfully updated the discount");
        }else{
            while(query.next()){
                QString category = query.value(0).toString();
                ui->cbProductCategory->addItem(category);
            }
        }
    }
}

void ProductEditor::grabAllProductDetails() {
    productEdit->product_name = ui->leProductName->text();
    productEdit->product_image = ui->leProductImage->text();
    productEdit->product_category = ui->cbProductCategory->currentText();
    productEdit->productZone = ui->cbProductZone->currentText();
    productEdit->product_barcode = ui->leProductUniqueId->text();
    productEdit->product_shortcode = ui->leProductShortCode->text();
    productEdit->product_quantity = ui->leProductQuantity->text();
    productEdit->product_wsprice = ui->leWholeSalePrice->text().toDouble();
    productEdit->product_rtprice = ui->leRetailPrice->text().toDouble();
    productEdit->modifiedBy = currentUser->user_id.toInt();
    productEdit->modifiedAt = QDateTime::currentDateTime();
}

void ProductEditor::checkIfAllFieldsCaptured() {
    if(productEdit->product_name.isEmpty()||productEdit->product_image.isEmpty() ||productEdit->product_category.isEmpty() ||
            productEdit->product_barcode.isEmpty() ||productEdit->product_shortcode.isEmpty() ||productEdit->product_quantity.isEmpty() ||
            productEdit->product_wsprice== NULL||productEdit->product_rtprice ==NULL ||productEdit->modifiedAt.isNull()||
            productEdit->modifiedBy==
                                                                                                                    NULL){
        allValuesTyped = false;
        return;
    }else{
        allValuesTyped = true;
        if(ui->cbProductCategory->currentIndex()==0){
            selectionFilled = false;
            return;
        }else{
            selectionFilled = true;
        }
    }
}


void ProductEditor::checkForDuplicateProducts() {
    if(editProductConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(product_id) FROM products WHERE product_barcode = :uniqueId"));
        query.bindValue(":uniqueId", productEdit->product_barcode);
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

void ProductEditor::loadProductZoneToComboBox() {
    if(editProductConnection->conn_open()){
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
