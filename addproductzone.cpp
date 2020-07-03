#include "addproductzone.h"
#include "ui_addproductzone.h"

AddProductZone::AddProductZone(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddProductZone)
{
    ui->setupUi(this);
    productZone = new QString;
    productZoneDescription = new QString;

    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    addZoneConnection = new databaseConnection;
}

AddProductZone::~AddProductZone()
{
    delete ui;
}

void AddProductZone::on_btnApply_clicked()
{
    *productZone = ui->leZone->text();
    *productZoneDescription = ui->leZoneDescription->text();
    addZoneConnection->conn_open();
    checkIfAllFieldsCaptured();
    if(!allDataFilled){
        QMessageBox::warning(this, "Missing Data!", "Some information is missing!");
        return;
    }else{
        checkForDuplicates();
        if(zoneAlreadyExists){
            QMessageBox::warning(this, "Duplicate Zones!", "Zone already exists. Choose another zone or use the existing ones!");
            zoneAlreadyExists = false;
            return;
        }else{
            addZone();
            if(zoneAdditionSuccessful){
                QMessageBox::information(this, "Zone Addition Successful!", "Product Zone "+ *productZone+" has been successfully added");

                emit zoneAdditionComplete();
            }else{
                QMessageBox::warning(this, "Entry Error!", "The process encountered error!");
                return;
            }
            zoneAdditionSuccessful = false;
        }
    }
}

void AddProductZone::on_btnCancel_clicked()
{
    if(!ui->leZone->text().isEmpty() || !ui->leZoneDescription->text().isEmpty()){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this
                , "Unsaved Changes"
                , "You have unsaved changes. Closing the Program will discard all your work. Continue?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            emit zoneAdditionComplete();
            this->accept();
        }else{
            return;
        }
    }else{
        emit zoneAdditionComplete();

    }
}

void AddProductZone::checkForDuplicates() {
    if(addZoneConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(zone_id) FROM product_zone WHERE category = :newCategory"));
        query.bindValue(":newCategory", *productZone);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                int number_of_users = query.value(0).toInt();
                LOGxy("Number of count", number_of_users);
                if(number_of_users>0){
                    LOGx(number_of_users);
                    zoneAlreadyExists=true;
                } else{
                    zoneAlreadyExists= false;

                }
            }
        }
    }
}

void AddProductZone::addZone() {
    if(addZoneConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO product_zone(zone_name, zone_description, user_id)"
                              "VALUES(:zone, :description, :userId)"));
        query.bindValue(":zone", *productZone);
        query.bindValue(":description", *productZoneDescription);
        query.bindValue(":userId", currentUser->user_id);
        if(!query.exec()){
            LOGx("DB not responding!");
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            zoneAdditionSuccessful=true;
        }

    }
}

void AddProductZone::checkIfAllFieldsCaptured() {
    if(productZone->isEmpty()||productZoneDescription->isEmpty()){
        allDataFilled = false;
    }else{
        allDataFilled = true;
    }
}
