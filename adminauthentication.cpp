#include "adminauthentication.h"
#include "ui_adminauthentication.h"

AdminAuthentication::AdminAuthentication(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AdminAuthentication)
{
    ui->setupUi(this);
    this->setMinimumSize(1024,768);
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    authenticatorConnection = new databaseConnection;
}

AdminAuthentication::~AdminAuthentication()
{
    delete ui;
}

void AdminAuthentication::on_btnAuthenticate_clicked()
{
    authenticateAdministrator();
}

void AdminAuthentication::on_btnCancel_clicked()
{

}

void AdminAuthentication::authenticateAdministrator() {
    QString userName = ui->leuserNameEmail->text();
    QString password = ui->lePassword->text();
    QString roleOne = "superadmin";
    QString roleTwo = "admin";
    QString roleThree = "supervisor";
    authenticatorConnection->conn_open();
    if (authenticatorConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT username, email, password, user_role FROM users WHERE username = :username OR email = :username AND password = :password"));
        query.bindValue(":username", userName);
        query.bindValue(":password", password);
        if (!query.exec()) {
            QMessageBox::warning(this, "[Error!]", "Query did not execute!");
            ui->leuserNameEmail->clear();
            ui->lePassword->clear();
        } else {
            LOGx("query executed");
            while (query.next()) {
                QString usernameFromDb  = query.value(0).toString();
                QString userEmailFromDb  = query.value(1).toString();
                QString passwordFromDb  = query.value(2).toString();
                QString userRoleFromDb  = query.value(3).toString();

                if ((userName==usernameFromDb || userName == userEmailFromDb) && (password==passwordFromDb) &&
                (userRoleFromDb==roleOne || userRoleFromDb==roleTwo || userRoleFromDb==roleThree)){
                    emit authenticatedSuccessfully();
                }else if((userName==usernameFromDb || userName == userEmailFromDb) && (password==passwordFromDb) &&
                         (userRoleFromDb!=roleOne || userRoleFromDb!=roleTwo || userRoleFromDb!=roleThree)){
                    QMessageBox::warning(this, "Privileges Error", "You are not authorized to make changes at this level!");
                    emit authenticationFailed();
                }else{
                    QMessageBox::warning(this, "Credentials Error", "Wrong administrator credentials!");
                    emit authenticationFailed();

                }
            }
        }
    }
}