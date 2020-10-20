#ifndef VIEWBUSINESSLIMIT_H
#define VIEWBUSINESSLIMIT_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class ViewBusinessLimit;
}

class ViewBusinessLimit : public QDialog
{
    Q_OBJECT

public:
    explicit ViewBusinessLimit(QWidget *parent ,loggedUser &currentLoggedInUser,
            int &limitId, QString & limitName, int & limitAmount, QString & limitScale);
    ~ViewBusinessLimit();

private slots:
    void on_btnCloseWindow_clicked();
    void on_btnEditLimit_clicked();


private:
    Ui::ViewBusinessLimit *ui;
private:
    databaseConnection* limitViewConnection;
    QString* currentLimitName;
    QString* currentLimitScale;
    int* currentLimitId;
    int* currentLimitAmount;
    loggedUser* currentUser;
    bool viewMode = true;
    bool editMode= false;

    void makeReadOnly();
    void makeEditable();
    void updateLimits();

signals:
    void sendEditJobComplete();
};

#endif // VIEWBUSINESSLIMIT_H
