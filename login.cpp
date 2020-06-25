#include "login.h"
#include "./ui_login.h"

Login::Login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setWindowTitle("ViaD Technologies v1.00");   
    QTimer *timer = new QTimer(this);
        connect(timer,SIGNAL(timeout()), this, SLOT(showTime()));
        timer->start();
     currentUser = new loggedUser;
     ui->le_username->setText("superadmin");
     ui->le_userPassword->setText("1234");

    username = new QString;
    password= new QString;
}

Login::~Login()
{
    destroy_user();
    delete ui;
}

void Login::showTime()
{
    QTime time= QTime::currentTime();
    QString time_text = time.toString("hh: mm: ss");
    QDate date = QDate::currentDate();
    QString currentDate = date.toString("dd /MM /yyyy");

    if((time.second()%2)==0){
        time_text[2]=' ';
        time_text[6]=' ';
    }
    ui->lblTime->setText(time_text);
    ui->lblDate->setText(currentDate);
    dbConnection = new databaseConnection;
    currentUser = new loggedUser;
}

void Login::on_btnLogin_clicked()
{
    *username = currentUser->username = ui->le_username->text();
    *password = currentUser->password = ui->le_userPassword->text();
    if(ui->le_userPassword->text().isEmpty()||ui->le_username->text().isEmpty()){
        QMessageBox::warning(this, "Empty Credentials", "Please enter the missing information!");
        return;
    }else{
        loginUser(*username, *password);
        if(!credentialsCorrect){
            QMessageBox::warning(this, "Credentials Error", "Incorrect username, password, or both!");
            clearFieldsForSecurity();
            return;
        }
    }
}
void Login::loginUser(QString& userName, QString& password)
{
    dbConnection->conn_open();
    if(dbConnection->conn_open()){
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(QString("SELECT * FROM users WHERE username = :username AND password = :password"));
        query.bindValue(":username", userName);
        query.bindValue(":password", password);
        if(!query.exec()){
            QMessageBox::warning(this, "[Error!]", "Query did not execute!");
            ui->le_username->clear();
            ui->le_userPassword->clear();
        }else{
            while(query.next()){
                user_id_FromDB = new QString;
                user_usernameFromDB = new QString;
                user_passwordFromDB = new QString;
                user_userRoleFromDB = new QString;
                user_avatar = new QString;
                *user_id_FromDB = query.value(0).toString();
                *user_usernameFromDB = query.value(4).toString();
                *user_passwordFromDB = query.value(5).toString();
                *user_userRoleFromDB = query.value(6).toString();
                *user_avatar = query.value(7).toString();
                QString optionSuperAdmin = "superadmin";
                QString optionAdmin = "admin";
                QString optionSupervisor = "supervisor";
                QString optionCashier = "cashier";
                if(*user_usernameFromDB==userName && user_passwordFromDB==password){
                    set_current_user();
                    credentialsCorrect = true;
                    if(user_userRoleFromDB==optionSuperAdmin){
                        admin_window = new AdminWindow(this, *currentUser);
                        this->hide();
                        admin_window->show();
                        QObject::connect(admin_window, SIGNAL(send_admin_logged_out()),
                                         this, SLOT(receive_admin_logged_out()));
                    }else if(user_userRoleFromDB==optionAdmin){
                        admin_window = new AdminWindow(this, *currentUser);
                        this->hide();
                        admin_window->show();
                        QObject::connect(admin_window, SIGNAL(send_admin_logged_out()),
                                         this, SLOT(receive_admin_logged_out()));
                    }else if(user_userRoleFromDB==optionSupervisor){
                        supervisor_window = new SupervisorWindow(this, *currentUser);
                        this->hide();
                        supervisor_window->show();
                        QObject::connect(supervisor_window, SIGNAL(send_supervisor_logged_out()),
                                         this, SLOT(receive_supervisor_logged_out()));

                    }else if(user_userRoleFromDB==optionCashier){
                        cashier_window = new CashierWindow(this, *currentUser);
                        this->hide();
                        cashier_window->show();
                        QObject::connect(cashier_window, SIGNAL(send_cashier_logged_out()),
                                         this, SLOT(receive_cashier_logged_out()));
                    }

                }else{
                    credentialsCorrect = false;
                }
            }
        }
    }else{
        QMessageBox::warning(this, "Database Error", "System having trouble connecting to the database!");
        clearFieldsForSecurity();
        LOGx("database not responding...");
    }
}
void Login::receive_admin_logged_out()
{
    destroy_user();
    admin_window->hide();
    this->show();
    ui->le_username->clear();
    ui->le_userPassword->clear();
}
void Login::receive_cashier_logged_out()
{
    destroy_user();
    cashier_window->hide();
    this->show();
    ui->le_username->clear();
    ui->le_userPassword->clear();
}
void Login::receive_supervisor_logged_out()
{
    destroy_user();
    supervisor_window->hide();
    this->show();
    ui->le_username->clear();
    ui->le_userPassword->clear();
}
void Login::clearFieldsForSecurity() {
    ui->le_username->clear();
    ui->le_userPassword->clear();
}
void Login::set_current_user() {
    QDateTime my_login_time=QDateTime::currentDateTime();
    currentUser->user_id=*user_id_FromDB;
    currentUser->username=*user_usernameFromDB;
    currentUser->user_role = *user_userRoleFromDB;
    currentUser->user_avatar =*user_avatar;
    currentUser->timestamp=my_login_time;}
void Login::destroy_user() {
    credentialsCorrect = false;
    delete username;
    delete password;
    delete currentUser;
}
