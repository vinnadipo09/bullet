#include "changedebtlimit.h"
#include "ui_changedebtlimit.h"

ChangeDebtLimit::ChangeDebtLimit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeDebtLimit)
{
    ui->setupUi(this);
}

ChangeDebtLimit::~ChangeDebtLimit()
{
    delete ui;
}
