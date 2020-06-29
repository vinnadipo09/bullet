/********************************************************************************
** Form generated from reading UI file 'productrewardeditor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTREWARDEDITOR_H
#define UI_PRODUCTREWARDEDITOR_H

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

class Ui_ProductRewardEditor
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QPushButton *btnApply;
    QLabel *lblProductData;
    QLabel *lbl_first_name_3;
    QLabel *lblPriviousReward;
    QLineEdit *leNewReward;
    QPushButton *btnCancel;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *ProductRewardEditor)
    {
        if (ProductRewardEditor->objectName().isEmpty())
            ProductRewardEditor->setObjectName(QStringLiteral("ProductRewardEditor"));
        ProductRewardEditor->resize(689, 528);
        groupBox = new QGroupBox(ProductRewardEditor);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 110, 481, 301));
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
        lblPriviousReward = new QLabel(groupBox);
        lblPriviousReward->setObjectName(QStringLiteral("lblPriviousReward"));
        lblPriviousReward->setGeometry(QRect(300, 90, 131, 21));
        lblPriviousReward->setFont(font);
        lblPriviousReward->setStyleSheet(QLatin1String("background-color: rgb(238, 238, 236);\n"
"color: rgb(0, 0, 0);"));
        lblPriviousReward->setFrameShape(QFrame::Panel);
        lblPriviousReward->setFrameShadow(QFrame::Raised);
        leNewReward = new QLineEdit(groupBox);
        leNewReward->setObjectName(QStringLiteral("leNewReward"));
        leNewReward->setGeometry(QRect(300, 130, 131, 23));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(260, 210, 121, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        label_2 = new QLabel(ProductRewardEditor);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 681, 531));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label = new QLabel(ProductRewardEditor);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(ProductRewardEditor);

        QMetaObject::connectSlotsByName(ProductRewardEditor);
    } // setupUi

    void retranslateUi(QDialog *ProductRewardEditor)
    {
        ProductRewardEditor->setWindowTitle(QApplication::translate("ProductRewardEditor", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ProductRewardEditor", "Product Reward", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("ProductRewardEditor", "Previous Reward Amount:", Q_NULLPTR));
        btnApply->setText(QApplication::translate("ProductRewardEditor", "Apply", Q_NULLPTR));
        lblProductData->setText(QString());
        lbl_first_name_3->setText(QApplication::translate("ProductRewardEditor", "New Reward Amount:", Q_NULLPTR));
        lblPriviousReward->setText(QString());
        leNewReward->setPlaceholderText(QApplication::translate("ProductRewardEditor", "Enter New Amount", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("ProductRewardEditor", "Cancel", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProductRewardEditor: public Ui_ProductRewardEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTREWARDEDITOR_H
