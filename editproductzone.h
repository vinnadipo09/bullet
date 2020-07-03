#ifndef EDITPRODUCTZONE_H
#define EDITPRODUCTZONE_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class EditProductZone;
}

class EditProductZone : public QDialog
{
    Q_OBJECT

public:
    explicit EditProductZone(QWidget *parent , loggedUser &currentLoggedInUser, QString& zone, QString& desc, int &);
    ~EditProductZone();

private slots:
    void on_btnApply_clicked();
    void on_btnCancel_clicked();

private:
    Ui::EditProductZone *ui;

private:
    loggedUser* currentUser;
    databaseConnection* editZoneConnection;

    int* zoneIdToEdit;
    QString* zoneName;
    QString* zoneDescription;

    void updateZone();
    void checkAllFieldsCaptured();
    bool allInformationFilled = false;
    void checkForDuplicates();
    bool zoneExists = false;
    bool updateSuccessful = false;

    QString* existingZone;


signals:
    void editJobComplete();


};

#endif // EDITPRODUCTZONE_H
