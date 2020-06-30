#include "acquirestock.h"
#include "ui_acquirestock.h"

AcquireStock::AcquireStock(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AcquireStock)
{
    ui->setupUi(this);
    stockAcquisitionConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    supplierName = new QString;
    phoneNumber = new QString;
    product = new QString;
    loadSuppliers();
    loadProducts();
}

AcquireStock::~AcquireStock()
{
    delete ui;
}

void AcquireStock::on_btnCalender_clicked()
{
    calendar = new QCalendarWidget(this);
    calendar->setGridVisible(true);
    calendar->show();
    calendar->setMinimumDate(QDate::currentDate());

    QObject::connect(calendar, SIGNAL(clicked(const QDate & date)), this,  SLOT(grabCurrentDate()));
}

void AcquireStock::on_btnApply_clicked()
{

}

void AcquireStock::on_btnCancel_clicked()
{

}

void AcquireStock::loadSuppliers() {
    stockAcquisitionConnection->conn_open();
    QStringList supplierList;
    if (stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT phone FROM suppliers"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                *phoneNumber = query.value(0).toString();
                supplierList<<*phoneNumber;
            }
            SupplierCompleter = new QCompleter(supplierList,this);
            SupplierCompleter->setCaseSensitivity(Qt::CaseInsensitive);
            SupplierCompleter->setFilterMode(Qt::MatchContains);
            ui->leSupplier->setCompleter(SupplierCompleter);
        }

    } else{
        qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
    }

    connect(SupplierCompleter, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
        LOGx("supplier");
            });
}

void AcquireStock::loadProducts() {
    QStringList productList;
    if (stockAcquisitionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT product_name FROM products"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                *product = query.value(0).toString();

                productList<<*product;
            }
            ProductCompleter = new QCompleter(productList,this);
            ProductCompleter->setCaseSensitivity(Qt::CaseInsensitive);
            ProductCompleter->setFilterMode(Qt::MatchContains);
            ui->leProduct->setCompleter(ProductCompleter);
        }

    } else{
        qDebug() << "Failed to connect to database: " + stockAcquisitionConnection->db.lastError().text();
    }

    connect(SupplierCompleter, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
                LOGx("product");
            });
}

void AcquireStock::grabCurrentDate() {
    calendar->hide();
    LOGx("SAITAN");
}
