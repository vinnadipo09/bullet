#include "editsupplier.h"
#include "ui_editsupplier.h"

EditSupplier::EditSupplier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EditSupplier)
{
    ui->setupUi(this);
}

EditSupplier::~EditSupplier()
{
    delete ui;
}
