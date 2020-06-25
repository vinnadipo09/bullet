#ifndef SUPERVISORWINDOW_H
#define SUPERVISORWINDOW_H

#include <QMainWindow>
#include "debugger.h"
namespace Ui {
class SupervisorWindow;
}

class SupervisorWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SupervisorWindow(QWidget *parent, loggedUser &currentLoggedInUser);
    ~SupervisorWindow();

private slots:
    void on_pb_logout_supervisor_clicked();

    void on_btn_viewProfile_clicked();

private:
    Ui::SupervisorWindow *ui;
signals:
    void send_supervisor_logged_out();
};

#endif // SUPERVISORWINDOW_H
