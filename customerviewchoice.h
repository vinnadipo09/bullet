#ifndef CUSTOMERVIEWCHOICE_H
#define CUSTOMERVIEWCHOICE_H

#include <QDialog>

namespace Ui {
class CustomerViewChoice;
}

class CustomerViewChoice : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerViewChoice(QWidget *parent = nullptr);
    ~CustomerViewChoice();

private:
    Ui::CustomerViewChoice *ui;
};

#endif // CUSTOMERVIEWCHOICE_H
