#include "completepaymentwindow.h"
#include "ui_completepaymentwindow.h"
CompletePaymentWindow::CompletePaymentWindow(QWidget *parent, loggedUser &currentLoggedInUser, int& currentSaleId,
        std::map<int, purchasedItem>&productsBought, bool &rewards,
        float rewardTotal, bool &discounts, float discountTotal,
        Customer& currentServingCustomer, float& totalToPay, int& minimumReward, int & maximumCredit) :
    QDialog(parent),
    ui(new Ui::CompletePaymentWindow)
{
    ui->setupUi(this);
    productToDatabasaeSales = new std::map<QString, int>;
    userOnCashier = new loggedUser;
    amountToBePayed = new int;
    amountPaid = new int;
    balanceForClient = new int;
    paymentConnection = new databaseConnection;
    currentTransactionId = new int;
    *amountPaid = 0;
    *currentTransactionId = currentSaleId;
    remainingStock = new int;
    updateTime = new QDateTime;
//    *productToDatabasaeSales = productsBought;
    *userOnCashier = currentLoggedInUser;
    *amountToBePayed = totalToPay;
//    ui->cb_paymentMethod->setCurrentIndex(1);
//
//    ui->le_amountTotal->setText(QString::number(*amountToBePayed));
//    ui->lblValueOne->setText(QString::number(*amountPaid));
//    ui->lblValueOne->setFocus();
//    QObject::connect(ui->lblValueOne, SIGNAL(returnPressed()),
//                     this, SLOT(getCashComputeBalance()));

    productRewardsEnabled = new bool;
    productDiscountsEnabled = new bool;

    *productRewardsEnabled = rewards;
    *productDiscountsEnabled = discounts;
    customerAvailableRewards = new float;
//ui->le_amountPaid->textChanged()

    minimumRewardForPayment = new int;
    maximumBusinessCredit= new int;

    //COME MANAGE ME LATER
    *minimumRewardForPayment = minimumReward;
    *maximumBusinessCredit= maximumCredit;




    currentUser = new loggedUser;
    servingCustomer = new Customer;
    productsToBill = new std::map<int, purchasedItem>;

    cashValue = new int;
    creditValue =new int;
    rewardValue = new int;

    *cashValue = 0;
    creditValue = 0;
    rewardValue = 0;

    *currentUser = currentLoggedInUser;
    *servingCustomer = currentServingCustomer;
    *productsToBill = productsBought;


    totalDiscount = new float;
    totalRewards = new float;
    single_product_discTotal = new float;
    single_product_rewTotal = new float;
    *totalDiscount = discountTotal;
    *totalRewards = rewardTotal;
    single_product_discTotal = 0;
    single_product_rewTotal = 0;
    paymentMethod = new QString;
    *paymentMethod = "Cash";
    set_payment_to_cash();
    connect(ui->cb_display_payment_method, QOverload<int>::of(&QComboBox::currentIndexChanged),
            [=](int index){ /* ... */
                if(index==0){
                    *paymentMethod = "Cash";
                    set_payment_to_cash();
                }else if(index==1){
                    *paymentMethod = "MPesa";
                    set_payment_to_mpesa();
                }else if(index==2){
                    *paymentMethod = "Credit";
                    set_payment_to_credit();

//                    if (*totalRewards< *minimumRewardForPayment){
//                        QMessageBox::critical(this, "Insufficient Reward Error", "Your total rewards" +QString::number(*totalRewards)+" is less than the minimum acceptable, "+QString::number(*minimumRewardForPayment)+" .");
//                        ui->cb_paymentMethod->setCurrentIndex(0);
//                    } else{
//                        if (*amountToBePayed<=*totalRewards){
//                            ui->lblValueOneTitle->setText("Rewards: ");
//                            ui->lblValueOne->setText(QString::number(*amountToBePayed));
//                            ui->lblValueTwo->setDisabled(true);
//                            *paymentMethod = "Rewards";
//
//                        } else{
//                            ui->cb_paymentMethod->setCurrentIndex(4);
//                        }
//                    }
                }else if(index==3){
//                    ui->lblValueOne->setFocus();
//                    ui->lblValueOneTitle->setText("Cash: ");
//                    ui->lblValueTwoTitle->setText("Credit: ");
                    *paymentMethod = "CashCredit";
                    set_payment_to_cash_credit();
                }else if(index==4){
                    *paymentMethod = "MPesaCash";
                    set_payment_to_mpesa_cash();
                }else if(index==5){
                    *paymentMethod = "MPesaCredit";
                    set_payment_to_mpesa_credit();
                }else if(index==6){
                    *paymentMethod = "MPesaRewards";
                    set_payment_to_mpesa_rewards();
                }else if(index==7){
                    *paymentMethod = "Rewards";
                    set_payment_to_rewards();
                }else if(index==8){
                    *paymentMethod = "CashRewards";
                    set_payment_to_cash_rewards();
                }

                else{
                    LOGx("Should never get here");
                }

            });



    int customerAvailableCredit = servingCustomer->creditRemaining;
    ui->lblCreditAvailable->setText(QString::number(customerAvailableCredit));

    int customerAvailableCash = servingCustomer->cashOnBusiness;
    ui->lblCreditAvailable->setText(QString::number(customerAvailableCash));

    int customerAvailableRewards = servingCustomer->rewardsAvailable;
    ui->lblCreditAvailable->setText(QString::number(customerAvailableRewards));


    ui->saleReward->setText(QString::number(*totalRewards));
//    ui->lblValueTwoTitle->hide();
//    ui->lblValueOne->hide();

}

