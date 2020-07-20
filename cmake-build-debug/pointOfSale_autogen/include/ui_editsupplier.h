/********************************************************************************
** Form generated from reading UI file 'editsupplier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITSUPPLIER_H
#define UI_EDITSUPPLIER_H

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

class Ui_EditSupplier
{
public:
    QLabel *label_2;
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
    QComboBox *cbProductOne;
    QComboBox *cbProductTwo;
    QLabel *lbl_first_name_3;
    QComboBox *cbProductThree;
    QLabel *lbl_first_name_4;
    QComboBox *cbProductFour;
    QLabel *lbl_first_name_5;
    QLabel *label;

    void setupUi(QDialog *EditSupplier)
    {
        if (EditSupplier->objectName().isEmpty())
            EditSupplier->setObjectName(QStringLiteral("EditSupplier"));
        EditSupplier->resize(880, 806);
        label_2 = new QLabel(EditSupplier);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 871, 811));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(EditSupplier);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(170, 20, 681, 721));
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
        lbl_other_names->setGeometry(QRect(70, 370, 201, 31));
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
        leCompany->setGeometry(QRect(290, 370, 221, 31));
        leCompany->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lePhone = new QLineEdit(groupBox);
        lePhone->setObjectName(QStringLiteral("lePhone"));
        lePhone->setGeometry(QRect(290, 330, 221, 31));
        lePhone->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(70, 410, 201, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        cbProductOne = new QComboBox(groupBox);
        cbProductOne->setObjectName(QStringLiteral("cbProductOne"));
        cbProductOne->setGeometry(QRect(290, 410, 221, 31));
        cbProductTwo = new QComboBox(groupBox);
        cbProductTwo->setObjectName(QStringLiteral("cbProductTwo"));
        cbProductTwo->setGeometry(QRect(290, 450, 221, 31));
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(70, 450, 201, 31));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        cbProductThree = new QComboBox(groupBox);
        cbProductThree->setObjectName(QStringLiteral("cbProductThree"));
        cbProductThree->setGeometry(QRect(290, 490, 221, 31));
        lbl_first_name_4 = new QLabel(groupBox);
        lbl_first_name_4->setObjectName(QStringLiteral("lbl_first_name_4"));
        lbl_first_name_4->setGeometry(QRect(70, 490, 201, 31));
        lbl_first_name_4->setFont(font);
        lbl_first_name_4->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_4->setFrameShape(QFrame::Panel);
        lbl_first_name_4->setFrameShadow(QFrame::Raised);
        cbProductFour = new QComboBox(groupBox);
        cbProductFour->setObjectName(QStringLiteral("cbProductFour"));
        cbProductFour->setGeometry(QRect(290, 530, 221, 31));
        lbl_first_name_5 = new QLabel(groupBox);
        lbl_first_name_5->setObjectName(QStringLiteral("lbl_first_name_5"));
        lbl_first_name_5->setGeometry(QRect(70, 530, 201, 31));
        lbl_first_name_5->setFont(font);
        lbl_first_name_5->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_5->setFrameShape(QFrame::Panel);
        lbl_first_name_5->setFrameShadow(QFrame::Raised);
        label = new QLabel(EditSupplier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));

        retranslateUi(EditSupplier);

        QMetaObject::connectSlotsByName(EditSupplier);
    } // setupUi

    void retranslateUi(QDialog *EditSupplier)
    {
        EditSupplier->setWindowTitle(QApplication::translate("EditSupplier", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("EditSupplier", "Edit Supplier", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("EditSupplier", "Alias", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("EditSupplier", "Company", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("EditSupplier", "Phone", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("EditSupplier", "Name", Q_NULLPTR));
        btnApply->setText(QApplication::translate("EditSupplier", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("EditSupplier", "Cancel", Q_NULLPTR));
        label_11->setText(QApplication::translate("EditSupplier", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("EditSupplier", "Product One", Q_NULLPTR));
        cbProductOne->clear();
        cbProductOne->insertItems(0, QStringList()
         << QApplication::translate("EditSupplier", "Select Product One", Q_NULLPTR)
        );
        cbProductTwo->clear();
        cbProductTwo->insertItems(0, QStringList()
         << QApplication::translate("EditSupplier", "Select Product Two", Q_NULLPTR)
        );
        lbl_first_name_3->setText(QApplication::translate("EditSupplier", "Product Two", Q_NULLPTR));
        cbProductThree->clear();
        cbProductThree->insertItems(0, QStringList()
         << QApplication::translate("EditSupplier", "Select Product Three", Q_NULLPTR)
        );
        lbl_first_name_4->setText(QApplication::translate("EditSupplier", "Product Three", Q_NULLPTR));
        cbProductFour->clear();
        cbProductFour->insertItems(0, QStringList()
         << QApplication::translate("EditSupplier", "Select Product Four", Q_NULLPTR)
        );
        lbl_first_name_5->setText(QApplication::translate("EditSupplier", "Product Four", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditSupplier: public Ui_EditSupplier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITSUPPLIER_H
