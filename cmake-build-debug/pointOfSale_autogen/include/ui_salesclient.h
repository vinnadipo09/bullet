/********************************************************************************
** Form generated from reading UI file 'salesclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESCLIENT_H
#define UI_SALESCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SalesClient
{
public:
    QAction *actionOne;
    QAction *actionTwo;
    QAction *actionStock;
    QAction *actionOne_2;
    QAction *actionTwo_2;
    QAction *actionOrder_Center;
    QAction *actionCredit_Sales;
    QAction *actionReward_Sales;
    QAction *actionAdd_Customer;
    QAction *actionView_Customer;
    QAction *actionInitiate_Return;
    QAction *actionView_Return;
    QAction *actionView_Stock;
    QAction *actionView_All_Stock;
    QAction *actionView_Low_Stock;
    QAction *actionVIew_Stale_Stock;
    QAction *actionVIew_Fast_Moving;
    QAction *actionAll_Customers;
    QAction *actionRefund_Return;
    QAction *actionLogout;
    QAction *actionTotal_Sales;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_40;
    QLabel *lblUserAvatar;
    QLabel *lblUserName;
    QLabel *label_11;
    QLabel *label_5;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lblTime_4;
    QLabel *lblServing;
    QLabel *label_39;
    QLabel *label_37;
    QLabel *label_41;
    QSpacerItem *horizontalSpacer_7;
    QLabel *lblTime_5;
    QLabel *lblOrderId;
    QLabel *label_43;
    QLabel *label_48;
    QLabel *label_49;
    QSpacerItem *horizontalSpacer_8;
    QLabel *lblDateHolder;
    QLabel *lblDate;
    QLabel *lblTimeHolder;
    QLabel *lblTime;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *cbSalesType;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblSaleType;
    QSpacerItem *horizontalSpacer_9;
    QLabel *lblClientNameHolder;
    QLineEdit *leClient;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBoxEnableRewardPayment;
    QCheckBox *checkBoxEnableDiscount;
    QCheckBox *checkBoxEnableRewards;
    QPushButton *btnExitClient;
    QPushButton *btnOpenClose;
    QPushButton *btnLogout;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblBarCodeHolder;
    QLineEdit *le_barcodeEntry;
    QLabel *lblSearchProductHolder;
    QLineEdit *le_SearchProduct;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_54;
    QLabel *label_53;
    QLabel *label_55;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout_4;
    QLabel *label_14;
    QLabel *lblCashOnBusiness;
    QLabel *label_16;
    QLabel *lblAvailableRewards;
    QLabel *label_2;
    QLabel *lblAvailableCredit;
    QLabel *label_13;
    QLabel *lblDebt;
    QPushButton *pushButton;
    QCheckBox *checkBoxClientRewardAuthorization;
    QLabel *label_51;
    QLabel *label_50;
    QLabel *label_52;
    QVBoxLayout *verticalLayout_3;
    QLabel *lblComputedTotal;
    QFormLayout *formLayout_2;
    QLabel *label_18;
    QLabel *lblPossibleRewards;
    QLabel *label_20;
    QLabel *lblPossibleDiscounts;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_17;
    QFormLayout *formLayout;
    QLabel *label_7;
    QLabel *lblSaleValue;
    QLabel *label_8;
    QLabel *lblSaleTax;
    QLabel *label_25;
    QLabel *lblThisSaleTotal;
    QLabel *label_60;
    QLabel *label_59;
    QLabel *label_61;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btnCompleteSales;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnPlaceOrder;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnQueueSale;
    QPushButton *btnCancelSale;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btn_addNewCustomer;
    QPushButton *btn_viewCustomers;
    QLabel *label_58;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *label_36;
    QMenuBar *menubar;
    QMenu *menuHome;
    QMenu *menuSales;
    QMenu *menuCustomers;
    QMenu *menuAgents;
    QMenu *menuControl;
    QMenu *menuSettings;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SalesClient)
    {
        if (SalesClient->objectName().isEmpty())
            SalesClient->setObjectName(QStringLiteral("SalesClient"));
        SalesClient->resize(1600, 1874);
        actionOne = new QAction(SalesClient);
        actionOne->setObjectName(QStringLiteral("actionOne"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/final/real-estate.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOne->setIcon(icon);
        actionTwo = new QAction(SalesClient);
        actionTwo->setObjectName(QStringLiteral("actionTwo"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/final/sale (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTwo->setIcon(icon1);
        actionStock = new QAction(SalesClient);
        actionStock->setObjectName(QStringLiteral("actionStock"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/final/money.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStock->setIcon(icon2);
        actionOne_2 = new QAction(SalesClient);
        actionOne_2->setObjectName(QStringLiteral("actionOne_2"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/final/user (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOne_2->setIcon(icon3);
        actionTwo_2 = new QAction(SalesClient);
        actionTwo_2->setObjectName(QStringLiteral("actionTwo_2"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/final/logout (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTwo_2->setIcon(icon4);
        actionOrder_Center = new QAction(SalesClient);
        actionOrder_Center->setObjectName(QStringLiteral("actionOrder_Center"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/final/sale.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOrder_Center->setIcon(icon5);
        actionCredit_Sales = new QAction(SalesClient);
        actionCredit_Sales->setObjectName(QStringLiteral("actionCredit_Sales"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/final/wallet (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCredit_Sales->setIcon(icon6);
        actionReward_Sales = new QAction(SalesClient);
        actionReward_Sales->setObjectName(QStringLiteral("actionReward_Sales"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/final/wallet (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReward_Sales->setIcon(icon7);
        actionAdd_Customer = new QAction(SalesClient);
        actionAdd_Customer->setObjectName(QStringLiteral("actionAdd_Customer"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/final/worker.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Customer->setIcon(icon8);
        actionView_Customer = new QAction(SalesClient);
        actionView_Customer->setObjectName(QStringLiteral("actionView_Customer"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/resources/final/man.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Customer->setIcon(icon9);
        actionInitiate_Return = new QAction(SalesClient);
        actionInitiate_Return->setObjectName(QStringLiteral("actionInitiate_Return"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/resources/final/buy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionInitiate_Return->setIcon(icon10);
        actionView_Return = new QAction(SalesClient);
        actionView_Return->setObjectName(QStringLiteral("actionView_Return"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/resources/newIcons/icons8-macbook-money-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Return->setIcon(icon11);
        actionView_Stock = new QAction(SalesClient);
        actionView_Stock->setObjectName(QStringLiteral("actionView_Stock"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/resources/final/data-analytics.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Stock->setIcon(icon12);
        actionView_All_Stock = new QAction(SalesClient);
        actionView_All_Stock->setObjectName(QStringLiteral("actionView_All_Stock"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/resources/icons/search-good-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_All_Stock->setIcon(icon13);
        actionView_Low_Stock = new QAction(SalesClient);
        actionView_Low_Stock->setObjectName(QStringLiteral("actionView_Low_Stock"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/resources/final/stock-market.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionView_Low_Stock->setIcon(icon14);
        actionVIew_Stale_Stock = new QAction(SalesClient);
        actionVIew_Stale_Stock->setObjectName(QStringLiteral("actionVIew_Stale_Stock"));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/resources/final/risk.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVIew_Stale_Stock->setIcon(icon15);
        actionVIew_Fast_Moving = new QAction(SalesClient);
        actionVIew_Fast_Moving->setObjectName(QStringLiteral("actionVIew_Fast_Moving"));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/resources/newIcons/icons8-sales-performance-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVIew_Fast_Moving->setIcon(icon16);
        actionAll_Customers = new QAction(SalesClient);
        actionAll_Customers->setObjectName(QStringLiteral("actionAll_Customers"));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/resources/final/team.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAll_Customers->setIcon(icon17);
        actionRefund_Return = new QAction(SalesClient);
        actionRefund_Return->setObjectName(QStringLiteral("actionRefund_Return"));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/resources/newIcons/icons8-money-256.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRefund_Return->setIcon(icon18);
        actionLogout = new QAction(SalesClient);
        actionLogout->setObjectName(QStringLiteral("actionLogout"));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/resources/final/logout.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogout->setIcon(icon19);
        actionTotal_Sales = new QAction(SalesClient);
        actionTotal_Sales->setObjectName(QStringLiteral("actionTotal_Sales"));
        QIcon icon20;
        icon20.addFile(QStringLiteral(":/resources/final/coin.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTotal_Sales->setIcon(icon20);
        centralwidget = new QWidget(SalesClient);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(64, 64));
        label_40->setMaximumSize(QSize(64, 64));
        label_40->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_40->setFrameShape(QFrame::Panel);
        label_40->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_40);

        lblUserAvatar = new QLabel(centralwidget);
        lblUserAvatar->setObjectName(QStringLiteral("lblUserAvatar"));
        lblUserAvatar->setMinimumSize(QSize(40, 40));
        lblUserAvatar->setMaximumSize(QSize(40, 40));
        lblUserAvatar->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout->addWidget(lblUserAvatar);

        lblUserName = new QLabel(centralwidget);
        lblUserName->setObjectName(QStringLiteral("lblUserName"));
        lblUserName->setMinimumSize(QSize(120, 40));
        lblUserName->setMaximumSize(QSize(120, 40));
        lblUserName->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
""));
        lblUserName->setFrameShape(QFrame::Panel);
        lblUserName->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblUserName);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(10, 40));
        label_11->setMaximumSize(QSize(10, 40));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_11->setFrameShape(QFrame::Panel);
        label_11->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_11);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(10, 40));
        label_5->setMaximumSize(QSize(10, 40));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_5);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(10, 40));
        label_12->setMaximumSize(QSize(10, 40));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_12->setFrameShape(QFrame::Panel);
        label_12->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_12);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        lblTime_4 = new QLabel(centralwidget);
        lblTime_4->setObjectName(QStringLiteral("lblTime_4"));
        lblTime_4->setMinimumSize(QSize(180, 40));
        lblTime_4->setMaximumSize(QSize(180, 40));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lblTime_4->setFont(font);
        lblTime_4->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
""));
        lblTime_4->setFrameShape(QFrame::Panel);
        lblTime_4->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTime_4);

        lblServing = new QLabel(centralwidget);
        lblServing->setObjectName(QStringLiteral("lblServing"));
        lblServing->setMinimumSize(QSize(250, 40));
        lblServing->setMaximumSize(QSize(250, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(11);
        lblServing->setFont(font1);
        lblServing->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(238, 238, 236);\n"
""));
        lblServing->setFrameShape(QFrame::Panel);
        lblServing->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblServing);

        label_39 = new QLabel(centralwidget);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setMinimumSize(QSize(10, 40));
        label_39->setMaximumSize(QSize(10, 40));
        label_39->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_39->setFrameShape(QFrame::Panel);
        label_39->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_39);

        label_37 = new QLabel(centralwidget);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setMinimumSize(QSize(10, 40));
        label_37->setMaximumSize(QSize(10, 40));
        label_37->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_37->setFrameShape(QFrame::Panel);
        label_37->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_37);

        label_41 = new QLabel(centralwidget);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setMinimumSize(QSize(10, 40));
        label_41->setMaximumSize(QSize(10, 40));
        label_41->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_41->setFrameShape(QFrame::Panel);
        label_41->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_41);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        lblTime_5 = new QLabel(centralwidget);
        lblTime_5->setObjectName(QStringLiteral("lblTime_5"));
        lblTime_5->setMinimumSize(QSize(100, 40));
        lblTime_5->setMaximumSize(QSize(100, 40));
        lblTime_5->setFont(font);
        lblTime_5->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        lblTime_5->setFrameShape(QFrame::Panel);
        lblTime_5->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTime_5);

        lblOrderId = new QLabel(centralwidget);
        lblOrderId->setObjectName(QStringLiteral("lblOrderId"));
        lblOrderId->setMinimumSize(QSize(200, 40));
        lblOrderId->setMaximumSize(QSize(200, 40));
        lblOrderId->setFont(font1);
        lblOrderId->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(238, 238, 236);"));
        lblOrderId->setFrameShape(QFrame::Panel);
        lblOrderId->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblOrderId);

        label_43 = new QLabel(centralwidget);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(10, 40));
        label_43->setMaximumSize(QSize(10, 40));
        label_43->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_43->setFrameShape(QFrame::Panel);
        label_43->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_43);

        label_48 = new QLabel(centralwidget);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setMinimumSize(QSize(10, 40));
        label_48->setMaximumSize(QSize(10, 40));
        label_48->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_48->setFrameShape(QFrame::Panel);
        label_48->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_48);

        label_49 = new QLabel(centralwidget);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setMinimumSize(QSize(10, 40));
        label_49->setMaximumSize(QSize(10, 40));
        label_49->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_49->setFrameShape(QFrame::Panel);
        label_49->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_49);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        lblDateHolder = new QLabel(centralwidget);
        lblDateHolder->setObjectName(QStringLiteral("lblDateHolder"));
        lblDateHolder->setMinimumSize(QSize(60, 30));
        lblDateHolder->setMaximumSize(QSize(40, 40));
        lblDateHolder->setFont(font);
        lblDateHolder->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"padding: 2px;"));
        lblDateHolder->setFrameShape(QFrame::Panel);
        lblDateHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblDateHolder);

        lblDate = new QLabel(centralwidget);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        lblDate->setMinimumSize(QSize(120, 40));
        lblDate->setMaximumSize(QSize(120, 40));
        lblDate->setFont(font1);
        lblDate->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(238, 238, 236);"));
        lblDate->setFrameShape(QFrame::Panel);
        lblDate->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblDate);

        lblTimeHolder = new QLabel(centralwidget);
        lblTimeHolder->setObjectName(QStringLiteral("lblTimeHolder"));
        lblTimeHolder->setMinimumSize(QSize(60, 40));
        lblTimeHolder->setMaximumSize(QSize(50, 40));
        lblTimeHolder->setFont(font);
        lblTimeHolder->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"padding: 2px;"));
        lblTimeHolder->setFrameShape(QFrame::Panel);
        lblTimeHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTimeHolder);

        lblTime = new QLabel(centralwidget);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setMinimumSize(QSize(120, 40));
        lblTime->setMaximumSize(QSize(120, 40));
        lblTime->setFont(font1);
        lblTime->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(238, 238, 236);\n"
""));
        lblTime->setFrameShape(QFrame::Panel);
        lblTime->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTime);


        verticalLayout_6->addLayout(horizontalLayout);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_15->setFrameShape(QFrame::Panel);
        label_15->setFrameShadow(QFrame::Raised);

        verticalLayout_6->addWidget(label_15);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        cbSalesType = new QComboBox(centralwidget);
        cbSalesType->setObjectName(QStringLiteral("cbSalesType"));
        cbSalesType->setMinimumSize(QSize(30, 30));
        cbSalesType->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_9->addWidget(cbSalesType);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        lblSaleType = new QLabel(centralwidget);
        lblSaleType->setObjectName(QStringLiteral("lblSaleType"));
        lblSaleType->setMinimumSize(QSize(0, 30));
        lblSaleType->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"border-radius:3px;"));
        lblSaleType->setFrameShape(QFrame::Panel);
        lblSaleType->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(lblSaleType);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        lblClientNameHolder = new QLabel(centralwidget);
        lblClientNameHolder->setObjectName(QStringLiteral("lblClientNameHolder"));
        lblClientNameHolder->setMinimumSize(QSize(0, 30));
        lblClientNameHolder->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"padding: 2px;"));
        lblClientNameHolder->setFrameShape(QFrame::Panel);
        lblClientNameHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(lblClientNameHolder);

        leClient = new QLineEdit(centralwidget);
        leClient->setObjectName(QStringLiteral("leClient"));
        leClient->setMinimumSize(QSize(0, 30));
        leClient->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_9->addWidget(leClient);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        checkBoxEnableRewardPayment = new QCheckBox(centralwidget);
        checkBoxEnableRewardPayment->setObjectName(QStringLiteral("checkBoxEnableRewardPayment"));
        checkBoxEnableRewardPayment->setMinimumSize(QSize(0, 30));

        horizontalLayout_9->addWidget(checkBoxEnableRewardPayment);

        checkBoxEnableDiscount = new QCheckBox(centralwidget);
        checkBoxEnableDiscount->setObjectName(QStringLiteral("checkBoxEnableDiscount"));
        checkBoxEnableDiscount->setMinimumSize(QSize(0, 30));

        horizontalLayout_9->addWidget(checkBoxEnableDiscount);

        checkBoxEnableRewards = new QCheckBox(centralwidget);
        checkBoxEnableRewards->setObjectName(QStringLiteral("checkBoxEnableRewards"));
        checkBoxEnableRewards->setMinimumSize(QSize(0, 30));

        horizontalLayout_9->addWidget(checkBoxEnableRewards);

        btnExitClient = new QPushButton(centralwidget);
        btnExitClient->setObjectName(QStringLiteral("btnExitClient"));

        horizontalLayout_9->addWidget(btnExitClient);

        btnOpenClose = new QPushButton(centralwidget);
        btnOpenClose->setObjectName(QStringLiteral("btnOpenClose"));

        horizontalLayout_9->addWidget(btnOpenClose);

        btnLogout = new QPushButton(centralwidget);
        btnLogout->setObjectName(QStringLiteral("btnLogout"));

        horizontalLayout_9->addWidget(btnLogout);


        verticalLayout_6->addLayout(horizontalLayout_9);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Raised);

        verticalLayout_6->addWidget(label_21);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblBarCodeHolder = new QLabel(centralwidget);
        lblBarCodeHolder->setObjectName(QStringLiteral("lblBarCodeHolder"));
        lblBarCodeHolder->setMaximumSize(QSize(40, 40));
        lblBarCodeHolder->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        lblBarCodeHolder->setFrameShape(QFrame::Panel);
        lblBarCodeHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(lblBarCodeHolder);

        le_barcodeEntry = new QLineEdit(centralwidget);
        le_barcodeEntry->setObjectName(QStringLiteral("le_barcodeEntry"));
        le_barcodeEntry->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(le_barcodeEntry);

        lblSearchProductHolder = new QLabel(centralwidget);
        lblSearchProductHolder->setObjectName(QStringLiteral("lblSearchProductHolder"));
        lblSearchProductHolder->setMaximumSize(QSize(250, 16777215));
        lblSearchProductHolder->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        lblSearchProductHolder->setFrameShape(QFrame::Panel);
        lblSearchProductHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(lblSearchProductHolder);

        le_SearchProduct = new QLineEdit(centralwidget);
        le_SearchProduct->setObjectName(QStringLiteral("le_SearchProduct"));
        le_SearchProduct->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(le_SearchProduct);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout_2);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_10->setFrameShape(QFrame::Panel);
        label_10->setFrameShadow(QFrame::Raised);

        verticalLayout_6->addWidget(label_10);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setMinimumSize(QSize(0, 300));
        tableWidget->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));

        horizontalLayout_4->addWidget(tableWidget);


        verticalLayout_6->addLayout(horizontalLayout_4);

        label_35 = new QLabel(centralwidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_35->setFrameShape(QFrame::Panel);
        label_35->setFrameShadow(QFrame::Raised);

        verticalLayout_6->addWidget(label_35);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_54 = new QLabel(centralwidget);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_54->setFrameShape(QFrame::Panel);
        label_54->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_54);

        label_53 = new QLabel(centralwidget);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_53->setFrameShape(QFrame::Panel);
        label_53->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_53);

        label_55 = new QLabel(centralwidget);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_55->setFrameShape(QFrame::Panel);
        label_55->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_55);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Waree"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(150, 30));
        label_14->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Waree"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_14->setFont(font3);
        label_14->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
""));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_14);

        lblCashOnBusiness = new QLabel(centralwidget);
        lblCashOnBusiness->setObjectName(QStringLiteral("lblCashOnBusiness"));
        lblCashOnBusiness->setMinimumSize(QSize(250, 0));
        lblCashOnBusiness->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
""));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lblCashOnBusiness);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(150, 30));
        label_16->setMaximumSize(QSize(16777215, 16777215));
        label_16->setFont(font3);
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_16);

        lblAvailableRewards = new QLabel(centralwidget);
        lblAvailableRewards->setObjectName(QStringLiteral("lblAvailableRewards"));
        lblAvailableRewards->setMinimumSize(QSize(250, 0));
        lblAvailableRewards->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lblAvailableRewards);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 30));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_2);

        lblAvailableCredit = new QLabel(centralwidget);
        lblAvailableCredit->setObjectName(QStringLiteral("lblAvailableCredit"));
        lblAvailableCredit->setMinimumSize(QSize(250, 0));
        lblAvailableCredit->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, lblAvailableCredit);

        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(150, 30));
        label_13->setMaximumSize(QSize(16777215, 16777215));
        label_13->setFont(font3);
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_13);

        lblDebt = new QLabel(centralwidget);
        lblDebt->setObjectName(QStringLiteral("lblDebt"));
        lblDebt->setMinimumSize(QSize(250, 0));
        lblDebt->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, lblDebt);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        QIcon icon21;
        icon21.addFile(QStringLiteral(":/resources/new_icons_2/icons8-invisible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon21);
        pushButton->setIconSize(QSize(24, 24));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, pushButton);

        checkBoxClientRewardAuthorization = new QCheckBox(centralwidget);
        checkBoxClientRewardAuthorization->setObjectName(QStringLiteral("checkBoxClientRewardAuthorization"));
        checkBoxClientRewardAuthorization->setMinimumSize(QSize(0, 30));
        checkBoxClientRewardAuthorization->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, checkBoxClientRewardAuthorization);


        verticalLayout->addLayout(formLayout_4);


        horizontalLayout_5->addLayout(verticalLayout);

        label_51 = new QLabel(centralwidget);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_51->setFrameShape(QFrame::Panel);
        label_51->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_51);

        label_50 = new QLabel(centralwidget);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_50->setFrameShape(QFrame::Panel);
        label_50->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_50);

        label_52 = new QLabel(centralwidget);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_52->setFrameShape(QFrame::Panel);
        label_52->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_52);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        lblComputedTotal = new QLabel(centralwidget);
        lblComputedTotal->setObjectName(QStringLiteral("lblComputedTotal"));
        lblComputedTotal->setMinimumSize(QSize(300, 150));
        lblComputedTotal->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("KacstBook"));
        font4.setPointSize(31);
        font4.setBold(true);
        font4.setWeight(75);
        lblComputedTotal->setFont(font4);
        lblComputedTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(78, 154, 6);\n"
"margin-left:4px;\n"
"text-align:center;"));

        verticalLayout_3->addWidget(lblComputedTotal);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(100, 20));
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_18);

        lblPossibleRewards = new QLabel(centralwidget);
        lblPossibleRewards->setObjectName(QStringLiteral("lblPossibleRewards"));
        lblPossibleRewards->setMinimumSize(QSize(250, 30));
        lblPossibleRewards->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lblPossibleRewards);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_20);

        lblPossibleDiscounts = new QLabel(centralwidget);
        lblPossibleDiscounts->setObjectName(QStringLiteral("lblPossibleDiscounts"));
        lblPossibleDiscounts->setMinimumSize(QSize(250, 30));
        lblPossibleDiscounts->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lblPossibleDiscounts);


        verticalLayout_3->addLayout(formLayout_2);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(40, 0));
        label_17->setMaximumSize(QSize(16777215, 40));
        label_17->setFont(font2);
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_17);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(150, 0));
        label_7->setFont(font2);
        label_7->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_7->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        lblSaleValue = new QLabel(centralwidget);
        lblSaleValue->setObjectName(QStringLiteral("lblSaleValue"));
        lblSaleValue->setMinimumSize(QSize(200, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("Waree"));
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        lblSaleValue->setFont(font5);
        lblSaleValue->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding:4px;"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lblSaleValue);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(150, 0));
        label_8->setFont(font2);
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_8->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        lblSaleTax = new QLabel(centralwidget);
        lblSaleTax->setObjectName(QStringLiteral("lblSaleTax"));
        lblSaleTax->setMinimumSize(QSize(200, 0));
        lblSaleTax->setFont(font5);
        lblSaleTax->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lblSaleTax);

        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(150, 0));
        label_25->setFont(font2);
        label_25->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_25->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_25);

        lblThisSaleTotal = new QLabel(centralwidget);
        lblThisSaleTotal->setObjectName(QStringLiteral("lblThisSaleTotal"));
        lblThisSaleTotal->setMinimumSize(QSize(200, 0));
        lblThisSaleTotal->setFont(font5);
        lblThisSaleTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lblThisSaleTotal);


        verticalLayout_2->addLayout(formLayout);


        horizontalLayout_5->addLayout(verticalLayout_2);

        label_60 = new QLabel(centralwidget);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_60->setFrameShape(QFrame::Panel);
        label_60->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_60);

        label_59 = new QLabel(centralwidget);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_59->setFrameShape(QFrame::Panel);
        label_59->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_59);

        label_61 = new QLabel(centralwidget);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_61->setFrameShape(QFrame::Panel);
        label_61->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_61);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        btnCompleteSales = new QPushButton(centralwidget);
        btnCompleteSales->setObjectName(QStringLiteral("btnCompleteSales"));
        btnCompleteSales->setMinimumSize(QSize(150, 0));
        btnCompleteSales->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon22;
        icon22.addFile(QStringLiteral(":/resources/new_icons_2/icons8-receipt-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSales->setIcon(icon22);
        btnCompleteSales->setIconSize(QSize(36, 36));

        verticalLayout_7->addWidget(btnCompleteSales);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        btnPlaceOrder = new QPushButton(centralwidget);
        btnPlaceOrder->setObjectName(QStringLiteral("btnPlaceOrder"));
        btnPlaceOrder->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        QIcon icon23;
        icon23.addFile(QStringLiteral(":/resources/icons/rss-button (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlaceOrder->setIcon(icon23);
        btnPlaceOrder->setIconSize(QSize(24, 24));

        horizontalLayout_6->addWidget(btnPlaceOrder);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        btnQueueSale = new QPushButton(centralwidget);
        btnQueueSale->setObjectName(QStringLiteral("btnQueueSale"));
        btnQueueSale->setStyleSheet(QLatin1String("background-color: rgb(233, 185, 110);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon24;
        icon24.addFile(QStringLiteral(":/resources/new_icons_2/icons8-queue-90.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQueueSale->setIcon(icon24);
        btnQueueSale->setIconSize(QSize(24, 24));

        horizontalLayout_7->addWidget(btnQueueSale);

        btnCancelSale = new QPushButton(centralwidget);
        btnCancelSale->setObjectName(QStringLiteral("btnCancelSale"));
        btnCancelSale->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon25;
        icon25.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale->setIcon(icon25);
        btnCancelSale->setIconSize(QSize(24, 24));

        horizontalLayout_7->addWidget(btnCancelSale);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        btn_addNewCustomer = new QPushButton(centralwidget);
        btn_addNewCustomer->setObjectName(QStringLiteral("btn_addNewCustomer"));
        btn_addNewCustomer->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer->setIcon(icon23);
        btn_addNewCustomer->setIconSize(QSize(24, 24));

        horizontalLayout_8->addWidget(btn_addNewCustomer);

        btn_viewCustomers = new QPushButton(centralwidget);
        btn_viewCustomers->setObjectName(QStringLiteral("btn_viewCustomers"));
        btn_viewCustomers->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_viewCustomers->setIcon(icon23);
        btn_viewCustomers->setIconSize(QSize(24, 24));

        horizontalLayout_8->addWidget(btn_viewCustomers);


        verticalLayout_7->addLayout(horizontalLayout_8);


        horizontalLayout_5->addLayout(verticalLayout_7);

        label_58 = new QLabel(centralwidget);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_58->setFrameShape(QFrame::Panel);
        label_58->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_58);

        label_56 = new QLabel(centralwidget);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_56->setFrameShape(QFrame::Panel);
        label_56->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_56);

        label_57 = new QLabel(centralwidget);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_57->setFrameShape(QFrame::Panel);
        label_57->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_57);


        verticalLayout_6->addLayout(horizontalLayout_5);

        label_36 = new QLabel(centralwidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_36->setFrameShape(QFrame::Panel);
        label_36->setFrameShadow(QFrame::Raised);

        verticalLayout_6->addWidget(label_36);

        SalesClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SalesClient);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1600, 20));
        menuHome = new QMenu(menubar);
        menuHome->setObjectName(QStringLiteral("menuHome"));
        menuSales = new QMenu(menubar);
        menuSales->setObjectName(QStringLiteral("menuSales"));
        menuCustomers = new QMenu(menubar);
        menuCustomers->setObjectName(QStringLiteral("menuCustomers"));
        menuAgents = new QMenu(menubar);
        menuAgents->setObjectName(QStringLiteral("menuAgents"));
        menuControl = new QMenu(menubar);
        menuControl->setObjectName(QStringLiteral("menuControl"));
        menuSettings = new QMenu(menubar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        SalesClient->setMenuBar(menubar);
        statusbar = new QStatusBar(SalesClient);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SalesClient->setStatusBar(statusbar);
        toolBar = new QToolBar(SalesClient);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        SalesClient->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuHome->menuAction());
        menubar->addAction(menuSales->menuAction());
        menubar->addAction(menuCustomers->menuAction());
        menubar->addAction(menuAgents->menuAction());
        menubar->addAction(menuControl->menuAction());
        menubar->addAction(menuSettings->menuAction());
        menuHome->addAction(actionOne);
        menuHome->addAction(actionTwo);
        menuHome->addAction(actionOrder_Center);
        menuSales->addAction(actionStock);
        menuSales->addAction(actionCredit_Sales);
        menuSales->addAction(actionReward_Sales);
        menuSales->addAction(actionTotal_Sales);
        menuCustomers->addAction(actionAdd_Customer);
        menuCustomers->addAction(actionView_Customer);
        menuCustomers->addAction(actionAll_Customers);
        menuAgents->addAction(actionInitiate_Return);
        menuAgents->addAction(actionView_Return);
        menuAgents->addAction(actionRefund_Return);
        menuControl->addAction(actionView_Stock);
        menuControl->addAction(actionView_All_Stock);
        menuControl->addAction(actionView_Low_Stock);
        menuControl->addAction(actionVIew_Stale_Stock);
        menuControl->addAction(actionVIew_Fast_Moving);
        menuSettings->addSeparator();
        menuSettings->addSeparator();
        menuSettings->addAction(actionOne_2);
        menuSettings->addAction(actionTwo_2);
        menuSettings->addAction(actionLogout);
        toolBar->addAction(actionOne);
        toolBar->addAction(actionTwo);
        toolBar->addAction(actionOrder_Center);
        toolBar->addSeparator();
        toolBar->addAction(actionTotal_Sales);
        toolBar->addAction(actionCredit_Sales);
        toolBar->addAction(actionReward_Sales);
        toolBar->addAction(actionStock);
        toolBar->addSeparator();
        toolBar->addAction(actionAll_Customers);
        toolBar->addAction(actionView_Customer);
        toolBar->addAction(actionAdd_Customer);
        toolBar->addSeparator();
        toolBar->addAction(actionInitiate_Return);
        toolBar->addAction(actionView_Return);
        toolBar->addAction(actionRefund_Return);
        toolBar->addSeparator();
        toolBar->addAction(actionView_All_Stock);
        toolBar->addAction(actionView_Low_Stock);
        toolBar->addAction(actionVIew_Stale_Stock);
        toolBar->addAction(actionVIew_Fast_Moving);
        toolBar->addSeparator();
        toolBar->addAction(actionOne_2);
        toolBar->addAction(actionTwo_2);
        toolBar->addAction(actionLogout);

        retranslateUi(SalesClient);

        QMetaObject::connectSlotsByName(SalesClient);
    } // setupUi

    void retranslateUi(QMainWindow *SalesClient)
    {
        SalesClient->setWindowTitle(QApplication::translate("SalesClient", "MainWindow", Q_NULLPTR));
        actionOne->setText(QApplication::translate("SalesClient", "Home", Q_NULLPTR));
        actionTwo->setText(QApplication::translate("SalesClient", "Sales Center", Q_NULLPTR));
        actionStock->setText(QApplication::translate("SalesClient", "Cash Sales", Q_NULLPTR));
        actionOne_2->setText(QApplication::translate("SalesClient", "View Profile", Q_NULLPTR));
        actionTwo_2->setText(QApplication::translate("SalesClient", "Exit Sale Client", Q_NULLPTR));
        actionOrder_Center->setText(QApplication::translate("SalesClient", "Order Center", Q_NULLPTR));
        actionCredit_Sales->setText(QApplication::translate("SalesClient", "Credit Sales", Q_NULLPTR));
        actionReward_Sales->setText(QApplication::translate("SalesClient", "Reward Sales", Q_NULLPTR));
        actionAdd_Customer->setText(QApplication::translate("SalesClient", "Add Customer", Q_NULLPTR));
        actionView_Customer->setText(QApplication::translate("SalesClient", "View Customer", Q_NULLPTR));
        actionInitiate_Return->setText(QApplication::translate("SalesClient", "Initiate Return", Q_NULLPTR));
        actionView_Return->setText(QApplication::translate("SalesClient", "View Return", Q_NULLPTR));
        actionView_Stock->setText(QApplication::translate("SalesClient", "View Stock", Q_NULLPTR));
        actionView_All_Stock->setText(QApplication::translate("SalesClient", "View All Stock", Q_NULLPTR));
        actionView_Low_Stock->setText(QApplication::translate("SalesClient", "View Low Stock", Q_NULLPTR));
        actionVIew_Stale_Stock->setText(QApplication::translate("SalesClient", "VIew Stale Stock", Q_NULLPTR));
        actionVIew_Fast_Moving->setText(QApplication::translate("SalesClient", "VIew Fast Moving", Q_NULLPTR));
        actionAll_Customers->setText(QApplication::translate("SalesClient", "All Customers", Q_NULLPTR));
        actionRefund_Return->setText(QApplication::translate("SalesClient", "Refund Return", Q_NULLPTR));
        actionLogout->setText(QApplication::translate("SalesClient", "Logout", Q_NULLPTR));
        actionTotal_Sales->setText(QApplication::translate("SalesClient", "Total Sales", Q_NULLPTR));
        label_40->setText(QString());
        lblUserAvatar->setText(QString());
        lblUserName->setText(QString());
        label_11->setText(QString());
        label_5->setText(QString());
        label_12->setText(QString());
        lblTime_4->setText(QApplication::translate("SalesClient", "Currently Serving:", Q_NULLPTR));
        lblServing->setText(QString());
        label_39->setText(QString());
        label_37->setText(QString());
        label_41->setText(QString());
        lblTime_5->setText(QApplication::translate("SalesClient", "Sale ID:", Q_NULLPTR));
        lblOrderId->setText(QString());
        label_43->setText(QString());
        label_48->setText(QString());
        label_49->setText(QString());
        lblDateHolder->setText(QApplication::translate("SalesClient", "Date:", Q_NULLPTR));
        lblDate->setText(QString());
        lblTimeHolder->setText(QApplication::translate("SalesClient", "Time:", Q_NULLPTR));
        lblTime->setText(QString());
        label_15->setText(QString());
        cbSalesType->clear();
        cbSalesType->insertItems(0, QStringList()
         << QApplication::translate("SalesClient", "Retail", Q_NULLPTR)
         << QApplication::translate("SalesClient", "Wholesale", Q_NULLPTR)
        );
        lblSaleType->setText(QApplication::translate("SalesClient", "Transaction Type", Q_NULLPTR));
        lblClientNameHolder->setText(QApplication::translate("SalesClient", "Enter Client Phone:", Q_NULLPTR));
        checkBoxEnableRewardPayment->setText(QApplication::translate("SalesClient", "Enable Rewards Payment", Q_NULLPTR));
        checkBoxEnableDiscount->setText(QApplication::translate("SalesClient", "Enable Discount", Q_NULLPTR));
        checkBoxEnableRewards->setText(QApplication::translate("SalesClient", "Enable Rewards", Q_NULLPTR));
        btnExitClient->setText(QApplication::translate("SalesClient", "Exit Client", Q_NULLPTR));
        btnOpenClose->setText(QApplication::translate("SalesClient", "Open/Close", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("SalesClient", "Log Out", Q_NULLPTR));
        label_21->setText(QString());
        lblBarCodeHolder->setText(QApplication::translate("SalesClient", "#", Q_NULLPTR));
        lblSearchProductHolder->setText(QApplication::translate("SalesClient", "Search Product:", Q_NULLPTR));
        label_10->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SalesClient", "Product Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SalesClient", "Barcode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SalesClient", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SalesClient", "Measuerment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SalesClient", "Unit Price", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SalesClient", "Quantity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("SalesClient", "Discount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("SalesClient", "Rewards", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("SalesClient", "Sub Total", Q_NULLPTR));
        label_35->setText(QString());
        label_54->setText(QString());
        label_53->setText(QString());
        label_55->setText(QString());
        label->setText(QApplication::translate("SalesClient", "Customer Data", Q_NULLPTR));
        label_14->setText(QApplication::translate("SalesClient", "Cash", Q_NULLPTR));
        lblCashOnBusiness->setText(QString());
        label_16->setText(QApplication::translate("SalesClient", "Rewards", Q_NULLPTR));
        lblAvailableRewards->setText(QString());
        label_2->setText(QApplication::translate("SalesClient", "Avl Credit:", Q_NULLPTR));
        lblAvailableCredit->setText(QString());
        label_13->setText(QApplication::translate("SalesClient", "Debts:", Q_NULLPTR));
        lblDebt->setText(QString());
        pushButton->setText(QApplication::translate("SalesClient", "View This Customer", Q_NULLPTR));
        checkBoxClientRewardAuthorization->setText(QApplication::translate("SalesClient", "Authorize rewards Payment", Q_NULLPTR));
        label_51->setText(QString());
        label_50->setText(QString());
        label_52->setText(QString());
        lblComputedTotal->setText(QApplication::translate("SalesClient", " 00.00", Q_NULLPTR));
        label_18->setText(QApplication::translate("SalesClient", "Possible Reward:", Q_NULLPTR));
        lblPossibleRewards->setText(QString());
        label_20->setText(QApplication::translate("SalesClient", "Possible Discount:", Q_NULLPTR));
        lblPossibleDiscounts->setText(QString());
        label_17->setText(QApplication::translate("SalesClient", "Sale information", Q_NULLPTR));
        label_7->setText(QApplication::translate("SalesClient", "Sale Value:", Q_NULLPTR));
        lblSaleValue->setText(QApplication::translate("SalesClient", "00.00", Q_NULLPTR));
        label_8->setText(QApplication::translate("SalesClient", "Sale Tax(16%):", Q_NULLPTR));
        lblSaleTax->setText(QApplication::translate("SalesClient", "00.00", Q_NULLPTR));
        label_25->setText(QApplication::translate("SalesClient", "Sale Total:", Q_NULLPTR));
        lblThisSaleTotal->setText(QApplication::translate("SalesClient", "00.00", Q_NULLPTR));
        label_60->setText(QString());
        label_59->setText(QString());
        label_61->setText(QString());
        btnCompleteSales->setText(QApplication::translate("SalesClient", "Apply", Q_NULLPTR));
        btnPlaceOrder->setText(QApplication::translate("SalesClient", "Place an Order", Q_NULLPTR));
        btnQueueSale->setText(QApplication::translate("SalesClient", "Queue", Q_NULLPTR));
        btnCancelSale->setText(QApplication::translate("SalesClient", "Cancel", Q_NULLPTR));
        btn_addNewCustomer->setText(QApplication::translate("SalesClient", "Add New Customer", Q_NULLPTR));
        btn_viewCustomers->setText(QApplication::translate("SalesClient", "View Customers", Q_NULLPTR));
        label_58->setText(QString());
        label_56->setText(QString());
        label_57->setText(QString());
        label_36->setText(QString());
        menuHome->setTitle(QApplication::translate("SalesClient", "Home", Q_NULLPTR));
        menuSales->setTitle(QApplication::translate("SalesClient", "Sales", Q_NULLPTR));
        menuCustomers->setTitle(QApplication::translate("SalesClient", "Customers", Q_NULLPTR));
        menuAgents->setTitle(QApplication::translate("SalesClient", "Returns", Q_NULLPTR));
        menuControl->setTitle(QApplication::translate("SalesClient", "Stock", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("SalesClient", "Settings", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("SalesClient", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SalesClient: public Ui_SalesClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESCLIENT_H
