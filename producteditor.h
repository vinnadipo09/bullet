#ifndef PRODUCTEDITOR_H
#define PRODUCTEDITOR_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
#include "verifynewproduct.h"

namespace Ui {
class ProductEditor;
}

class ProductEditor : public QDialog
{
    Q_OBJECT

public:
    explicit ProductEditor(QWidget *parent , loggedUser &currentLoggedInUser, productFromDb &currentProductToView);
    ~ProductEditor();

private slots:
    void on_btnUpdate_clicked();
    void on_btnCancel_clicked();
    void on_btnAvatar_clicked();

private:
    Ui::ProductEditor *ui;

private:
    databaseConnection* editProductConnection;
    productFromDb* productEdit;
    loggedUser* currentUser;
    void updateProduct();
    void loadProductCategory();
    bool updateComplete = false;
    void grabAllProductDetails();
    void checkIfAllFieldsCaptured();
    void checkForDuplicateProducts();
    bool allValuesTyped = false;
    bool selectionFilled = false;
    bool productAlreadyExists= false;

private:
    VerifyNewProduct* verifyProduct;

signals:
    void productEditingCompleted();
};

#endif // PRODUCTEDITOR_H
