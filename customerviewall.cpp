#include "customerviewall.h"
#include "ui_customerviewall.h"

CustomerViewAll::CustomerViewAll(QWidget *parent, loggedUser &currentLoggedInUser) :
    QDialog(parent),
    ui(new Ui::CustomerViewAll)
{
    ui->setupUi(this);
    allViewConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;

    loadAllCustomers();

}

CustomerViewAll::~CustomerViewAll()
{
    delete ui;
}

void CustomerViewAll::loadAllCustomers() {
    allViewConnection->conn_open();
    if (allViewConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT COUNT(customer_id) FROM customers"));
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
            return;
        } else {
            while (query.next()) {
                LOGx("working");

                int numCashRows = query.value(0).toInt();
                ui->twCustomersAgents->setRowCount(numCashRows);
                query.prepare(
                        "SELECT customers.customer_id, customers.customer_name, customers.customer_type, customers.customer_phone, "
                        "users.name, customers.modified_on,customerCash.total, customerCredits.credit_allowed, customerCredits.credit_remaining, "
                        "customerCredits.credit_rating, customerRewards.total_rewards, (SELECT COUNT(IFNULL(customerDebt.debt_id, '0')) "
                        "WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Active') as activeDebtCount, "
                        "(SELECT SUM(IFNULL(customerDebt.amount, '0')) WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Active') "
                        "as activeDebtTotal, (SELECT COUNT(IFNULL(customerDebt.debt_id, '0')) WHERE customerDebt.customer_id=customers.customer_id "
                        "AND customerDebt.status='Overdue') as overdueDebtCount, (SELECT SUM(IFNULL(customerDebt.amount, '0')) "
                        "WHERE customerDebt.customer_id=customers.customer_id AND customerDebt.status='Overdue') as overdueDebtTotal "
                        "FROM customers  LEFT JOIN users ON users.user_id = customers.customer_id LEFT JOIN customerDebt ON "
                        "customerDebt.customer_id = customers.customer_id LEFT JOIN  customerRewards ON customerRewards.customer_id = customers.customer_id "
                        "LEFT JOIN customerCredits ON customerCredits.customer_id = customers.customer_id LEFT JOIN customerCash ON "
                        "customerCash.customerCash_id = customers.customer_id GROUP BY customerDebt.customer_id, customers.customer_id, "
                        "customerCash.customerCash_id, customerCredits.credit_remaining, customerRewards.customer_id, "
                        "customerCredits.credit_allowed, customerRewards.total_rewards, customerDebt.status, customerCredits.credit_rating");
                if (!query.exec()) {
                    QMessageBox::critical(this, "Database Error", query.lastError().text());
                } else {
                    for (rows = 0, query.first(); query.isValid(); query.next(), rows++) {
                        for (columns = 0; columns < 16; columns++) {
                            if (columns == 15) {
                                QPushButton *btn_viewProductCategory = new QPushButton;
                                btn_viewProductCategory->setText("View");
                                ui->twCustomersAgents->setCellWidget(rows, 15, btn_viewProductCategory);
//                                QObject::connect(btn_viewProductCategory, &QPushButton::clicked, this,
//                                                 &CustomerViewAll::receiveViewCustomer);
                            }
                            ui->twCustomersAgents->setItem(rows, columns,
                                                        new QTableWidgetItem(query.value(columns).toString()));
                        }
                    }
                }
            }
        }
    }
}
void CustomerViewAll::receiveViewCustomer() {

}
