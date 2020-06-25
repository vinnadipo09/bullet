#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class ChangePassword;
}

class ChangePassword : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePassword(QWidget *parent, loggedUser &currentLoggedInUser);
    ~ChangePassword();

private:
    Ui::ChangePassword *ui;
};

#endif // CHANGEPASSWORD_H
