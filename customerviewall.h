#ifndef CUSTOMERVIEWALL_H
#define CUSTOMERVIEWALL_H

#include <QDialog>

namespace Ui {
class CustomerViewAll;
}

class CustomerViewAll : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerViewAll(QWidget *parent = nullptr);
    ~CustomerViewAll();

private:
    Ui::CustomerViewAll *ui;
};

#endif // CUSTOMERVIEWALL_H
