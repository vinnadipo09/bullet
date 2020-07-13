#include "customerviewone.h"
#include "ui_customerviewone.h"

CustomerViewOne::CustomerViewOne(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerViewOne)
{
    ui->setupUi(this);
}

CustomerViewOne::~CustomerViewOne()
{
    delete ui;
}
