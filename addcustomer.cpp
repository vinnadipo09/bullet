#include "addcustomer.h"
#include "ui_addcustomer.h"

AddCustomer::AddCustomer(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddCustomer)
{
    ui->setupUi(this);
    addNewCustomerConnection = new databaseConnection;
    newCustomer = new Customer;
    loadCustomerTypesToCb();
    ui->leCreditAllowed->setText("0.00");
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    customerId = new int;
}

AddCustomer::~AddCustomer()
{
    delete ui;
}

void AddCustomer::on_btnDiscard_clicked()
{

}
void AddCustomer::on_btnOkay_clicked()
{
    newCustomer->phone = ui->le_Phone->text();
    newCustomer->name = ui->le_Name->text();
    newCustomer->customerType = ui->cbCustomerType->currentText();
    newCustomer->creditAllowed=0;
    newCustomer->cashOnBusiness =0;
    newCustomer->creditAllowed =0;
    checkForDuplicatePhones(newCustomer->phone);
    if(phoneExists){
        QMessageBox::warning(this, "Duplicate Phone Number!", "The phone number is already registered!");
        return;
    }else{
        checkForEmptyFields();
        if(!fieldEmpty){
            QMessageBox::warning(this, "Empty Fields!", "You have empty fields!");
            return;
        }else if(noCustomerTypeDefinition){
            QMessageBox::warning(this, "Customer Type Error!", "Please define customer type!");
            noCustomerTypeDefinition = false;
            return;
        }else{
            addCustomerToDb();
            if(!customerAdded){
                QMessageBox::warning(this, "Customer Addition Error!", "There was a problem adding your customer!");
                return;
            }else{
                createCustomerCredit();
                if(!creditUpdated){
                    LOGx("encountered a problem...");
                }else{
                    LOGx("everything was successful...");

                    QMessageBox::warning(this, "Customer Addition Success!", "Customer Added Successfully");
                    emit customerAdditionTaskComplete();
                }
            }
        }
    }
}

void AddCustomer::checkForEmptyFields() {
    if(ui->le_Phone->text().isEmpty()||ui->le_Name->text().isEmpty()){
        fieldEmpty = true;

    }else if(ui->cbCustomerType->currentIndex()==0){
        noCustomerTypeDefinition = true;

    }else{
        if(ui->leCreditAllowed->text().isEmpty()){
            newCustomer->creditAllowed = 0.00;
        }else{
            newCustomer->creditAllowed = ui->leCreditAllowed->text().toDouble();
        }
    }
}

void AddCustomer::checkForDuplicatePhones(QString &phoneNumber) {
    addNewCustomerConnection->conn_open();
    if(addNewCustomerConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(customer_phone) FROM customers WHERE customer_phone = :enteredPhone"));
        query.bindValue(":enteredPhone", phoneNumber);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                int number_of_users = query.value(0).toInt();
                LOGxy("Number of count", number_of_users);
                if(number_of_users>0){
                    LOGx(number_of_users);
                    phoneExists = true;
                } else{
                    phoneExists= false;
                }
            }
        }
    }
}

void AddCustomer::addCustomerToDb() {
    QDateTime currentTime = QDateTime::currentDateTime();
    if(addNewCustomerConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO customers (customer_name, customer_type, customer_phone, authorizing_user_id, authorized_on, modifying_user_id, modified_on) "
                              "VALUES (:customerName, :customerType, :customerPhone, :authorizingUser, :authorizedDate, :authorizingUser, :authorizedDate)"));
        query.bindValue(":customerName", newCustomer->name);
        query.bindValue(":customerType", newCustomer->customerType);
        query.bindValue(":customerPhone", newCustomer->phone);
        query.bindValue(":authorizingUser", currentUser->user_id);
        query.bindValue(":authorizedDate", currentTime);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            customerAdded = true;
        }
    }
}
void AddCustomer::loadCustomerTypesToCb() {
    addNewCustomerConnection->conn_open();
    if(addNewCustomerConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT cusType FROM cusType"));
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                QString customerTypeItem = query.value(0).toString();
                ui->cbCustomerType->addItem(customerTypeItem);
            }
        }
    }
}

void AddCustomer::createCustomerCredit() {
    QDateTime currentTime = QDateTime::currentDateTime();
    double creditAllowed = 0;
    if(addNewCustomerConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT customer_id FROM customers ORDER BY customer_id DESC LIMIT 1"));
        if(!query.exec()){
            query.prepare(QString("SELECT cusType FROM cusType"));
        }else{
            while(query.next()){
                *customerId = query.value(0).toInt();
                query.prepare(QString("INSERT INTO customerCredits (credit_allowed, customer_id, user_id, timeStamp) "
                                      "VALUES (:creditAllowed, :customerId, :userId, :timeStamp)"));
                query.bindValue(":creditAllowed", creditAllowed);
                query.bindValue(":customerId", *customerId);
                query.bindValue(":userId", currentUser->user_id);
                query.bindValue(":timeStamp", currentTime);
                if(!query.exec()){
                    LOGx("encountered an error updating credit");
                    query.prepare(QString("SELECT cusType FROM cusType"));
                } else{
                    creditUpdated = true;
                }
            }
        }
    }
}
