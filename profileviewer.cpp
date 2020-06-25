#include "profileviewer.h"
#include "ui_profileviewer.h"

ProfileViewer::ProfileViewer(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::ProfileViewer)
{
    ui->setupUi(this);
    profileViewerConnection = new databaseConnection;
    profileViewerConnection->conn_open();
    profileUser = new loggedUser;
    *profileUser = currentLoggedInUser;
    profile_user_role = profileUser->user_role;
    profile_userName = profileUser->username;
    profileUserData = new posUser;
    if(profileViewerConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        if(profile_user_role=="admin" ||profile_user_role=="sysadmin"){
            query.prepare(QString("SELECT * FROM admin WHERE username = :userName"));
            query.bindValue(":userName", profile_userName);

        }else{
            query.prepare(QString("SELECT * FROM users WHERE username = :username"));
            query.bindValue(":userName", profile_userName);
        }
        if(!query.exec()){
            QMessageBox::warning(this, "[Error!]", "Query did not execute!");
        }else{
            while (query.next()){
                userID=profileUserData->user_id = query.value(0).toInt();
                firstName= profileUserData->name = query.value(1).toString();
                phone= profileUserData->phone = query.value(2).toString();
                email= profileUserData->email= query.value(3).toString();
                userName= profileUserData->username=query.value(4).toString();
                password= profileUserData->password = query.value(5).toString();
                userRole= profileUserData->user_role = query.value(6).toString();
                avatar= profileUserData->avatar = query.value(7).toString();

                ui->mp_firstName->setText(firstName);
                ui->mp_otherNames->setText(otherNames);
                ui->mpEmail->setText(email);
                ui->mp_userRole->setText(userRole);

                QPixmap viewPixmap(avatar);
                ui->mp_avatar->setPixmap(viewPixmap.scaled(ui->mp_avatar->size(), Qt::KeepAspectRatio));
                ui->mp_Phone->setText(phone);
                ui->mp_userName->setText(userName);
                ui->mp_password->setText("*#######*");
            }
        }

    }
}

ProfileViewer::~ProfileViewer()
{
    delete ui;
}

void ProfileViewer::on_pb_changeAvatar_clicked()
{
    newAvatar = QFileDialog::getOpenFileName(this,
                                                     tr("Open Avatar"), "/home/Pictures",
                                                     tr("Image Files (*.jpg *.jpeg *.png)"));

    QFileInfo name = newAvatar;
    QPixmap newAvatarPixmap(newAvatar);
    ui->mp_avatar->setPixmap(newAvatarPixmap.scaled(ui->mp_avatar->size(), Qt::KeepAspectRatio));
    QMessageBox::information(this, "Avatar", "Changes will only take effect upon applying them!");

}

void ProfileViewer::on_pb_change_phone_clicked()
{
    changePhoneDialog = new ChangePhone(this, *profileUser);
    changePhoneDialog->setModal(true);
    changePhoneDialog->show();
}

void ProfileViewer::on_pb_change_userName_clicked()
{
    changeUsernameDialog = new ChangeUsername(this, *profileUser);
    changeUsernameDialog->setModal(true);
    changeUsernameDialog->show();

}

void ProfileViewer::on_pb_changePassword_clicked()
{
    changePasswordDialog = new ChangePassword(this, *profileUser);
    changePasswordDialog->setModal(true);
    changePasswordDialog->show();
}

void ProfileViewer::changeAvatar() {
    if(profileViewerConnection->conn_open()){
        currentUserId = profileUser->user_id.toInt();
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        if (profile_user_role == "admin" || profile_user_role == "sysadmin") {
            query.prepare(QString("UPDATE admin SET avatar = :newAvatar WHERE admin.admin_id=:adminId"));
            query.bindValue(":newAvatar", newAvatar);
            query.bindValue(":adminId", currentUserId);

        } else {
            query.prepare(QString("UPDATE users SET avatar = :newAvatar WHERE users.user_id=:userId"));
            query.bindValue(":newAvatar", newAvatar);
            query.bindValue(":userId", currentUserId);
        }
        if (!query.exec()) {
            QMessageBox::warning(this, "[Error!]", "Query did not execute!");
        } else {
            while (query.next()) {
                avatar_changed = true;
            }
            QMessageBox::information(this, "Avatar Success", "You have successfully changed your avatar");
            QMessageBox::information(this, "Information", "Your changes will take effect after applying changes!");
        }
    }else{
        QMessageBox::warning(this, "[Error!]", "Database Error!");
    }

}


