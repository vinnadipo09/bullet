/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddProduct
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QLabel *lbl_email;
    QLabel *lbl_date;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QPushButton *btnOkay;
    QPushButton *btnCancel;
    QLabel *lbl_avatar;
    QLabel *label_11;
    QLabel *lbl_username_2;
    QLineEdit *leProductImage;
    QLineEdit *leProductName;
    QLineEdit *leProductUniqueId;
    QLineEdit *leProductShortCode;
    QLineEdit *leProductQuantity;
    QLineEdit *leWholeSalePrice;
    QLineEdit *leRetailPrice;
    QPushButton *btnAvatar;
    QLabel *lbl_first_name_2;
    QComboBox *cbProductCategory;
    QComboBox *cbProductZone;
    QLabel *lbl_first_name_3;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *AddProduct)
    {
        if (AddProduct->objectName().isEmpty())
            AddProduct->setObjectName(QStringLiteral("AddProduct"));
        AddProduct->resize(1058, 802);
        groupBox = new QGroupBox(AddProduct);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 20, 681, 721));
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
        lbl_other_names->setGeometry(QRect(70, 420, 201, 31));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(70, 460, 201, 31));
        lbl_email->setFont(font);
        lbl_email->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_email->setFrameShape(QFrame::Panel);
        lbl_email->setFrameShadow(QFrame::Raised);
        lbl_date = new QLabel(groupBox);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setGeometry(QRect(70, 250, 201, 31));
        lbl_date->setFont(font);
        lbl_date->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(70, 540, 201, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Vemana2000"));
        font1.setPointSize(12);
        lbl_username->setFont(font1);
        lbl_username->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(70, 500, 201, 31));
        lbl_phone->setFont(font);
        lbl_phone->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Sunken);
        btnOkay = new QPushButton(groupBox);
        btnOkay->setObjectName(QStringLiteral("btnOkay"));
        btnOkay->setGeometry(QRect(130, 660, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOkay->setIcon(icon);
        btnOkay->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(290, 660, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
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
        lbl_username_2 = new QLabel(groupBox);
        lbl_username_2->setObjectName(QStringLiteral("lbl_username_2"));
        lbl_username_2->setGeometry(QRect(70, 580, 201, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Umpush"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_username_2->setFont(font2);
        lbl_username_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_username_2->setFrameShape(QFrame::Panel);
        lbl_username_2->setFrameShadow(QFrame::Sunken);
        leProductImage = new QLineEdit(groupBox);
        leProductImage->setObjectName(QStringLiteral("leProductImage"));
        leProductImage->setGeometry(QRect(290, 250, 221, 31));
        leProductImage->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leProductName = new QLineEdit(groupBox);
        leProductName->setObjectName(QStringLiteral("leProductName"));
        leProductName->setGeometry(QRect(290, 290, 221, 31));
        leProductName->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leProductUniqueId = new QLineEdit(groupBox);
        leProductUniqueId->setObjectName(QStringLiteral("leProductUniqueId"));
        leProductUniqueId->setGeometry(QRect(290, 420, 221, 31));
        leProductUniqueId->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leProductShortCode = new QLineEdit(groupBox);
        leProductShortCode->setObjectName(QStringLiteral("leProductShortCode"));
        leProductShortCode->setGeometry(QRect(290, 460, 221, 31));
        leProductShortCode->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leProductQuantity = new QLineEdit(groupBox);
        leProductQuantity->setObjectName(QStringLiteral("leProductQuantity"));
        leProductQuantity->setGeometry(QRect(290, 500, 221, 31));
        leProductQuantity->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leWholeSalePrice = new QLineEdit(groupBox);
        leWholeSalePrice->setObjectName(QStringLiteral("leWholeSalePrice"));
        leWholeSalePrice->setGeometry(QRect(290, 540, 221, 31));
        leWholeSalePrice->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leRetailPrice = new QLineEdit(groupBox);
        leRetailPrice->setObjectName(QStringLiteral("leRetailPrice"));
        leRetailPrice->setGeometry(QRect(290, 580, 221, 31));
        leRetailPrice->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        btnAvatar = new QPushButton(groupBox);
        btnAvatar->setObjectName(QStringLiteral("btnAvatar"));
        btnAvatar->setGeometry(QRect(520, 250, 91, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/newIcons/icons8-opened-folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAvatar->setIcon(icon2);
        btnAvatar->setIconSize(QSize(24, 24));
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(70, 330, 201, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        cbProductCategory = new QComboBox(groupBox);
        cbProductCategory->setObjectName(QStringLiteral("cbProductCategory"));
        cbProductCategory->setGeometry(QRect(290, 330, 221, 31));
        cbProductZone = new QComboBox(groupBox);
        cbProductZone->setObjectName(QStringLiteral("cbProductZone"));
        cbProductZone->setGeometry(QRect(290, 370, 221, 31));
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(70, 370, 201, 31));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        label = new QLabel(AddProduct);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(AddProduct);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, -10, 1001, 781));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(AddProduct);

        QMetaObject::connectSlotsByName(AddProduct);
    } // setupUi

    void retranslateUi(QDialog *AddProduct)
    {
        AddProduct->setWindowTitle(QApplication::translate("AddProduct", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AddProduct", "Add New Product", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("AddProduct", "Product Name", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("AddProduct", "Product Barcode", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("AddProduct", "Product Short Code", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("AddProduct", "Product Image", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("AddProduct", "Wholesale Price", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("AddProduct", "Product Quantity", Q_NULLPTR));
        btnOkay->setText(QApplication::translate("AddProduct", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AddProduct", "Cancel", Q_NULLPTR));
        lbl_avatar->setText(QString());
        label_11->setText(QApplication::translate("AddProduct", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lbl_username_2->setText(QApplication::translate("AddProduct", "Retail Price", Q_NULLPTR));
        btnAvatar->setText(QApplication::translate("AddProduct", "Open...", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("AddProduct", "Product Category", Q_NULLPTR));
        cbProductCategory->clear();
        cbProductCategory->insertItems(0, QStringList()
         << QApplication::translate("AddProduct", "Select Product Category", Q_NULLPTR)
        );
        cbProductZone->clear();
        cbProductZone->insertItems(0, QStringList()
         << QApplication::translate("AddProduct", "Select Product Category", Q_NULLPTR)
        );
        lbl_first_name_3->setText(QApplication::translate("AddProduct", "Product Zone/Shelf", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddProduct: public Ui_AddProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
