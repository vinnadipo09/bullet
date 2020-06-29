#ifndef PRODUCTREWARDEDITOR_H
#define PRODUCTREWARDEDITOR_H

#include <QDialog>
#include "debugger.h"
#include "databaseconnection.h"
namespace Ui {
class ProductRewardEditor;
}

class ProductRewardEditor : public QDialog
{
    Q_OBJECT

public:
    explicit ProductRewardEditor(QWidget *parent , loggedUser &currentLoggedInUser, productFromDb &currentProductToView);
    ~ProductRewardEditor();

private slots:
    void on_btnApply_clicked();
    void on_btnCancel_clicked();

private:
    Ui::ProductRewardEditor *ui;

private:
    databaseConnection* rewardConnection;
    productFromDb* productReward;
    loggedUser* currentUser;
    void updateRewardValue();

    bool updateComplete = false;
signals:
    void rewardWorkComplete();
private:

};

#endif // PRODUCTREWARDEDITOR_H
