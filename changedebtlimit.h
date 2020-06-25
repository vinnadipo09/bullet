#ifndef CHANGEDEBTLIMIT_H
#define CHANGEDEBTLIMIT_H

#include <QDialog>

namespace Ui {
class ChangeDebtLimit;
}

class ChangeDebtLimit : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeDebtLimit(QWidget *parent = nullptr);
    ~ChangeDebtLimit();

private:
    Ui::ChangeDebtLimit *ui;
};

#endif // CHANGEDEBTLIMIT_H
