/********************************************************************************
** Form generated from reading UI file 'viewproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPRODUCT_H
#define UI_VIEWPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewProduct
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QLabel *lbl_email;
    QLabel *lbl_date;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QLabel *lbl_admin;
    QPushButton *btnEditProduct;
    QPushButton *btnClose;
    QLabel *lbl_time;
    QLabel *lbl_avatar;
    QLabel *label_11;
    QLabel *name;
    QLabel *barcode;
    QLabel *shortCode;
    QLabel *qty;
    QLabel *reward;
    QLabel *wPrice;
    QLabel *discount;
    QLabel *image;
    QLabel *rPrice;
    QLabel *lbl_username_2;
    QPushButton *btnDelete;
    QPushButton *btnReward;
    QPushButton *btnDiscount;
    QLabel *lbl_admin_2;
    QLabel *lbl_time_2;
    QLabel *user;
    QLabel *modDate;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ViewProduct)
    {
        if (ViewProduct->objectName().isEmpty())
            ViewProduct->setObjectName(QStringLiteral("ViewProduct"));
        ViewProduct->resize(1069, 811);
        groupBox = new QGroupBox(ViewProduct);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 0, 681, 771));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(70, 290, 201, 31));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        lbl_other_names = new QLabel(groupBox);
        lbl_other_names->setObjectName(QStringLiteral("lbl_other_names"));
        lbl_other_names->setGeometry(QRect(70, 330, 201, 31));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(70, 370, 201, 31));
        lbl_email->setFont(font);
        lbl_email->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_email->setFrameShape(QFrame::Panel);
        lbl_email->setFrameShadow(QFrame::Raised);
        lbl_date = new QLabel(groupBox);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setGeometry(QRect(70, 250, 201, 31));
        lbl_date->setFont(font);
        lbl_date->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(70, 450, 201, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Vemana2000"));
        font1.setPointSize(12);
        lbl_username->setFont(font1);
        lbl_username->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(70, 410, 201, 31));
        lbl_phone->setFont(font);
        lbl_phone->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Sunken);
        lbl_admin = new QLabel(groupBox);
        lbl_admin->setObjectName(QStringLiteral("lbl_admin"));
        lbl_admin->setGeometry(QRect(70, 570, 201, 31));
        lbl_admin->setFont(font);
        lbl_admin->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_admin->setFrameShape(QFrame::Panel);
        lbl_admin->setFrameShadow(QFrame::Raised);
        btnEditProduct = new QPushButton(groupBox);
        btnEditProduct->setObjectName(QStringLiteral("btnEditProduct"));
        btnEditProduct->setGeometry(QRect(40, 720, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditProduct->setIcon(icon);
        btnEditProduct->setIconSize(QSize(24, 24));
        btnClose = new QPushButton(groupBox);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(230, 720, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);
        btnClose->setIconSize(QSize(24, 24));
        lbl_time = new QLabel(groupBox);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(70, 530, 201, 31));
        lbl_time->setFont(font);
        lbl_time->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_time->setFrameShape(QFrame::Panel);
        lbl_time->setFrameShadow(QFrame::Sunken);
        lbl_avatar = new QLabel(groupBox);
        lbl_avatar->setObjectName(QStringLiteral("lbl_avatar"));
        lbl_avatar->setGeometry(QRect(70, 80, 171, 151));
        lbl_avatar->setStyleSheet(QStringLiteral(""));
        lbl_avatar->setFrameShape(QFrame::Panel);
        lbl_avatar->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 631, 21));
        label_11->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        name = new QLabel(groupBox);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(290, 290, 201, 31));
        name->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        name->setFrameShape(QFrame::Panel);
        name->setFrameShadow(QFrame::Raised);
        barcode = new QLabel(groupBox);
        barcode->setObjectName(QStringLiteral("barcode"));
        barcode->setGeometry(QRect(290, 330, 201, 31));
        barcode->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        barcode->setFrameShape(QFrame::Panel);
        barcode->setFrameShadow(QFrame::Sunken);
        shortCode = new QLabel(groupBox);
        shortCode->setObjectName(QStringLiteral("shortCode"));
        shortCode->setGeometry(QRect(290, 370, 201, 31));
        shortCode->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        shortCode->setFrameShape(QFrame::Panel);
        shortCode->setFrameShadow(QFrame::Raised);
        qty = new QLabel(groupBox);
        qty->setObjectName(QStringLiteral("qty"));
        qty->setGeometry(QRect(290, 410, 201, 31));
        qty->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        qty->setFrameShape(QFrame::Panel);
        qty->setFrameShadow(QFrame::Sunken);
        reward = new QLabel(groupBox);
        reward->setObjectName(QStringLiteral("reward"));
        reward->setGeometry(QRect(290, 530, 201, 31));
        reward->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        reward->setFrameShape(QFrame::Panel);
        reward->setFrameShadow(QFrame::Sunken);
        wPrice = new QLabel(groupBox);
        wPrice->setObjectName(QStringLiteral("wPrice"));
        wPrice->setGeometry(QRect(290, 450, 201, 31));
        wPrice->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        wPrice->setFrameShape(QFrame::Panel);
        wPrice->setFrameShadow(QFrame::Raised);
        discount = new QLabel(groupBox);
        discount->setObjectName(QStringLiteral("discount"));
        discount->setGeometry(QRect(290, 570, 201, 31));
        discount->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        discount->setFrameShape(QFrame::Panel);
        discount->setFrameShadow(QFrame::Raised);
        image = new QLabel(groupBox);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(290, 250, 201, 31));
        image->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        image->setFrameShape(QFrame::Panel);
        image->setFrameShadow(QFrame::Raised);
        rPrice = new QLabel(groupBox);
        rPrice->setObjectName(QStringLiteral("rPrice"));
        rPrice->setGeometry(QRect(290, 490, 201, 31));
        rPrice->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        rPrice->setFrameShape(QFrame::Panel);
        rPrice->setFrameShadow(QFrame::Sunken);
        lbl_username_2 = new QLabel(groupBox);
        lbl_username_2->setObjectName(QStringLiteral("lbl_username_2"));
        lbl_username_2->setGeometry(QRect(70, 490, 201, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Umpush"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_username_2->setFont(font2);
        lbl_username_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username_2->setFrameShape(QFrame::Panel);
        lbl_username_2->setFrameShadow(QFrame::Sunken);
        btnDelete = new QPushButton(groupBox);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setGeometry(QRect(410, 720, 141, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/icons8-delete-bin-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDelete->setIcon(icon2);
        btnDelete->setIconSize(QSize(24, 24));
        btnReward = new QPushButton(groupBox);
        btnReward->setObjectName(QStringLiteral("btnReward"));
        btnReward->setGeometry(QRect(500, 530, 91, 31));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/newIcons/icons8-edit-120.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReward->setIcon(icon3);
        btnReward->setIconSize(QSize(24, 24));
        btnDiscount = new QPushButton(groupBox);
        btnDiscount->setObjectName(QStringLiteral("btnDiscount"));
        btnDiscount->setGeometry(QRect(500, 570, 91, 31));
        btnDiscount->setIcon(icon3);
        btnDiscount->setIconSize(QSize(24, 24));
        lbl_admin_2 = new QLabel(groupBox);
        lbl_admin_2->setObjectName(QStringLiteral("lbl_admin_2"));
        lbl_admin_2->setGeometry(QRect(70, 650, 201, 31));
        lbl_admin_2->setFont(font);
        lbl_admin_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_admin_2->setFrameShape(QFrame::Panel);
        lbl_admin_2->setFrameShadow(QFrame::Raised);
        lbl_time_2 = new QLabel(groupBox);
        lbl_time_2->setObjectName(QStringLiteral("lbl_time_2"));
        lbl_time_2->setGeometry(QRect(70, 610, 201, 31));
        lbl_time_2->setFont(font);
        lbl_time_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_time_2->setFrameShape(QFrame::Panel);
        lbl_time_2->setFrameShadow(QFrame::Sunken);
        user = new QLabel(groupBox);
        user->setObjectName(QStringLiteral("user"));
        user->setGeometry(QRect(290, 650, 201, 31));
        user->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        user->setFrameShape(QFrame::Panel);
        user->setFrameShadow(QFrame::Raised);
        modDate = new QLabel(groupBox);
        modDate->setObjectName(QStringLiteral("modDate"));
        modDate->setGeometry(QRect(290, 610, 201, 31));
        modDate->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        modDate->setFrameShape(QFrame::Panel);
        modDate->setFrameShadow(QFrame::Sunken);
        label = new QLabel(ViewProduct);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(ViewProduct);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, -10, 1061, 811));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(ViewProduct);

        QMetaObject::connectSlotsByName(ViewProduct);
    } // setupUi

    void retranslateUi(QDialog *ViewProduct)
    {
        ViewProduct->setWindowTitle(QApplication::translate("ViewProduct", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ViewProduct", "Product Information", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("ViewProduct", "Product Name", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("ViewProduct", "Product Barcode", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("ViewProduct", "Product Short Code", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("ViewProduct", "Product Image", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("ViewProduct", "Wholesale Price", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("ViewProduct", "Product Quantity", Q_NULLPTR));
        lbl_admin->setText(QApplication::translate("ViewProduct", "Product Discount", Q_NULLPTR));
        btnEditProduct->setText(QApplication::translate("ViewProduct", "Edit Product", Q_NULLPTR));
        btnClose->setText(QApplication::translate("ViewProduct", "Close", Q_NULLPTR));
        lbl_time->setText(QApplication::translate("ViewProduct", "Product Reward", Q_NULLPTR));
        lbl_avatar->setText(QString());
        label_11->setText(QApplication::translate("ViewProduct", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        name->setText(QString());
        barcode->setText(QString());
        shortCode->setText(QString());
        qty->setText(QString());
        reward->setText(QString());
        wPrice->setText(QString());
        discount->setText(QString());
        image->setText(QString());
        rPrice->setText(QString());
        lbl_username_2->setText(QApplication::translate("ViewProduct", "Retail Price", Q_NULLPTR));
        btnDelete->setText(QApplication::translate("ViewProduct", "Delete Product", Q_NULLPTR));
        btnReward->setText(QApplication::translate("ViewProduct", "Edit", Q_NULLPTR));
        btnDiscount->setText(QApplication::translate("ViewProduct", "Edit", Q_NULLPTR));
        lbl_admin_2->setText(QApplication::translate("ViewProduct", "Authorizing User", Q_NULLPTR));
        lbl_time_2->setText(QApplication::translate("ViewProduct", "Data Modification Date", Q_NULLPTR));
        user->setText(QString());
        modDate->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewProduct: public Ui_ViewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPRODUCT_H
