/********************************************************************************
** Form generated from reading UI file 'viewsupplier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWSUPPLIER_H
#define UI_VIEWSUPPLIER_H

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

class Ui_ViewSupplier
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QLabel *lbl_email;
    QLabel *lbl_date;
    QPushButton *btnEditSupplier;
    QPushButton *btnClose;
    QLabel *label_11;
    QLabel *lbl_first_name_2;
    QLabel *lbl_email_2;
    QLabel *lblProducts;
    QLabel *lblCompany;
    QLabel *lblEmail;
    QLabel *lblPhone;
    QLabel *lblAlias;
    QLabel *lblName;
    QLabel *lbl_other_names_2;
    QLabel *lbl_first_name_3;
    QLabel *lbl_email_3;
    QLabel *lblDebtOwed;
    QLabel *lblTotalSupply;
    QLabel *lblTotalCashPaid;
    QLabel *label;

    void setupUi(QDialog *ViewSupplier)
    {
        if (ViewSupplier->objectName().isEmpty())
            ViewSupplier->setObjectName(QStringLiteral("ViewSupplier"));
        ViewSupplier->resize(1093, 782);
        label_2 = new QLabel(ViewSupplier);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, -10, 941, 781));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(ViewSupplier);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(240, 20, 681, 721));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(70, 180, 201, 31));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        lbl_other_names = new QLabel(groupBox);
        lbl_other_names->setObjectName(QStringLiteral("lbl_other_names"));
        lbl_other_names->setGeometry(QRect(70, 300, 201, 31));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(70, 220, 201, 31));
        lbl_email->setFont(font);
        lbl_email->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_email->setFrameShape(QFrame::Panel);
        lbl_email->setFrameShadow(QFrame::Raised);
        lbl_date = new QLabel(groupBox);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setGeometry(QRect(70, 140, 201, 31));
        lbl_date->setFont(font);
        lbl_date->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);
        btnEditSupplier = new QPushButton(groupBox);
        btnEditSupplier->setObjectName(QStringLiteral("btnEditSupplier"));
        btnEditSupplier->setGeometry(QRect(200, 590, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditSupplier->setIcon(icon);
        btnEditSupplier->setIconSize(QSize(24, 24));
        btnClose = new QPushButton(groupBox);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(370, 590, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon1);
        btnClose->setIconSize(QSize(24, 24));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 631, 21));
        label_11->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(70, 340, 201, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        lbl_email_2 = new QLabel(groupBox);
        lbl_email_2->setObjectName(QStringLiteral("lbl_email_2"));
        lbl_email_2->setGeometry(QRect(70, 260, 201, 31));
        lbl_email_2->setFont(font);
        lbl_email_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_email_2->setFrameShape(QFrame::Panel);
        lbl_email_2->setFrameShadow(QFrame::Raised);
        lblProducts = new QLabel(groupBox);
        lblProducts->setObjectName(QStringLiteral("lblProducts"));
        lblProducts->setGeometry(QRect(280, 340, 331, 31));
        lblProducts->setFont(font);
        lblProducts->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblProducts->setFrameShape(QFrame::Panel);
        lblProducts->setFrameShadow(QFrame::Raised);
        lblCompany = new QLabel(groupBox);
        lblCompany->setObjectName(QStringLiteral("lblCompany"));
        lblCompany->setGeometry(QRect(280, 300, 331, 31));
        lblCompany->setFont(font);
        lblCompany->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblCompany->setFrameShape(QFrame::Panel);
        lblCompany->setFrameShadow(QFrame::Raised);
        lblEmail = new QLabel(groupBox);
        lblEmail->setObjectName(QStringLiteral("lblEmail"));
        lblEmail->setGeometry(QRect(280, 260, 331, 31));
        lblEmail->setFont(font);
        lblEmail->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblEmail->setFrameShape(QFrame::Panel);
        lblEmail->setFrameShadow(QFrame::Raised);
        lblPhone = new QLabel(groupBox);
        lblPhone->setObjectName(QStringLiteral("lblPhone"));
        lblPhone->setGeometry(QRect(280, 220, 331, 31));
        lblPhone->setFont(font);
        lblPhone->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblPhone->setFrameShape(QFrame::Panel);
        lblPhone->setFrameShadow(QFrame::Raised);
        lblAlias = new QLabel(groupBox);
        lblAlias->setObjectName(QStringLiteral("lblAlias"));
        lblAlias->setGeometry(QRect(280, 180, 331, 31));
        lblAlias->setFont(font);
        lblAlias->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblAlias->setFrameShape(QFrame::Panel);
        lblAlias->setFrameShadow(QFrame::Raised);
        lblName = new QLabel(groupBox);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(280, 140, 331, 31));
        lblName->setFont(font);
        lblName->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblName->setFrameShape(QFrame::Panel);
        lblName->setFrameShadow(QFrame::Raised);
        lbl_other_names_2 = new QLabel(groupBox);
        lbl_other_names_2->setObjectName(QStringLiteral("lbl_other_names_2"));
        lbl_other_names_2->setGeometry(QRect(70, 420, 201, 31));
        lbl_other_names_2->setFont(font);
        lbl_other_names_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_other_names_2->setFrameShape(QFrame::Panel);
        lbl_other_names_2->setFrameShadow(QFrame::Sunken);
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(70, 460, 201, 31));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        lbl_email_3 = new QLabel(groupBox);
        lbl_email_3->setObjectName(QStringLiteral("lbl_email_3"));
        lbl_email_3->setGeometry(QRect(70, 380, 201, 31));
        lbl_email_3->setFont(font);
        lbl_email_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_email_3->setFrameShape(QFrame::Panel);
        lbl_email_3->setFrameShadow(QFrame::Raised);
        lblDebtOwed = new QLabel(groupBox);
        lblDebtOwed->setObjectName(QStringLiteral("lblDebtOwed"));
        lblDebtOwed->setGeometry(QRect(280, 460, 331, 31));
        lblDebtOwed->setFont(font);
        lblDebtOwed->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblDebtOwed->setFrameShape(QFrame::Panel);
        lblDebtOwed->setFrameShadow(QFrame::Raised);
        lblTotalSupply = new QLabel(groupBox);
        lblTotalSupply->setObjectName(QStringLiteral("lblTotalSupply"));
        lblTotalSupply->setGeometry(QRect(280, 380, 331, 31));
        lblTotalSupply->setFont(font);
        lblTotalSupply->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblTotalSupply->setFrameShape(QFrame::Panel);
        lblTotalSupply->setFrameShadow(QFrame::Raised);
        lblTotalCashPaid = new QLabel(groupBox);
        lblTotalCashPaid->setObjectName(QStringLiteral("lblTotalCashPaid"));
        lblTotalCashPaid->setGeometry(QRect(280, 420, 331, 31));
        lblTotalCashPaid->setFont(font);
        lblTotalCashPaid->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lblTotalCashPaid->setFrameShape(QFrame::Panel);
        lblTotalCashPaid->setFrameShadow(QFrame::Raised);
        label = new QLabel(ViewSupplier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 20, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));

        retranslateUi(ViewSupplier);

        QMetaObject::connectSlotsByName(ViewSupplier);
    } // setupUi

    void retranslateUi(QDialog *ViewSupplier)
    {
        ViewSupplier->setWindowTitle(QApplication::translate("ViewSupplier", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("ViewSupplier", "Add New Product", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("ViewSupplier", "Alias", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("ViewSupplier", "Company", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("ViewSupplier", "Phone", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("ViewSupplier", "Name", Q_NULLPTR));
        btnEditSupplier->setText(QApplication::translate("ViewSupplier", "Edit Supplier", Q_NULLPTR));
        btnClose->setText(QApplication::translate("ViewSupplier", "Close", Q_NULLPTR));
        label_11->setText(QApplication::translate("ViewSupplier", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("ViewSupplier", "Product(s) Supplied", Q_NULLPTR));
        lbl_email_2->setText(QApplication::translate("ViewSupplier", "Email", Q_NULLPTR));
        lblProducts->setText(QString());
        lblCompany->setText(QString());
        lblEmail->setText(QString());
        lblPhone->setText(QString());
        lblAlias->setText(QString());
        lblName->setText(QString());
        lbl_other_names_2->setText(QApplication::translate("ViewSupplier", "Total Cash Paid", Q_NULLPTR));
        lbl_first_name_3->setText(QApplication::translate("ViewSupplier", "Total Debt", Q_NULLPTR));
        lbl_email_3->setText(QApplication::translate("ViewSupplier", "Total Supply Cost", Q_NULLPTR));
        lblDebtOwed->setText(QString());
        lblTotalSupply->setText(QString());
        lblTotalCashPaid->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewSupplier: public Ui_ViewSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWSUPPLIER_H
