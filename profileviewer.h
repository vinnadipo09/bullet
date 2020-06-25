#ifndef PROFILEVIEWER_H
#define PROFILEVIEWER_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
#include "changeusername.h"
#include "changepassword.h"
#include "changephone.h"

namespace Ui {
class ProfileViewer;
}

class ProfileViewer : public QDialog
{
    Q_OBJECT

public:
    explicit ProfileViewer(QWidget *parent, loggedUser &currentLoggedInUser);
    ~ProfileViewer();

private slots:
    void on_pb_changeAvatar_clicked();

    void on_pb_change_phone_clicked();

    void on_pb_change_userName_clicked();

    void on_pb_changePassword_clicked();

    void on_btn_ApplyChanges_clicked();

    void on_btn_closeWindow_clicked();

private:
    Ui::ProfileViewer *ui;
private:
    databaseConnection* profileViewerConnection;
    loggedUser* profileUser;
    QString profile_user_role;
    QString profile_userName;
    posUser* profileUserData;
private:
    int userID;
    QString firstName;
    QString otherNames;
    QString email;
    QString phone;
    QString userName;
    QString password;
    QString userRole;
    QString avatar;
private:
    void changeAvatar();
    void changeUsername();
    void changePhone();
    void changePassword();

    QString newAvatar;
    QString newUsername;
    QString newPhone;
    QString newPassword;
    int currentUserId;

private:
    bool avatar_changed;
    bool username_changed;
    bool password_changed;
    bool phone_changed;
signals:
    void sendAvatarChanged(QString *newProfileAvatar);
    void sendUsernameChanged(QString *userName);
    void sendPhoneChanged(QString *phone);
    void sendPassWordChanged(QString *password);

private:
    ChangeUsername* changeUsernameDialog;
    ChangePassword* changePasswordDialog;
    ChangePhone* changePhoneDialog;
};

#endif // PROFILEVIEWER_H
