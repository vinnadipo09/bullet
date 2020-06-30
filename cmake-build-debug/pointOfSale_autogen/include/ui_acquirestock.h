/********************************************************************************
** Form generated from reading UI file 'acquirestock.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACQUIRESTOCK_H
#define UI_ACQUIRESTOCK_H

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

class Ui_AcquireStock
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_date;
    QPushButton *btnApply;
    QPushButton *btnCancel;
    QLabel *label_11;
    QLineEdit *leQuantity;
    QLabel *lbl_date_2;
    QLabel *lbl_date_3;
    QPushButton *btnSix;
    QPushButton *btnTwelve;
    QPushButton *btnTwentyFour;
    QPushButton *btnSixty;
    QPushButton *btnThirtySix;
    QPushButton *btnFortyEight;
    QLabel *lbl_date_4;
    QLineEdit *lePaymentDate;
    QPushButton *btnCalender;
    QLabel *lbl_date_5;
    QLineEdit *leAmount;
    QLabel *lbl_date_6;
    QComboBox *cbPaymentMethod;
    QLineEdit *leSupplier;
    QLineEdit *leProduct;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *AcquireStock)
    {
        if (AcquireStock->objectName().isEmpty())
            AcquireStock->setObjectName(QStringLiteral("AcquireStock"));
        AcquireStock->resize(961, 797);
        groupBox = new QGroupBox(AcquireStock);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(170, 40, 681, 721));
        lbl_date = new QLabel(groupBox);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setGeometry(QRect(50, 200, 201, 31));
        QFont font;
        font.setPointSize(12);
        lbl_date->setFont(font);
        lbl_date->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(130, 600, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(290, 600, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 631, 21));
        label_11->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        leQuantity = new QLineEdit(groupBox);
        leQuantity->setObjectName(QStringLiteral("leQuantity"));
        leQuantity->setGeometry(QRect(280, 200, 241, 31));
        leQuantity->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lbl_date_2 = new QLabel(groupBox);
        lbl_date_2->setObjectName(QStringLiteral("lbl_date_2"));
        lbl_date_2->setGeometry(QRect(50, 120, 201, 31));
        lbl_date_2->setFont(font);
        lbl_date_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date_2->setFrameShape(QFrame::Panel);
        lbl_date_2->setFrameShadow(QFrame::Raised);
        lbl_date_3 = new QLabel(groupBox);
        lbl_date_3->setObjectName(QStringLiteral("lbl_date_3"));
        lbl_date_3->setGeometry(QRect(50, 160, 201, 31));
        lbl_date_3->setFont(font);
        lbl_date_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date_3->setFrameShape(QFrame::Panel);
        lbl_date_3->setFrameShadow(QFrame::Raised);
        btnSix = new QPushButton(groupBox);
        btnSix->setObjectName(QStringLiteral("btnSix"));
        btnSix->setGeometry(QRect(280, 240, 80, 23));
        btnSix->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        btnTwelve = new QPushButton(groupBox);
        btnTwelve->setObjectName(QStringLiteral("btnTwelve"));
        btnTwelve->setGeometry(QRect(360, 240, 80, 23));
        btnTwelve->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        btnTwentyFour = new QPushButton(groupBox);
        btnTwentyFour->setObjectName(QStringLiteral("btnTwentyFour"));
        btnTwentyFour->setGeometry(QRect(440, 240, 80, 23));
        btnTwentyFour->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        btnSixty = new QPushButton(groupBox);
        btnSixty->setObjectName(QStringLiteral("btnSixty"));
        btnSixty->setGeometry(QRect(440, 270, 80, 23));
        btnSixty->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        btnThirtySix = new QPushButton(groupBox);
        btnThirtySix->setObjectName(QStringLiteral("btnThirtySix"));
        btnThirtySix->setGeometry(QRect(280, 270, 80, 23));
        btnThirtySix->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        btnFortyEight = new QPushButton(groupBox);
        btnFortyEight->setObjectName(QStringLiteral("btnFortyEight"));
        btnFortyEight->setGeometry(QRect(360, 270, 80, 23));
        btnFortyEight->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lbl_date_4 = new QLabel(groupBox);
        lbl_date_4->setObjectName(QStringLiteral("lbl_date_4"));
        lbl_date_4->setGeometry(QRect(50, 390, 201, 31));
        lbl_date_4->setFont(font);
        lbl_date_4->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date_4->setFrameShape(QFrame::Panel);
        lbl_date_4->setFrameShadow(QFrame::Raised);
        lePaymentDate = new QLineEdit(groupBox);
        lePaymentDate->setObjectName(QStringLiteral("lePaymentDate"));
        lePaymentDate->setGeometry(QRect(330, 390, 191, 31));
        lePaymentDate->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        btnCalender = new QPushButton(groupBox);
        btnCalender->setObjectName(QStringLiteral("btnCalender"));
        btnCalender->setGeometry(QRect(280, 390, 41, 31));
        lbl_date_5 = new QLabel(groupBox);
        lbl_date_5->setObjectName(QStringLiteral("lbl_date_5"));
        lbl_date_5->setGeometry(QRect(50, 350, 201, 31));
        lbl_date_5->setFont(font);
        lbl_date_5->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date_5->setFrameShape(QFrame::Panel);
        lbl_date_5->setFrameShadow(QFrame::Raised);
        leAmount = new QLineEdit(groupBox);
        leAmount->setObjectName(QStringLiteral("leAmount"));
        leAmount->setGeometry(QRect(280, 350, 241, 31));
        leAmount->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        lbl_date_6 = new QLabel(groupBox);
        lbl_date_6->setObjectName(QStringLiteral("lbl_date_6"));
        lbl_date_6->setGeometry(QRect(50, 310, 201, 31));
        lbl_date_6->setFont(font);
        lbl_date_6->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_date_6->setFrameShape(QFrame::Panel);
        lbl_date_6->setFrameShadow(QFrame::Raised);
        cbPaymentMethod = new QComboBox(groupBox);
        cbPaymentMethod->setObjectName(QStringLiteral("cbPaymentMethod"));
        cbPaymentMethod->setGeometry(QRect(280, 310, 241, 31));
        leSupplier = new QLineEdit(groupBox);
        leSupplier->setObjectName(QStringLiteral("leSupplier"));
        leSupplier->setGeometry(QRect(280, 160, 241, 31));
        leSupplier->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leProduct = new QLineEdit(groupBox);
        leProduct->setObjectName(QStringLiteral("leProduct"));
        leProduct->setGeometry(QRect(280, 120, 241, 31));
        leProduct->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        label = new QLabel(AcquireStock);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(AcquireStock);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 941, 781));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(AcquireStock);

        QMetaObject::connectSlotsByName(AcquireStock);
    } // setupUi

    void retranslateUi(QDialog *AcquireStock)
    {
        AcquireStock->setWindowTitle(QApplication::translate("AcquireStock", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AcquireStock", "Add New Product", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("AcquireStock", "Quantity", Q_NULLPTR));
        btnApply->setText(QApplication::translate("AcquireStock", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AcquireStock", "Cancel", Q_NULLPTR));
        label_11->setText(QApplication::translate("AcquireStock", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
        lbl_date_2->setText(QApplication::translate("AcquireStock", "Product", Q_NULLPTR));
        lbl_date_3->setText(QApplication::translate("AcquireStock", "Supplier", Q_NULLPTR));
        btnSix->setText(QApplication::translate("AcquireStock", "6 pcs", Q_NULLPTR));
        btnTwelve->setText(QApplication::translate("AcquireStock", "12 pcs", Q_NULLPTR));
        btnTwentyFour->setText(QApplication::translate("AcquireStock", "24 pcs", Q_NULLPTR));
        btnSixty->setText(QApplication::translate("AcquireStock", "60 pcs", Q_NULLPTR));
        btnThirtySix->setText(QApplication::translate("AcquireStock", "36 pcs", Q_NULLPTR));
        btnFortyEight->setText(QApplication::translate("AcquireStock", "48 pcs", Q_NULLPTR));
        lbl_date_4->setText(QApplication::translate("AcquireStock", "Expected Payment Date", Q_NULLPTR));
        btnCalender->setText(QApplication::translate("AcquireStock", "C", Q_NULLPTR));
        lbl_date_5->setText(QApplication::translate("AcquireStock", "Amount", Q_NULLPTR));
        lbl_date_6->setText(QApplication::translate("AcquireStock", "Payment Method", Q_NULLPTR));
        cbPaymentMethod->clear();
        cbPaymentMethod->insertItems(0, QStringList()
         << QApplication::translate("AcquireStock", "Select Payment Method", Q_NULLPTR)
         << QApplication::translate("AcquireStock", "Cash", Q_NULLPTR)
         << QApplication::translate("AcquireStock", "Credit", Q_NULLPTR)
         << QApplication::translate("AcquireStock", "Credit+Cash", Q_NULLPTR)
        );
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AcquireStock: public Ui_AcquireStock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACQUIRESTOCK_H
