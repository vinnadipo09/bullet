/********************************************************************************
** Form generated from reading UI file 'customerpaydebt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERPAYDEBT_H
#define UI_CUSTOMERPAYDEBT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CustomerPayDebt
{
public:

    void setupUi(QDialog *CustomerPayDebt)
    {
        if (CustomerPayDebt->objectName().isEmpty())
            CustomerPayDebt->setObjectName(QStringLiteral("CustomerPayDebt"));
        CustomerPayDebt->resize(400, 300);

        retranslateUi(CustomerPayDebt);

        QMetaObject::connectSlotsByName(CustomerPayDebt);
    } // setupUi

    void retranslateUi(QDialog *CustomerPayDebt)
    {
        CustomerPayDebt->setWindowTitle(QApplication::translate("CustomerPayDebt", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerPayDebt: public Ui_CustomerPayDebt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERPAYDEBT_H
