#include "productdiscounteditor.h"
#include "ui_productdiscounteditor.h"

ProductDiscountEditor::ProductDiscountEditor(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView) :
    QDialog(parent),
    ui(new Ui::ProductDiscountEditor)
{
    ui->setupUi(this);
    productDiscountEdit = new productFromDb;
    *productDiscountEdit = currentProductToView;
    currentUser = new loggedUser;
    discountConnection = new databaseConnection;
    *currentUser = currentLoggedInUser;
    QString productName = productDiscountEdit->product_name;
    ui->lblProductData->setText("You are about to change the DISCOUNT for :"+productName);
    ui->lblPriviousDiscount->setText("K.Shs "+ QString::number(productDiscountEdit->product_discount));
}

ProductDiscountEditor::~ProductDiscountEditor()
{
    delete ui;
}

void ProductDiscountEditor::on_btnApply_clicked()
{
    if(ui->leNewDiscount->text().isEmpty()){
        QMessageBox::warning(this, "Empty Cell Error!", "You have not entered any amount");
        return;
    }else{
        updateDiscountValue();
        if(updateComplete){
            QMessageBox::information(this, "Discount Update Success!", "You have successfully updated the discount");
            emit discountWorkComplete();
        }else{
            QMessageBox::warning(this, "Data Update Error!", "The system encountered errors updating your record");
            return;
        }
    }
}

void ProductDiscountEditor::on_btnCancel_clicked()
{
    if(!ui->leNewDiscount->text().isEmpty()){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this
                , "Unsaved Changes"
                , "You have unsaved changes. Closing the Program will discare all your work. Continue?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            emit discountWorkComplete();
            this->accept();
        }else{
            return;
        }
    }else{
        emit discountWorkComplete();
        this->reject();
    }
}
void ProductDiscountEditor::updateDiscountValue() {
    discountConnection->conn_open();
    QDateTime modificationTime;
    modificationTime = QDateTime::currentDateTime();
    if (discountConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(
                QString("UPDATE productDiscounts SET amount=:newAmount, modified_user_id = :currentUser, modified_date=:currentDate WHERE product_id = :currentId"));

        query.bindValue(":newAmount", ui->leNewDiscount->text());
        query.bindValue(":currentUser", currentUser->user_id);
        query.bindValue(":currentDate", modificationTime);
        query.bindValue(":currentId", productDiscountEdit->product_id);
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        } else {
                updateComplete = true;
        }
    }
}