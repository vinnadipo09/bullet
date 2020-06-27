#include "addproductcategory.h"
#include "ui_addproductcategory.h"

AddProductCategory::AddProductCategory(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddProductCategory)
{
    ui->setupUi(this);
    this->setWindowTitle("Add New Product Category");
    categoryDescription = new QString;
    productCategory = new QString;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    addCategoryConnection = new databaseConnection;
}

AddProductCategory::~AddProductCategory()
{
    delete ui;
}

void AddProductCategory::on_btnApply_clicked()
{
    *productCategory = ui->leCategoryName->text();
    *categoryDescription = ui->leCategoryDescription->text();
    addCategoryConnection->conn_open();
    checkIfAllFieldsCaptured();
    if(!allDataFilled){
        QMessageBox::warning(this, "Missing Data!", "Some informaiton is missing!");
    }else{
        checkForDuplicates();
        if(categoryAlreadyExists){
            QMessageBox::warning(this, "Duplicate Categories!", "Category already exists. Choose another category or use the existing ones!");
            categoryAlreadyExists = false;
            return;
        } else{
            addCategory();
            if(categoryAdditionSuccessful){
                QMessageBox::information(this, "Category Addition Successful!", "Category "+ *productCategory+" has been successfully added");
                this->accept();
                emit categoryAddedSuccess();
            }else{
                QMessageBox::warning(this, "Entry Error!", "The process encountered error!");
                return;
            }

            categoryAdditionSuccessful = false;
        }
    }
}

void AddProductCategory::on_btnCancel_clicked()
{
    if(!ui->leCategoryName->text().isEmpty() || !ui->leCategoryDescription->text().isEmpty()){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this
                , "Unsaved Changes"
                , "You have unsaved changes. Closing the Program will discare all your work. Continue?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            this->accept();
            emit categoryAddedSuccess();
        }else{
            return;
        }
    }else{
        this->reject();
        emit categoryAddedSuccess();
    }
}

void AddProductCategory::checkForDuplicates() {
    if(addCategoryConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(category_id) FROM product_category WHERE category = :newCategory"));
        query.bindValue(":newCategory", *productCategory);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                int number_of_users = query.value(0).toInt();
                LOGxy("Number of count", number_of_users);
                if(number_of_users>0){
                    LOGx(number_of_users);
                    categoryAlreadyExists=true;
                } else{
                    categoryAlreadyExists= false;

                }
            }
        }
    }
}

void AddProductCategory::addCategory() {
    if(addCategoryConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO product_category(category, description, user_id)"
                              "VALUES(:productCategory, :categoryDescription, :userId)"));
        query.bindValue(":productCategory", *productCategory);
        query.bindValue(":categoryDescription", *categoryDescription);
        query.bindValue(":userId", currentUser->user_id);
            if(!query.exec()){
                LOGx("DB not responding!");
                QMessageBox::critical(this, "Database Error", query.lastError().text());
            }else{
                categoryAdditionSuccessful=true;
            }

    }
}

void AddProductCategory::checkIfAllFieldsCaptured() {
    if(productCategory->isEmpty()||categoryDescription->isEmpty()||currentUser->user_id.isEmpty()){
        allDataFilled = false;
    }else{
        allDataFilled = true;
    }
}

void AddProductCategory::cleanUp() {
    delete addCategoryConnection;
    delete currentUser;
    delete categoryDescription;

}
