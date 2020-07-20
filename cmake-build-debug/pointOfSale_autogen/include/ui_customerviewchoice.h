/********************************************************************************
** Form generated from reading UI file 'customerviewchoice.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERVIEWCHOICE_H
#define UI_CUSTOMERVIEWCHOICE_H

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

class Ui_CustomerViewChoice
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QPushButton *btnViewAllCustomers;
    QPushButton *btnCloseWindow;
    QPushButton *btnOkay;
    QLineEdit *leCustomerIdentifier;
    QLabel *label_2;

    void setupUi(QDialog *CustomerViewChoice)
    {
        if (CustomerViewChoice->objectName().isEmpty())
            CustomerViewChoice->setObjectName(QStringLiteral("CustomerViewChoice"));
        CustomerViewChoice->resize(609, 511);
        label = new QLabel(CustomerViewChoice);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(CustomerViewChoice);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 120, 581, 291));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(20, 80, 231, 31));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        btnViewAllCustomers = new QPushButton(groupBox);
        btnViewAllCustomers->setObjectName(QStringLiteral("btnViewAllCustomers"));
        btnViewAllCustomers->setGeometry(QRect(30, 190, 211, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-invisible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewAllCustomers->setIcon(icon);
        btnViewAllCustomers->setIconSize(QSize(24, 24));
        btnCloseWindow = new QPushButton(groupBox);
        btnCloseWindow->setObjectName(QStringLiteral("btnCloseWindow"));
        btnCloseWindow->setGeometry(QRect(270, 190, 191, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCloseWindow->setIcon(icon1);
        btnCloseWindow->setIconSize(QSize(24, 24));
        btnOkay = new QPushButton(groupBox);
        btnOkay->setObjectName(QStringLiteral("btnOkay"));
        btnOkay->setGeometry(QRect(470, 80, 101, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/interfaces.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnOkay->setIcon(icon2);
        btnOkay->setIconSize(QSize(24, 24));
        leCustomerIdentifier = new QLineEdit(groupBox);
        leCustomerIdentifier->setObjectName(QStringLiteral("leCustomerIdentifier"));
        leCustomerIdentifier->setGeometry(QRect(260, 80, 201, 31));
        label_2 = new QLabel(CustomerViewChoice);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 591, 501));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(CustomerViewChoice);

        QMetaObject::connectSlotsByName(CustomerViewChoice);
    } // setupUi

    void retranslateUi(QDialog *CustomerViewChoice)
    {
        CustomerViewChoice->setWindowTitle(QApplication::translate("CustomerViewChoice", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("CustomerViewChoice", "User Information", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("CustomerViewChoice", "Customer/Agent Name/Phone:", Q_NULLPTR));
        btnViewAllCustomers->setText(QApplication::translate("CustomerViewChoice", "View All Customers", Q_NULLPTR));
        btnCloseWindow->setText(QApplication::translate("CustomerViewChoice", "Close Window", Q_NULLPTR));
        btnOkay->setText(QApplication::translate("CustomerViewChoice", "Ok", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomerViewChoice: public Ui_CustomerViewChoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEWCHOICE_H
