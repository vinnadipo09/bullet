#include "databaseconnection.h"

databaseConnection::databaseConnection()
{

}

void databaseConnection::conn_close()
{
    db.close();
    db.removeDatabase(QSqlDatabase::defaultConnection);
}

bool databaseConnection::conn_open()
{
    db = QSqlDatabase::addDatabase("QMYSQL");
        db.setHostName("127.0.0.1");
        db.setUserName("admin");
        db.setPassword("Avion@69961991");
        db.setDatabaseName("pos");
        if(!db.open()){
            LOGx("[Error]: Database did NOT Open...");
            return false;
        }else{
            LOGx("[Success]: Database Successfully Opened...");
            return true;
        }
}
