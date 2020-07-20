/********************************************************************************
** Form generated from reading UI file 'editcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCUSTOMER_H
#define UI_EDITCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_EditCustomer
{
public:

    void setupUi(QDialog *EditCustomer)
    {
        if (EditCustomer->objectName().isEmpty())
            EditCustomer->setObjectName(QStringLiteral("EditCustomer"));
        EditCustomer->resize(400, 300);

        retranslateUi(EditCustomer);

        QMetaObject::connectSlotsByName(EditCustomer);
    } // setupUi

    void retranslateUi(QDialog *EditCustomer)
    {
        EditCustomer->setWindowTitle(QApplication::translate("EditCustomer", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EditCustomer: public Ui_EditCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCUSTOMER_H
