#ifndef VERIFYNEWUSER_H
#define VERIFYNEWUSER_H

#include <QDialog>
#include <QDateTime>
#include <QMessageBox>
#include"debugger.h"
#include "databaseconnection.h"
namespace Ui {
class VerifyNewUser;
}

class VerifyNewUser : public QDialog
{
    Q_OBJECT

public:
    explicit VerifyNewUser(QWidget *parent,loggedUser &currentLoggedInUser, posUser &addedUser);
    ~VerifyNewUser();

private slots:
    void on_btn_okay_clicked();

    void on_btn_edit_clicked();

private:
    Ui::VerifyNewUser *ui;
private:
    QSqlQuery query;
    posUser* verifiedUser;
    loggedUser* currentSystemUser;
    databaseConnection* addUserToDb;
    void saveNewUserToDb();
    bool userAddedSuccessfully=false;
signals:
    void send_userAdditionComplete();
};

#endif // VERIFYNEWUSER_H
