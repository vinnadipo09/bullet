#ifndef VERIFYNEWPRODUCT_H
#define VERIFYNEWPRODUCT_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class VerifyNewProduct;
}

class VerifyNewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit VerifyNewProduct(QWidget *parent, loggedUser &currentLoggedInUser, productToDatabase& productToDb);
    ~VerifyNewProduct();

private slots:
    void on_btnApply_clicked();

    void on_btnCancel_clicked();

    void on_editRecord_clicked();

private:
    Ui::VerifyNewProduct *ui;
private:
    databaseConnection* productVerConnection;
    productToDatabase* verifyProduct;
    loggedUser* currentUser;

private:
    void enterNewIntoDb();
    void enterDiscount();
    void enterRewards(int &);

private:
    bool productAdditionSuccessful = false;
    bool discountAdditionSuccessful= false;
    bool rewardsAdditionSuccessful= false;
    int* productIdToDiscount;
    void addDiscountToDatabase();
signals:
    void productAdditionJobComplete();
    void editRequested();
    void discardRequested();

};

#endif // VERIFYNEWPRODUCT_H
