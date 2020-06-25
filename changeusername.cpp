#include "changeusername.h"
#include "ui_changeusername.h"

ChangeUsername::ChangeUsername(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::ChangeUsername)
{
    ui->setupUi(this);
    profileUser = new loggedUser;
    *profileUser = currentLoggedInUser;
    ui->lbl_currentUserDisplay->setText("Change Username for :"+profileUser->username);

}

ChangeUsername::~ChangeUsername()
{
    delete ui;
}
