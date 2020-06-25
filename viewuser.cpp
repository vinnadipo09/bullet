#include "viewuser.h"
#include "ui_viewuser.h"

ViewUser::ViewUser(QWidget *parent, loggedUser &currentLoggedInUser, posUser &viewedUser) :
    QDialog(parent),
    ui(new Ui::ViewUser)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    currentViewUser = new posUser;
    *currentUser = currentLoggedInUser;
    *currentViewUser=viewedUser;
    ui->view_name->setText(viewedUser.name);
    ui->view_email->setText(viewedUser.email);
    ui->view_phone->setText(viewedUser.phone);
    ui->view_username->setText(viewedUser.username);
    ui->view_user_role->setText(viewedUser.user_role);
    QTime entryTime= viewedUser.timestamp.time();
    QDate entryDate=viewedUser.timestamp.date();
    ui->view_date->setText(entryDate.toString());
    ui->view_time->setText(entryTime.toString());
    ui->view_admin->setText(viewedUser.authorizingAdmin);

    viewAndManageUsers = new databaseConnection;
    QPixmap viewPixmap(viewedUser.avatar);
    ui->lbl_avatar->setPixmap(viewPixmap.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));
}

ViewUser::~ViewUser()
{
    delete ui;
}


void ViewUser::on_btn_close_view_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Close User View", "Are you sure you want to exit?",
                                  QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes){
        clearView();
        this->close();
    }else{
//        QMessageBox::Cancel;
        return;
    }
}

void ViewUser::on_btn_delete_user_clicked()
{


}

void ViewUser::clearView()
{
    ui->view_name->clear();
    ui->view_email->clear();
    ui->view_phone->clear();
    ui->view_username->clear();
    ui->view_user_role->clear();
    ui->view_date->clear();
    ui->view_time->clear();
    ui->lbl_avatar->clear();
}

void ViewUser::on_btnResetPassword_clicked()
{

}

void ViewUser::on_btnEditUser_clicked()
{
    editUser = new EditUser(this, *currentUser, *currentViewUser);
    this->close();
    editUser->setModal(true);
    editUser->show();
}

void ViewUser::on_btnDeleteUser_clicked()
{
    deleteUser();
    if(userDeletionSuccessful){
        QMessageBox::information(this, "Successfully Deleted!", "Record Successfully Deleted!");
        delete currentViewUser;
        emit sendDelitionComplete();
    } else{
        QMessageBox::information(this, "Problem Encountered!", "There was a problem in deleting your record!");
        emit sendDelitionComplete();
        return;
    }
    userDeletionSuccessful = false;
}

void ViewUser::deleteUser() {
    viewAndManageUsers->conn_open();
    if(currentViewUser->user_id==currentUser->user_id){
        QMessageBox::information(this, "Unauthorized Deletion!", "You Cannot Delete Yourself while using the system!");
    }else{
        if(viewAndManageUsers->conn_open()){
            QMessageBox::StandardButton reply;
            reply = QMessageBox::warning(this, "Delete Data", "This Process CANNOT be undone. Are you sure you want to proceed?",
                                         QMessageBox::Yes | QMessageBox::Cancel);
            if (reply == QMessageBox::Yes) {
                QSqlQuery query(QSqlDatabase::database("MyConnect"));
                query.prepare(QString("DELETE FROM users WHERE "
                                      "user_id = :userId"));
                query.bindValue(":userId", currentViewUser->user_id);
                if (!query.exec()) {
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                    return;
                } else {
                        userDeletionSuccessful = true;
                }
            }else{
                return;
            }

        }else{
            LOGx("database error");
        }
    }
}
