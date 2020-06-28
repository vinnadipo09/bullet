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
    bool creditAllowed;
};
struct productFromDb{
    QString product_id;
    QString product_name;
    int product_category;
    QString product_barcode;
    QString product_shortcode;
    QString product_quantity;
    int product_wsprice;
    int product_rtprice;
    QString product_image;
    int modifiedBy;
    QDateTime modifiedAt;
};
struct productToDatabase{
    QString product_id;
    QString product_name;
    int product_category;
    QString product_cat;
    QString product_barcode;
    QString product_shortcode;
    QString product_quantity;
    double product_wsprice;
    double product_rtprice;
    QString product_image;
    int modifiedBy;
    QDateTime modifiedAt;
};
class Debugger
{
public:
    Debugger();
};

#endif // DEBUGGER_H
