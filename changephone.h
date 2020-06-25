#ifndef CHANGEPHONE_H
#define CHANGEPHONE_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class ChangePhone;
}

class ChangePhone : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePhone(QWidget *parent, loggedUser &currentLoggedInUser);
    ~ChangePhone();

private:
    Ui::ChangePhone *ui;
};

#endif // CHANGEPHONE_H
