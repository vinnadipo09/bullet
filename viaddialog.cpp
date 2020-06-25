#include "viaddialog.h"
#include "ui_viaddialog.h"

ViadDialog::ViadDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViadDialog)
{
    ui->setupUi(this);
}

ViadDialog::~ViadDialog()
{
    delete ui;
}
