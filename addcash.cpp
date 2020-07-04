#include "addcash.h"
#include "ui_addcash.h"

AddCash::AddCash(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::AddCash)
{
    ui->setupUi(this);
    addCashConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    myTransaction = new QString;
    availableCash = new double;
    addedCash = new double ;
    executedTransaction = new QString;

    currentInvestment = new double ;
    currentInvestTotal = new double;
    previousInvestmentTotal = new double ;

    previousCashTotal = new double ;
    currentCashTotal = new double ;
    ui->leCashAmount->setValidator(new QDoubleValidator(this));
    loadTransactions();
}

AddCash::~AddCash()
{
    delete ui;
}

void AddCash::on_btnApply_clicked()
{
    loadCashFromDatabase();
    getInputInformation();
    checkForEmptyFields();
    if(!transactionTypeSelected){
        QMessageBox::warning(this, "Empty Cells Error!", "Please select a valid transaction type!");
        return;
    }else{
         if(*addedCash==NULL){
            QMessageBox::warning(this, "Invalid value!", "You cannot add zero or empty cell to cash!");
            return;
         }else{
            handleInvestment();
            if(!investmentAddedSuccessfully){
                QMessageBox::warning(this, "Investment Failed!", "There was a problem updating your investment!");
                return;
            }else if(!cashUpdatedSuccessfully){
                QMessageBox::warning(this, "Cash Update Failed!", "There was a problem updating your cash value!");
                return;
            }else{
                QMessageBox::information(this, "Investment Update Success!", "Investment Updated Successfully!");
            }
         }

    }

}

void AddCash::on_btnCancel_clicked()
{

}

void AddCash::loadTransactions() {
    QString effectOnCash = "Increase in Cash";
    addCashConnection->conn_open();
    if(addCashConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT transaction_type FROM transaction_type WHERE effect = :raiseEffect"));
        query.bindValue(":raiseEffect", effectOnCash);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            while(query.next()){
                *myTransaction = query.value(0).toString();
                ui->cbSelectTransaction->addItem(*myTransaction);
            }
        }
    }
}

void AddCash::loadCashFromDatabase() {
    if(addCashConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT total FROM cash ORDER BY transaction_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
                *availableCash = query.value(0).toDouble();
                LOGx(*availableCash);
        }
    }
}

void AddCash::checkForEmptyFields() {
    double tempCash = ui->leCashAmount->text().toDouble();
    if(ui->cbSelectTransaction->currentIndex()!=0){
        transactionTypeSelected = true;
    }else if(!*addedCash==NULL){
        cashValueDefined = true;
    }
}

void AddCash::getInputInformation() {
    *addedCash = ui->leCashAmount->text().toDouble();
    *executedTransaction = ui->cbSelectTransaction->currentText();
}

void AddCash::updateCashValue() {
    QDateTime transactionTime;
    transactionTime = QDateTime::currentDateTime();
    QString effect = "increase";
    if(addCashConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT total FROM cash ORDER BY transaction_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            *previousCashTotal = query.value(0).toDouble();
            *currentCashTotal = *previousCashTotal+*addedCash;
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("INSERT INTO cash (transaction_type, amount, total, effect, user_id, transaction_timestamp)"
                                  "VALUES(:transactionType, :amount, :total, :effect, :userId, :timeStamp)"));
            query.bindValue(":transactionType", *executedTransaction);
            query.bindValue(":amount", *addedCash);
            query.bindValue(":total", *currentInvestTotal);
            query.bindValue(":effect", effect);
            query.bindValue(":userId", currentUser->user_id);
            query.bindValue(":timeStamp", transactionTime);
            if(!query.exec()){
                QMessageBox::critical(this, "Database Error", query.lastError().text());
            }else{
                cashUpdatedSuccessfully = true;
            }
        }
    }
}

void AddCash::handleInvestment() {
    QDateTime transactionTime;
    transactionTime = QDateTime::currentDateTime();
    if(addCashConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT amount FROM investments ORDER BY investment_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            *previousInvestmentTotal = query.value(0).toDouble();
            *currentInvestTotal = *previousInvestmentTotal+*addedCash;
            QSqlQuery query(QSqlDatabase::database("MyConnect"));
            query.prepare(QString("INSERT INTO investments (transaction_type, amount, total, user_id, date)"
                                  "VALUES(:transactionType, :amount, :total, :userId, date)"));
            query.bindValue(":transactionType", *executedTransaction);
            query.bindValue(":amount", *addedCash);
            query.bindValue(":total", *currentInvestTotal);
            query.bindValue(":userId", currentUser->user_id);
            query.bindValue(":date", transactionTime);
            if(!query.exec()){
                QMessageBox::critical(this, "Database Error", query.lastError().text());
            }else{
                investmentAddedSuccessfully = true;
                updateCashValue();
            }
        }
    }
}
