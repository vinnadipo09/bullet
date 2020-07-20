/********************************************************************************
** Form generated from reading UI file 'changedebtlimit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDEBTLIMIT_H
#define UI_CHANGEDEBTLIMIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ChangeDebtLimit
{
public:

    void setupUi(QDialog *ChangeDebtLimit)
    {
        if (ChangeDebtLimit->objectName().isEmpty())
            ChangeDebtLimit->setObjectName(QStringLiteral("ChangeDebtLimit"));
        ChangeDebtLimit->resize(400, 300);

        retranslateUi(ChangeDebtLimit);

        QMetaObject::connectSlotsByName(ChangeDebtLimit);
    } // setupUi

    void retranslateUi(QDialog *ChangeDebtLimit)
    {
        ChangeDebtLimit->setWindowTitle(QApplication::translate("ChangeDebtLimit", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeDebtLimit: public Ui_ChangeDebtLimit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDEBTLIMIT_H
