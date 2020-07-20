/********************************************************************************
** Form generated from reading UI file 'editproductcategory.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITPRODUCTCATEGORY_H
#define UI_EDITPRODUCTCATEGORY_H

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

class Ui_EditProductCategory
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QPushButton *btnApply;
    QPushButton *btnCancel;
    QLabel *label_11;
    QLineEdit *leCategory;
    QLineEdit *leDescription;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *EditProductCategory)
    {
        if (EditProductCategory->objectName().isEmpty())
            EditProductCategory->setObjectName(QStringLiteral("EditProductCategory"));
        EditProductCategory->resize(903, 488);
        groupBox = new QGroupBox(EditProductCategory);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 70, 681, 351));
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(70, 180, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("Vemana2000"));
        font.setPointSize(12);
        lbl_username->setFont(font);
        lbl_username->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(70, 140, 201, 31));
        QFont font1;
        font1.setPointSize(12);
        lbl_phone->setFont(font1);
        lbl_phone->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Sunken);
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(150, 250, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(310, 250, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 631, 21));
        label_11->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        leCategory = new QLineEdit(groupBox);
        leCategory->setObjectName(QStringLiteral("leCategory"));
        leCategory->setGeometry(QRect(290, 140, 221, 31));
        leCategory->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leDescription = new QLineEdit(groupBox);
        leDescription->setObjectName(QStringLiteral("leDescription"));
        leDescription->setGeometry(QRect(290, 180, 221, 31));
        leDescription->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        label = new QLabel(EditProductCategory);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(EditProductCategory);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 841, 491));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(EditProductCategory);

        QMetaObject::connectSlotsByName(EditProductCategory);
    } // setupUi

    void retranslateUi(QDialog *EditProductCategory)
    {
        EditProductCategory->setWindowTitle(QApplication::translate("EditProductCategory", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("EditProductCategory", "Add New Product Category", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("EditProductCategory", "Category Description", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("EditProductCategory", "Category Name", Q_NULLPTR));
        btnApply->setText(QApplication::translate("EditProductCategory", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("EditProductCategory", "Cancel", Q_NULLPTR));
        label_11->setText(QApplication::translate("EditProductCategory", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditProductCategory: public Ui_EditProductCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITPRODUCTCATEGORY_H
