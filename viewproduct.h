#ifndef VIEWPRODUCT_H
#define VIEWPRODUCT_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
#include "producteditor.h"
#include "productdiscounteditor.h"
#include "productrewardeditor.h"

namespace Ui {
class ViewProduct;
}

class ViewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit ViewProduct(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView);
    ~ViewProduct();

private slots:
    void on_btnReward_clicked();
    void on_btnDiscount_clicked();
    void on_btnEditProduct_clicked();
    void on_btnClose_clicked();
    void on_btnDelete_clicked();

private:
    Ui::ViewProduct *ui;
private:
    productFromDb* productToView;
private:
    loggedUser* currentUser;
    ProductEditor* editProduct;
    ProductDiscountEditor* editDiscount;
    ProductRewardEditor* editReward;

private slots:
    void receiveDiscountWorkComplete();
    void receiveEditWorkComplete();
    void receiveRewardWorkComplete();

signals:
    void reloadProductWithNewValues( int productId);

public:
    void hideButtons();

};

#endif // VIEWPRODUCT_H
