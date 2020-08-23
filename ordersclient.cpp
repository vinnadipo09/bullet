#include "ordersclient.h"
#include "ui_ordersclient.h"

OrdersClient::OrdersClient(QWidget *parent, loggedUser &currentUser, bool &discountEnabled, bool &rewardsEnabled,
bool &businessAuthorizedRewardPayment) :
    QDialog(parent),
    ui(new Ui::OrdersClient)
{
    ui->setupUi(this);
    currentAuthorizedUser = new loggedUser;
    discountsEnabled = new bool ;
    rewardsEnabled = new bool ;
    rewardPaymentEnabled = new bool;

    *currentAuthorizedUser = currentUser;

    ui->lblUserName->setText(currentAuthorizedUser->name);
    QPixmap mypix(currentAuthorizedUser->user_avatar);
    ui->lblUserAvatar->setPixmap(mypix.scaled(ui->lblUserAvatar->size(), Qt::KeepAspectRatio));
    ui->lblUserAvatar->setPixmap(mypix.scaled(ui->lblUserAvatar->size(), Qt::KeepAspectRatio));

    QTimer *timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start();

    ordersConnection = new databaseConnection;
    lastOrderId = new int;
    currentOrderId = new int;
    processedProduct = new QString;

    loadOrderId();
    ui->lblOrderId->setText(QString::number(*currentOrderId));

    loadItemsFromDbToCompleter();
}

OrdersClient::~OrdersClient()
{
    delete ui;
}

void OrdersClient::closeEvent(QCloseEvent *event) {

}

void OrdersClient::showTime() {
    QTime time= QTime::currentTime();
    QString time_text = time.toString("hh: mm: ss");
    QDate date = QDate::currentDate();
    QString currentDate = date.toString("dd /MM /yyyy");

    if((time.second()%2)==0){
        time_text[2]=' ';
        time_text[6]=' ';
    }
    ui->lblTime->setText(time_text);
    ui->lblDate->setText(currentDate);
}

void OrdersClient::loadOrderId() {
    if(ordersConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT  IFNULL(orders.order_id, 0) FROM orders ORDER BY orders.order_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            *lastOrderId = query.value(0).toInt();
            *currentOrderId = *lastOrderId+1;
            while (query.next()){
                *lastOrderId = query.value(0).toInt();
                *currentOrderId = *lastOrderId+1;
            }
        }
    }
}

void OrdersClient::loadItemsFromDbToCompleter() {
    QStringList completionList;
    if (ordersConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("salesWindowConnection"));
        query.prepare(QString("SELECT productName FROM products"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            qDebug() << "Failed to connect to database: " + ordersConnection->db.lastError().text();
            return;
        }else{
            while(query.next()){
                productName = query.value(0).toString();
                completionList<<productName;
            }
            completer = new QCompleter(completionList,this);
            completer->setCaseSensitivity(Qt::CaseInsensitive);
            completer->setFilterMode(Qt::MatchContains);
            ui->le_SearchProduct->setCompleter(completer);
        }

    } else{
        qDebug() << "Failed to connect to database: " + ordersConnection->db.lastError().text();
    }

    connect(completer, static_cast<void(QCompleter::*)(const QString &)>(&QCompleter::activated),
            [=](const QString &text){
                *processedProduct = text;
//                grabBarcodeFromCompleter(*processedProduct);
            });
}