CompletePaymentWindow::~CompletePaymentWindow()
{
    delete ui;
}
void CompletePaymentWindow::on_lblValueOne_returnPressed()
{
//    if (ui->cb_paymentMethod->currentText()==0){
//        if (ui->lblValueOne->text().toInt()>=*amountToBePayed){
////            getCashComputeBalance();
//            ui->btnCompleteSale->setFocus();
//        }else{
//            QMessageBox::critical(this, "Payment Amount Error", "Please enter a value equal to the bill or greater!");
//            ui->lblValueOne->clear();
//            return;
//        }
//    }else if (ui->cb_paymentMethod->currentText()==3){
//
//        if (*cashValue<*amountToBePayed){
//            *cashValue = ui->lblValueOne->text().toInt();
//            *creditValue = *amountToBePayed - *cashValue;
//            ui->lblValueTwo->setText(QString::number(*creditValue));
//        }else if (*cashValue==*amountToBePayed){
//            QMessageBox::critical(this, "Payment Method Error", "Redirecting your payment to cash method");
//            ui->cb_paymentMethod->setCurrentIndex(0);
//            ui->lblValueOne->setText(QString::number(*cashValue));
//        }else if (*cashValue>*amountToBePayed){
//            QMessageBox::critical(this, "Payment Amount Error", "You are paying more than you owe. Please Check your values again");
//            ui->lblValueOne->clear();
//        }
//    }
}

void CompletePaymentWindow::on_lblValueTwo_returnPressed()
{

}


void CompletePaymentWindow::on_btn_fifty_clicked()
{
    *amountPaid+=50;
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }
//    ui->lblValueOne->setText(QString::number(*amountPaid));
//    ui->lblValueOne->setFocus();

}
void CompletePaymentWindow::on_btn_oneHundred_clicked()
{
    *amountPaid+=100;
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }
//    ui->lblValueOne->setText(QString::number(*amountPaid));
//    ui->lblValueOne->setFocus();

}
void CompletePaymentWindow::on_btn_twoHundred_clicked()
{
    *amountPaid+=200;
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }
//    ui->lblValueOne->setText(QString::number(*amountPaid));
//    ui->lblValueOne->setFocus();
}

void CompletePaymentWindow::on_btn_fiveHundred_clicked()
{
    *amountPaid+=500;
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }
//    ui->lblValueOne->setText(QString::number(*amountPaid));
//    ui->lblValueOne->setFocus();
}

void CompletePaymentWindow::on_btn_oneThousand_clicked()
{
    *amountPaid+=1000;
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }
//    ui->lblValueOne->setText(QString::number(*amountPaid));
//    ui->lblValueOne->setFocus();
}

void CompletePaymentWindow::on_btn_credit_clicked()
{
    *amountPaid+=100;
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }
//    ui->lblValueOne->setText(QString::number(*amountPaid));
//    ui->lblValueOne->setFocus();
}

