#include "addcustomer.h"
#include "ui_addcustomer.h"

AddCustomer::AddCustomer(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddCustomer)
{
    ui->setupUi(this);
    addNewCustomerConnection = new databaseConnection;
    newCustomer = new Customer;
    ui->leCreditAllowed->setText("0.00");
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
    checkForDuplicatePhones(newCustomer->phone);
    if(phoneExists){
        QMessageBox::warning(this, "Duplicate Phone Number!", "The phone number is already registered!");
        return;
    }else{
        checkForEmptyFields();
        if(fieldEmpty){
            QMessageBox::warning(this, "Empty Fields!", "You have empty fields!");
            fieldEmpty = false;
            return;
        }else if(noCustomerTypeDefinition){
            QMessageBox::warning(this, "Customer Type Error!", "Please define customer type!");
            noCustomerTypeDefinition = false;
            return;
        }else{
            addCustomerToDb();
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
    LOGx("************************************************************************");
}
