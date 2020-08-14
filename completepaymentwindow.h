#ifndef COMPLETEPAYMENTWINDOW_H
#define COMPLETEPAYMENTWINDOW_H

#include <QDialog>
#include "debugger.h"
#include <map>
namespace Ui {
class CompletePaymentWindow;
}

class CompletePaymentWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CompletePaymentWindow(QWidget *parent, loggedUser &currentLoggedInUser,
            std::map<int, purchasedItem>&productsBought,   Customer&, int& totalToPay);
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
private:
    Ui::CompletePaymentWindow *ui;
private:
    std::map<QString, int>*productToDatabasaeSales;
    loggedUser* userOnCashier;
    int* amountToBePayed;
    void setPaymentLabel();
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
};

#endif // COMPLETEPAYMENTWINDOW_H