void CompletePaymentWindow::postSaleToDb(loggedUser &, std::map<QString, int> &, int &) {

}
void CompletePaymentWindow::getCashComputeBalance() {
    if(*amountPaid>= *amountToBePayed){
        *balanceForClient = *amountPaid-*amountToBePayed;
        ui->le_balanceOwed->setText(QString::number(*balanceForClient));
    }else{
        ui->le_balanceOwed->setText(QString::number(0.00));
    }
}
void CompletePaymentWindow::on_le_amountPaid_textChanged(const QString &arg1)
{
//    *amountPaid = ui->lblValueOne->text().toInt();
    getCashComputeBalance();
}
void CompletePaymentWindow::updateSaleData() {
    paymentConnection->conn_open();
    updateStock();
    if (stockUpdated && stockLogUpdated){
        updatePayment();
        if (paymentSuccessfullyUpdated){
            updateSaleRecord(*updateTime);
            if (saleUpdated){
                if (*paymentMethod=="Cash" && *productRewardsEnabled && servingCustomer->customer_id!=NULL){
                    updateRewards();
                }
            }

        }

//        updateSaleData();



//        if(saleUpdated){
//
////            updateSaleRecord(*updateTime);
////
//        }
    }
//    updateSaleRecord();
//    updateCustomerSaleData();
    //send saleComplete
}
void CompletePaymentWindow::updatePayment() {
    if (*paymentMethod=="Cash"){
        updateCash();
//        if (cashSuccessfullyUpdated){
//            if (*productRewardsEnabled){
//                updateSaleData();
//                updateRewards();
//            }
//        }

        //rewards enabled ->asign rewards

    }else if (*paymentMethod=="Credit"){
        //check if credit is equal to purchase
        //if not, change payment to cash and credit
    }else if (*paymentMethod=="Cash+Credit"){
        //enter cash and check if credit suffices
    }else if (*paymentMethod=="Cash+Rewards"){
        //check rewards and see if cash suffices
    }else if (*paymentMethod=="Rewards"){
        //check if reward suffices
    }else{
        //Never get here
    }
    paymentSuccessfullyUpdated = true;
}
void CompletePaymentWindow::updateStock() {
    int new_quantity;
    int product_id;
    int quantity_purchased;
    float salePrice;
    bool rewardsEnabled;
    float rewardAmount;
    bool discountEnabled;
    float discountAmount;
    QString manipulationType = "Sales";
    QString effect = "Decrease";
    QString discounted;
    QString productRewarded;
    float discountTotal;
    float productRewardAmount;

    for(auto& it: *productsToBill){
        *updateTime = QDateTime::currentDateTime();
        QString updatedTime = updateTime->toString("yyyyMMddhhmmss");
        product_id = it.first;
        quantity_purchased = it.second.quantity_purchased;
        salePrice = it.second.salePrice;
        rewardsEnabled = it.second.prod_rewarded;
        rewardAmount = it.second.reward_amount;
        discountEnabled = it.second.prod_discounted;
        discountAmount = it.second.discount_amount;
        if (*productDiscountsEnabled && discountEnabled) {
            discounted = "Yes";
            discountTotal = quantity_purchased * discountAmount;
            *totalDiscount +=discountTotal;

        } else{
            discounted = "No";
            discountTotal = 0;
        }
        if(*productRewardsEnabled && rewardsEnabled){
            productRewarded = "Yes";
            productRewardAmount = quantity_purchased*rewardAmount;
            *totalRewards += productRewardAmount;

        }else{
            productRewarded = "No";
            productRewardAmount = 0;
        }
            if (paymentConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("completeSales"));
            query.prepare(QString("SELECT quantity FROM stock WHERE product_id = :productId"));
            query.bindValue(":productId", product_id);
            if(!query.exec()){
                QMessageBox::critical(this, "Database Error", query.lastError().text());
                return;
            }else{
                while (query.next()){
                    int stock_available = query.value(0).toInt();
                    new_quantity = stock_available-quantity_purchased;
                    *remainingStock = new_quantity;
                    query.exec(QString("UPDATE stock SET quantity="+QString::number(new_quantity)+", user_id= "+currentUser->user_id+" ,manipulatedOnDate = "+updatedTime+" WHERE product_id="+QString::number(product_id)));
                    if (!query.exec()){
                        QMessageBox::critical(this, "Database Error", query.lastError().text());
                        return;
                    }else{
                        updateStockLogs(product_id, manipulationType, quantity_purchased, discountEnabled, discountTotal, rewardsEnabled, productRewardAmount,  effect);
                        stockUpdated = true;
                    }
                }
            }
        } else{
                QMessageBox::critical(this, "Database Not Open", "Database not open!");
            }
    }

}

