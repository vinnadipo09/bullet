/********************************************************************************
** Form generated from reading UI file 'viaddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIADDIALOG_H
#define UI_VIADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ViadDialog
{
public:

    void setupUi(QDialog *ViadDialog)
    {
        if (ViadDialog->objectName().isEmpty())
            ViadDialog->setObjectName(QStringLiteral("ViadDialog"));
        ViadDialog->resize(400, 300);

        retranslateUi(ViadDialog);

        QMetaObject::connectSlotsByName(ViadDialog);
    } // setupUi

    void retranslateUi(QDialog *ViadDialog)
    {
        ViadDialog->setWindowTitle(QApplication::translate("ViadDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ViadDialog: public Ui_ViadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIADDIALOG_H
