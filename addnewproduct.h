#ifndef ADDNEWPRODUCT_H
#define ADDNEWPRODUCT_H

#include <QDialog>
#include "debugger.h"
#include "debugger.h"
#include "databaseconnection.h"

namespace Ui {
class AddNewProduct;
}

class AddNewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit AddNewProduct(QWidget *parent, loggedUser &currentLoggedInUser);
    ~AddNewProduct();

private slots:
    void on_btnOkay_clicked();

    void on_btnCancel_clicked();

    void on_btnAvatar_clicked();

private:
    Ui::AddNewProduct *ui;
private:
    databaseConnection* addProductConnection;
    loggedUser* currentUser;
    QString* category;
    productToDatabase* productTodB;
    void loadProductCategoryToComboBox();
    void grabAllProductDetails();
    void checkIfAllFieldsCaptured();
    void checkForDuplicateProducts();
    void resolveDatabaseValues();
    bool allFieldsFilled = false;
    bool allvaluesTyped = false;
    bool selectionFilled = false;

};

#endif // ADDNEWPRODUCT_H
