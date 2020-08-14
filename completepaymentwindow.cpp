#include "completepaymentwindow.h"
#include "ui_completepaymentwindow.h"
CompletePaymentWindow::CompletePaymentWindow(QWidget *parent, loggedUser &currentLoggedInUser,
        std::map<int, purchasedItem>&productsBought,   Customer& currentServingCustomer, int& totalToPay) :
    QDialog(parent),
    ui(new Ui::CompletePaymentWindow)
{
    ui->setupUi(this);
    productToDatabasaeSales = new std::map<QString, int>;
    userOnCashier = new loggedUser;
    amountToBePayed = new int;
    amountPaid = new int;
    balanceForClient = new int;
    *amountPaid = 0;

//    *productToDatabasaeSales = productsBought;
    *userOnCashier = currentLoggedInUser;
    *amountToBePayed = totalToPay;
    ui->cb_paymentMethod->setCurrentIndex(1);

    ui->le_amountTotal->setText(QString::number(*amountToBePayed));
    ui->le_paymentMethod->setText(ui->cb_paymentMethod->currentText());
    ui->le_amountPaid->setText(QString::number(*amountPaid));
    setPaymentLabel();
    ui->le_amountPaid->setFocus();
    QObject::connect(ui->le_amountPaid, SIGNAL(returnPressed()),
                     this, SLOT(getCashComputeBalance()));
//ui->le_amountPaid->textChanged()






    currentUser = new loggedUser;
    servingCustomer = new Customer;
    productsToBill = new std::map<int, purchasedItem>;

    *currentUser = currentLoggedInUser;
    *servingCustomer = currentServingCustomer;
    *productsToBill = productsBought;

    for(auto& it: productsBought){

        LOGx("=====================================================");
        LOGxy("purchased", it.first);
        LOGxy("purchased", it.second.quantity_purchased);
        LOGxy("bool dis", it.second.prod_discounted);
        LOGxy("dis amount", it.second.discount_amount);
        LOGxy("bool reward", it.second.prod_rewarded);
        LOGxy("rew amount", it.second.reward_amount);
        LOGx("=====================================================");

    }
    LOGx(currentServingCustomer.phone.toStdString());
    LOGx(currentUser->user_id.toInt());
}

CompletePaymentWindow::~CompletePaymentWindow()
{
    delete ui;
}

void CompletePaymentWindow::setPaymentLabel() {
    if(ui->cb_paymentMethod->currentIndex()==1){
        QPixmap mypix("/home/vee/pointOfSale/resources/new_icons_2/money.jpg");
        ui->lbl_paymentMethod->setPixmap(mypix.scaled(ui->lbl_paymentMethod->size(), Qt::KeepAspectRatio));
//        ui->lbl_myavatar->setPixmap(mypix.scaled(ui->lbl_myavatar->size(), Qt::KeepAspectRatio));
//        ui->lbl_paymentMethod->setStyleSheet(mypix);
    }else if(ui->cb_paymentMethod->currentIndex()==2){

    }else if(ui->cb_paymentMethod->currentIndex()==3){

    }else if(ui->cb_paymentMethod->currentIndex()==4){

    }else if(ui->cb_paymentMethod->currentIndex()==1){

    }else{
        LOGx("Nothing");
    }
}

void CompletePaymentWindow::on_btn_fifty_clicked()
{
    *amountPaid+=50;
    ui->le_amountPaid->setText(QString::number(*amountPaid));
    ui->le_amountPaid->setFocus();

}
void CompletePaymentWindow::on_btn_oneHundred_clicked()
{
    *amountPaid+=100;
    ui->le_amountPaid->setText(QString::number(*amountPaid));
    ui->le_amountPaid->setFocus();

}
void CompletePaymentWindow::on_btn_twoHundred_clicked()
{
    *amountPaid+=200;
    ui->le_amountPaid->setText(QString::number(*amountPaid));
    ui->le_amountPaid->setFocus();
}

void CompletePaymentWindow::on_btn_fiveHundred_clicked()
{
    *amountPaid+=500;
    ui->le_amountPaid->setText(QString::number(*amountPaid));
    ui->le_amountPaid->setFocus();
}

void CompletePaymentWindow::on_btn_oneThousand_clicked()
{
    *amountPaid+=1000;
    ui->le_amountPaid->setText(QString::number(*amountPaid));
    ui->le_amountPaid->setFocus();
}

void CompletePaymentWindow::on_btn_credit_clicked()
{
    *amountPaid+=100;
    ui->le_amountPaid->setText(QString::number(*amountPaid));
    ui->le_amountPaid->setFocus();
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
    *amountPaid = ui->le_amountPaid->text().toInt();
    getCashComputeBalance();
}
