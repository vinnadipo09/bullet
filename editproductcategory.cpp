#include "editproductcategory.h"
#include "ui_editproductcategory.h"

EditProductCategory::EditProductCategory(QWidget *parent, loggedUser &currentLoggedInUser, QString& categ, QString& desc, int &idEdit) :
    QDialog(parent),
    ui(new Ui::EditProductCategory)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    *currentUser= currentLoggedInUser;
    editProductCategoryConnection = new databaseConnection;

    ui->leCategory->setText(categ);
    ui->leDescription->setText(desc);
    newCategory =new QString;
    newDescription=new QString;
    idToEdit = new int;
    *idToEdit = idEdit;
    LOGx(*idToEdit);
}

EditProductCategory::~EditProductCategory()
{
    delete ui;
}

void EditProductCategory::on_btnApply_clicked()
{
    *newCategory = ui->leCategory->text();
    *newDescription = ui->leDescription->text();
    checkAllFieldsCaptured();
    if(!allFieldsCaptured){
        QMessageBox::warning(this, "Empty Cells Error!", "You have unfilled fields!");
        return;
    }else{
        updateProductCategory();
        if(updateSuccessful){
            QMessageBox::information(this, "Changes Successful!", "You record has been successfully updated!");
            emit editJobCompleted();

        }
    }

}

void EditProductCategory::on_btnCancel_clicked()
{
    if(!ui->leCategory->text().isEmpty() || !ui->leDescription->text().isEmpty()){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this
                , "Unsaved Changes"
                , "You have unsaved changes. Closing the Program will discare all your work. Continue?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            emit editJobCompleted();
            this->accept();
        }else{
            return;
        }
    }else{
        emit editJobCompleted();
        this->reject();

    }
}

void EditProductCategory::updateProductCategory() {
    editProductCategoryConnection->conn_open();
    int currentUserId = currentUser->user_id.toInt();
    if(editProductCategoryConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("UPDATE product_category SET category = :newCategory, description = :newDescription, user_id = :currentUserId"
                                  " WHERE category_id = :categoryID"));
            query.bindValue(":newCategory", *newCategory);
            query.bindValue(":newDescription", *newDescription);
            query.bindValue(":currentUserId", currentUserId);
            query.bindValue(":categoryID", *idToEdit);
            LOGx(currentUser->user_id.toInt());
            if(!query.exec()){
                LOGx("DB not responding!");
                QMessageBox::critical(this, "Database Error", query.lastError().text());
            }else if(query.exec()){
                LOGx("qwwwwwwwwwwwwwwwwwwwwwwwwwwww");
                    updateSuccessful=true;
            }
    }

}

void EditProductCategory::checkAllFieldsCaptured() {
    if(newCategory->isEmpty()|| newDescription->isEmpty()){
        allFieldsCaptured = false;
    }else {
        allFieldsCaptured = true;
    }
}
