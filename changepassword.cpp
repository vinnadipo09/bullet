#include "changepassword.h"
#include "ui_changepassword.h"

ChangePassword::ChangePassword(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::ChangePassword)
{
    ui->setupUi(this);
}

ChangePassword::~ChangePassword()
{
    delete ui;
}
