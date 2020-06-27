#ifndef ADDPRODUCTCATEGORY_H
#define ADDPRODUCTCATEGORY_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class AddProductCategory;
}

class AddProductCategory : public QDialog
{
    Q_OBJECT

public:
    explicit AddProductCategory(QWidget *parent , loggedUser &currentLoggedInUser);
    ~AddProductCategory();

private slots:
    void on_btnApply_clicked();
    void on_btnCancel_clicked();

private:
    Ui::AddProductCategory *ui;
private:
    databaseConnection* addCategoryConnection;
    void checkForDuplicates();
    void addCategory();
    QString* productCategory;
    QString* categoryDescription;
    loggedUser* currentUser;
    bool categoryAlreadyExists = false;
    bool categoryAdditionSuccessful = false;
    void checkIfAllFieldsCaptured();
    bool allDataFilled = false;
    void cleanUp();
signals:
    void categoryAddedSuccess();

};

#endif // ADDPRODUCTCATEGORY_H
