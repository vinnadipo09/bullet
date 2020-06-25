#include "addnewuser.h"
#include "ui_addnewuser.h"

AddNewUser::AddNewUser(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddNewUser)
{
    ui->setupUi(this);
    newUser = new posUser;
    currentUser=currentLoggedInUser;
    addNewUserConnection = new databaseConnection;

    Debug(currentLoggedInUser.user_id);
}

AddNewUser::~AddNewUser()
{
    delete ui;
}
void AddNewUser::on_pb_avatar_clicked(){
    newUser->filename = QFileDialog::getOpenFileName(this,
                                                                tr("Open Avatar"), "/home/Pictures",
                                                                tr("Image Files (*.jpg *.jpeg *.png)"));

        QFileInfo name = newUser->filename;
        Debug(newUser->filename);
}
void AddNewUser::on_btn_cancel_clicked()
{
    this->close();
}

void AddNewUser::on_btn_okay_clicked()
{
    grabUserDetails();
    if(!allFieldsFilled){
        return;
    }
    checkValidityOfUsername();
    if(userNameExists){
        return;
    }
    checkIfPasswordsMatch();
    if(!passwordsMatch){
        return;
    }
    verifyUser = new VerifyNewUser(this, currentUser, *newUser);
    verifyUser->setModal(true);
    verifyUser->show();
    QObject::connect(verifyUser, SIGNAL(send_userAdditionComplete()), this,
            SLOT(receiveUserAdditionCompleteFromVerification()));
}

void AddNewUser::grabUserDetails()
{
    newUser->name=ui->le_name->text();
    newUser->email=ui->le_email->text();
    newUser->phone=ui->le_phone->text();
    newUser->username=ui->le_username->text();
    newUser->password=ui->le_password->text();
    newUser->user_role=ui->cb_user_role->currentText();
    newUser->user_status=ui->cb_user_status->currentText();
    newUser->confirm_password=ui->le_password_2->text();
    newUser->timestamp = QDateTime::currentDateTime();

    checkIfAllFieldsAreFilled();
}

void AddNewUser::checkValidityOfUsername()
{
    checkIfUsernameTaken();
    if(userNameExists){
        QMessageBox::warning(this, "Duplicate Usernames!", "Username already exists. Choose another one!");
        return;
    }
}

void AddNewUser::checkIfAllFieldsAreFilled()
{
    if(newUser->name.isEmpty()||newUser->email.isEmpty()
            ||newUser->phone.isEmpty()||newUser->username.isEmpty()||newUser->password.isEmpty()||
                newUser->confirm_password.isEmpty()){

            QMessageBox::warning(this, "Empty Cells Error!", "Pleaase fill in all the required fields!");
        return;
    }else if(ui->cb_user_role->currentIndex()==0|| ui->cb_user_status->currentIndex()==0){
        QMessageBox::warning(this, "Selection Error!", "Pleaase select user role and/or user status");
        return;
    }else{
        allFieldsFilled = true;
    }
}

void AddNewUser::checkIfPasswordsMatch()
{
    if(newUser->password!=newUser->confirm_password){
         QMessageBox::warning(this, "Passwords Error!", "Your passwords do not match!");
         passwordsMatch = false;
    }
}

void AddNewUser::checkIfUsernameTaken()
{
    if(addNewUserConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(username) FROM users WHERE username = :username"));
        query.bindValue(":username", newUser->username);
        if(!query.exec()){
            LOGx("DB not responding!");
        }else{
            while(query.next()){
                int number_of_users = query.value(0).toInt();
                LOGxy("Number of count", number_of_users);
                if(number_of_users>0){
                    LOGx(number_of_users);
                    userNameExists=true;
                } else{
                    userNameExists= false;

                }
            }
        }

    }
}
void AddNewUser::on_pushbuttonAvatar_clicked()
{
    LOGx("I have been clicked");
    newUser->filename = QFileDialog::getOpenFileName(this, tr("Open Image"),
         QDir::homePath(), tr("Image Files (*.png *.jpg *.bmp)"), 0,
         QFileDialog::DontUseNativeDialog);
    QFileInfo name = newUser->filename;
    ui->lbl_image->setText(newUser->filename);
    QPixmap mypix(newUser->filename);
    ui->avatar_display->setPixmap(mypix.scaled(ui->avatar_display->size(), Qt::KeepAspectRatio));
    Debug(newUser->filename);

}

void AddNewUser::receiveUserAdditionCompleteFromVerification() {
    verifyUser->close();
    clearAllFields();
    emit sendUserAdditionComplete();
}

void AddNewUser::clearAllFields() {
    ui->avatar_display->clear();
    ui->lbl_image->clear();
    ui->le_name->clear();
    ui->le_username->clear();
    ui->le_email->clear();
    ui->le_phone->clear();
    ui->le_password->clear();
    ui->le_password_2->clear();
    ui->cb_user_role->setCurrentIndex(0);
}
