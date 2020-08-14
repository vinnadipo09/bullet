#include "existingsessionverifier.h"
#include "ui_existingsessionverifier.h"

ExistingSessionVerifier::ExistingSessionVerifier(QWidget *parent,
                                                 loggedUser &currentLoggedInUser, QString &sessionType,
                                                 int &drawerCash, QDateTime& OpeningTime) :
    QDialog(parent),
    ui(new Ui::ExistingSessionVerifier)
{
    ui->setupUi(this);
}

ExistingSessionVerifier::~ExistingSessionVerifier()
{
    delete ui;
}

void ExistingSessionVerifier::on_btnContinueSession_clicked()
{

}

void ExistingSessionVerifier::on_btnEndSession_clicked()
{

}

void ExistingSessionVerifier::on_btnCancel_clicked()
{

}
