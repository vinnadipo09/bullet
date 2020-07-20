/********************************************************************************
** Form generated from reading UI file 'addsupplier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDSUPPLIER_H
#define UI_ADDSUPPLIER_H

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

class Ui_AddSupplier
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QLabel *lbl_email;
    QLabel *lbl_date;
    QPushButton *btnApply;
    QPushButton *btnCancel;
    QLabel *label_11;
    QLineEdit *leName;
    QLineEdit *leAlias;
    QLineEdit *leCompany;
    QLineEdit *lePhone;
    QLabel *lbl_first_name_2;
    QLineEdit *leProducts;
    QLineEdit *leEmail;
    QLabel *lbl_email_2;
    QLabel *label_2;

    void setupUi(QDialog *AddSupplier)
    {
        if (AddSupplier->objectName().isEmpty())
            AddSupplier->setObjectName(QStringLiteral("AddSupplier"));
        AddSupplier->resize(948, 825);
        label = new QLabel(AddSupplier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(AddSupplier);
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
        lbl_other_names->setGeometry(QRect(70, 410, 201, 31));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(70, 330, 201, 31));
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
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(130, 600, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(290, 600, 141, 31));
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
        leName = new QLineEdit(groupBox);
        leName->setObjectName(QStringLiteral("leName"));
        leName->setGeometry(QRect(290, 250, 221, 31));
        leName->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leAlias = new QLineEdit(groupBox);
        leAlias->setObjectName(QStringLiteral("leAlias"));
        leAlias->setGeometry(QRect(290, 290, 221, 31));
        leAlias->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leCompany = new QLineEdit(groupBox);
        leCompany->setObjectName(QStringLiteral("leCompany"));
        leCompany->setGeometry(QRect(290, 410, 221, 31));
        leCompany->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lePhone = new QLineEdit(groupBox);
        lePhone->setObjectName(QStringLiteral("lePhone"));
        lePhone->setGeometry(QRect(290, 330, 221, 31));
        lePhone->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(70, 450, 201, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        leProducts = new QLineEdit(groupBox);
        leProducts->setObjectName(QStringLiteral("leProducts"));
        leProducts->setGeometry(QRect(290, 450, 221, 31));
        leProducts->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leEmail = new QLineEdit(groupBox);
        leEmail->setObjectName(QStringLiteral("leEmail"));
        leEmail->setGeometry(QRect(290, 370, 221, 31));
        leEmail->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lbl_email_2 = new QLabel(groupBox);
        lbl_email_2->setObjectName(QStringLiteral("lbl_email_2"));
        lbl_email_2->setGeometry(QRect(70, 370, 201, 31));
        lbl_email_2->setFont(font);
        lbl_email_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_email_2->setFrameShape(QFrame::Panel);
        lbl_email_2->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(AddSupplier);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 941, 781));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(AddSupplier);

        QMetaObject::connectSlotsByName(AddSupplier);
    } // setupUi

    void retranslateUi(QDialog *AddSupplier)
    {
        AddSupplier->setWindowTitle(QApplication::translate("AddSupplier", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("AddSupplier", "Add New Product", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("AddSupplier", "Alias", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("AddSupplier", "Company", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("AddSupplier", "Phone", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("AddSupplier", "Name", Q_NULLPTR));
        btnApply->setText(QApplication::translate("AddSupplier", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AddSupplier", "Cancel", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddSupplier", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("AddSupplier", "Product(s) Supplied", Q_NULLPTR));
        leEmail->setText(QString());
        lbl_email_2->setText(QApplication::translate("AddSupplier", "Email", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddSupplier: public Ui_AddSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDSUPPLIER_H
