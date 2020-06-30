#ifndef EDITSUPPLIER_H
#define EDITSUPPLIER_H

#include <QDialog>

namespace Ui {
class EditSupplier;
}

class EditSupplier : public QDialog
{
    Q_OBJECT

public:
    explicit EditSupplier(QWidget *parent = nullptr);
    ~EditSupplier();

private:
    Ui::EditSupplier *ui;
};

#endif // EDITSUPPLIER_H