void CompletePaymentWindow::updateStockLogs(int& product_id, QString& manipulationType, int&quantity_purchased, bool& discounted,
        float & discountTotal, bool&productRewarded, float& productRewardAmount, QString &effect) {
        LOGx("I was called to do a job");
        if(paymentConnection->conn_open()){
            QSqlQuery query(QSqlDatabase::database("completeSales"));
            query.prepare(QString("INSERT INTO stock_log (product_id, manipulationType, quantity, total, discounted, discount_amount, rewarded, reward_amount, effect, sale_id, user_id, timeStamp)"
                                  "VALUES(:productId, :manipulationType, :quantity, :total, :discounted, :discountAmount, :rewarded, :rewardAmount, :effect, :saleId, :userId, :timeStamp)"));

            query.bindValue(":productId", product_id);
            query.bindValue(":manipulationType", manipulationType);
            query.bindValue(":quantity", quantity_purchased);
            query.bindValue(":total", *remainingStock);
            query.bindValue(":discounted", discounted);
            query.bindValue(":discountAmount", discountTotal);
            query.bindValue(":rewarded", productRewarded);
            query.bindValue(":rewardAmount", productRewardAmount);
            query.bindValue(":effect", effect);
            query.bindValue(":saleId", *currentTransactionId);
            query.bindValue(":userId", currentUser->user_id);
            query.bindValue(":timeStamp", *updateTime);
            if(!query.exec()){
                QMessageBox::critical(this, "Database Error", query.lastError().text());
            }else{
                stockLogUpdated = true;
            }
        }
}

void CompletePaymentWindow::updateCash() {
    float availableCash;
    if(paymentConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("completeSales"));
        query.prepare(QString("SELECT total FROM cash ORDER BY transaction_id DESC LIMIT 1"));
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else{
            while(query.next()){
                availableCash = query.value(0).toDouble();
                increaseCash(availableCash);
            }
        }
    }

}
void CompletePaymentWindow::increaseCash(float &cashAvailable) {
    float new_cash= cashAvailable + *amountToBePayed;
    QString effect = "increase";
    QString tempTransactionType = "Sale";
    if (paymentConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("INSERT INTO cash (transaction_type, amount, sales_id, total, effect, user_id, transaction_timestamp)"
                              "VALUES(:transactionType, :amount, :salesId, :total, :effect, :userId, :timeStamp)"));

        query.bindValue(":transactionType", tempTransactionType);
        query.bindValue(":amount", *amountToBePayed);
        query.bindValue(":salesId", *currentTransactionId);
        query.bindValue(":total", new_cash);
        query.bindValue(":effect", effect);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":timeStamp", *updateTime);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            cashSuccessfullyUpdated = true;
        }
    }
}

void CompletePaymentWindow::updateCustomerSaleData() {
//    for(auto& it: *productsToBill){
//        QDateTime updateTime = QDateTime::currentDateTime();
//        QString updatedTime = updateTime.toString("yyyyMMddhhmmss");
//
//        int product_id = it.first;
//        int quantity_purchased = it.second.quantity_purchased;
//        float salePrice = it.second.salePrice;
//        bool rewardsEnabled = it.second.prod_rewarded;
//        float rewardAmount = it.second.reward_amount;
//        bool discountEnabled = it.second.prod_discounted;
//        float discountAmount = it.second.discount_amount;
//        *totalDiscount =quantity_purchased*discountAmount;
//        *totalRewards = quantity_purchased*rewardAmount;
//
//        if (paymentConnection->conn_open()){
//            QSqlQuery query(QSqlDatabase::database("completeSales"));
//            query.prepare(QString("SELECT quantity FROM stock WHERE product_id = :productId"));
//            query.bindValue(":productId", product_id);
//            LOGxy("product ID", product_id);
//            if(!query.exec()){
//                QMessageBox::critical(this, "Database Error", query.lastError().text());
//                return;
//            }else{
//                while (query.next()){
//                    int stock_available = query.value(0).toInt();
//                    new_quantity = stock_available-quantity_purchased;
//                    query.exec(QString("UPDATE stock SET quantity="+QString::number(new_quantity)+", user_id= "+currentUser->user_id+" ,manipulatedOnDate = "+updatedTime+" WHERE product_id="+QString::number(product_id)));
//                    if (!query.exec()){
//                        QMessageBox::critical(this, "Database Error", query.lastError().text());
//                        return;
//                    }else{
//                        stockLogUpdated = true;
//                    }
//                }
//
//            }
//        } else{
//            QMessageBox::critical(this, "Database Not Open", "Database not open!");
//        }
//    }
}


