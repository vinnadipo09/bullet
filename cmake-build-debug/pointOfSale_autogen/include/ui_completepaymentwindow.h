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
    QLabel *lbl_amount_to_pay;
    QLineEdit *lbl_display_amount_to_pay;
    QLabel *lbl_payment_method;
    QComboBox *cb_display_payment_method;
    QLabel *lbl_cash_value;
    QLineEdit *lbl_cash_display;
    QLabel *lbl_MPesa_payment;
    QComboBox *cb_MPesa_display;
    QLabel *lbl_credit_payment;
    QLineEdit *lbl_credit_display;
    QLabel *lbl_reward_payment;
    QLineEdit *lbl_reward_display;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLabel *lblCreditAvailable;
    QLabel *label_6;
    QLabel *lblCashAvailable;
    QLabel *label_9;
    QLabel *lblRewardsAvailable;
    QLabel *label_11;
    QLabel *saleReward;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_fifty;
    QPushButton *btn_oneHundred;
    QPushButton *btn_twoHundred;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_fiveHundred;
    QPushButton *btn_oneThousand;
    QPushButton *btn_credit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *le_balanceOwed;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSaveCash;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCompleteSale;
    QPushButton *btnEditSale;
    QPushButton *btnCancelSale_2;

    void setupUi(QDialog *CompletePaymentWindow)
    {
        if (CompletePaymentWindow->objectName().isEmpty())
            CompletePaymentWindow->setObjectName(QStringLiteral("CompletePaymentWindow"));
        CompletePaymentWindow->resize(744, 783);
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
        lbl_amount_to_pay = new QLabel(CompletePaymentWindow);
        lbl_amount_to_pay->setObjectName(QStringLiteral("lbl_amount_to_pay"));
        lbl_amount_to_pay->setMinimumSize(QSize(250, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        lbl_amount_to_pay->setFont(font1);
        lbl_amount_to_pay->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lbl_amount_to_pay->setFrameShape(QFrame::Panel);
        lbl_amount_to_pay->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbl_amount_to_pay);

        lbl_display_amount_to_pay = new QLineEdit(CompletePaymentWindow);
        lbl_display_amount_to_pay->setObjectName(QStringLiteral("lbl_display_amount_to_pay"));
        lbl_display_amount_to_pay->setMinimumSize(QSize(250, 50));
        lbl_display_amount_to_pay->setMaximumSize(QSize(250, 16777215));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_display_amount_to_pay->setFont(font2);
        lbl_display_amount_to_pay->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_display_amount_to_pay->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, lbl_display_amount_to_pay);

        lbl_payment_method = new QLabel(CompletePaymentWindow);
        lbl_payment_method->setObjectName(QStringLiteral("lbl_payment_method"));
        lbl_payment_method->setMinimumSize(QSize(250, 50));
        lbl_payment_method->setFont(font1);
        lbl_payment_method->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lbl_payment_method->setFrameShape(QFrame::Panel);
        lbl_payment_method->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(1, QFormLayout::LabelRole, lbl_payment_method);

        cb_display_payment_method = new QComboBox(CompletePaymentWindow);
        cb_display_payment_method->setObjectName(QStringLiteral("cb_display_payment_method"));
        cb_display_payment_method->setMinimumSize(QSize(250, 50));
        cb_display_payment_method->setFont(font1);
        cb_display_payment_method->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, cb_display_payment_method);

        lbl_cash_value = new QLabel(CompletePaymentWindow);
        lbl_cash_value->setObjectName(QStringLiteral("lbl_cash_value"));
        lbl_cash_value->setMinimumSize(QSize(250, 50));
        lbl_cash_value->setFont(font1);
        lbl_cash_value->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lbl_cash_value->setFrameShape(QFrame::Panel);
        lbl_cash_value->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(2, QFormLayout::LabelRole, lbl_cash_value);

        lbl_cash_display = new QLineEdit(CompletePaymentWindow);
        lbl_cash_display->setObjectName(QStringLiteral("lbl_cash_display"));
        lbl_cash_display->setMinimumSize(QSize(0, 50));
        lbl_cash_display->setMaximumSize(QSize(250, 16777215));
        lbl_cash_display->setFont(font2);
        lbl_cash_display->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lbl_cash_display);

        lbl_MPesa_payment = new QLabel(CompletePaymentWindow);
        lbl_MPesa_payment->setObjectName(QStringLiteral("lbl_MPesa_payment"));
        lbl_MPesa_payment->setMinimumSize(QSize(250, 50));
        lbl_MPesa_payment->setFont(font1);
        lbl_MPesa_payment->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lbl_MPesa_payment->setFrameShape(QFrame::Panel);
        lbl_MPesa_payment->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(3, QFormLayout::LabelRole, lbl_MPesa_payment);

        cb_MPesa_display = new QComboBox(CompletePaymentWindow);
        cb_MPesa_display->setObjectName(QStringLiteral("cb_MPesa_display"));
        cb_MPesa_display->setMinimumSize(QSize(250, 50));
        cb_MPesa_display->setFont(font1);
        cb_MPesa_display->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));

        formLayout->setWidget(3, QFormLayout::FieldRole, cb_MPesa_display);

        lbl_credit_payment = new QLabel(CompletePaymentWindow);
        lbl_credit_payment->setObjectName(QStringLiteral("lbl_credit_payment"));
        lbl_credit_payment->setMinimumSize(QSize(250, 50));
        lbl_credit_payment->setFont(font1);
        lbl_credit_payment->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lbl_credit_payment->setFrameShape(QFrame::Panel);
        lbl_credit_payment->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(4, QFormLayout::LabelRole, lbl_credit_payment);

        lbl_credit_display = new QLineEdit(CompletePaymentWindow);
        lbl_credit_display->setObjectName(QStringLiteral("lbl_credit_display"));
        lbl_credit_display->setMinimumSize(QSize(0, 50));
        lbl_credit_display->setMaximumSize(QSize(250, 16777215));
        lbl_credit_display->setFont(font2);
        lbl_credit_display->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lbl_credit_display);

        lbl_reward_payment = new QLabel(CompletePaymentWindow);
        lbl_reward_payment->setObjectName(QStringLiteral("lbl_reward_payment"));
        lbl_reward_payment->setMinimumSize(QSize(250, 50));
        lbl_reward_payment->setFont(font1);
        lbl_reward_payment->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        lbl_reward_payment->setFrameShape(QFrame::Panel);
        lbl_reward_payment->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(5, QFormLayout::LabelRole, lbl_reward_payment);

        lbl_reward_display = new QLineEdit(CompletePaymentWindow);
        lbl_reward_display->setObjectName(QStringLiteral("lbl_reward_display"));
        lbl_reward_display->setMinimumSize(QSize(0, 50));
        lbl_reward_display->setMaximumSize(QSize(250, 16777215));
        lbl_reward_display->setFont(font2);
        lbl_reward_display->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lbl_reward_display);


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

        pushButton = new QPushButton(CompletePaymentWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, pushButton);


        horizontalLayout_5->addLayout(formLayout_2);


        verticalLayout->addLayout(horizontalLayout_5);

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
        lbl_amount_to_pay->setText(QApplication::translate("CompletePaymentWindow", "Total Amount:", Q_NULLPTR));
        lbl_payment_method->setText(QApplication::translate("CompletePaymentWindow", "Payment Method:", Q_NULLPTR));
        cb_display_payment_method->clear();
        cb_display_payment_method->insertItems(0, QStringList()
         << QApplication::translate("CompletePaymentWindow", "Cash", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Cash+Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa+Cash", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa+Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa+Rewards", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Rewards", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Cash+Rewards", Q_NULLPTR)
        );
        lbl_cash_value->setText(QApplication::translate("CompletePaymentWindow", "Cash Amount:", Q_NULLPTR));
        lbl_MPesa_payment->setText(QApplication::translate("CompletePaymentWindow", "M-Pesa Transaction:", Q_NULLPTR));
        cb_MPesa_display->clear();
        cb_MPesa_display->insertItems(0, QStringList()
         << QApplication::translate("CompletePaymentWindow", "Cash", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa+Cash", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "M-Pesa+Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Rewards", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Cash+Credit", Q_NULLPTR)
         << QApplication::translate("CompletePaymentWindow", "Cash+Rewards", Q_NULLPTR)
        );
        lbl_credit_payment->setText(QApplication::translate("CompletePaymentWindow", "Credit Amount:", Q_NULLPTR));
        lbl_reward_payment->setText(QApplication::translate("CompletePaymentWindow", "Rewards Amount:", Q_NULLPTR));
        label_4->setText(QApplication::translate("CompletePaymentWindow", "Credit Avl:", Q_NULLPTR));
        lblCreditAvailable->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        label_6->setText(QApplication::translate("CompletePaymentWindow", "Cash Avl:", Q_NULLPTR));
        lblCashAvailable->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        label_9->setText(QApplication::translate("CompletePaymentWindow", "Rewards:", Q_NULLPTR));
        lblRewardsAvailable->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        label_11->setText(QApplication::translate("CompletePaymentWindow", "Rew/Disc:", Q_NULLPTR));
        saleReward->setText(QApplication::translate("CompletePaymentWindow", "0.00", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CompletePaymentWindow", "Initiate M-Pesa", Q_NULLPTR));
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
