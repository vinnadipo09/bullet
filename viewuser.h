#ifndef VIEWUSER_H
#define VIEWUSER_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
#include "edituser.h"
namespace Ui {
class ViewUser;
}

class ViewUser : public QDialog
{
    Q_OBJECT

public:
    explicit ViewUser(QWidget *parent, loggedUser &currentLoggedInUser, posUser &viewedUser);
    ~ViewUser();


private slots:
    void on_btn_close_view_clicked();
    void on_btn_delete_user_clicked();
    void on_btnResetPassword_clicked();
    void on_btnEditUser_clicked();
    void on_btnDeleteUser_clicked();

private:
    Ui::ViewUser *ui;
private:
    loggedUser* currentUser;
    posUser* currentViewUser;
    void clearView();

private:
    QString* currentUserBeingViewed;
    QString* loggedInUser;
    databaseConnection* viewAndManageUsers;
    void deleteUser();
    bool userDeletionSuccessful = false;
signals:
    void sendDelitionComplete();

private:
    EditUser* editUser;

};

#endif // VIEWUSER_H
