#ifndef ADDTRANSACTIONTYPE_H
#define ADDTRANSACTIONTYPE_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class AddTransactionType;
}

class AddTransactionType : public QDialog
{
    Q_OBJECT

public:
    explicit AddTransactionType(QWidget *parent, loggedUser &currentLoggedInUser);
    ~AddTransactionType();

private slots:
    void on_pb_applyTransactionType_clicked();
    void on_btnDiscardTransactionType_clicked();

private:
//    void closeEvent (QCloseEvent *event);
    databaseConnection* dbConnection;
    void addNewTransactionType(QString&, QString&, int&);
    QString* transactionType;
    QString* transactionEffect;
    loggedUser* currentLoggedUser;
    void checkIfTransactionTypeExists();
    void loadTransactionTypes();
    void cleanUp();
    bool transactionTypeExists = false;
signals:
    void send_addingTransactionTypeComplete();

private:
    Ui::AddTransactionType *ui;
};

#endif // ADDTRANSACTIONTYPE_H
