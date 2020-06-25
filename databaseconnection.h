#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H

#include <QDialog>
#include<QtSql>
#include<QSqlDatabase>
#include "debugger.h"

class databaseConnection
{
public:
    databaseConnection();
    void conn_close();
    bool conn_open();
    QSqlDatabase db;
};

#endif // DATABASECONNECTION_H
