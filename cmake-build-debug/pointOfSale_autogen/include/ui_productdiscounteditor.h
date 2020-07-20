/********************************************************************************
** Form generated from reading UI file 'productdiscounteditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTDISCOUNTEDITOR_H
#define UI_PRODUCTDISCOUNTEDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProductDiscountEditor
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QPushButton *btnApply;
    QLabel *lblProductData;
    QLabel *lbl_first_name_3;
    QLabel *lblPriviousDiscount;
    QLineEdit *leNewDiscount;
    QPushButton *btnCancel;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *ProductDiscountEditor)
    {
        if (ProductDiscountEditor->objectName().isEmpty())
            ProductDiscountEditor->setObjectName(QStringLiteral("ProductDiscountEditor"));
        ProductDiscountEditor->resize(787, 554);
        groupBox = new QGroupBox(ProductDiscountEditor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 110, 481, 301));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(70, 90, 211, 21));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(120, 210, 121, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/done.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        lblProductData = new QLabel(groupBox);
        lblProductData->setObjectName(QStringLiteral("lblProductData"));
        lblProductData->setGeometry(QRect(20, 30, 451, 31));
        lblProductData->setFont(font);
        lblProductData->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lblProductData->setFrameShape(QFrame::Panel);
        lblProductData->setFrameShadow(QFrame::Raised);
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(70, 130, 211, 21));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        lblPriviousDiscount = new QLabel(groupBox);
        lblPriviousDiscount->setObjectName(QStringLiteral("lblPriviousDiscount"));
        lblPriviousDiscount->setGeometry(QRect(300, 90, 131, 31));
        lblPriviousDiscount->setFont(font);
        lblPriviousDiscount->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        lblPriviousDiscount->setFrameShape(QFrame::Panel);
        lblPriviousDiscount->setFrameShadow(QFrame::Raised);
        leNewDiscount = new QLineEdit(groupBox);
        leNewDiscount->setObjectName(QStringLiteral("leNewDiscount"));
        leNewDiscount->setGeometry(QRect(300, 130, 131, 23));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(260, 210, 121, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        label_2 = new QLabel(ProductDiscountEditor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 0, 681, 531));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label = new QLabel(ProductDiscountEditor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(ProductDiscountEditor);

        QMetaObject::connectSlotsByName(ProductDiscountEditor);
    } // setupUi

    void retranslateUi(QDialog *ProductDiscountEditor)
    {
        ProductDiscountEditor->setWindowTitle(QApplication::translate("ProductDiscountEditor", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ProductDiscountEditor", "Product Discount", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("ProductDiscountEditor", "Previous Discount Amount:", Q_NULLPTR));
        btnApply->setText(QApplication::translate("ProductDiscountEditor", "Apply", Q_NULLPTR));
        lblProductData->setText(QString());
        lbl_first_name_3->setText(QApplication::translate("ProductDiscountEditor", "New Discount Amount:", Q_NULLPTR));
        lblPriviousDiscount->setText(QString());
        leNewDiscount->setPlaceholderText(QApplication::translate("ProductDiscountEditor", "Enter New Amount", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("ProductDiscountEditor", "Cancel", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProductDiscountEditor: public Ui_ProductDiscountEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTDISCOUNTEDITOR_H
