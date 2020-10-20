/********************************************************************************
** Form generated from reading UI file 'quantitycontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUANTITYCONTROL_H
#define UI_QUANTITYCONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QuantityControl
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lblProductName;
    QPushButton *btnApproveQty;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpinBox *spinBoxQuantity;
    QLineEdit *lineEditProductQuantity;
    QLabel *lblQty;
    QPushButton *btnDeleteItem;
    QGridLayout *gridLayout;
    QLabel *label_2;

    void setupUi(QDialog *QuantityControl)
    {
        if (QuantityControl->objectName().isEmpty())
            QuantityControl->setObjectName(QStringLiteral("QuantityControl"));
        QuantityControl->resize(629, 288);
        label = new QLabel(QuantityControl);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 61, 51));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(QuantityControl);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 30, 551, 231));
        lblProductName = new QLabel(groupBox);
        lblProductName->setObjectName(QStringLiteral("lblProductName"));
        lblProductName->setGeometry(QRect(10, 60, 231, 31));
        QFont font;
        font.setPointSize(12);
        lblProductName->setFont(font);
        lblProductName->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(238, 238, 236);"));
        lblProductName->setFrameShape(QFrame::Panel);
        lblProductName->setFrameShadow(QFrame::Sunken);
        btnApproveQty = new QPushButton(groupBox);
        btnApproveQty->setObjectName(QStringLiteral("btnApproveQty"));
        btnApproveQty->setGeometry(QRect(470, 60, 71, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApproveQty->setIcon(icon);
        btnApproveQty->setIconSize(QSize(24, 24));
        btnOK = new QPushButton(groupBox);
        btnOK->setObjectName(QStringLiteral("btnOK"));
        btnOK->setGeometry(QRect(30, 140, 114, 30));
        btnOK->setIcon(icon);
        btnOK->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(300, 140, 101, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        spinBoxQuantity = new QSpinBox(groupBox);
        spinBoxQuantity->setObjectName(QStringLiteral("spinBoxQuantity"));
        spinBoxQuantity->setGeometry(QRect(418, 60, 42, 31));
        lineEditProductQuantity = new QLineEdit(groupBox);
        lineEditProductQuantity->setObjectName(QStringLiteral("lineEditProductQuantity"));
        lineEditProductQuantity->setGeometry(QRect(298, 60, 113, 31));
        lblQty = new QLabel(groupBox);
        lblQty->setObjectName(QStringLiteral("lblQty"));
        lblQty->setGeometry(QRect(248, 60, 41, 31));
        lblQty->setFont(font);
        lblQty->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(238, 238, 236);"));
        lblQty->setFrameShape(QFrame::Panel);
        lblQty->setFrameShadow(QFrame::Sunken);
        btnDeleteItem = new QPushButton(groupBox);
        btnDeleteItem->setObjectName(QStringLiteral("btnDeleteItem"));
        btnDeleteItem->setGeometry(QRect(170, 140, 114, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/new_icons_2/icons8-minus-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteItem->setIcon(icon2);
        btnDeleteItem->setIconSize(QSize(24, 24));
        gridLayout = new QGridLayout(QuantityControl);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(QuantityControl);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label_2->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(QuantityControl);

        QMetaObject::connectSlotsByName(QuantityControl);
    } // setupUi

    void retranslateUi(QDialog *QuantityControl)
    {
        QuantityControl->setWindowTitle(QApplication::translate("QuantityControl", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("QuantityControl", "Modify Product Quantity", Q_NULLPTR));
        lblProductName->setText(QApplication::translate("QuantityControl", "Product Name", Q_NULLPTR));
        btnApproveQty->setText(QApplication::translate("QuantityControl", "Apply", Q_NULLPTR));
        btnOK->setText(QApplication::translate("QuantityControl", "OK", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QuantityControl", "Cancel", Q_NULLPTR));
        lblQty->setText(QApplication::translate("QuantityControl", "QTY", Q_NULLPTR));
        btnDeleteItem->setText(QApplication::translate("QuantityControl", "Delete Item", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QuantityControl: public Ui_QuantityControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUANTITYCONTROL_H
