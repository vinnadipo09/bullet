#include "sessioncontrol.h"
#include "ui_sessioncontrol.h"

SessionControl::SessionControl(QWidget *parent, loggedUser &currentLoggedInUser, QString& executionType) :
    QDialog(parent),
    ui(new Ui::SessionControl)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    sessionConnection = new databaseConnection;
    *currentUser = currentLoggedInUser;

    ui->lblName->setText(currentUser->name);
    cashInSystem = new int;
    currentExecutionType = new QString;
    *currentExecutionType = executionType;
}

SessionControl::~SessionControl()
{
    delete ui;
}

void SessionControl::getCashInSystem() {
    sessionConnection->conn_open();
    if(sessionConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT total FROM cash ORDER BY transaction_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            while(query.next()){
                *cashInSystem = (int)query.value(0).toDouble();
            }
        }
    }
}

void SessionControl::on_btnApply_clicked()
{
    getCashInSystem();
    QDateTime currentTime = QDateTime::currentDateTime();
    int cashByUser = ui->leCashInDrawer->text().toInt();
    QString cashEffect;
    QString resolved = "No";
    int cashDiscrepancy;
    if(*cashInSystem > cashByUser){
        cashDiscrepancy = *cashInSystem - cashByUser;
        cashEffect = "Low";
    }else if(cashByUser> *cashInSystem){
        cashDiscrepancy = cashByUser - *cashInSystem;
        cashEffect = "High";
    }else{
        cashDiscrepancy = 0;
        cashEffect = "None";
    }







    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Cash", "KSHS. "+ QString::number(cashByUser)+" . This Value CANNOT BE EDITED. Do you wish to proceed?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        if(*currentExecutionType == "Opening"){
            QString sessionType = "Opened";
            if(sessionConnection->conn_open()){
                QSqlQuery query(QSqlDatabase::database("MyConnect"));
                query.prepare(QString("INSERT INTO salesSessionManager (session_type, session_time, drawer_cash, system_cash, discrepancy, effect, user_id, resolved) VALUES("
                                      ":sessionType, :sessionTime, :drawerCash, :systemCash, :discrepancy, :effect, :userId, :resolved)"));
                query.bindValue(":sessionType", sessionType);
                query.bindValue(":sessionTime", currentTime);
                query.bindValue(":drawerCash", cashByUser);
                query.bindValue(":systemCash", *cashInSystem);
                query.bindValue(":discrepancy", cashDiscrepancy);
                query.bindValue(":effect", cashEffect);
                query.bindValue(":userId", currentUser->user_id);
                query.bindValue(":resolved", resolved);
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{
                    QMessageBox::critical(this, "Opening Successful", "You have successfully opened a new session!");
                }
                    emit sendOpeningComplete();
                    this->close();
                }
            }else if(*currentExecutionType=="Closing"){
            QString sessionType = "Closed";
            if(sessionConnection->conn_open()){
                QSqlQuery query(QSqlDatabase::database("MyConnect"));
                query.prepare(QString("INSERT INTO salesSessionManager (session_type, session_time, drawer_cash, system_cash, discrepancy, effect, user_id, resolved) VALUES("
                                      "                                      :sessionType, :sessionTime, :drawerCash, :systemCash, :discrepancy, :effect, :userId, :resolved)"));
                query.bindValue(":sessionType", sessionType);
                query.bindValue(":sessionTime", currentTime);
                query.bindValue(":drawerCash", cashByUser);
                query.bindValue(":systemCash", *cashInSystem);
                query.bindValue(":discrepancy", cashDiscrepancy);
                query.bindValue(":effect", cashEffect);
                query.bindValue(":userId", currentUser->user_id);
                query.bindValue(":resolved", resolved);
                if(!query.exec()){
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                }else{
                    QMessageBox::critical(this, "Closing Successful", "You have successfully closed your current session!");
                }
                emit sendClosingComplete();
                this->close();
            }
        }

    }else {
        return;

        //close current and open a new one
    }

//        send signal and disable sales client

}


void SessionControl::on_btnCancel_clicked()
{
    this->close();
}
