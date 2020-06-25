#include "verifynewuser.h"
#include "ui_verifynewuser.h"

VerifyNewUser::VerifyNewUser(QWidget *parent, loggedUser &currentLoggedInUser, posUser &addedUser) :
    QDialog(parent),
    ui(new Ui::VerifyNewUser)
{
    ui->setupUi(this);
    ui->ver_name->setText(addedUser.name);
    ui->ver_email->setText(addedUser.email);
    ui->ver_phone->setText(addedUser.phone);
    ui->ver_username->setText(addedUser.username);
    QTime currentTime = addedUser.timestamp.time();
    QDate currentDate= addedUser.timestamp.date();
    ui->ver_date->setText(currentDate.toString());
    ui->ver_time->setText(currentTime.toString());
    ui->ver_admin->setText(currentLoggedInUser.username);
    ui->ver_user_role->setText(addedUser.user_role);
    ui->ver_user_status->setText(addedUser.user_status);

    QPixmap mypix(addedUser.filename);
    ui->lbl_avatar->setPixmap(mypix.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));

    addUserToDb = new databaseConnection;
    verifiedUser = &addedUser;
    currentSystemUser=&currentLoggedInUser;



}

VerifyNewUser::~VerifyNewUser()
{
    delete ui;
}

void VerifyNewUser::on_btn_okay_clicked()
{
    saveNewUserToDb();
    if(userAddedSuccessfully){
        QMessageBox::information(this, "Entry Success", "User added successfully!");
        emit send_userAdditionComplete();
    }else{
        return;
    }


}

void VerifyNewUser::on_btn_edit_clicked()
{
    this->hide();
}

void VerifyNewUser::saveNewUserToDb() {


    if(addUserToDb->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO users(name, phone, email, "
                              "username, password, user_role, avatar, createdBy_user_id, created_on, user_status, "
                              "modifiedBy_authorizing_user_id, modified_on) "
                              "VALUES(:name, :phone, :email, :username, :password, "
                              ":user_role, :avatar, :admin_id, :entry_date,:userStatus, NULL, NULL)"));
        query.bindValue(":name", verifiedUser->name);
        query.bindValue(":phone", verifiedUser->phone);
        query.bindValue(":email", verifiedUser->email);
        query.bindValue(":username", verifiedUser->username);
        query.bindValue(":password", verifiedUser->password);
        query.bindValue(":user_role", verifiedUser->user_role);
        query.bindValue(":avatar", verifiedUser->filename);
        query.bindValue(":admin_id", currentSystemUser->user_id);
        query.bindValue(":user_status", currentSystemUser->user_status);
        query.bindValue(":entry_date", verifiedUser->timestamp);
        query.bindValue(":userStatus",verifiedUser->user_status);

        if(query.exec()){
            userAddedSuccessfully=true;
            LOGx("USERS SUCCESSFULLY ADDED");
        }else{
            //            QMessageBox::warning(this, "Database Error", "Query did not execute successsfully!");
            userAddedSuccessfully = false;
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }
    }
}

