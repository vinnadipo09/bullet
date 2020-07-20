#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "debugger.h"
#include "adminwindow.h"
#include "supervisorwindow.h"
#include "cashierwindow.h"
#include "databaseconnection.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QDialog
{
    Q_OBJECT

public:
    Login(QWidget *parent = nullptr);
    ~Login();

private:
    Ui::Login *ui;
private slots:
    void showTime();
    void on_btnLogin_clicked();
private:
    AdminWindow *admin_window;
    SupervisorWindow *supervisor_window;
    CashierWindow *cashier_window;
    databaseConnection* dbConnection;
    loggedUser* currentUser;

private:
    void clearFieldsForSecurity();
private slots:
    void receive_admin_logged_out();
    void receive_cashier_logged_out();
    void receive_supervisor_logged_out();

//    LOGIN REFACTOR
private:
    void loginUser(QString&, QString&);
    QString* username;
    QString* password;
private:
    QString* user_id_FromDB;
    QString* user_usernameFromDB;
    QString* user_nameFromDb;
    QString* user_passwordFromDB;
    QString* user_userRoleFromDB;
    QString* user_avatar;
private:
    void set_current_user();
    void destroy_user();
    bool credentialsCorrect = false;
};

#endif // LOGIN_H
