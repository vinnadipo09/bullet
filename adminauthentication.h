#ifndef ADMINAUTHENTICATION_H
#define ADMINAUTHENTICATION_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class AdminAuthentication;
}

class AdminAuthentication : public QDialog
{
    Q_OBJECT

public:
    explicit AdminAuthentication(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AdminAuthentication();

private slots:
    void on_btnAuthenticate_clicked();

    void on_btnCancel_clicked();

private:
    Ui::AdminAuthentication *ui;

private:
    loggedUser* currentUser;
    databaseConnection* authenticatorConnection;
    void authenticateAdministrator();
    bool authenticated = false;
signals:
    void authenticatedSuccessfully();
    void authenticationFailed();


};

#endif // ADMINAUTHENTICATION_H
