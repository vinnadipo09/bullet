/********************************************************************************
** Form generated from reading UI file 'addnewproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWPRODUCT_H
#define UI_ADDNEWPRODUCT_H

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

class Ui_AddNewProduct
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
    QPushButton *btn_edit_view;
    QPushButton *btn_close_view;
    QLabel *lbl_time;
    QLabel *lbl_avatar;
    QLabel *label_11;
    QLabel *lbl_username_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *AddNewProduct)
    {
        if (AddNewProduct->objectName().isEmpty())
            AddNewProduct->setObjectName(QStringLiteral("AddNewProduct"));
        AddNewProduct->resize(875, 764);
        groupBox = new QGroupBox(AddNewProduct);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(180, 0, 681, 721));
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
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(290, 250, 221, 31));
        lineEdit->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 290, 221, 31));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 330, 221, 31));
        lineEdit_3->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(290, 370, 221, 31));
        lineEdit_4->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(290, 410, 221, 31));
        lineEdit_5->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(290, 450, 221, 31));
        lineEdit_6->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_7 = new QLineEdit(groupBox);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(290, 490, 221, 31));
        lineEdit_7->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_8 = new QLineEdit(groupBox);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(290, 530, 221, 31));
        lineEdit_8->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lineEdit_9 = new QLineEdit(groupBox);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(290, 570, 221, 31));
        lineEdit_9->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(520, 250, 91, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/newIcons/icons8-opened-folder-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setIconSize(QSize(24, 24));
        label_2 = new QLabel(AddNewProduct);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, -30, 1061, 781));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label = new QLabel(AddNewProduct);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 0, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(AddNewProduct);

        QMetaObject::connectSlotsByName(AddNewProduct);
    } // setupUi

    void retranslateUi(QDialog *AddNewProduct)
    {
        AddNewProduct->setWindowTitle(QApplication::translate("AddNewProduct", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AddNewProduct", "Add New Product", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("AddNewProduct", "Product Name", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("AddNewProduct", "Product Barcode", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("AddNewProduct", "Product Short Code", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("AddNewProduct", "Product Image", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("AddNewProduct", "Wholesale Price", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("AddNewProduct", "Product Quantity", Q_NULLPTR));
        lbl_admin->setText(QApplication::translate("AddNewProduct", "Entered By", Q_NULLPTR));
        btn_edit_view->setText(QApplication::translate("AddNewProduct", "Ok", Q_NULLPTR));
        btn_close_view->setText(QApplication::translate("AddNewProduct", "Cancel", Q_NULLPTR));
        lbl_time->setText(QApplication::translate("AddNewProduct", "Product Entry Date", Q_NULLPTR));
        lbl_avatar->setText(QString());
        label_11->setText(QApplication::translate("AddNewProduct", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lbl_username_2->setText(QApplication::translate("AddNewProduct", "Retail Price", Q_NULLPTR));
        pushButton->setText(QApplication::translate("AddNewProduct", "Open...", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddNewProduct: public Ui_AddNewProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWPRODUCT_H
