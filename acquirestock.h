#ifndef ACQUIRESTOCK_H
#define ACQUIRESTOCK_H

#include <QDialog>
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

private:
    Ui::AcquireStock *ui;
private:
    databaseConnection* stockAcquisitionConnection;
    loggedUser* currentUser;
private:
    void loadSuppliers();
    void loadProducts();

};

#endif // ACQUIRESTOCK_H
