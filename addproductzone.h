#ifndef ADDPRODUCTZONE_H
#define ADDPRODUCTZONE_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class AddProductZone;
}

class AddProductZone : public QDialog
{
    Q_OBJECT

public:
    explicit AddProductZone(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AddProductZone();

private slots:
    void on_btnApply_clicked();
    void on_btnCancel_clicked();

private:
    Ui::AddProductZone *ui;
private:
    databaseConnection* addZoneConnection;
    void checkForDuplicates();
    void addZone();
    QString* productZone;
    QString* productZoneDescription;
    loggedUser* currentUser;
    bool zoneAlreadyExists = false;
    bool zoneAdditionSuccessful = false;
    void checkIfAllFieldsCaptured();
    bool allDataFilled = false;

signals:
    void zoneAdditionComplete();


};

#endif // ADDPRODUCTZONE_H
