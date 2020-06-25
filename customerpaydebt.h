#ifndef CUSTOMERPAYDEBT_H
#define CUSTOMERPAYDEBT_H

#include <QDialog>

namespace Ui {
class CustomerPayDebt;
}

class CustomerPayDebt : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerPayDebt(QWidget *parent = nullptr);
    ~CustomerPayDebt();

private:
    Ui::CustomerPayDebt *ui;
};

#endif // CUSTOMERPAYDEBT_H
