#include "quantitycontrol.h"
#include "ui_quantitycontrol.h"

QuantityControl::QuantityControl(QWidget *parent, loggedUser &currentLoggedInUser, int& productId, QString& product, int &currentQty, int &maxQty) :
    QDialog(parent),
    ui(new Ui::QuantityControl)
{
    ui->setupUi(this);
    productToModify = new QString;
    assignedQty = new int;
    maximumQty = new int;
    productID_toModify = new int;

    *productToModify = product;
    *assignedQty = currentQty;
    *maximumQty = maxQty;
    *productID_toModify= productId;


    ui->lblProductName->setText(*productToModify);
    ui->lineEditProductQuantity->setText(QString::number(*assignedQty+1));
    ui->spinBoxQuantity->setMinimum(minimumValue);
    ui->spinBoxQuantity->setMaximum(*maximumQty);
    ui->spinBoxQuantity->setValue(ui->lineEditProductQuantity->text().toInt());
    ui->lineEditProductQuantity->setFocus();

}

QuantityControl::~QuantityControl()
{
    delete ui;
}

void QuantityControl::on_lineEditProductQuantity_textChanged(const QString &arg1)
{
    if (arg1.toInt()<=*maximumQty){
        ui->spinBoxQuantity->setValue(arg1.toInt());
    }else if(arg1.toInt()<minimumValue){
        QMessageBox::warning(this, "Product Quantity Warning!", "You cannot set value below ONE(1)");
    }else{
        QMessageBox::critical(this, "Product Quantity Error!", "You are trying to exceed available stock");

    }
}

void QuantityControl::on_spinBoxQuantity_valueChanged(int arg1)
{
    if (arg1<=*maximumQty) {
        ui->lineEditProductQuantity->setText(QString::number(arg1));
    }else if(arg1<minimumValue){
        QMessageBox::warning(this, "Product Deletion Warning!", "Setting Quantity to Zero(0) will DELETE the item");
    }else{
        QMessageBox::critical(this, "Product Quantity Error!", "You are trying to exceed available stock");
    }
}

void QuantityControl::keyPressEvent(QKeyEvent *event) {
    if (event->key()==Qt::Key_Up){
        if (*assignedQty+1 <=*maximumQty){
            *assignedQty+=1;
            ui->lineEditProductQuantity->setText(QString::number(*assignedQty));
        }else{
            QMessageBox::critical(this, "Product Quantity Error!", "You are trying to exceed available stock");
        }
    }else if(event->key()==Qt::Key_Down){
        if (*assignedQty-1 >1){
            *assignedQty-=1;
            ui->lineEditProductQuantity->setText(QString::number(*assignedQty));
        }else{
            QMessageBox::warning(this, "Product Deletion Warning!", "Setting Quantity to Zero(0) will DELETE the item");
        }
    }else if(event->key()==Qt::Key_Enter){
        emit send_Quantity_Changes(*productID_toModify, *assignedQty);
    }
//    else if(event->key()==Qt::Key_Left){
//        LOGx("decrease item on list");
//    }else if(event->key()==Qt::Key_Right){
//        LOGx("increase item on list");
//    }else if(event->key()==Qt::Key_Delete){
//        LOGx("increase item on list");
//    }else if(event->key()==Qt::Key_Enter){
//        LOGx("increase item on list");
}

void QuantityControl::on_btnApproveQty_clicked()
{
    emit send_Quantity_Changes(*productID_toModify, *assignedQty);
}

void QuantityControl::on_btnOK_clicked()
{
    emit send_Quantity_Changes(*productID_toModify, *assignedQty);
}
