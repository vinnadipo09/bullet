/********************************************************************************
** Form generated from reading UI file 'addtransactiontype.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTRANSACTIONTYPE_H
#define UI_ADDTRANSACTIONTYPE_H

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

class Ui_AddTransactionType
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QPushButton *pb_applyTransactionType;
    QLineEdit *le_transactionType;
    QComboBox *cb_transactionEffect;
    QPushButton *btnDiscardTransactionType;
    QLabel *label_2;

    void setupUi(QDialog *AddTransactionType)
    {
        if (AddTransactionType->objectName().isEmpty())
            AddTransactionType->setObjectName(QStringLiteral("AddTransactionType"));
        AddTransactionType->resize(508, 387);
        label = new QLabel(AddTransactionType);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(AddTransactionType);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 60, 361, 201));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(12, 30, 161, 21));
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
        lbl_other_names->setGeometry(QRect(12, 65, 161, 21));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        pb_applyTransactionType = new QPushButton(groupBox);
        pb_applyTransactionType->setObjectName(QStringLiteral("pb_applyTransactionType"));
        pb_applyTransactionType->setGeometry(QRect(30, 130, 121, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_applyTransactionType->setIcon(icon);
        pb_applyTransactionType->setIconSize(QSize(24, 24));
        le_transactionType = new QLineEdit(groupBox);
        le_transactionType->setObjectName(QStringLiteral("le_transactionType"));
        le_transactionType->setGeometry(QRect(180, 30, 171, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(10);
        le_transactionType->setFont(font1);
        cb_transactionEffect = new QComboBox(groupBox);
        cb_transactionEffect->setObjectName(QStringLiteral("cb_transactionEffect"));
        cb_transactionEffect->setGeometry(QRect(180, 60, 171, 23));
        QFont font2;
        font2.setFamily(QStringLiteral("Waree"));
        font2.setPointSize(11);
        cb_transactionEffect->setFont(font2);
        btnDiscardTransactionType = new QPushButton(groupBox);
        btnDiscardTransactionType->setObjectName(QStringLiteral("btnDiscardTransactionType"));
        btnDiscardTransactionType->setGeometry(QRect(180, 130, 121, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDiscardTransactionType->setIcon(icon1);
        btnDiscardTransactionType->setIconSize(QSize(24, 24));
        label_2 = new QLabel(AddTransactionType);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 501, 381));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(AddTransactionType);

        QMetaObject::connectSlotsByName(AddTransactionType);
    } // setupUi

    void retranslateUi(QDialog *AddTransactionType)
    {
        AddTransactionType->setWindowTitle(QApplication::translate("AddTransactionType", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("AddTransactionType", "Add New Transaction Type", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("AddTransactionType", "Transaction Type", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("AddTransactionType", "Transaction Effect", Q_NULLPTR));
        pb_applyTransactionType->setText(QApplication::translate("AddTransactionType", "Apply", Q_NULLPTR));
        cb_transactionEffect->clear();
        cb_transactionEffect->insertItems(0, QStringList()
         << QApplication::translate("AddTransactionType", "Select Transaction Effect", Q_NULLPTR)
         << QApplication::translate("AddTransactionType", "Increase in Cash", Q_NULLPTR)
         << QApplication::translate("AddTransactionType", "Decrease in Cash", Q_NULLPTR)
        );
        btnDiscardTransactionType->setText(QApplication::translate("AddTransactionType", "Cancel", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddTransactionType: public Ui_AddTransactionType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTRANSACTIONTYPE_H
