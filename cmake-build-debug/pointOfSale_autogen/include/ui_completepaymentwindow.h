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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CompletePaymentWindow
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *le_amountTotal;
    QComboBox *cb_paymentMethod;
    QLabel *lblValueOneTitle;
    QLineEdit *lblValueOne;
    QLabel *lblValueTwoTitle;
    QLineEdit *lblValueTwo;
    QLabel *label_7;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLabel *lblCreditAvailable;
    QLabel *label_6;
    QLabel *lblCashAvailable;
    QLabel *label_9;
    QLabel *lblRewardsAvailable;
    QLabel *label_11;
    QLabel *saleReward;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_fifty;
    QPushButton *btn_oneHundred;
    QPushButton *btn_twoHundred;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_fiveHundred;
    QPushButton *btn_oneThousand;
    QPushButton *btn_credit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *le_balanceOwed;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSaveCash;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCompleteSale;
    QPushButton *btnEditSale;
    QPushButton *btnCancelSale_2;

    void setupUi(QDialog *CompletePaymentWindow)
    {
        if (CompletePaymentWindow->objectName().isEmpty())
            CompletePaymentWindow->setObjectName(QStringLiteral("CompletePaymentWindow"));
        CompletePaymentWindow->resize(738, 783);
        CompletePaymentWindow->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        verticalLayout = new QVBoxLayout(CompletePaymentWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(CompletePaymentWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_2->setFrameShape(QFrame::Box);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(CompletePaymentWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(250, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        le_amountTotal = new QLineEdit(CompletePaymentWindow);
        le_amountTotal->setObjectName(QStringLiteral("le_amountTotal"));
        le_amountTotal->setMinimumSize(QSize(250, 50));
        le_amountTotal->setMaximumSize(QSize(250, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        le_amountTotal->setFont(font2);
        le_amountTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        le_amountTotal->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, le_amountTotal);

        cb_paymentMethod = new QComboBox(CompletePaymentWindow);
        cb_paymentMethod->setObjectName(QStringLiteral("cb_paymentMethod"));
        cb_paymentMethod->setMinimumSize(QSize(250, 50));
        cb_paymentMethod->setFont(font1);
        cb_paymentMethod->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cb_paymentMethod);

        lblValueOneTitle = new QLabel(CompletePaymentWindow);
        lblValueOneTitle->setObjectName(QStringLiteral("lblValueOneTitle"));
        lblValueOneTitle->setMinimumSize(QSize(250, 50));
        lblValueOneTitle->setFont(font1);
        lblValueOneTitle->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lblValueOneTitle->setFrameShape(QFrame::Panel);
        lblValueOneTitle->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(2, QFormLayout::LabelRole, lblValueOneTitle);

        lblValueOne = new QLineEdit(CompletePaymentWindow);
        lblValueOne->setObjectName(QStringLiteral("lblValueOne"));
        lblValueOne->setMinimumSize(QSize(0, 50));
        lblValueOne->setMaximumSize(QSize(250, 16777215));
        lblValueOne->setFont(font2);
        lblValueOne->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblValueOne);

        lblValueTwoTitle = new QLabel(CompletePaymentWindow);
        lblValueTwoTitle->setObjectName(QStringLiteral("lblValueTwoTitle"));
        lblValueTwoTitle->setMinimumSize(QSize(250, 50));
        lblValueTwoTitle->setFont(font1);
        lblValueTwoTitle->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lblValueTwoTitle->setFrameShape(QFrame::Panel);
        lblValueTwoTitle->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(3, QFormLayout::LabelRole, lblValueTwoTitle);

        lblValueTwo = new QLineEdit(CompletePaymentWindow);
        lblValueTwo->setObjectName(QStringLiteral("lblValueTwo"));
        lblValueTwo->setMinimumSize(QSize(0, 50));
        lblValueTwo->setMaximumSize(QSize(250, 16777215));
        lblValueTwo->setFont(font2);
        lblValueTwo->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lblValueTwo);

        label_7 = new QLabel(CompletePaymentWindow);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(250, 50));
        label_7->setFont(font1);
        label_7->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_7->setFrameShape(QFrame::Panel);
        label_7->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_7);


        horizontalLayout_4->addLayout(formLayout);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_4 = new QLabel(CompletePaymentWindow);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(100, 50));
        label_4->setMaximumSize(QSize(100, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Waree"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        label_4->setFont(font3);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_4->setFrameShape(QFrame::Panel);
        label_4->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        lblCreditAvailable = new QLabel(CompletePaymentWindow);
        lblCreditAvailable->setObjectName(QStringLiteral("lblCreditAvailable"));
        lblCreditAvailable->setMinimumSize(QSize(100, 50));
        lblCreditAvailable->setMaximumSize(QSize(100, 16777215));
        lblCreditAvailable->setFont(font3);
        lblCreditAvailable->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lblCreditAvailable->setFrameShape(QFrame::Panel);
        lblCreditAvailable->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lblCreditAvailable);

        label_6 = new QLabel(CompletePaymentWindow);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(100, 50));
        label_6->setMaximumSize(QSize(100, 16777215));
        label_6->setFont(font3);
        label_6->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_6->setFrameShape(QFrame::Panel);
        label_6->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_6);

        lblCashAvailable = new QLabel(CompletePaymentWindow);
        lblCashAvailable->setObjectName(QStringLiteral("lblCashAvailable"));
        lblCashAvailable->setMinimumSize(QSize(100, 50));
        lblCashAvailable->setMaximumSize(QSize(100, 16777215));
        lblCashAvailable->setFont(font3);
        lblCashAvailable->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lblCashAvailable->setFrameShape(QFrame::Panel);
        lblCashAvailable->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lblCashAvailable);

        label_9 = new QLabel(CompletePaymentWindow);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(100, 50));
        label_9->setMaximumSize(QSize(100, 16777215));
        label_9->setFont(font3);
        label_9->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_9->setFrameShape(QFrame::Panel);
        label_9->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        lblRewardsAvailable = new QLabel(CompletePaymentWindow);
        lblRewardsAvailable->setObjectName(QStringLiteral("lblRewardsAvailable"));
        lblRewardsAvailable->setMinimumSize(QSize(100, 50));
        lblRewardsAvailable->setMaximumSize(QSize(100, 16777215));
        lblRewardsAvailable->setFont(font3);
        lblRewardsAvailable->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lblRewardsAvailable->setFrameShape(QFrame::Panel);
        lblRewardsAvailable->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lblRewardsAvailable);

        label_11 = new QLabel(CompletePaymentWindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(100, 50));
        label_11->setMaximumSize(QSize(100, 16777215));
        label_11->setFont(font3);
        label_11->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_11->setFrameShape(QFrame::Panel);
        label_11->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_11);

        saleReward = new QLabel(CompletePaymentWindow);
        saleReward->setObjectName(QStringLiteral("saleReward"));
        saleReward->setMinimumSize(QSize(100, 50));
        saleReward->setMaximumSize(QSize(100, 16777215));
        saleReward->setFont(font3);
        saleReward->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        saleReward->setFrameShape(QFrame::Panel);
        saleReward->setFrameShadow(QFrame::Raised);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, saleReward);


        horizontalLayout_5->addLayout(formLayout_2);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        btn_fifty = new QPushButton(CompletePaymentWindow);
        btn_fifty->setObjectName(QStringLiteral("btn_fifty"));
        btn_fifty->setMinimumSize(QSize(200, 100));
        btn_fifty->setMaximumSize(QSize(16777215, 16777215));
        btn_fifty->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/download.jpeg);"));

        horizontalLayout_2->addWidget(btn_fifty);

        btn_oneHundred = new QPushButton(CompletePaymentWindow);
        btn_oneHundred->setObjectName(QStringLiteral("btn_oneHundred"));
        btn_oneHundred->setMinimumSize(QSize(200, 100));
        btn_oneHundred->setMaximumSize(QSize(16777215, 16777215));
        btn_oneHundred->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/100-kashas-2019-avers.png);"));

        horizontalLayout_2->addWidget(btn_oneHundred);

        btn_twoHundred = new QPushButton(CompletePaymentWindow);
        btn_twoHundred->setObjectName(QStringLiteral("btn_twoHundred"));
        btn_twoHundred->setMinimumSize(QSize(200, 100));
        btn_twoHundred->setMaximumSize(QSize(16777215, 16777215));
        btn_twoHundred->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/download (1).jpeg);"));

        horizontalLayout_2->addWidget(btn_twoHundred);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btn_fiveHundred = new QPushButton(CompletePaymentWindow);
        btn_fiveHundred->setObjectName(QStringLiteral("btn_fiveHundred"));
        btn_fiveHundred->setMinimumSize(QSize(200, 100));
        btn_fiveHundred->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/download (2).jpeg);"));

        horizontalLayout_3->addWidget(btn_fiveHundred);

        btn_oneThousand = new QPushButton(CompletePaymentWindow);
        btn_oneThousand->setObjectName(QStringLiteral("btn_oneThousand"));
        btn_oneThousand->setMinimumSize(QSize(200, 100));
        btn_oneThousand->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/kenya-money.jpg);"));

        horizontalLayout_3->addWidget(btn_oneThousand);

        btn_credit = new QPushButton(CompletePaymentWindow);
        btn_credit->setObjectName(QStringLiteral("btn_credit"));
        btn_credit->setMinimumSize(QSize(200, 100));
        btn_credit->setStyleSheet(QStringLiteral("border-image: url(:/resources/new_icons_2/credit.png);"));

        horizontalLayout_3->addWidget(btn_credit);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_5 = new QLabel(CompletePaymentWindow);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(250, 50));
        label_5->setMaximumSize(QSize(16777215, 50));
        label_5->setFont(font1);
        label_5->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_5);

        le_balanceOwed = new QLineEdit(CompletePaymentWindow);
        le_balanceOwed->setObjectName(QStringLiteral("le_balanceOwed"));
        le_balanceOwed->setMinimumSize(QSize(250, 50));
        le_balanceOwed->setFont(font2);
        le_balanceOwed->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        le_balanceOwed->setReadOnly(true);

        horizontalLayout_6->addWidget(le_balanceOwed);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        btnSaveCash = new QPushButton(CompletePaymentWindow);
        btnSaveCash->setObjectName(QStringLiteral("btnSaveCash"));
        btnSaveCash->setMinimumSize(QSize(200, 50));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-coin-in-hand-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSaveCash->setIcon(icon);
        btnSaveCash->setIconSize(QSize(32, 32));

        horizontalLayout_6->addWidget(btnSaveCash);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnCompleteSale = new QPushButton(CompletePaymentWindow);
        btnCompleteSale->setObjectName(QStringLiteral("btnCompleteSale"));
        btnCompleteSale->setMinimumSize(QSize(0, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-ok-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSale->setIcon(icon1);
        btnCompleteSale->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnCompleteSale);

        btnEditSale = new QPushButton(CompletePaymentWindow);
        btnEditSale->setObjectName(QStringLiteral("btnEditSale"));
        btnEditSale->setMinimumSize(QSize(0, 50));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/newIcons/icons8-edit-240.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditSale->setIcon(icon2);
        btnEditSale->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnEditSale);

        btnCancelSale_2 = new QPushButton(CompletePaymentWindow);
        btnCancelSale_2->setObjectName(QStringLiteral("btnCancelSale_2"));
        btnCancelSale_2->setMinimumSize(QSize(0, 50));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale_2->setIcon(icon3);
        btnCancelSale_2->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnCancelSale_2);


        verticalLayout->addLayout(horizontalLayout);


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
         << QApplication::translate("CompletePaymentWindow", "Cash", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Rewards", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Cash+Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Cash+Rewards", Q_NULLPTR)
        );
        lblValueOneTitle->setText(QApplication::translate("CompletePaymentWindow", "Payment One:", Q_NULLPTR));
        lblValueTwoTitle->setText(QApplication::translate("CompletePaymentWindow", "Payment Two:", Q_NULLPTR));
        label_7->setText(QApplication::translate("CompletePaymentWindow", "Payment Method:", Q_NULLPTR));
        label_4->setText(QApplication::translate("CompletePaymentWindow", "Credit Avl:", Q_NULLPTR));
        lblCreditAvailable->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        label_6->setText(QApplication::translate("CompletePaymentWindow", "Cash Avl:", Q_NULLPTR));
        lblCashAvailable->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        label_9->setText(QApplication::translate("CompletePaymentWindow", "Rewards:", Q_NULLPTR));
        lblRewardsAvailable->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        label_11->setText(QApplication::translate("CompletePaymentWindow", "Rew/Disc:", Q_NULLPTR));
        saleReward->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        btn_fifty->setText(QString());
        btn_oneHundred->setText(QString());
        btn_twoHundred->setText(QString());
        btn_fiveHundred->setText(QString());
        btn_oneThousand->setText(QString());
        btn_credit->setText(QString());
        label_5->setText(QApplication::translate("CompletePaymentWindow", "Balance", Q_NULLPTR));
        btnSaveCash->setText(QApplication::translate("CompletePaymentWindow", "Save to Account", Q_NULLPTR));
        btnCompleteSale->setText(QApplication::translate("CompletePaymentWindow", "Complete Sale", Q_NULLPTR));
        btnEditSale->setText(QApplication::translate("CompletePaymentWindow", "Edit Sale", Q_NULLPTR));
        btnCancelSale_2->setText(QApplication::translate("CompletePaymentWindow", "Cancel Sale", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CompletePaymentWindow: public Ui_CompletePaymentWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLETEPAYMENTWINDOW_H
