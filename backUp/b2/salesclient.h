#ifndef SALESCLIENT_H
#define SALESCLIENT_H

#include <QDialog>
#include <QCompleter>
#include <QModelIndex>
#include <QStandardItemModel>
#include <QHeaderView>
#include <QCloseEvent>
#include <QTableWidget>
#include <iostream>
#include <iterator>
#include <map>
#include <QCompleter>
#include "debugger.h"
#include "databaseconnection.h"
#include "completepaymentwindow.h"
#include "addcustomer.h"
#include "customerviewall.h"
#include "customerviewone.h"
#include "customerviewchoice.h"
#include "sessioncontrol.h"
namespace Ui {
class SalesClient;
}

class SalesClient : public QDialog
{
    Q_OBJECT

public:
    explicit SalesClient(QWidget *parent, loggedUser &currentLoggedInUser);
    ~SalesClient();

private:
    Ui::SalesClient *ui;
private:
    loggedUser* currentUser;
    databaseConnection* salesConnection;
    void checkCurrentSession();
    SessionControl* sessionControl;
    session* ongoingSession;
    QString* executionType;
    bool thereIsOpenSession = false;


};

#endif // SALESCLIENT_H
