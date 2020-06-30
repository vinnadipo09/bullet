#ifndef ACQUIRESTOCK_H
#define ACQUIRESTOCK_H

#include <QDialog>
#include <iostream>
#include <iterator>
#include <map>
#include <QCompleter>
#include <QCalendarWidget>
#include "databaseconnection.h"
#include "debugger.h"
namespace Ui {
class AcquireStock;
}

class AcquireStock : public QDialog
{
    Q_OBJECT

public:
    explicit AcquireStock(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AcquireStock();

private slots:
    void on_btnCalender_clicked();
    void on_btnApply_clicked();
    void on_btnCancel_clicked();
    void grabCurrentDate();

private:
    Ui::AcquireStock *ui;
private:
    databaseConnection* stockAcquisitionConnection;
    loggedUser* currentUser;
    QCalendarWidget *calendar;

private:
    void loadSuppliers();
    void loadProducts();

private:
    QString* supplierName;
    QString* phoneNumber;
    QString* product;
    QCompleter *SupplierCompleter;
    QCompleter *ProductCompleter;


};

#endif // ACQUIRESTOCK_H
