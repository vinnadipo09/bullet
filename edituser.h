#ifndef EDITUSER_H
#define EDITUSER_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class EditUser;
}

class EditUser : public QDialog
{
    Q_OBJECT

public:
    explicit EditUser(QWidget *parent ,loggedUser &currentLoggedInUser, posUser &viewedUser);
    ~EditUser();

private slots:
    void on_btnUpdateRecord_clicked();

    void on_btnDiscardChanges_clicked();

private:
    Ui::EditUser *ui;
private:
    loggedUser* authorizingUser;
    posUser* editedUser;
    posUser* updatedUser;

private:
    void editAndUpdateUser();
    void grabDataForEntry();
};

#endif // EDITUSER_H
