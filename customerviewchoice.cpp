#include "customerviewchoice.h"
#include "ui_customerviewchoice.h"

CustomerViewChoice::CustomerViewChoice(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomerViewChoice)
{
    ui->setupUi(this);
}

CustomerViewChoice::~CustomerViewChoice()
{
    delete ui;
}
