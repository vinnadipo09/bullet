/********************************************************************************
** Form generated from reading UI file 'completepaymentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLETEPAYMENTWINDOW_H
#define UI_COMPLETEPAYMENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CompletePaymentWindow
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *le_amountTotal;
    QComboBox *cb_paymentMethod;
    QLineEdit *le_paymentMethod;
    QLabel *label_4;
    QLineEdit *le_amountPaid;
    QLabel *label_5;
    QLineEdit *le_balanceOwed;
    QPushButton *btnCompleteSale;
    QPushButton *btnCancelSale;
    QLabel *labelFrame;
    QLabel *lbl_paymentMethod;
    QPushButton *btn_oneHundred;
    QPushButton *btn_twoHundred;
    QPushButton *btn_oneThousand;
    QPushButton *btn_fifty;
    QPushButton *btn_fiveHundred;
    QPushButton *btn_credit;

    void setupUi(QDialog *CompletePaymentWindow)
    {
        if (CompletePaymentWindow->objectName().isEmpty())
            CompletePaymentWindow->setObjectName(QStringLiteral("CompletePaymentWindow"));
        CompletePaymentWindow->resize(800, 600);
        CompletePaymentWindow->setStyleSheet(QStringLiteral(""));
        label_2 = new QLabel(CompletePaymentWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 20, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("Umpush"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setFrameShape(QFrame::Box);
        label_3 = new QLabel(CompletePaymentWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(110, 110, 231, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(138, 226, 52);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);
        le_amountTotal = new QLineEdit(CompletePaymentWindow);
        le_amountTotal->setObjectName(QStringLiteral("le_amountTotal"));
        le_amountTotal->setGeometry(QRect(370, 110, 191, 41));
        le_amountTotal->setFont(font1);
        le_amountTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(78, 154, 6);\n"
""));
        le_amountTotal->setReadOnly(true);
        cb_paymentMethod = new QComboBox(CompletePaymentWindow);
        cb_paymentMethod->setObjectName(QStringLiteral("cb_paymentMethod"));
        cb_paymentMethod->setGeometry(QRect(110, 160, 231, 41));
        cb_paymentMethod->setFont(font1);
        cb_paymentMethod->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        le_paymentMethod = new QLineEdit(CompletePaymentWindow);
        le_paymentMethod->setObjectName(QStringLiteral("le_paymentMethod"));
        le_paymentMethod->setGeometry(QRect(370, 160, 191, 41));
        le_paymentMethod->setFont(font1);
        le_paymentMethod->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(78, 154, 6);\n"
""));
        le_paymentMethod->setReadOnly(true);
        label_4 = new QLabel(CompletePaymentWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 210, 231, 41));
        label_4->setFont(font1);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(138, 226, 52);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_4->setFrameShape(QFrame::Panel);
        label_4->setFrameShadow(QFrame::Raised);
        le_amountPaid = new QLineEdit(CompletePaymentWindow);
        le_amountPaid->setObjectName(QStringLiteral("le_amountPaid"));
        le_amountPaid->setGeometry(QRect(370, 210, 191, 41));
        le_amountPaid->setFont(font1);
        le_amountPaid->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"background-color: rgb(238, 238, 236);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(CompletePaymentWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(120, 450, 221, 41));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("background-color: rgb(138, 226, 52);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);
        le_balanceOwed = new QLineEdit(CompletePaymentWindow);
        le_balanceOwed->setObjectName(QStringLiteral("le_balanceOwed"));
        le_balanceOwed->setGeometry(QRect(370, 450, 191, 41));
        le_balanceOwed->setFont(font1);
        le_balanceOwed->setStyleSheet(QLatin1String("background-color: rgb(138, 226, 52);\n"
"color: rgb(0, 0, 0);"));
        le_balanceOwed->setReadOnly(true);
        btnCompleteSale = new QPushButton(CompletePaymentWindow);
        btnCompleteSale->setObjectName(QStringLiteral("btnCompleteSale"));
        btnCompleteSale->setGeometry(QRect(230, 510, 151, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-ok-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSale->setIcon(icon);
        btnCompleteSale->setIconSize(QSize(32, 32));
        btnCancelSale = new QPushButton(CompletePaymentWindow);
        btnCancelSale->setObjectName(QStringLiteral("btnCancelSale"));
        btnCancelSale->setGeometry(QRect(460, 510, 141, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-delete-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale->setIcon(icon1);
        btnCancelSale->setIconSize(QSize(32, 32));
        labelFrame = new QLabel(CompletePaymentWindow);
        labelFrame->setObjectName(QStringLiteral("labelFrame"));
        labelFrame->setGeometry(QRect(0, -6, 791, 601));
        labelFrame->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/users_1.jpg);"));
        labelFrame->setFrameShape(QFrame::Panel);
        labelFrame->setFrameShadow(QFrame::Raised);
        lbl_paymentMethod = new QLabel(CompletePaymentWindow);
        lbl_paymentMethod->setObjectName(QStringLiteral("lbl_paymentMethod"));
        lbl_paymentMethod->setGeometry(QRect(580, 110, 181, 141));
        QFont font2;
        font2.setFamily(QStringLiteral("Umpush"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_paymentMethod->setFont(font2);
        lbl_paymentMethod->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lbl_paymentMethod->setFrameShape(QFrame::Panel);
        lbl_paymentMethod->setFrameShadow(QFrame::Raised);
        lbl_paymentMethod->setAlignment(Qt::AlignCenter);
        btn_oneHundred = new QPushButton(CompletePaymentWindow);
        btn_oneHundred->setObjectName(QStringLiteral("btn_oneHundred"));
        btn_oneHundred->setGeometry(QRect(269, 260, 151, 71));
        btn_oneHundred->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/100-kashas-2019-avers.png);"));
        btn_twoHundred = new QPushButton(CompletePaymentWindow);
        btn_twoHundred->setObjectName(QStringLiteral("btn_twoHundred"));
        btn_twoHundred->setGeometry(QRect(426, 260, 151, 71));
        btn_twoHundred->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/download (1).jpeg);"));
        btn_oneThousand = new QPushButton(CompletePaymentWindow);
        btn_oneThousand->setObjectName(QStringLiteral("btn_oneThousand"));
        btn_oneThousand->setGeometry(QRect(270, 340, 151, 71));
        btn_oneThousand->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/kenya-money.jpg);"));
        btn_fifty = new QPushButton(CompletePaymentWindow);
        btn_fifty->setObjectName(QStringLiteral("btn_fifty"));
        btn_fifty->setGeometry(QRect(110, 260, 151, 71));
        btn_fifty->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/download.jpeg);"));
        btn_fiveHundred = new QPushButton(CompletePaymentWindow);
        btn_fiveHundred->setObjectName(QStringLiteral("btn_fiveHundred"));
        btn_fiveHundred->setGeometry(QRect(110, 340, 151, 71));
        btn_fiveHundred->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/download (2).jpeg);"));
        btn_credit = new QPushButton(CompletePaymentWindow);
        btn_credit->setObjectName(QStringLiteral("btn_credit"));
        btn_credit->setGeometry(QRect(430, 340, 151, 71));
        btn_credit->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/credit.png);"));
        labelFrame->raise();
        label_2->raise();
        label_3->raise();
        le_amountTotal->raise();
        cb_paymentMethod->raise();
        le_paymentMethod->raise();
        label_4->raise();
        le_amountPaid->raise();
        label_5->raise();
        le_balanceOwed->raise();
        btnCompleteSale->raise();
        btnCancelSale->raise();
        lbl_paymentMethod->raise();
        btn_oneHundred->raise();
        btn_twoHundred->raise();
        btn_oneThousand->raise();
        btn_fifty->raise();
        btn_fiveHundred->raise();
        btn_credit->raise();

        retranslateUi(CompletePaymentWindow);

        QMetaObject::connectSlotsByName(CompletePaymentWindow);
    } // setupUi

    void retranslateUi(QDialog *CompletePaymentWindow)
    {
        CompletePaymentWindow->setWindowTitle(QApplication::translate("CompletePaymentWindow", "Dialog", Q_NULLPTR));
        label_2->setText(QApplication::translate("CompletePaymentWindow", "Complete Sale", Q_NULLPTR));
        label_3->setText(QApplication::translate("CompletePaymentWindow", "Total Amount:", Q_NULLPTR));
        cb_paymentMethod->clear();
        cb_paymentMethod->insertItems(0, QStringList()
         << QApplication::translate("CompletePaymentWindow", "Payment Method", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Cash", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Debit Card", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Points", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Points+Cash", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("CompletePaymentWindow", "Amount Paid:", Q_NULLPTR));
        label_5->setText(QApplication::translate("CompletePaymentWindow", "Balance", Q_NULLPTR));
        btnCompleteSale->setText(QApplication::translate("CompletePaymentWindow", "Ok", Q_NULLPTR));
        btnCancelSale->setText(QApplication::translate("CompletePaymentWindow", "Cancel", Q_NULLPTR));
        labelFrame->setText(QString());
        lbl_paymentMethod->setText(QApplication::translate("CompletePaymentWindow", "Payment Method", Q_NULLPTR));
        btn_oneHundred->setText(QString());
        btn_twoHundred->setText(QString());
        btn_oneThousand->setText(QString());
        btn_fifty->setText(QString());
        btn_fiveHundred->setText(QString());
        btn_credit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CompletePaymentWindow: public Ui_CompletePaymentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETEPAYMENTWINDOW_H
