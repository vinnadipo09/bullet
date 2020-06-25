#include "customerpaydebt.h"
#include "ui_customerpaydebt.h"

CustomerPayDebt::CustomerPayDebt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerPayDebt)
{
    ui->setupUi(this);
}

CustomerPayDebt::~CustomerPayDebt()
{
    delete ui;
}
