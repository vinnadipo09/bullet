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
    QPushButton *btn_edit_view;
    QPushButton *btn_close_view;
    QLabel *lbl_time;
    QLabel *lbl_avatar;
    QLabel *label_11;
    QLabel *lbl_product_name;
    QLabel *lbl_product_barcode;
    QLabel *lbl_product_shortCode;
    QLabel *lbl_product_Quantity;
    QLabel *lbl_product_entryDate;
    QLabel *lbl_product_wsPrice;
    QLabel *lbl_product_enteredBy;
    QLabel *lbl_product_image;
    QLabel *lbl_product_rtPrice;
    QLabel *lbl_username_2;
    QLabel *label;

    void setupUi(QDialog *VerifyNewProduct)
    {
        if (VerifyNewProduct->objectName().isEmpty())
            VerifyNewProduct->setObjectName(QStringLiteral("VerifyNewProduct"));
        VerifyNewProduct->resize(1084, 826);
        label_2 = new QLabel(VerifyNewProduct);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 1061, 781));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(VerifyNewProduct);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 30, 681, 721));
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
        lbl_admin->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_admin->setFrameShape(QFrame::Panel);
        lbl_admin->setFrameShadow(QFrame::Raised);
        btn_edit_view = new QPushButton(groupBox);
        btn_edit_view->setObjectName(QStringLiteral("btn_edit_view"));
        btn_edit_view->setGeometry(QRect(130, 630, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit_view->setIcon(icon);
        btn_edit_view->setIconSize(QSize(24, 24));
        btn_close_view = new QPushButton(groupBox);
        btn_close_view->setObjectName(QStringLiteral("btn_close_view"));
        btn_close_view->setGeometry(QRect(290, 630, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close_view->setIcon(icon1);
        btn_close_view->setIconSize(QSize(24, 24));
        lbl_time = new QLabel(groupBox);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(70, 530, 201, 31));
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
        lbl_product_name = new QLabel(groupBox);
        lbl_product_name->setObjectName(QStringLiteral("lbl_product_name"));
        lbl_product_name->setGeometry(QRect(290, 290, 201, 31));
        lbl_product_name->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_name->setFrameShape(QFrame::Panel);
        lbl_product_name->setFrameShadow(QFrame::Raised);
        lbl_product_barcode = new QLabel(groupBox);
        lbl_product_barcode->setObjectName(QStringLiteral("lbl_product_barcode"));
        lbl_product_barcode->setGeometry(QRect(290, 330, 201, 31));
        lbl_product_barcode->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_barcode->setFrameShape(QFrame::Panel);
        lbl_product_barcode->setFrameShadow(QFrame::Sunken);
        lbl_product_shortCode = new QLabel(groupBox);
        lbl_product_shortCode->setObjectName(QStringLiteral("lbl_product_shortCode"));
        lbl_product_shortCode->setGeometry(QRect(290, 370, 201, 31));
        lbl_product_shortCode->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_shortCode->setFrameShape(QFrame::Panel);
        lbl_product_shortCode->setFrameShadow(QFrame::Raised);
        lbl_product_Quantity = new QLabel(groupBox);
        lbl_product_Quantity->setObjectName(QStringLiteral("lbl_product_Quantity"));
        lbl_product_Quantity->setGeometry(QRect(290, 410, 201, 31));
        lbl_product_Quantity->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_Quantity->setFrameShape(QFrame::Panel);
        lbl_product_Quantity->setFrameShadow(QFrame::Sunken);
        lbl_product_entryDate = new QLabel(groupBox);
        lbl_product_entryDate->setObjectName(QStringLiteral("lbl_product_entryDate"));
        lbl_product_entryDate->setGeometry(QRect(290, 530, 201, 31));
        lbl_product_entryDate->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_entryDate->setFrameShape(QFrame::Panel);
        lbl_product_entryDate->setFrameShadow(QFrame::Sunken);
        lbl_product_wsPrice = new QLabel(groupBox);
        lbl_product_wsPrice->setObjectName(QStringLiteral("lbl_product_wsPrice"));
        lbl_product_wsPrice->setGeometry(QRect(290, 450, 201, 31));
        lbl_product_wsPrice->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_wsPrice->setFrameShape(QFrame::Panel);
        lbl_product_wsPrice->setFrameShadow(QFrame::Raised);
        lbl_product_enteredBy = new QLabel(groupBox);
        lbl_product_enteredBy->setObjectName(QStringLiteral("lbl_product_enteredBy"));
        lbl_product_enteredBy->setGeometry(QRect(290, 570, 201, 31));
        lbl_product_enteredBy->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_enteredBy->setFrameShape(QFrame::Panel);
        lbl_product_enteredBy->setFrameShadow(QFrame::Raised);
        lbl_product_image = new QLabel(groupBox);
        lbl_product_image->setObjectName(QStringLiteral("lbl_product_image"));
        lbl_product_image->setGeometry(QRect(290, 250, 201, 31));
        lbl_product_image->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_image->setFrameShape(QFrame::Panel);
        lbl_product_image->setFrameShadow(QFrame::Raised);
        lbl_product_rtPrice = new QLabel(groupBox);
        lbl_product_rtPrice->setObjectName(QStringLiteral("lbl_product_rtPrice"));
        lbl_product_rtPrice->setGeometry(QRect(290, 490, 201, 31));
        lbl_product_rtPrice->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lbl_product_rtPrice->setFrameShape(QFrame::Panel);
        lbl_product_rtPrice->setFrameShadow(QFrame::Sunken);
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
        btn_edit_view->setText(QApplication::translate("VerifyNewProduct", "Ok", Q_NULLPTR));
        btn_close_view->setText(QApplication::translate("VerifyNewProduct", "Cancel", Q_NULLPTR));
        lbl_time->setText(QApplication::translate("VerifyNewProduct", "Product Entry Date", Q_NULLPTR));
        lbl_avatar->setText(QString());
        label_11->setText(QApplication::translate("VerifyNewProduct", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lbl_product_name->setText(QString());
        lbl_product_barcode->setText(QString());
        lbl_product_shortCode->setText(QString());
        lbl_product_Quantity->setText(QString());
        lbl_product_entryDate->setText(QString());
        lbl_product_wsPrice->setText(QString());
        lbl_product_enteredBy->setText(QString());
        lbl_product_image->setText(QString());
        lbl_product_rtPrice->setText(QString());
        lbl_username_2->setText(QApplication::translate("VerifyNewProduct", "Retail Price", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerifyNewProduct: public Ui_VerifyNewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYNEWPRODUCT_H
