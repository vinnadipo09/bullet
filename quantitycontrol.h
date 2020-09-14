#ifndef QUANTITYCONTROL_H
#define QUANTITYCONTROL_H

#include <QDialog>
#include <QKeyEvent>

#include "debugger.h"

namespace Ui {
class QuantityControl;
}

class QuantityControl : public QDialog
{
    Q_OBJECT

public:
    explicit QuantityControl(QWidget *parent, loggedUser &currentLoggedInUser, int& productID, QString& product, int &currentQty, int &maxQty);
    ~QuantityControl();

private slots:
    void on_lineEditProductQuantity_textChanged(const QString &arg1);
    void on_spinBoxQuantity_valueChanged(int arg1);

    void on_btnApproveQty_clicked();

    void on_btnOK_clicked();

private:
    Ui::QuantityControl *ui;
private:
    QString* productToModify;
    int* maximumQty;
    int* assignedQty;
    int* productID_toModify;
private:
    void keyPressEvent(QKeyEvent *event);
    int minimumValue = 1;

signals:
    void send_Quantity_Changes(int &productId, int &quantity);
};

#endif // QUANTITYCONTROL_H
