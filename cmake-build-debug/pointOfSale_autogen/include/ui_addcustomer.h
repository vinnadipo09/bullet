/********************************************************************************
** Form generated from reading UI file 'addcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCUSTOMER_H
#define UI_ADDCUSTOMER_H

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

class Ui_AddCustomer
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QPushButton *btn_edit_view;
    QPushButton *btn_delete_user;
    QLineEdit *le_Name;
    QLabel *lbl_first_name_2;
    QLineEdit *le_Phone;
    QLineEdit *leCreditAllowed;
    QLabel *lbl_first_name_3;
    QLabel *lbl_first_name_4;
    QComboBox *cbCustomerType;
    QLabel *label_2;

    void setupUi(QDialog *AddCustomer)
    {
        if (AddCustomer->objectName().isEmpty())
            AddCustomer->setObjectName(QStringLiteral("AddCustomer"));
        AddCustomer->resize(749, 624);
        label = new QLabel(AddCustomer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 100, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(AddCustomer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 150, 481, 311));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(12, 30, 191, 31));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        btn_edit_view = new QPushButton(groupBox);
        btn_edit_view->setObjectName(QStringLiteral("btn_edit_view"));
        btn_edit_view->setGeometry(QRect(74, 220, 131, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interfaces.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit_view->setIcon(icon);
        btn_edit_view->setIconSize(QSize(24, 24));
        btn_delete_user = new QPushButton(groupBox);
        btn_delete_user->setObjectName(QStringLiteral("btn_delete_user"));
        btn_delete_user->setGeometry(QRect(230, 220, 141, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete_user->setIcon(icon1);
        btn_delete_user->setIconSize(QSize(24, 24));
        le_Name = new QLineEdit(groupBox);
        le_Name->setObjectName(QStringLiteral("le_Name"));
        le_Name->setGeometry(QRect(220, 30, 241, 31));
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(12, 70, 191, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        le_Phone = new QLineEdit(groupBox);
        le_Phone->setObjectName(QStringLiteral("le_Phone"));
        le_Phone->setGeometry(QRect(220, 70, 241, 31));
        leCreditAllowed = new QLineEdit(groupBox);
        leCreditAllowed->setObjectName(QStringLiteral("leCreditAllowed"));
        leCreditAllowed->setGeometry(QRect(220, 150, 241, 31));
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(12, 150, 191, 31));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        lbl_first_name_4 = new QLabel(groupBox);
        lbl_first_name_4->setObjectName(QStringLiteral("lbl_first_name_4"));
        lbl_first_name_4->setGeometry(QRect(12, 110, 191, 31));
        lbl_first_name_4->setFont(font);
        lbl_first_name_4->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_4->setFrameShape(QFrame::Panel);
        lbl_first_name_4->setFrameShadow(QFrame::Raised);
        cbCustomerType = new QComboBox(groupBox);
        cbCustomerType->setObjectName(QStringLiteral("cbCustomerType"));
        cbCustomerType->setGeometry(QRect(220, 110, 241, 31));
        label_2 = new QLabel(AddCustomer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-20, -10, 771, 641));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(AddCustomer);

        QMetaObject::connectSlotsByName(AddCustomer);
    } // setupUi

    void retranslateUi(QDialog *AddCustomer)
    {
        AddCustomer->setWindowTitle(QApplication::translate("AddCustomer", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("AddCustomer", "Add New Customer", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("AddCustomer", "Name", Q_NULLPTR));
        btn_edit_view->setText(QApplication::translate("AddCustomer", "OK", Q_NULLPTR));
        btn_delete_user->setText(QApplication::translate("AddCustomer", "Discard", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("AddCustomer", "Phone Number", Q_NULLPTR));
        lbl_first_name_3->setText(QApplication::translate("AddCustomer", "Credit Allowed", Q_NULLPTR));
        lbl_first_name_4->setText(QApplication::translate("AddCustomer", "Customer Type", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddCustomer: public Ui_AddCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCUSTOMER_H
