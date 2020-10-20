#ifndef COMPLETEPAYMENTWINDOW_H
#define COMPLETEPAYMENTWINDOW_H

#include <QDialog>
#include "debugger.h"
#include <map>
#include <QMessageBox>
#include "databaseconnection.h"
namespace Ui {
class CompletePaymentWindow;
}

class CompletePaymentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CompletePaymentWindow(QWidget *parent, loggedUser &currentLoggedInUser,
            int& currentSaleId, std::map<int, purchasedItem>&productsBought, bool &rewards, float rewardTotal,
            bool &discounts, float discountTotal, Customer&, int& totalToPay, int& minimumReward, int & maximumCredit);
    ~CompletePaymentWindow();

private slots:
    void on_btn_fifty_clicked();
    void on_btn_twoHundred_clicked();
    void on_btn_fiveHundred_clicked();
    void on_btn_oneThousand_clicked();
    void on_btn_credit_clicked();
    void on_btn_oneHundred_clicked();
private slots:
    void getCashComputeBalance();
    void on_le_amountPaid_textChanged(const QString &arg1);
    void on_btnCompleteSale_clicked();

    void on_btnEditSale_clicked();

    void on_btnSaveCash_clicked();

    void on_lblValueOne_returnPressed();

    void on_lblValueTwo_returnPressed();

private:
    Ui::CompletePaymentWindow *ui;
private:
    std::map<QString, int>*productToDatabasaeSales;
    loggedUser* userOnCashier;
    int* amountToBePayed;
private:
    int* amountPaid;
    int* balanceForClient;
    bool isPaidAmountSufficient = false;
private:
    void postSaleToDb(loggedUser &, std::map<QString, int>&, int &);

private:
    loggedUser* currentUser;
    Customer* servingCustomer;
    std::map<int, purchasedItem>* productsToBill;
    int* currentTransactionId;
    void updateSaleData();
    void updateStock();
    void updateStockLogs(int& product_id, QString& manipulationType, int&quantity_purchased, bool& discounted,
                         float & discountTotal, bool&productRewarded, float& productRewardAmount, QString &effect);
    void updateCash();
    void updateCustomerSaleData();
    void updateSaleRecord(QDateTime& transactionTime);
    bool saleUpdated;
    bool stockUpdated = false;
    void increaseCash(float &cashAvailable);
    bool cashSuccessfullyUpdated = false;
private:
    float* totalDiscount;
    float* totalRewards;
    float* single_product_discTotal;
    float* single_product_rewTotal;
    int* minimumRewardForPayment;
    int* maximumBusinessCredit;
    int* remainingStock;
    QDateTime *updateTime;
    bool *productRewardsEnabled;
    bool *productDiscountsEnabled;
signals:
//    void sendSaleComplete();

private:
    databaseConnection* paymentConnection;
    bool stockLogUpdated;
    bool stockQuantityAndLogsUpdated;
    QString* paymentMethod;
    void updatePayment();
    void updateRewards();
    float* customerAvailableRewards;
    bool customerRewardsUpdateComplete = false;
    bool paymentSuccessfullyUpdated = false;
private:
    int* cashValue;
    int* creditValue;
    int* rewardValue;
};

#endif // COMPLETEPAYMENTWINDOW_H
