#ifndef CHANGEUSERNAME_H
#define CHANGEUSERNAME_H

#include <QDialog>
#include "debugger.h"
namespace Ui {
class ChangeUsername;
}

class ChangeUsername : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeUsername(QWidget *parent, loggedUser &currentLoggedInUser);
    ~ChangeUsername();

private:
    Ui::ChangeUsername *ui;
private:
    loggedUser* profileUser;
};

#endif // CHANGEUSERNAME_H
