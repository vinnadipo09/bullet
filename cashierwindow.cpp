#include "cashierwindow.h"
#include "ui_cashierwindow.h"

CashierWindow::CashierWindow(QWidget *parent, loggedUser &currentLoggedInUser) :
    QMainWindow(parent),
    ui(new Ui::CashierWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

CashierWindow::~CashierWindow()
{
    delete ui;
}

void CashierWindow::on_pb_logout_cashier_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    emit send_cashier_logged_out();
}

void CashierWindow::on_btn_viewProfile_clicked()
{

}
