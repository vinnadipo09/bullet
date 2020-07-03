#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QDialog>
#include <QFileInfo>
#include <QFileDialog>
#include "debugger.h"
#include "databaseconnection.h"
#include "verifynewproduct.h"
namespace Ui {
class AddProduct;
}

class AddProduct : public QDialog
{
    Q_OBJECT

public:
    explicit AddProduct(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AddProduct();

private slots:
    void on_btnAvatar_clicked();

    void on_btnOkay_clicked();

    void on_btnCancel_clicked();

private:
    Ui::AddProduct *ui;

private:
    databaseConnection* addProductConnection;
    loggedUser* currentUser;
    productToDatabase* productTodB;
    void loadProductCategoryToComboBox();
    void loadProductZonesToCBox();

    void grabAllProductDetails();
    void checkIfAllFieldsCaptured();
    void checkForDuplicateProducts();
    bool allFieldsFilled = false;
    bool allValuesCaptured = false;
    bool selectionFilled = false;
    bool productAlreadyExists= false;
    bool zoneSelectionFilled = false;

private:
    void proceedToVerification();
    VerifyNewProduct* verifyProduct;
private slots:
    void receiveEditRequest();
    void receiveDiscardRequest();
    void receiveAdditionCompletion();
signals:
    void productAdditionCompleted();
};

#endif // ADDPRODUCT_H
