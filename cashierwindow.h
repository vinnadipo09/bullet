#ifndef CASHIERWINDOW_H
#define CASHIERWINDOW_H

#include <QMainWindow>
#include "debugger.h"
namespace Ui {
class CashierWindow;
}

class CashierWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CashierWindow(QWidget *parent, loggedUser &currentLoggedInUser);
    ~CashierWindow();

private slots:
    void on_pb_logout_cashier_clicked();

    void on_btn_viewProfile_clicked();

private:
    Ui::CashierWindow *ui;
signals:
    void send_cashier_logged_out();
};

#endif // CASHIERWINDOW_H