void CompletePaymentWindow::on_btnCompleteSale_clicked()
{
    updateSaleData();
}

void CompletePaymentWindow::updateSaleRecord(QDateTime& transactionTime) {
    if(paymentConnection->conn_open()){

        QSqlQuery query(QSqlDatabase::database("completeSales"));
        query.prepare(QString("INSERT INTO sales (sale_id, sale_amount, reward_amount, discount_amount, payment_method, customer_id, user_id, transaction_dateTime)"
                              "VALUES(:saleId, :saleAmount, :rewardAmount, :discountAmount, :paymentMethod, :customerId, :userId, :transactionDateTime)"));

        query.bindValue(":saleId", *currentTransactionId);
        query.bindValue(":saleAmount", *amountToBePayed);
        query.bindValue(":rewardAmount", *totalRewards);
        query.bindValue(":discountAmount", *totalDiscount);
        query.bindValue(":paymentMethod", *paymentMethod);
        query.bindValue(":customerId", servingCustomer->customer_id);
        query.bindValue(":userId", currentUser->user_id);
        query.bindValue(":transactionDateTime", transactionTime);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        }else{
            saleUpdated = true;
        }
    }
}
void CompletePaymentWindow::updateRewards() {
    float totalRewardsAfterSale;
    if(paymentConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("completeSales"));
        query.prepare(QString("SELECT  IFNULL(customerRewards.total_rewards, 0) "
                              "FROM customerRewards WHERE customerRewards.customer_id =:customerId "
                              "ORDER BY customerRewards.reward_id DESC LIMIT 1"));
        query.bindValue(":customerId", servingCustomer->customer_id);
        if(!query.exec()){
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        }else {
            *customerAvailableRewards = query.value(0).toInt();
            totalRewardsAfterSale = *customerAvailableRewards + *totalRewards;

            while (query.next()){
                *customerAvailableRewards = query.value(0).toInt();
                totalRewardsAfterSale = *customerAvailableRewards + *totalRewards;
            }
            query.prepare(QString("INSERT INTO customerRewards (amount, customer_id, transaction_id, total_rewards)"
                                  "VALUES(:amount, :customerId, :transactionId, :totalRewards)"));
            query.bindValue(":amount", *totalRewards);
            query.bindValue(":customerId", servingCustomer->customer_id);
            query.bindValue(":transactionId", *currentTransactionId);
            query.bindValue(":totalRewards", totalRewardsAfterSale);
            if(!query.exec()){
                LOGxy("[ERROR] ", query.lastError().text().toStdString());
                QMessageBox::critical(this, "Database Error", query.lastError().text());
                return;
            }else {
                //COME BACK COMPLETE SALES
                LOGx("mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm");

            }
        }
    }
}






void CompletePaymentWindow::on_btnEditSale_clicked()
{

}

void CompletePaymentWindow::on_btnSaveCash_clicked()
{

}
//DEFINING THE PAYMENT METHOD
void CompletePaymentWindow::set_payment_to_cash() {
    LOGx("CASH");
    ui->lbl_cash_value->show();
    ui->lbl_cash_display->show();
    ui->lbl_MPesa_payment->hide();
    ui->cb_MPesa_display->hide();
    ui->lbl_credit_payment->hide();
    ui->lbl_credit_display->hide();
    ui->lbl_reward_payment->hide();
    ui->lbl_reward_display->hide();
    ui->lbl_display_amount_to_pay->setFocus();
}

void CompletePaymentWindow::set_payment_to_mpesa() {
    LOGx("MPESA");
    ui->lbl_cash_value->hide();
    ui->lbl_cash_display->hide();
    ui->lbl_MPesa_payment->show();
    ui->cb_MPesa_display->show();
    ui->lbl_credit_payment->hide();
    ui->lbl_credit_display->hide();
    ui->lbl_reward_payment->hide();
    ui->lbl_reward_display->hide();
    ui->cb_MPesa_display->setFocus();
}

void CompletePaymentWindow::set_payment_to_mpesa_cash() {
    ui->lbl_cash_value->show();
    ui->lbl_cash_display->show();
    ui->lbl_MPesa_payment->show();
    ui->cb_MPesa_display->show();
    ui->lbl_credit_payment->hide();
    ui->lbl_credit_display->hide();
    ui->lbl_reward_payment->hide();
    ui->lbl_reward_display->hide();
    ui->lbl_cash_display->setFocus();
    LOGx("MPESA+CASH");

}

