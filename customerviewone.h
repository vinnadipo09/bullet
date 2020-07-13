#ifndef CUSTOMERVIEWONE_H
#define CUSTOMERVIEWONE_H

#include <QDialog>

namespace Ui {
class CustomerViewOne;
}

class CustomerViewOne : public QDialog
{
    Q_OBJECT

public:
    explicit CustomerViewOne(QWidget *parent = nullptr);
    ~CustomerViewOne();

private:
    Ui::CustomerViewOne *ui;
};

#endif // CUSTOMERVIEWONE_H
