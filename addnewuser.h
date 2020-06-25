#ifndef ADDNEWUSER_H
#define ADDNEWUSER_H

#include <QDialog>
#include<QFileDialog>
#include"debugger.h"
#include"verifynewuser.h"
#include"databaseconnection.h"
#include"viewuser.h"
namespace Ui {
class AddNewUser;
}

class AddNewUser : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewUser(QWidget *parent, loggedUser &currentLoggedInUser);
    ~AddNewUser();

private slots:
    void on_btn_cancel_clicked();
    void on_btn_okay_clicked();

    void on_pb_avatar_clicked();

    void on_pushbuttonAvatar_clicked();

private:
    VerifyNewUser* verifyUser;
private:
    posUser* newUser;
    void grabUserDetails();
    void checkValidityOfUsername();
    void checkIfAllFieldsAreFilled();
    void checkIfPasswordsMatch();
    void checkIfUsernameTaken();
    loggedUser currentUser;
    QString avatarFile;
    databaseConnection* addNewUserConnection;
    bool userNameExists=false;
    bool allFieldsFilled=false;
    bool passwordsMatch=true;
private:
    Ui::AddNewUser *ui;
private:
    void clearAllFields();
private slots:
    void receiveUserAdditionCompleteFromVerification();
signals:
    void sendUserAdditionComplete();
};

#endif // ADDNEWUSER_H