void CompletePaymentWindow::set_payment_to_mpesa_credit() {
    LOGx("MPESA+CREDIT");
    ui->lbl_cash_value->hide();
    ui->lbl_cash_display->hide();
    ui->lbl_MPesa_payment->show();
    ui->cb_MPesa_display->show();
    ui->lbl_credit_payment->show();
    ui->lbl_credit_display->show();
    ui->lbl_reward_payment->hide();
    ui->lbl_reward_display->hide();
    ui->lbl_credit_display->setFocus();

}

void CompletePaymentWindow::set_payment_to_credit() {
    LOGx("CREDIT");
    ui->lbl_cash_value->hide();
    ui->lbl_cash_display->hide();
    ui->lbl_MPesa_payment->hide();
    ui->cb_MPesa_display->hide();
    ui->lbl_credit_payment->show();
    ui->lbl_credit_display->show();
    ui->lbl_reward_payment->hide();
    ui->lbl_reward_display->hide();
    ui->lbl_credit_display->setFocus();

}

void CompletePaymentWindow::set_payment_to_rewards() {
    LOGx("REWARDS");
    ui->lbl_cash_value->hide();
    ui->lbl_cash_display->hide();
    ui->lbl_MPesa_payment->hide();
    ui->cb_MPesa_display->hide();
    ui->lbl_credit_payment->hide();
    ui->lbl_credit_display->hide();
    ui->lbl_reward_payment->show();
    ui->lbl_reward_display->show();
    ui->lbl_reward_display->setFocus();

}

void CompletePaymentWindow::set_payment_to_cash_credit() {
    LOGx("CREDIT+CASH");
    ui->lbl_cash_value->show();
    ui->lbl_cash_display->show();
    ui->lbl_MPesa_payment->hide();
    ui->cb_MPesa_display->hide();
    ui->lbl_credit_payment->show();
    ui->lbl_credit_display->show();
    ui->lbl_reward_payment->hide();
    ui->lbl_reward_display->hide();
    ui->lbl_cash_display->setFocus();

}

void CompletePaymentWindow::set_payment_to_cash_rewards() {
    LOGx("REWARDS+CASH");
    ui->lbl_cash_value->show();
    ui->lbl_cash_display->show();
    ui->lbl_MPesa_payment->hide();
    ui->cb_MPesa_display->hide();
    ui->lbl_credit_payment->hide();
    ui->lbl_credit_display->hide();
    ui->lbl_reward_payment->show();
    ui->lbl_reward_display->show();
    ui->lbl_cash_display->setFocus();

}

void CompletePaymentWindow::set_payment_to_mpesa_rewards() {
    LOGx("MPESA+REWARDS");
    ui->lbl_cash_value->hide();
    ui->lbl_cash_display->hide();
    ui->lbl_MPesa_payment->show();
    ui->cb_MPesa_display->show();
    ui->lbl_credit_payment->hide();
    ui->lbl_credit_display->hide();
    ui->lbl_reward_payment->show();
    ui->lbl_reward_display->show();
    ui->lbl_reward_display->setFocus();

}


void CompletePaymentWindow::on_lbl_cash_display_textChanged(const QString &amount_paid)
{
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }

    LOGx(amount_paid.toStdString());
}

void CompletePaymentWindow::on_lbl_credit_display_textChanged(const QString &credit_changed)
{
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }

    LOGx(credit_changed.toStdString());
}

void CompletePaymentWindow::on_lbl_reward_display_textChanged(const QString &reward_amount)
{
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }

    LOGx(reward_amount.toStdString());
}

void CompletePaymentWindow::on_cb_MPesa_display_currentTextChanged(const QString &transaction_data)
{
    if (*paymentMethod=="Cash"){

    }else if (*paymentMethod=="MPesa"){

    }else if (*paymentMethod=="Credit"){

    }else if (*paymentMethod=="CashCredit"){

    }else if (*paymentMethod=="MPesaCash"){

    }else if (*paymentMethod=="MPesaCredit"){

    }else if (*paymentMethod=="MPesaRewards"){

    }else if (*paymentMethod=="Rewards"){

    }else if (*paymentMethod=="CashRewards"){

    }else {

    }

    LOGx(transaction_data.toStdString());
}
