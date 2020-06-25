#include "edituser.h"
#include "ui_edituser.h"

EditUser::EditUser(QWidget *parent,loggedUser &currentLoggedInUser, posUser &viewedUser) :
    QDialog(parent),
    ui(new Ui::EditUser)
{
    ui->setupUi(this);
    authorizingUser = new loggedUser;
    *authorizingUser = currentLoggedInUser;
    editedUser = new posUser;
    *editedUser = viewedUser;


    QPixmap mypix(editedUser->avatar);
    ui->avatar_display->setPixmap(mypix.scaled(ui->avatar_display->size(), Qt::KeepAspectRatio));
    ui->lbl_image->setText(editedUser->avatar);
    ui->le_name->setText(editedUser->name);
    ui->le_email->setText(editedUser->email);
    ui->le_phone->setText(editedUser->phone);
    ui->le_username->setText(editedUser->username);
    ui->cb_user_role->setCurrentText(editedUser->user_role);
    ui->cb_user_status->setCurrentText(editedUser->user_status);
}

EditUser::~EditUser()
{
    delete ui;
}

void EditUser::on_btnUpdateRecord_clicked()
{

}

void EditUser::on_btnDiscardChanges_clicked()
{

}

void EditUser::editAndUpdateUser() {

}

void EditUser::grabDataForEntry() {
    updatedUser = new posUser;
    updatedUser->name=ui->le_name->text();
    updatedUser->email=ui->le_email->text();
    updatedUser->phone=ui->le_phone->text();
    updatedUser->username=ui->le_username->text();
    updatedUser->password=editedUser->password;
    updatedUser->user_role=ui->cb_user_role->currentText();
    updatedUser->user_status=ui->cb_user_status->currentText();
    updatedUser->timestamp = QDateTime::currentDateTime();
    updatedUser->admin_id = editedUser->admin_id;
    updatedUser->authorizingUpdateUser =  authorizingUser->user_id.toInt();
    updatedUser->updatedTimeStamp = QDateTime::currentDateTime();


//    checkIfAllFieldsAreFilled();
}
