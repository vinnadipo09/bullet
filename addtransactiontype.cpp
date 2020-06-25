#include "addtransactiontype.h"
#include "ui_addtransactiontype.h"

AddTransactionType::AddTransactionType(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddTransactionType)
{
    ui->setupUi(this);
    this->setWindowTitle("Transaction Type Addition");
    dbConnection = new databaseConnection;
    transactionType = new QString;
    transactionEffect = new QString;
    currentLoggedUser = new loggedUser;
    *currentLoggedUser = currentLoggedInUser;
}

AddTransactionType::~AddTransactionType()
{
    delete ui;
}

void AddTransactionType::on_pb_applyTransactionType_clicked()
{
    if(ui->cb_transactionEffect->currentIndex()==0){
        QMessageBox::information(this, "Effect on Cash Not Selected!", "Select Effect On Cash!");
        return;
    }{
        checkIfTransactionTypeExists();
        if (!transactionTypeExists){
            QMessageBox::information(this, "Empty Data Error!", "Please enter transaction type!");
            return;
        }
        QMessageBox::information(this, "New Transaction Success!", "Transaction Type Successfully Added!");
        ui->cb_transactionEffect->setCurrentIndex(0);
        ui->le_transactionType->clear();
        send_addingTransactionTypeComplete();
        cleanUp();
    }


}

void AddTransactionType::on_btnDiscardTransactionType_clicked()
{

}

//void AddTransactionType::closeEvent(QCloseEvent *event) {
//    QMessageBox::StandardButton reply;
//    reply = QMessageBox::warning(this
//            , "Discard Changes"
//            , "Discard the changes without saving?"
//            , QMessageBox::Yes | QMessageBox::Cancel);
//    if(reply==QMessageBox::Yes){
////        this->close();
//    }else{
////        event->ignore
//    }
//}

void AddTransactionType::addNewTransactionType(QString &transType, QString& transEffect, int& userId) {
    dbConnection->conn_open();
    if(dbConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO transaction_type(transaction_type, effect, user_id) "
                              "VALUES(:transactionType, :transactionEffect, :authorizingPersonnel)"));
        query.bindValue(":transactionType", transType);
        query.bindValue(":transactionEffect", transEffect);
        query.bindValue(":authorizingPersonnel", userId);
        if(!query.exec()){
            Debug(query.lastError());

            LOGx("DB not responding adding new!");
        }else{
            while(query.next()){
            }
        }
    }
}

void AddTransactionType::checkIfTransactionTypeExists() {
    dbConnection->conn_open();
    *transactionType = ui->le_transactionType->text();
    *transactionEffect = ui->cb_transactionEffect->currentText();
    int user_id = currentLoggedUser->user_id.toInt();
    if(!transactionType->isEmpty()){
        transactionTypeExists = true;
    }
    if(transactionTypeExists){
        if(dbConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("SELECT COUNT(transaction_type) FROM transaction_type WHERE transaction_type = :transactionType"));
            query.bindValue(":transactionType", *transactionType);
            if(!query.exec()){
                LOGx("DB not responding checking duplicates!");
                Debug(query.lastError());
            }else{
                while(query.next()){
                    int numberOfTransactionTypes = query.value(0).toInt();
                    if(numberOfTransactionTypes>0){
                        QMessageBox::StandardButton reply;
                        reply = QMessageBox::warning(this
                                , "Duplicate Entries"
                                , "The "+*transactionType+"type already exists. Use it or edit your entry"
                                , QMessageBox::Yes | QMessageBox::Cancel);
                        if(reply==QMessageBox::Yes){

                        }else{
                        }
                    }else{
                        addNewTransactionType(*transactionType, *transactionEffect, user_id);
                    }
                }
            }
        }
    }
}

void AddTransactionType::loadTransactionTypes() {
//    ui->tab
    LOGx("implement me");
}

void AddTransactionType::cleanUp() {
    delete transactionEffect;
    delete transactionType;
    delete dbConnection;
    delete currentLoggedUser;

}
