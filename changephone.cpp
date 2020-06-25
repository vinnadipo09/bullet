#include "changephone.h"
#include "ui_changephone.h"

ChangePhone::ChangePhone(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::ChangePhone)
{
    ui->setupUi(this);
}

ChangePhone::~ChangePhone()
{
    delete ui;
}
