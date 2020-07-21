#ifndef SESSIONCONTROL_H
#define SESSIONCONTROL_H

#include <QDialog>
#include "databaseconnection.h"
#include "debugger.h"
namespace Ui {
class SessionControl;
}

class SessionControl : public QDialog
{
    Q_OBJECT

public:
    explicit SessionControl(QWidget *parent , loggedUser &currentLoggedInUser, QString& executionType);
    ~SessionControl();

private slots:
    void on_btnApply_clicked();

    void on_btnCancel_clicked();

private:
    Ui::SessionControl *ui;
private:
    loggedUser* currentUser;
    databaseConnection* sessionConnection;
private:
    void getCashInSystem();
    int* cashInSystem;
    QString* currentExecutionType;
signals:
    void sendOpeningComplete();
    void sendClosingComplete();
};

#endif // SESSIONCONTROL_H
