#ifndef DEBUGGER_H
#define DEBUGGER_H

#include <QObject>
#include <QWidget>
#include <QDebug>
#include <iostream>
#include <QMessageBox>
#include<QFileDialog>
#include <QDateTime>
#include <QTimer>

#define LOGx(x) std::cout<< x << std::endl
#define LOGxy(x,y) std::cout<< x << y << std::endl
#define Debug(x) qDebug()<<(x)

struct posUser{
    int user_id;
    QString name;
    QString email;
    QString phone;
    QString username;
    QString user_role;
    QString password;
    QString confirm_password;
    QString avatar;
    QString filename;
    QDateTime timestamp;
    QString user_status;
    int admin_id;
    QString authorizingAdmin;
    int authorizingUpdateUser;
    QDateTime updatedTimeStamp;
};
struct loggedUser{
    QString username;
    QString name;
    QString user_id;
    QString password;
    QString user_role;
    QString user_avatar;
    QString user_status;
    QDateTime timestamp;
};
struct Customer{
    int customer_id;
    QString name;
    QString phone;
    QString customerType;
    double creditAllowed;
    double rewardsAvailable;
    double cashOnBusiness;
    double debtOwed;
    float creditRating;
    int pendingOrders;
    int pendingDebts;
    std::vector<int>debtIds;
    std::vector<int>ordersId;
};
struct productFromDb{
    QString product_id;
    QString product_name;
    QString productZone;
    QString product_category;
    QString product_barcode;
    QString product_shortcode;
    QString product_quantity;
    double product_wsprice;
    double product_rtprice;
    double  product_discount;
    double product_rewards;
    QString product_image;
    int modifiedBy;
    QDateTime modifiedAt;
};
struct productToDatabase{
    QString product_id;
    QString product_name;
    QString product_barcode;
    QString product_shortcode;
    QString product_quantity;
    QString productZone;
    QString product_category;
    double product_wsprice;
    double product_rtprice;
    double  product_discount;
    double product_rewards;
    QString product_image;
    int modifiedBy;
    QDateTime modifiedAt;
};
struct supplierUser{
    int supplierId;
    QString name;
    QString alias;
    QString company;
    QString phone;
    QString email;
    QString productsSupplied;
    QDateTime  dateModified;
    int modifyingUserId;
};
struct acquiredStock{
    int acquisitionId;
    int acquisitionUserId;
    int acquisitionSupplierId;
    int acquisitionQuantity;
    QString acquisitionPaymentMethod;
    double acquisitionStockPrice;
    double stockCash;
    double stockCredit;
    int acquisitionProductId;
    QDate acquisitionPaymentDate;
    QDateTime acquisitionDate;
};
class Debugger
{
public:
    Debugger();
};

#endif // DEBUGGER_H
