#include "producteditor.h"
#include "ui_producteditor.h"

ProductEditor::ProductEditor(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView) :
    QDialog(parent),
    ui(new Ui::ProductEditor)
{
    ui->setupUi(this);
    productEdit = new productFromDb;
    *productEdit = currentProductToView;
    editProductConnection = new databaseConnection;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    ui->leProductImage->setText(productEdit->product_image);
    ui->leProductName->setText(productEdit->product_name);
    ui->cbProductCategory->setCurrentText(productEdit->product_cat);
    ui->leProductUniqueId->setText(productEdit->product_barcode);
    ui->leProductShortCode->setText(productEdit->product_shortcode);
    ui->leProductQuantity->setText(productEdit->product_quantity);
    ui->leWholeSalePrice->setText(QString::number(productEdit->product_wsprice));
    ui->leRetailPrice->setText(QString::number(productEdit->product_rtprice));
    QPixmap viewPixmap(productEdit->product_image);
    ui->lbl_avatar->setPixmap(viewPixmap.scaled(ui->lbl_avatar->size(), Qt::KeepAspectRatio));

}

ProductEditor::~ProductEditor()
{
    delete ui;
}

void ProductEditor::on_btnUpdate_clicked()
{

}

void ProductEditor::on_btnCancel_clicked()
{

}

void ProductEditor::on_btnAvatar_clicked()
{

}

void ProductEditor::updateProduct() {

}
