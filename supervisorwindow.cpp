#include "supervisorwindow.h"
#include "ui_supervisorwindow.h"

SupervisorWindow::SupervisorWindow(QWidget *parent, loggedUser &currentLoggedInUser) :
    QMainWindow(parent),
    ui(new Ui::SupervisorWindow)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
}

SupervisorWindow::~SupervisorWindow()
{
    delete ui;
}

void SupervisorWindow::on_pb_logout_supervisor_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    emit send_supervisor_logged_out();
}

void SupervisorWindow::on_btn_viewProfile_clicked()
{

}
