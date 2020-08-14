#include "salesclient.h"
#include "ui_salesclient.h"

SalesClient::SalesClient(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::SalesClient)
{
    ui->setupUi(this);
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    salesConnection = new databaseConnection;
    ongoingSession = new session;
    executionType = new QString;

    checkCurrentSession();


}

SalesClient::~SalesClient()
{
    delete ui;
}

void SalesClient::checkCurrentSession()
{
    salesConnection->conn_open();
    if(salesConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("SELECT salesSessionManager.session_id, salesSessionManager.session_type , salesSessionManager.session_time, users.name FROM salesSessionManager LEFT JOIN users ON users.user_id = salesSessionManager.user_id ORDER "
                                                                                                           "BY salesSessionManager.session_id DESC LIMIT 1"));
            if(!query.exec()){
                QMessageBox::critical(this, "Database Error", query.lastError().text());
                return;
            }else{
                while (query.next()) {
                    ongoingSession->sessionType = query.value(1).toString();
                    ongoingSession->sessionTime = query.value(2).toDateTime();
                    ongoingSession->userName = query.value(3).toString();
                    LOGx(ongoingSession->sessionType.toStdString());
                    LOGx(ongoingSession->userName.toStdString());
                    if((ongoingSession->sessionType=="Opened" ) && ongoingSession->userName==currentUser->name){
                        thereIsOpenSession = true;
                        QMessageBox::StandardButton reply;
                        reply = QMessageBox::warning(this
                                , "Stop Analysis"
                                , "Stop current analysis?"
                                , QMessageBox::Yes | QMessageBox::Cancel);
                        if(reply==QMessageBox::Yes){
                            LOGx("Yes");

                        }else{
                            LOGx("No");
                        }

                    }else if(( ongoingSession->sessionType=="Opened" ) && ongoingSession->userName!=currentUser->name){
                        QMessageBox::critical(this, "Unattended Session", "There is an active session that must be closed before continuing!");
                        *executionType = "Closing";
    //                    SYSTEM CLOSE AND THEN OPEN
                        sessionControl = new SessionControl(this, *currentUser, *executionType);
                        sessionControl->setModal(true);
                        sessionControl->show();
                        thereIsOpenSession = false;
                    }else if(ongoingSession->sessionType=="Closed"){
                        QMessageBox::critical(this, "Open a session to continue", "Please Open a session to continue!");
                        thereIsOpenSession = false;
                        *executionType = "Opening";
                        //session opener
                        sessionControl = new SessionControl(this, *currentUser, *executionType);
                        sessionControl->setModal(true);
                        sessionControl->show();
                    }else{
                        LOGxy("ongoing session ", ongoingSession->sessionType.toStdString());
                        LOGxy("ongoing session ", ongoingSession->userName.toStdString());
                        LOGxy("current user ", currentUser->name.toStdString());
    //                    WE NEVER GET HERE
                    }

                }
            }
        }
    //    if(!thereIsOpenSession){
    //        disableSystems();
    //
    //    }else{
    ////        emit enableSystemsSent();
    //        enableSystems();
    //
    //
    //    }
        QObject::connect(sessionControl, SIGNAL(sendClosingComplete()), this, SLOT(receiveClosingComplete()));
        //    QObject::connect(sessionControl, SIGNAL(sendOpeningComplete()), this, SLOT(receiveOpeningComplete()));
}
