#include "customerviewall.h"
#include "ui_customerviewall.h"

CustomerViewAll::CustomerViewAll(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerViewAll)
{
    ui->setupUi(this);
}

CustomerViewAll::~CustomerViewAll()
{
    delete ui;
}
