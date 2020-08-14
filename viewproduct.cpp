#include "viewproduct.h"
#include "ui_viewproduct.h"

ViewProduct::ViewProduct(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView) :
    QDialog(parent),
    ui(new Ui::ViewProduct)
{
    ui->setupUi(this);
    productToView = new productFromDb;
    *productToView = currentProductToView;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    ui->image->setText(productToView->product_image);
    ui->name->setText(productToView->product_name);
    ui->barcode->setText(productToView->product_barcode);
    ui->shortCode->setText(productToView->product_shortcode);
    ui->qty->setText(productToView->product_quantity);
    ui->wPrice->setText(QString::number(productToView->product_wsprice));
    ui->rPrice->setText(QString::number(productToView->product_rtprice));
    ui->reward->setText(QString::number(productToView->product_rewards));
    ui->discount->setText(QString::number(productToView->product_discount));
    ui->modDate->setText(productToView->modifiedAt.toString());
    ui->user->setText(QString::number(productToView->modifiedBy));
    QPixmap viewPixmap(productToView->product_image);
    ui->lbl_avatar->setPixmap(viewPixmap.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));
}

ViewProduct::~ViewProduct()
{
    delete ui;
}

void ViewProduct::on_btnReward_clicked()
{
    editReward = new ProductRewardEditor(this, *currentUser, *productToView);
    editReward->show();
    QObject::connect(editReward, SIGNAL(rewardWorkComplete()), this, SLOT(receiveRewardWorkComplete()));

}

void ViewProduct::on_btnDiscount_clicked()
{
    editDiscount = new ProductDiscountEditor(this, *currentUser, *productToView);
    editDiscount->show();
    QObject::connect(editDiscount, SIGNAL(discountWorkComplete()), this, SLOT(receiveDiscountWorkComplete()));


}

void ViewProduct::on_btnEditProduct_clicked()
{
    editProduct = new ProductEditor(this, *currentUser, *productToView);
    editProduct->show();
    QObject::connect(editProduct, SIGNAL(productEditingCompleted()), this, SLOT(receiveEditWorkComplete()));
}

void ViewProduct::on_btnClose_clicked()
{
    this->close();
}

void ViewProduct::on_btnDelete_clicked()
{

}

void ViewProduct::receiveEditWorkComplete() {
    int id = productToView->product_id;
    editProduct->close();
    this->close();
    emit reloadProductWithNewValues(id);
}
void ViewProduct::hideButtons() {
    ui->btnReward->setDisabled(true);
    ui->btnDiscount->setDisabled(true);
    ui->btnDelete->setDisabled(true);
    ui->btnEditProduct->setDisabled(true);

}

void ViewProduct::receiveDiscountWorkComplete() {
    int id = productToView->product_id;
    editDiscount->close();
    this->close();
    emit reloadProductWithNewValues(id);
}

void ViewProduct::receiveRewardWorkComplete() {
    int id = productToView->product_id;
    editReward->close();
    this->close();
    emit reloadProductWithNewValues(id);
}
