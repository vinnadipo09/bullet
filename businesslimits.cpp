#include "businesslimits.h"
#include "ui_businesslimits.h"

BusinessLimits::BusinessLimits(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::BusinessLimits)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;

    limitName = new QString;
    limitAmount = new int;
    limitScale = new QString;
    businessLimitConnection = new databaseConnection;

    ui->leLimitAmount->clear();
    ui->leLimitName->clear();
    ui->cbLimitScale->setCurrentIndex(0);
}

BusinessLimits::~BusinessLimits()
{
    delete ui;
}

void BusinessLimits::on_btnSave_clicked()
{
    int authorizingId = currentUser->user_id.toInt();
    checkIfAllFieldsFilled();
    if (areAllFieldsCaptured){
        checkForDuplicateEntries();
        if (duplicateExists){
            QMessageBox::StandardButton reply;
            reply = QMessageBox::warning(this
                    , "Duplicate Entries"
                    , "The "+*limitName+" "+*limitScale+" scale already exists. Do you wish to use it?"
                    , QMessageBox::Yes | QMessageBox::Cancel);
            if(reply==QMessageBox::Yes){

            }else{
                this->close();
                this->show();
                this->setModal(true);
            }
            duplicateExists = false;
        }else{
           saveNewLimitToDb(*limitName, *limitScale, authorizingId);
           if (recordSuccessfullyAdded){
               QMessageBox::information(this, "Limit Addition Success!", "Your "+*limitName+!" "+*limitScale+" limit has been successfully added.");
               clearAllData();
               emit sendNewLimitAddedSuccessfully();
           }else{
               QMessageBox::warning(this, "Limit Addition Error!", "Your "+*limitName+!" "+*limitScale+" limit addition encountered an ERROR.");
               clearAllData();
               emit sendLimitTaskCompleteWithoutModifications();
           }
        }
    }
}

void BusinessLimits::on_btnCancel_clicked()
{

}

void BusinessLimits::checkForDuplicateEntries() {
    businessLimitConnection->conn_open();
    *limitName = ui->leLimitName->text();
    *limitAmount = ui->leLimitAmount->text().toInt();
    *limitScale = ui->cbLimitScale->currentText();
    int user_id = currentUser->user_id.toInt();
        if(businessLimitConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("SELECT COUNT(limit_name) FROM business_limits WHERE limit_name = :limitName AND limit_scale = :limitScale"));
            query.bindValue(":limitName", *limitName);
            query.bindValue(":limitScale", *limitScale);
            if(!query.exec()){
                LOGx("DB not responding checking duplicates!");
                Debug(query.lastError());
            }else{
                while(query.next()){
                    int numberOfTransactionTypes = query.value(0).toInt();
                    if(numberOfTransactionTypes>0){
                        duplicateExists = true;
                    }else{
                        duplicateExists = false;
                    }
                }
            }
        }
}

void BusinessLimits::saveNewLimitToDb(QString &name, QString &scale,int &userID) {
    QDateTime manipulationTime = QDateTime::currentDateTime();
    businessLimitConnection->conn_open();
    if(businessLimitConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO business_limits(limit_name, limit_amount, limit_scale, user_id, date_time) "
                              "VALUES(:limitName, :limitAmount, :limitScale, :authUser, :definitionTime)"));
        query.bindValue(":limitName", name);
        query.bindValue(":limitAmount", *limitAmount);
        query.bindValue(":limitScale", *limitScale);
        query.bindValue(":authUser", userID);
        query.bindValue(":definitionTime", manipulationTime);
        if(!query.exec()){
            recordSuccessfullyAdded = false;
        }else{
            recordSuccessfullyAdded = true;
        }
    }
}

void BusinessLimits::clearAllData() {
    ui->leLimitAmount->clear();
    ui->leLimitName->clear();
    ui->cbLimitScale->setCurrentIndex(0);
}

void BusinessLimits::checkIfAllFieldsFilled() {
    if (ui->cbLimitScale->currentIndex()==0){
        QMessageBox::information(this, "Limit Scale Error!", "Please select a limit scale type to continue!");
        return;
    }else{
        if (ui->leLimitName->text().isEmpty()||ui->leLimitAmount->text().isEmpty()){
            QMessageBox::information(this, "Limit Scale Error!", "Please select a limit scale type to continue!");
            return;;
        }else{
            areAllFieldsCaptured = true;
        }
    }
}

void BusinessLimits::on_cbLimitScale_currentIndexChanged(int index)
{

}

