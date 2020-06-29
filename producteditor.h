#ifndef PRODUCTEDITOR_H
#define PRODUCTEDITOR_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class ProductEditor;
}

class ProductEditor : public QDialog
{
    Q_OBJECT

public:
    explicit ProductEditor(QWidget *parent , loggedUser &currentLoggedInUser, productFromDb &currentProductToView);
    ~ProductEditor();

private slots:
    void on_btnUpdate_clicked();
    void on_btnCancel_clicked();
    void on_btnAvatar_clicked();

private:
    Ui::ProductEditor *ui;

private:
    databaseConnection* editProductConnection;
    productFromDb* productEdit;
    loggedUser* currentUser;
    void updateProduct();

    bool updateComplete = false;
};

#endif // PRODUCTEDITOR_H