void ProfileViewer::changeUsername() {
//    if(profileViewerConnection->conn_open()){
//        currentUserId = profileUser->user_id.toInt();
//        QSqlQuery query(QSqlDatabase::database("MyConnect"));
//        if (profile_user_role == "admin" || profile_user_role == "sysadmin") {
//            query.prepare(QString("UPDATE admin SET username = :newUsername WHERE admin.admin_id=:adminId"));
//            query.bindValue(":newUsername", newUsername);
//            query.bindValue(":adminId", currentUserId);
//
//        } else {
//            query.prepare(QString("UPDATE users SET username = :newUsername WHERE users.user_id=:userId"));
//            query.bindValue(":newAvatar", newUsername);
//            query.bindValue(":userId", currentUserId);
//        }
//        if (!query.exec()) {
//            QMessageBox::warning(this, "[Error!]", "Query did not execute!");
//        } else {
//            while (query.next()) {
//                username_changed = true;
//            }
//            QMessageBox::information(this, "Username Success", "You have successfully changed your username");
//            QMessageBox::information(this, "Information", "Your changes will take effect after applying changes!");
//        }
//    }else{
//        QMessageBox::warning(this, "[Error!]", "Database Error!");
//    }
}

void ProfileViewer::changePassword() {
    if(profileViewerConnection->conn_open()){
        currentUserId = profileUser->user_id.toInt();
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        if (profile_user_role == "admin" || profile_user_role == "sysadmin") {
            query.prepare(QString("UPDATE admin SET avatar = :newAvatar WHERE admin.admin_id=:adminId"));
            query.bindValue(":newAvatar", newAvatar);
            query.bindValue(":adminId", currentUserId);

        } else {
            query.prepare(QString("UPDATE users SET avatar = :newAvatar WHERE users.user_id=:userId"));
            query.bindValue(":newAvatar", newAvatar);
            query.bindValue(":userId", currentUserId);
        }
        if (!query.exec()) {
            QMessageBox::warning(this, "[Error!]", "Query did not execute!");
        } else {
            while (query.next()) {
                avatar_changed = true;
            }
            QMessageBox::information(this, "Avatar Success", "You have successfully changed your avatar");
            QMessageBox::information(this, "Information", "Your changes will take effect after applying changes!");
        }
    }else{
        QMessageBox::warning(this, "[Error!]", "Database Error!");
    }
}

void ProfileViewer::changePhone() {
    if(profileViewerConnection->conn_open()){
        currentUserId = profileUser->user_id.toInt();
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        if (profile_user_role == "admin" || profile_user_role == "sysadmin") {
            query.prepare(QString("UPDATE admin SET avatar = :newAvatar WHERE admin.admin_id=:adminId"));
            query.bindValue(":newAvatar", newAvatar);
            query.bindValue(":adminId", currentUserId);

        } else {
            query.prepare(QString("UPDATE users SET avatar = :newAvatar WHERE users.user_id=:userId"));
            query.bindValue(":newAvatar", newAvatar);
            query.bindValue(":userId", currentUserId);
        }
        if (!query.exec()) {
            QMessageBox::warning(this, "[Error!]", "Query did not execute!");
        } else {
            while (query.next()) {
                avatar_changed = true;
            }
            QMessageBox::information(this, "Avatar Success", "You have successfully changed your avatar");
        }
    }else{
        QMessageBox::warning(this, "[Error!]", "Database Error!");
    }
}
void ProfileViewer::on_btn_ApplyChanges_clicked()
{
//    if(!avatar_changed && !username_changed && !phone_changed && !password_changed){
//        QMessageBox::information(this, "No changes", "You did not commit any changes. The window will close!");
//        this->close();
//
//    }else{
        if(avatar_changed){
            changeAvatar();
            sendAvatarChanged(&newAvatar);
            avatar_changed = false;
        }
        if(username_changed){
            sendUsernameChanged(&newUsername);
            username_changed= false;
        }
        if(phone_changed){
            sendPhoneChanged(&newPhone);
            phone_changed = false;
        }
        if(password_changed){
            sendPassWordChanged(&newPassword);
            password_changed = false;
        }
        QMessageBox::information(this, "Information", "All your changes are now in effect!");

        this->close();
//    }


}

void ProfileViewer::on_btn_closeWindow_clicked()
{

}