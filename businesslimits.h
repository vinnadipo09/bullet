#ifndef BUSINESSLIMITS_H
#define BUSINESSLIMITS_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"

namespace Ui {
class BusinessLimits;
}

class BusinessLimits : public QDialog
{
    Q_OBJECT

public:
    explicit BusinessLimits(QWidget *parent , loggedUser &currentLoggedInUser);
    ~BusinessLimits();

private slots:
    void on_btnSave_clicked();
    void on_btnCancel_clicked();

    void on_cbLimitScale_currentIndexChanged(int index);

private:
    Ui::BusinessLimits *ui;

private:
    loggedUser* currentUser;
    QString* limitName;
    QString* limitScale;
    int* limitAmount;
    void checkIfAllFieldsFilled();
    void checkForDuplicateEntries();
    void saveNewLimitToDb(QString &name, QString & scale, int &userID);
    databaseConnection* businessLimitConnection;
    bool areAllFieldsCaptured = false;
    bool duplicateExists = false;
    bool recordSuccessfullyAdded = false;
    void clearAllData();
signals:
    void sendNewLimitAddedSuccessfully();
    void sendLimitTaskCompleteWithoutModifications();

private:



};

#endif // BUSINESSLIMITS_H
