#include "productrewardeditor.h"
#include "ui_productrewardeditor.h"

ProductRewardEditor::ProductRewardEditor(QWidget *parent, loggedUser &currentLoggedInUser, productFromDb &currentProductToView) :
    QDialog(parent),
    ui(new Ui::ProductRewardEditor)
{
    ui->setupUi(this);
    productReward = new productFromDb;
    *productReward = currentProductToView;
    currentUser = new loggedUser;
    *currentUser = currentLoggedInUser;
    rewardConnection = new databaseConnection;
    QString productName = productReward->product_name;
    ui->lblProductData->setText("You are about to change the REWARD for :"+productName);
    ui->lblPriviousReward->setText("K.Shs "+ QString::number(productReward->product_rewards));
}

ProductRewardEditor::~ProductRewardEditor()
{
    delete ui;
}

void ProductRewardEditor::on_btnApply_clicked()
{
    if(ui->leNewReward->text().isEmpty()){
        QMessageBox::warning(this, "Empty Cell Error!", "You have not entered any amount");
        return;
    }else{
        updateRewardValue();
        if(updateComplete){
            QMessageBox::information(this, "Discount Update Success!", "You have successfully updated the rewards");
            emit rewardWorkComplete();
        }else{
            QMessageBox::warning(this, "Data Update Error!", "The system encountered errors updating your record");
            return;
        }
    }
}

void ProductRewardEditor::on_btnCancel_clicked()
{
    if(!ui->leNewReward->text().isEmpty()){
        QMessageBox::StandardButton reply;
        reply = QMessageBox::warning(this
                , "Unsaved Changes"
                , "You have unsaved changes. Closing the Program will discare all your work. Continue?"
                , QMessageBox::Yes | QMessageBox::Cancel);
        if(reply==QMessageBox::Yes){
            emit rewardWorkComplete();
            this->accept();
        }else{
            return;
        }
    }else{
        emit rewardWorkComplete();
        this->reject();
    }
}

void ProductRewardEditor::updateRewardValue() {
    rewardConnection->conn_open();
    QDateTime modificationTime;
    modificationTime = QDateTime::currentDateTime();
    if (rewardConnection->conn_open()) {
        QSqlQuery query(QSqlDatabase::database("MyConnect"));
        query.prepare(
                QString("UPDATE productRewards SET reward_amount=:newAmount, modified_user_id = :currentUser, modified_on=:currentDate WHERE product_id = :currentId"));

        query.bindValue(":newAmount", ui->leNewReward->text());
        query.bindValue(":currentUser", currentUser->user_id);
        query.bindValue(":currentDate", modificationTime);
        query.bindValue(":currentId", productReward->product_id);
        if (!query.exec()) {
            QMessageBox::critical(this, "Database Error", query.lastError().text());
        } else {
            updateComplete = true;
        }
    }
}
