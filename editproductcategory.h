#ifndef EDITPRODUCTCATEGORY_H
#define EDITPRODUCTCATEGORY_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class EditProductCategory;
}

class EditProductCategory : public QDialog
{
    Q_OBJECT

public:
    explicit EditProductCategory(QWidget *parent, loggedUser &currentLoggedInUser, QString& categ, QString& desc, int &);
    ~EditProductCategory();

private slots:
    void on_btnApply_clicked();

    void on_btnCancel_clicked();

private:
    Ui::EditProductCategory *ui;
private:
    loggedUser* currentUser;
    databaseConnection* editProductCategoryConnection;

    void discardEdit();
    void completeEdit();
    int* idToEdit;
    QString* newCategory;
    QString* newDescription;
    void updateProductCategory();
    bool allFieldsCaptured = false;
    bool updateSuccessful = false;
    void checkAllFieldsCaptured();

signals:
    void editJobCompleted();

};

#endif // EDITPRODUCTCATEGORY_H
