#include "addsupplier.h"
#include "ui_addsupplier.h"

AddSupplier::AddSupplier(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddSupplier)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    addSupplierConnection = new databaseConnection;
    *currentUser = currentLoggedInUser;
    newSupplier = new supplierUser;
}

AddSupplier::~AddSupplier()
{
    delete ui;
}

void AddSupplier::on_btnApply_clicked()
{
    grabSupplierDetails();
    checkIfAllFieldsAreFilled();
    if(!allFieldsFilled){
        QMessageBox::warning(this, "Empty Cells Error!", "Please fill the empty cells");
        return;
    }else{
        checkForDuplicates();
        if(supplierExists){
            QMessageBox::warning(this, "Duplicate Error!", "The supplier is already in the database");
            return;
        }else{
            insertSupplierIntoDb();
            if(supplierAddedSuccessfully){
                QMessageBox::warning(this, "Success!", "Supplier added successfully");
                emit supplierAdditionSuccess();
            }
        }
    }
}

void AddSupplier::on_btnCancel_clicked()
{
    if(!newSupplier->name.isEmpty()||!newSupplier->company.isEmpty()||!newSupplier->alias.isEmpty()||
       !newSupplier->productsSupplied.isEmpty()||!newSupplier->email.isEmpty()||!newSupplier->phone.isEmpty()){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this
                , "Unsaved Changes"
                , "You have unsaved changes. Closing the Program will discare all your work. Continue?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            emit supplierAdditionSuccess();
        }else{
            return;
        }
    }else{
        supplierAdditionSuccess();
    }
}

void AddSupplier::grabSupplierDetails() {
    newSupplier->name = ui->leName->text();
    newSupplier->alias = ui->leAlias->text();
    newSupplier->phone = ui->lePhone->text();
    newSupplier->company = ui->leCompany->text();
    newSupplier->email = ui->leEmail->text();
    newSupplier->productsSupplied = ui->leProducts->text();
}

void AddSupplier::checkIfAllFieldsAreFilled() {
    if(newSupplier->name.isEmpty()||newSupplier->company.isEmpty()||newSupplier->alias.isEmpty()||
    newSupplier->productsSupplied.isEmpty()||newSupplier->email.isEmpty()||newSupplier->phone.isEmpty()){
        allFieldsFilled = false;
    }else{
        allFieldsFilled = true;
    }
}

void AddSupplier::checkForDuplicates() {
    if(addSupplierConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(supplier_id) FROM suppliers WHERE phone = :phoneNumber"));
        query.bindValue(":phoneNumber", newSupplier->phone);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                int numberOfProducts = query.value(0).toInt();
                LOGxy("Number of count", numberOfProducts);
                if(numberOfProducts>0){
                    LOGx(numberOfProducts);
                    supplierExists=true;
                    return;
                } else{
                    supplierExists= false;
                }
            }
        }
    }
}

void AddSupplier::insertSupplierIntoDb() {
    QDateTime currentTime = QDateTime::currentDateTime();
    if(addSupplierConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO suppliers(name, alias, company, phone, email, product_supplied, created_on,"
                              " user_create_id, modified_on, user_mod_id)VALUES(:name, :alias, :company, :phone, :email, :products, :dateCreated, :userId, :dateCreated, :userId)"));
        query.bindValue(":name", newSupplier->name);
        query.bindValue(":alias", newSupplier->alias);
        query.bindValue(":company", newSupplier->company);
        query.bindValue(":phone", newSupplier->phone);
        query.bindValue(":email", newSupplier->email);
        query.bindValue(":products", newSupplier->productsSupplied);
        query.bindValue(":dateCreated", currentTime);
        query.bindValue(":userId", currentUser->user_id);

        if(query.exec()){
            supplierAddedSuccessfully=true;
            LOGx("USERS SUCCESSFULLY ADDED");
        }else{
            //            QMessageBox::warning(this, "Database Error", "Query did not execute successsfully!");
            supplierAddedSuccessfully = false;
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }
    }
}

