#ifndef PRODUCTDISCOUNTEDITOR_H
#define PRODUCTDISCOUNTEDITOR_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class ProductDiscountEditor;
}

class ProductDiscountEditor : public QDialog
{
    Q_OBJECT

public:
    explicit ProductDiscountEditor(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView);
    ~ProductDiscountEditor();

private slots:
    void on_btnApply_clicked();
    void on_btnCancel_clicked();

private:
    Ui::ProductDiscountEditor *ui;
private:
    databaseConnection* discountConnection;
    productFromDb* productDiscountEdit;
    loggedUser* currentUser;
    void updateDiscountValue();

    bool updateComplete = false;
signals:
    void discountWorkComplete();
};

#endif // PRODUCTDISCOUNTEDITOR_H
