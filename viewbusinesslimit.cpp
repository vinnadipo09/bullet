#include "viewbusinesslimit.h"
#include "ui_viewbusinesslimit.h"

ViewBusinessLimit::ViewBusinessLimit(QWidget *parent, loggedUser &currentLoggedInUser,
        int &limitId, QString & limitName, int & limitAmount, QString & limitScale) :
    QDialog(parent),
    ui(new Ui::ViewBusinessLimit)
{
    ui->setupUi(this);
    currentLimitName = new QString;
    currentLimitScale = new QString;
    currentLimitId = new int;
    currentLimitAmount = new int;
    currentUser = new loggedUser;

    *currentUser = currentLoggedInUser;
    *currentLimitName = limitName;
    *currentLimitScale = limitScale;
    *currentLimitId = limitId;
    *currentLimitAmount = limitAmount;
    limitViewConnection = new databaseConnection;
    viewMode = true;

    ui->leLimitName->setText(*currentLimitName);
    ui->leLimitAmount->setText(QString::number(limitAmount));
    ui->cbLimitScale->setCurrentText(*currentLimitScale);

    makeReadOnly();


}

ViewBusinessLimit::~ViewBusinessLimit()
{
    delete ui;
}

void ViewBusinessLimit::on_btnCloseWindow_clicked()
{
    if (viewMode){
        this->close();
    }else{
        updateLimits();
        emit sendEditJobComplete();
    }

}

void ViewBusinessLimit::on_btnEditLimit_clicked()
{
    if (viewMode){
        viewMode = false;
        makeEditable();
        ui->leLimitName->setFocus();
        editMode = true;
        ui->btnEditLimit->setText("Cancel");
        QIcon cancelIcon(":/resources/new_icons_2/icons8-cancel-96.png");
        ui->btnEditLimit->setIcon(cancelIcon);
        ui->btnCloseWindow->setText("Apply");
        QIcon applyIcon(":/resources/new_icons_2/icons8-ok-96.png");
        ui->btnCloseWindow->setIcon(applyIcon);
    }else{
        QMessageBox::StandardButton closeEditWithoutSaving;

        closeEditWithoutSaving = QMessageBox::information(this
                , "Unsaved Changes"
                , "Closing the Window will discard your changes. Continue anyway?"
                , QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        if(closeEditWithoutSaving==QMessageBox::Yes){
            emit sendEditJobComplete();
        }else{
           this->show();
        }

    }
}

void ViewBusinessLimit::makeReadOnly() {
    ui->leLimitName->setReadOnly(true);
    ui->leLimitAmount->setReadOnly(true);
    ui->cbLimitScale->setDisabled(true);

}

void ViewBusinessLimit::makeEditable() {
    ui->leLimitName->setReadOnly(false);
    ui->leLimitAmount->setReadOnly(false);
    ui->cbLimitScale->setDisabled(false);

}

void ViewBusinessLimit::updateLimits() {
    QString newName = ui->leLimitName->text();
    QString newScale  = ui->cbLimitScale->currentText();
    int newAmount = ui->leLimitAmount->text().toInt();
    int userId = currentUser->user_id.toInt();
    QDateTime modificationTime = QDateTime::currentDateTime();
    limitViewConnection->conn_open();
    if(limitViewConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("UPDATE business_limits SET limit_name = :newLimitName, "
                              "limit_scale =:newLimitScale, limit_amount = :newLimitAmount, user_id = :modifyingUser, "
                              "date_time = :currentModifyingTime WHERE limit_id = :modifiedId"));
        query.bindValue(":newLimitName", newName);
        query.bindValue(":newLimitScale", newScale);
        query.bindValue(":modifyingUser", userId);
        query.bindValue(":currentModifyingTime", modificationTime);
        query.bindValue(":newLimitAmount", newAmount);
        query.bindValue(":modifiedId", *currentLimitId);
        if(!query.exec()){
            LOGx("DB not responding checking duplicates!");
            Debug(query.lastError());
        }else{
            QMessageBox::information(this, "Update Success!", " Limit Record Successfully Updated!");
        }
    }

}

