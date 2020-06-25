#include "changeavatar.h"
#include "ui_changeavatar.h"

ChangeAvatar::ChangeAvatar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeAvatar)
{
    ui->setupUi(this);
}

ChangeAvatar::~ChangeAvatar()
{
    delete ui;
}
