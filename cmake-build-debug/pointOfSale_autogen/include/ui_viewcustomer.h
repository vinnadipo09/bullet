/********************************************************************************
** Form generated from reading UI file 'viewcustomer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWCUSTOMER_H
#define UI_VIEWCUSTOMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ViewCustomer
{
public:

    void setupUi(QDialog *ViewCustomer)
    {
        if (ViewCustomer->objectName().isEmpty())
            ViewCustomer->setObjectName(QStringLiteral("ViewCustomer"));
        ViewCustomer->resize(400, 300);

        retranslateUi(ViewCustomer);

        QMetaObject::connectSlotsByName(ViewCustomer);
    } // setupUi

    void retranslateUi(QDialog *ViewCustomer)
    {
        ViewCustomer->setWindowTitle(QApplication::translate("ViewCustomer", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViewCustomer: public Ui_ViewCustomer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWCUSTOMER_H
