#include "editproductzone.h"
#include "ui_editproductzone.h"

EditProductZone::EditProductZone(QWidget *parent, loggedUser &currentLoggedInUser, QString& zone, QString& desc, int &idEdit) :
    QDialog(parent),
    ui(new Ui::EditProductZone)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    editZoneConnection = new databaseConnection;
     ui->leZone->setText(zone);
     ui->leZoneDescription->setText(desc);

     zoneName = new QString;
     zoneDescription = new QString;
     zoneIdToEdit = new int;
     *zoneIdToEdit = idEdit;
     existingZone = new QString;
     *existingZone = zone;
}

EditProductZone::~EditProductZone()
{
    delete ui;
}

void EditProductZone::on_btnApply_clicked()
{
    *zoneName = ui->leZone->text();
    *zoneDescription = ui->leZoneDescription->text();
    checkAllFieldsCaptured();
    if(!allInformationFilled){
        QMessageBox::warning(this, "Empty Cells Error!", "You have unfilled fields!");
        return;
    }else{
        if(*existingZone != ui->leZone->text()){
            checkForDuplicates();
            if (zoneExists){
                QMessageBox::warning(this, "Duplicate Error!", "The Zone already exists!");
                return;
            }else{
                updateZone();
                if(updateSuccessful){
                    QMessageBox::information(this, "Changes Successful!", "You record has been successfully updated!");
                    emit editJobComplete();
                }else{
                    QMessageBox::information(this, "Update Error!", "Errors Encountered while Updating Record!");
                    return;
                }
            }
        }else{
            updateZone();
            if(updateSuccessful){
                QMessageBox::information(this, "Changes Successful!", "You record has been successfully updated!");
                emit editJobComplete();
            }else{
                QMessageBox::information(this, "Update Error!", "Errors Encountered while Updating Record!");
                return;
            }
        }



    }
}

void EditProductZone::on_btnCancel_clicked()
{
    if(!ui->leZone->text().isEmpty() || !ui->leZoneDescription->text().isEmpty()){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this
                , "Unsaved Changes"
                , "You have unsaved changes. Closing the Program will discard all your work. Continue?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            emit editJobComplete();
        }else{
            return;
        }
    }else{
        emit editJobComplete();
    }
}

void EditProductZone::updateZone() {
    int currentUserId = currentUser->user_id.toInt();
    if(editZoneConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("UPDATE product_zone SET zone_name = :newZone, zone_description = :newDescription, user_id = :currentUserId"
                              " WHERE zone_id = :zoneId"));
        query.bindValue(":newZone", *zoneName);
        query.bindValue(":newDescription", *zoneDescription);
        query.bindValue(":currentUserId", currentUserId);
        query.bindValue(":zoneId", *zoneIdToEdit);
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

void EditProductZone::checkForDuplicates() {
    if(editZoneConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(zone_id) FROM product_zone WHERE zone_name = :newZone"));
        query.bindValue(":newZone", *zoneName);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                int numZones = query.value(0).toInt();
                if(numZones>0){
                    zoneExists=true;
                } else{
                    zoneExists= false;

                }
            }
        }
    }
}

void EditProductZone::checkAllFieldsCaptured() {
    if(zoneName->isEmpty()||zoneDescription->isEmpty()){
        allInformationFilled = false;
    }else{
        allInformationFilled = true;
    }
}
