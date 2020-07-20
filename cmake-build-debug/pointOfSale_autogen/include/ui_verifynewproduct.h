/********************************************************************************
** Form generated from reading UI file 'verifynewproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYNEWPRODUCT_H
#define UI_VERIFYNEWPRODUCT_H

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

class Ui_VerifyNewProduct
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QLabel *lbl_email;
    QLabel *lbl_date;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QLabel *lbl_admin;
    QPushButton *btnApply;
    QPushButton *btnCancel;
    QLabel *lbl_time;
    QLabel *lbl_avatar;
    QLabel *label_11;
    QLabel *lblName;
    QLabel *lblBarCode;
    QLabel *lblShortCode;
    QLabel *lblProdQty;
    QLabel *lblDate;
    QLabel *lblWPrice;
    QLabel *lblUser;
    QLabel *lblImage;
    QLabel *lblRtPrice;
    QLabel *lbl_username_2;
    QLabel *lbl_first_name_2;
    QLabel *lblCategory;
    QLabel *lblTime;
    QLabel *lbl_time_2;
    QPushButton *editRecord;
    QLabel *lbl_first_name_3;
    QLabel *lblZone;
    QLabel *label;

    void setupUi(QDialog *VerifyNewProduct)
    {
        if (VerifyNewProduct->objectName().isEmpty())
            VerifyNewProduct->setObjectName(QStringLiteral("VerifyNewProduct"));
        VerifyNewProduct->resize(1084, 826);
        label_2 = new QLabel(VerifyNewProduct);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1061, 821));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(VerifyNewProduct);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 30, 681, 781));
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
        lbl_other_names->setGeometry(QRect(70, 400, 201, 31));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(70, 440, 201, 31));
        lbl_email->setFont(font);
        lbl_email->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_email->setFrameShape(QFrame::Panel);
        lbl_email->setFrameShadow(QFrame::Raised);
        lbl_date = new QLabel(groupBox);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setGeometry(QRect(70, 250, 201, 31));
        lbl_date->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(70, 520, 201, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Vemana2000"));
        font1.setPointSize(12);
        lbl_username->setFont(font1);
        lbl_username->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(70, 480, 201, 31));
        lbl_phone->setFont(font);
        lbl_phone->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Sunken);
        lbl_admin = new QLabel(groupBox);
        lbl_admin->setObjectName(QStringLiteral("lbl_admin"));
        lbl_admin->setGeometry(QRect(70, 680, 201, 31));
        lbl_admin->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_admin->setFrameShape(QFrame::Panel);
        lbl_admin->setFrameShadow(QFrame::Raised);
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(130, 720, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(440, 720, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        lbl_time = new QLabel(groupBox);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(70, 600, 201, 31));
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
        lblName = new QLabel(groupBox);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(290, 290, 201, 31));
        lblName->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblName->setFrameShape(QFrame::Panel);
        lblName->setFrameShadow(QFrame::Raised);
        lblBarCode = new QLabel(groupBox);
        lblBarCode->setObjectName(QStringLiteral("lblBarCode"));
        lblBarCode->setGeometry(QRect(290, 400, 201, 31));
        lblBarCode->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblBarCode->setFrameShape(QFrame::Panel);
        lblBarCode->setFrameShadow(QFrame::Sunken);
        lblShortCode = new QLabel(groupBox);
        lblShortCode->setObjectName(QStringLiteral("lblShortCode"));
        lblShortCode->setGeometry(QRect(290, 440, 201, 31));
        lblShortCode->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblShortCode->setFrameShape(QFrame::Panel);
        lblShortCode->setFrameShadow(QFrame::Raised);
        lblProdQty = new QLabel(groupBox);
        lblProdQty->setObjectName(QStringLiteral("lblProdQty"));
        lblProdQty->setGeometry(QRect(290, 480, 201, 31));
        lblProdQty->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblProdQty->setFrameShape(QFrame::Panel);
        lblProdQty->setFrameShadow(QFrame::Sunken);
        lblDate = new QLabel(groupBox);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        lblDate->setGeometry(QRect(290, 600, 201, 31));
        lblDate->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblDate->setFrameShape(QFrame::Panel);
        lblDate->setFrameShadow(QFrame::Sunken);
        lblWPrice = new QLabel(groupBox);
        lblWPrice->setObjectName(QStringLiteral("lblWPrice"));
        lblWPrice->setGeometry(QRect(290, 520, 201, 31));
        lblWPrice->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblWPrice->setFrameShape(QFrame::Panel);
        lblWPrice->setFrameShadow(QFrame::Raised);
        lblUser = new QLabel(groupBox);
        lblUser->setObjectName(QStringLiteral("lblUser"));
        lblUser->setGeometry(QRect(290, 680, 201, 31));
        lblUser->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblUser->setFrameShape(QFrame::Panel);
        lblUser->setFrameShadow(QFrame::Raised);
        lblImage = new QLabel(groupBox);
        lblImage->setObjectName(QStringLiteral("lblImage"));
        lblImage->setGeometry(QRect(290, 250, 201, 31));
        lblImage->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblImage->setFrameShape(QFrame::Panel);
        lblImage->setFrameShadow(QFrame::Raised);
        lblRtPrice = new QLabel(groupBox);
        lblRtPrice->setObjectName(QStringLiteral("lblRtPrice"));
        lblRtPrice->setGeometry(QRect(290, 560, 201, 31));
        lblRtPrice->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblRtPrice->setFrameShape(QFrame::Panel);
        lblRtPrice->setFrameShadow(QFrame::Sunken);
        lbl_username_2 = new QLabel(groupBox);
        lbl_username_2->setObjectName(QStringLiteral("lbl_username_2"));
        lbl_username_2->setGeometry(QRect(70, 560, 201, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Umpush"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_username_2->setFont(font2);
        lbl_username_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username_2->setFrameShape(QFrame::Panel);
        lbl_username_2->setFrameShadow(QFrame::Sunken);
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(70, 330, 201, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        lblCategory = new QLabel(groupBox);
        lblCategory->setObjectName(QStringLiteral("lblCategory"));
        lblCategory->setGeometry(QRect(290, 330, 201, 31));
        lblCategory->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblCategory->setFrameShape(QFrame::Panel);
        lblCategory->setFrameShadow(QFrame::Raised);
        lblTime = new QLabel(groupBox);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setGeometry(QRect(290, 640, 201, 31));
        lblTime->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblTime->setFrameShape(QFrame::Panel);
        lblTime->setFrameShadow(QFrame::Sunken);
        lbl_time_2 = new QLabel(groupBox);
        lbl_time_2->setObjectName(QStringLiteral("lbl_time_2"));
        lbl_time_2->setGeometry(QRect(70, 640, 201, 31));
        lbl_time_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_time_2->setFrameShape(QFrame::Panel);
        lbl_time_2->setFrameShadow(QFrame::Sunken);
        editRecord = new QPushButton(groupBox);
        editRecord->setObjectName(QStringLiteral("editRecord"));
        editRecord->setGeometry(QRect(280, 720, 141, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/edit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        editRecord->setIcon(icon2);
        editRecord->setIconSize(QSize(24, 24));
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(70, 363, 201, 31));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        lblZone = new QLabel(groupBox);
        lblZone->setObjectName(QStringLiteral("lblZone"));
        lblZone->setGeometry(QRect(290, 363, 201, 31));
        lblZone->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblZone->setFrameShape(QFrame::Panel);
        lblZone->setFrameShadow(QFrame::Raised);
        label = new QLabel(VerifyNewProduct);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));

        retranslateUi(VerifyNewProduct);

        QMetaObject::connectSlotsByName(VerifyNewProduct);
    } // setupUi

    void retranslateUi(QDialog *VerifyNewProduct)
    {
        VerifyNewProduct->setWindowTitle(QApplication::translate("VerifyNewProduct", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("VerifyNewProduct", "Add New Product", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("VerifyNewProduct", "Product Name", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("VerifyNewProduct", "Product Barcode", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("VerifyNewProduct", "Product Short Code", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("VerifyNewProduct", "Product Image", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("VerifyNewProduct", "Wholesale Price", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("VerifyNewProduct", "Product Quantity", Q_NULLPTR));
        lbl_admin->setText(QApplication::translate("VerifyNewProduct", "Entered By", Q_NULLPTR));
        btnApply->setText(QApplication::translate("VerifyNewProduct", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("VerifyNewProduct", "Cancel", Q_NULLPTR));
        lbl_time->setText(QApplication::translate("VerifyNewProduct", "Product Entry Date", Q_NULLPTR));
        lbl_avatar->setText(QString());
        label_11->setText(QApplication::translate("VerifyNewProduct", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lblName->setText(QString());
        lblBarCode->setText(QString());
        lblShortCode->setText(QString());
        lblProdQty->setText(QString());
        lblDate->setText(QString());
        lblWPrice->setText(QString());
        lblUser->setText(QString());
        lblImage->setText(QString());
        lblRtPrice->setText(QString());
        lbl_username_2->setText(QApplication::translate("VerifyNewProduct", "Retail Price", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("VerifyNewProduct", "Product Category", Q_NULLPTR));
        lblCategory->setText(QString());
        lblTime->setText(QString());
        lbl_time_2->setText(QApplication::translate("VerifyNewProduct", "Product Entry  Time", Q_NULLPTR));
        editRecord->setText(QApplication::translate("VerifyNewProduct", "Edit Record", Q_NULLPTR));
        lbl_first_name_3->setText(QApplication::translate("VerifyNewProduct", "Product Zone", Q_NULLPTR));
        lblZone->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerifyNewProduct: public Ui_VerifyNewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYNEWPRODUCT_H
