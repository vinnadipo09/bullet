#include "customerviewchoice.h"
#include "ui_customerviewchoice.h"

CustomerViewChoice::CustomerViewChoice(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::CustomerViewChoice)
{
    ui->setupUi(this);
    customerViewerChoice = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    customerName = new QString;
    customerToView = new Customer;
    customerPhoneToView = new QString;

//    loadCustomersToCompleter();

}

CustomerViewChoice::~CustomerViewChoice()
{
    delete ui;
}

void CustomerViewChoice::on_btnViewAllCustomers_clicked()
{
    viewAllCustomers = new CustomerViewAll(this, *currentUser);
    viewAllCustomers->setModal(true);
    viewAllCustomers->show();
    QObject::connect(viewCustomer, SIGNAL(closeCustomerViewRequested()), this, SLOT(receiveCustomerViewClosed()));
    //COME BACK AND IMPLEMENT THE SIGNALS AND SLOTS SECTION

}

void CustomerViewChoice::on_btnCloseWindow_clicked()
{

}

void CustomerViewChoice::on_btnOkay_clicked()
{

}

void CustomerViewChoice::loadCustomersToCompleter() {
    QStringList customerCompList;
    customerViewerChoice->conn_open();
    if (customerViewerChoice->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT customer_phone FROM customers"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while(query.next()){
                *customerName = query.value(0).toString();
                customerCompList<<*customerName;
            }
            customersCompleter = new QCompleter(customerCompList,this);
            customersCompleter->setCaseSensitivity(Qt::CaseInsensitive);
            customersCompleter->setFilterMode(Qt::MatchContains);
            ui->leCustomerIdentifier->setCompleter(customersCompleter);
        }

    } else{
        qDebug() << "Failed to connect to database: " + customerViewerChoice->db.lastError().text();
    }
//    connect(customersCompleter, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
//            [=](const QString &text){
//                *customerPhoneToView = text;
//                openSingleCustomerViewer();
//                //open customer view window
//            });

}

void CustomerViewChoice::loadOneCustomer(QString &currentPhone) {
    if (customerViewerChoice->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT * FROM customers WHERE customer_phone = :currentCustomerPhone"));
        query.bindValue(":currentCustomerPhone", currentPhone);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while(query.next()){
                customerToView->customer_id = query.value(0).toInt();
                customerToView->name = query.value(1).toString();
                customerToView->customerType = query.value(2).toString();
                customerToView->phone = query.value(3).toString();
                //WORK TO DO
            }
        }

    }
}

void CustomerViewChoice::openSingleCustomerViewer() {
    loadOneCustomer(*customerPhoneToView);
    viewCustomer = new CustomerViewOne(this, *currentUser, *customerToView);
    viewCustomer->setModal(true);
    viewCustomer->show();
    this->close();
    QObject::connect(viewCustomer, SIGNAL(closeCustomerViewRequested()), this, SLOT(receiveCustomerViewClosed()));
    QObject::connect(viewCustomer, SIGNAL(sendCloseCustomerView()), this, SLOT(receiveCloseCustomerViewer()));
}

void CustomerViewChoice::receiveCustomerViewClosed() {
    ui->leCustomerIdentifier->clear();
    this->setModal(true);
    this->show();
}

void CustomerViewChoice::receiveCloseCustomerViewer() {
    LOGx("signal two sent");

    ui->leCustomerIdentifier->clear();
    ui->leCustomerIdentifier->clear();
    this->show();
    emit sendCloseViewCustomerWindow();
}
