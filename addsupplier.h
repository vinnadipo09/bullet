#ifndef ADDSUPPLIER_H
#define ADDSUPPLIER_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class AddSupplier;
}

class AddSupplier : public QDialog
{
    Q_OBJECT

public:
    explicit AddSupplier(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AddSupplier();

private slots:
    void on_btnApply_clicked();

    void on_btnCancel_clicked();

private:
    Ui::AddSupplier *ui;


private:
    posUser* newUser;
    void grabSupplierDetails();
    void checkIfAllFieldsAreFilled();
    void checkForDuplicates();
    loggedUser* currentUser;
    databaseConnection* addSupplierConnection;
    bool supplierExists=false;
    bool allFieldsFilled=false;
    bool supplierAddedSuccessfully;
    void clearAllFields();
    void insertSupplierIntoDb();
    supplierUser* newSupplier;
signals:
    void supplierAdditionSuccess();
};

#endif // ADDSUPPLIER_H
