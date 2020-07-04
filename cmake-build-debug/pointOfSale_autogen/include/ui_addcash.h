/********************************************************************************
** Form generated from reading UI file 'addcash.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCASH_H
#define UI_ADDCASH_H

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

class Ui_AddCash
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QPushButton *btnApply;
    QLineEdit *leCashAmount;
    QComboBox *cbSelectTransaction;
    QPushButton *btnCancel;
    QLabel *label_2;

    void setupUi(QDialog *AddCash)
    {
        if (AddCash->objectName().isEmpty())
            AddCash->setObjectName(QStringLiteral("AddCash"));
        AddCash->resize(544, 389);
        label = new QLabel(AddCash);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(AddCash);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 90, 451, 231));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(12, 30, 191, 21));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        lbl_other_names = new QLabel(groupBox);
        lbl_other_names->setObjectName(QStringLiteral("lbl_other_names"));
        lbl_other_names->setGeometry(QRect(12, 65, 191, 21));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(90, 150, 121, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        leCashAmount = new QLineEdit(groupBox);
        leCashAmount->setObjectName(QStringLiteral("leCashAmount"));
        leCashAmount->setGeometry(QRect(220, 60, 211, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(10);
        leCashAmount->setFont(font1);
        cbSelectTransaction = new QComboBox(groupBox);
        cbSelectTransaction->setObjectName(QStringLiteral("cbSelectTransaction"));
        cbSelectTransaction->setGeometry(QRect(220, 30, 211, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Waree"));
        font2.setPointSize(11);
        cbSelectTransaction->setFont(font2);
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(240, 150, 121, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        label_2 = new QLabel(AddCash);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 531, 381));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(AddCash);

        QMetaObject::connectSlotsByName(AddCash);
    } // setupUi

    void retranslateUi(QDialog *AddCash)
    {
        AddCash->setWindowTitle(QApplication::translate("AddCash", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("AddCash", "Add Cash To Business", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("AddCash", "Select Transaction Type", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("AddCash", "Enter Amount", Q_NULLPTR));
        btnApply->setText(QApplication::translate("AddCash", "Apply", Q_NULLPTR));
        cbSelectTransaction->clear();
        cbSelectTransaction->insertItems(0, QStringList()
         << QApplication::translate("AddCash", "Select Cash Transaction", Q_NULLPTR)
        );
        btnCancel->setText(QApplication::translate("AddCash", "Cancel", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddCash: public Ui_AddCash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCASH_H
