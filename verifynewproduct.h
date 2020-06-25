#ifndef VERIFYNEWPRODUCT_H
#define VERIFYNEWPRODUCT_H

#include <QDialog>

namespace Ui {
class VerifyNewProduct;
}

class VerifyNewProduct : public QDialog
{
    Q_OBJECT

public:
    explicit VerifyNewProduct(QWidget *parent = nullptr);
    ~VerifyNewProduct();

private:
    Ui::VerifyNewProduct *ui;
};

#endif // VERIFYNEWPRODUCT_H
