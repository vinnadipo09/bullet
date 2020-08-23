/********************************************************************************
** Form generated from reading UI file 'ordersclient.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSCLIENT_H
#define UI_ORDERSCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OrdersClient
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
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
    QFrame *line;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *cbSalesType;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lblSaleType;
    QSpacerItem *horizontalSpacer_9;
    QLabel *lblClientNameHolder;
    QLineEdit *leClient;
    QLabel *lblClientNameHolder_2;
    QCheckBox *checkBox_2;
    QLineEdit *leClient_2;
    QLabel *lblTime_6;
    QLabel *lblServing_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnExitClient;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblBarCodeHolder;
    QLineEdit *le_barcodeEntry;
    QLabel *lblSearchProductHolder;
    QLineEdit *le_SearchProduct;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_10;
    QTableWidget *tableWidget;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblComputedTotal;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_18;
    QFrame *line_9;
    QLabel *lblPossibleRewards;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_20;
    QFrame *line_10;
    QLabel *lblPossibleDiscounts;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *checkBox;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_7;
    QFrame *line_13;
    QLabel *lblSaleValue;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_8;
    QFrame *line_4;
    QLabel *lblSaleTax;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_25;
    QFrame *line_14;
    QLabel *lblThisSaleTotal;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnCompleteSales;
    QPushButton *btnQueueSale;
    QPushButton *btnCancelSale;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_24;
    QLabel *label_36;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QFrame *line_6;
    QLabel *lblCustomerPhone;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QFrame *line_11;
    QLabel *lblCashOnBusiness;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_16;
    QFrame *line_8;
    QLabel *lblAvailableRewards;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *lblAvailableCredit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_13;
    QFrame *line_7;
    QLabel *lblDebt;
    QPushButton *pushButton;
    QCheckBox *checkBoxClientRewardAuthorization;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_34;
    QLabel *label_45;
    QPushButton *btnReduceQtyByOne;
    QLabel *label_46;
    QLabel *label_29;
    QPushButton *btnViewStockStatus;
    QPushButton *pushButton_13;
    QLabel *label_44;
    QLabel *label_38;
    QLabel *label_33;
    QPushButton *btnDeleteItem_2;
    QLabel *label_32;
    QPushButton *btnIncreaseQty;
    QLabel *label_30;
    QPushButton *btnIncreaseQty_2;
    QPushButton *btnViewItem_2;
    QPushButton *pushButton_12;
    QPushButton *btnViewItem;
    QPushButton *btnViewStockStatus_2;
    QPushButton *btnDeleteItem;
    QLabel *label_42;
    QLabel *label_47;
    QPushButton *btnReduceQtyByOne_2;
    QLabel *label_31;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QPushButton *btn_viewCustomers;
    QPushButton *btn_addNewCustomer;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *OrdersClient)
    {
        if (OrdersClient->objectName().isEmpty())
            OrdersClient->setObjectName(QStringLiteral("OrdersClient"));
        OrdersClient->resize(1855, 1226);
        gridLayout_2 = new QGridLayout(OrdersClient);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_40 = new QLabel(OrdersClient);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(64, 64));
        label_40->setMaximumSize(QSize(64, 64));
        label_40->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_40->setFrameShape(QFrame::Panel);
        label_40->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_40);

        lblUserAvatar = new QLabel(OrdersClient);
        lblUserAvatar->setObjectName(QStringLiteral("lblUserAvatar"));
        lblUserAvatar->setMinimumSize(QSize(40, 40));
        lblUserAvatar->setMaximumSize(QSize(40, 40));
        lblUserAvatar->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout->addWidget(lblUserAvatar);

        lblUserName = new QLabel(OrdersClient);
        lblUserName->setObjectName(QStringLiteral("lblUserName"));
        lblUserName->setMinimumSize(QSize(120, 40));
        lblUserName->setMaximumSize(QSize(120, 40));
        lblUserName->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(255, 255, 255);\n"
""));
        lblUserName->setFrameShape(QFrame::Panel);
        lblUserName->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblUserName);

        label_11 = new QLabel(OrdersClient);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(10, 40));
        label_11->setMaximumSize(QSize(10, 40));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_11->setFrameShape(QFrame::Panel);
        label_11->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_11);

        label_5 = new QLabel(OrdersClient);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(10, 40));
        label_5->setMaximumSize(QSize(10, 40));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_5);

        label_12 = new QLabel(OrdersClient);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(10, 40));
        label_12->setMaximumSize(QSize(10, 40));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_12->setFrameShape(QFrame::Panel);
        label_12->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_12);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        lblTime_4 = new QLabel(OrdersClient);
        lblTime_4->setObjectName(QStringLiteral("lblTime_4"));
        lblTime_4->setMinimumSize(QSize(180, 40));
        lblTime_4->setMaximumSize(QSize(180, 40));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lblTime_4->setFont(font);
        lblTime_4->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblTime_4->setFrameShape(QFrame::Panel);
        lblTime_4->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTime_4);

        lblServing = new QLabel(OrdersClient);
        lblServing->setObjectName(QStringLiteral("lblServing"));
        lblServing->setMinimumSize(QSize(250, 40));
        lblServing->setMaximumSize(QSize(250, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(11);
        lblServing->setFont(font1);
        lblServing->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);\n"
""));
        lblServing->setFrameShape(QFrame::Panel);
        lblServing->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblServing);

        label_39 = new QLabel(OrdersClient);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setMinimumSize(QSize(10, 40));
        label_39->setMaximumSize(QSize(10, 40));
        label_39->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_39->setFrameShape(QFrame::Panel);
        label_39->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_39);

        label_37 = new QLabel(OrdersClient);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setMinimumSize(QSize(10, 40));
        label_37->setMaximumSize(QSize(10, 40));
        label_37->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_37->setFrameShape(QFrame::Panel);
        label_37->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_37);

        label_41 = new QLabel(OrdersClient);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setMinimumSize(QSize(10, 40));
        label_41->setMaximumSize(QSize(10, 40));
        label_41->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_41->setFrameShape(QFrame::Panel);
        label_41->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_41);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        lblTime_5 = new QLabel(OrdersClient);
        lblTime_5->setObjectName(QStringLiteral("lblTime_5"));
        lblTime_5->setMinimumSize(QSize(100, 40));
        lblTime_5->setMaximumSize(QSize(100, 40));
        lblTime_5->setFont(font);
        lblTime_5->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblTime_5->setFrameShape(QFrame::Panel);
        lblTime_5->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTime_5);

        lblOrderId = new QLabel(OrdersClient);
        lblOrderId->setObjectName(QStringLiteral("lblOrderId"));
        lblOrderId->setMinimumSize(QSize(200, 40));
        lblOrderId->setMaximumSize(QSize(200, 40));
        lblOrderId->setFont(font1);
        lblOrderId->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);"));
        lblOrderId->setFrameShape(QFrame::Panel);
        lblOrderId->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblOrderId);

        label_43 = new QLabel(OrdersClient);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(10, 40));
        label_43->setMaximumSize(QSize(10, 40));
        label_43->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_43->setFrameShape(QFrame::Panel);
        label_43->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_43);

        label_48 = new QLabel(OrdersClient);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setMinimumSize(QSize(10, 40));
        label_48->setMaximumSize(QSize(10, 40));
        label_48->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_48->setFrameShape(QFrame::Panel);
        label_48->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_48);

        label_49 = new QLabel(OrdersClient);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setMinimumSize(QSize(10, 40));
        label_49->setMaximumSize(QSize(10, 40));
        label_49->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_49->setFrameShape(QFrame::Panel);
        label_49->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_49);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        lblDateHolder = new QLabel(OrdersClient);
        lblDateHolder->setObjectName(QStringLiteral("lblDateHolder"));
        lblDateHolder->setMinimumSize(QSize(60, 30));
        lblDateHolder->setMaximumSize(QSize(40, 40));
        lblDateHolder->setFont(font);
        lblDateHolder->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblDateHolder->setFrameShape(QFrame::Panel);
        lblDateHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblDateHolder);

        lblDate = new QLabel(OrdersClient);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        lblDate->setMinimumSize(QSize(120, 40));
        lblDate->setMaximumSize(QSize(120, 40));
        lblDate->setFont(font1);
        lblDate->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);"));
        lblDate->setFrameShape(QFrame::Panel);
        lblDate->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblDate);

        lblTimeHolder = new QLabel(OrdersClient);
        lblTimeHolder->setObjectName(QStringLiteral("lblTimeHolder"));
        lblTimeHolder->setMinimumSize(QSize(60, 40));
        lblTimeHolder->setMaximumSize(QSize(50, 40));
        lblTimeHolder->setFont(font);
        lblTimeHolder->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblTimeHolder->setFrameShape(QFrame::Panel);
        lblTimeHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTimeHolder);

        lblTime = new QLabel(OrdersClient);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setMinimumSize(QSize(120, 40));
        lblTime->setMaximumSize(QSize(120, 40));
        lblTime->setFont(font1);
        lblTime->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);\n"
""));
        lblTime->setFrameShape(QFrame::Panel);
        lblTime->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(lblTime);

        line = new QFrame(OrdersClient);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);


        verticalLayout_4->addLayout(horizontalLayout);

        label_15 = new QLabel(OrdersClient);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_15->setFrameShape(QFrame::Panel);
        label_15->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_15);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        cbSalesType = new QComboBox(OrdersClient);
        cbSalesType->setObjectName(QStringLiteral("cbSalesType"));
        cbSalesType->setMinimumSize(QSize(30, 30));
        cbSalesType->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_9->addWidget(cbSalesType);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        lblSaleType = new QLabel(OrdersClient);
        lblSaleType->setObjectName(QStringLiteral("lblSaleType"));
        lblSaleType->setMinimumSize(QSize(0, 30));
        lblSaleType->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"border-radius:3px;"));
        lblSaleType->setFrameShape(QFrame::Panel);
        lblSaleType->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(lblSaleType);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_9);

        lblClientNameHolder = new QLabel(OrdersClient);
        lblClientNameHolder->setObjectName(QStringLiteral("lblClientNameHolder"));
        lblClientNameHolder->setMinimumSize(QSize(0, 30));
        lblClientNameHolder->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblClientNameHolder->setFrameShape(QFrame::Panel);
        lblClientNameHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(lblClientNameHolder);

        leClient = new QLineEdit(OrdersClient);
        leClient->setObjectName(QStringLiteral("leClient"));
        leClient->setMinimumSize(QSize(0, 30));
        leClient->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_9->addWidget(leClient);

        lblClientNameHolder_2 = new QLabel(OrdersClient);
        lblClientNameHolder_2->setObjectName(QStringLiteral("lblClientNameHolder_2"));
        lblClientNameHolder_2->setMinimumSize(QSize(0, 30));
        lblClientNameHolder_2->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblClientNameHolder_2->setFrameShape(QFrame::Panel);
        lblClientNameHolder_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(lblClientNameHolder_2);

        checkBox_2 = new QCheckBox(OrdersClient);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_9->addWidget(checkBox_2);

        leClient_2 = new QLineEdit(OrdersClient);
        leClient_2->setObjectName(QStringLiteral("leClient_2"));
        leClient_2->setMinimumSize(QSize(0, 30));
        leClient_2->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_9->addWidget(leClient_2);

        lblTime_6 = new QLabel(OrdersClient);
        lblTime_6->setObjectName(QStringLiteral("lblTime_6"));
        lblTime_6->setMinimumSize(QSize(180, 40));
        lblTime_6->setMaximumSize(QSize(180, 40));
        lblTime_6->setFont(font);
        lblTime_6->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblTime_6->setFrameShape(QFrame::Panel);
        lblTime_6->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(lblTime_6);

        lblServing_2 = new QLabel(OrdersClient);
        lblServing_2->setObjectName(QStringLiteral("lblServing_2"));
        lblServing_2->setMinimumSize(QSize(250, 40));
        lblServing_2->setMaximumSize(QSize(250, 40));
        lblServing_2->setFont(font1);
        lblServing_2->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);\n"
""));
        lblServing_2->setFrameShape(QFrame::Panel);
        lblServing_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(lblServing_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        btnExitClient = new QPushButton(OrdersClient);
        btnExitClient->setObjectName(QStringLiteral("btnExitClient"));

        horizontalLayout_9->addWidget(btnExitClient);


        verticalLayout_4->addLayout(horizontalLayout_9);

        label_21 = new QLabel(OrdersClient);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_21);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblBarCodeHolder = new QLabel(OrdersClient);
        lblBarCodeHolder->setObjectName(QStringLiteral("lblBarCodeHolder"));
        lblBarCodeHolder->setMaximumSize(QSize(40, 40));
        lblBarCodeHolder->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblBarCodeHolder->setFrameShape(QFrame::Panel);
        lblBarCodeHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(lblBarCodeHolder);

        le_barcodeEntry = new QLineEdit(OrdersClient);
        le_barcodeEntry->setObjectName(QStringLiteral("le_barcodeEntry"));
        le_barcodeEntry->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(le_barcodeEntry);

        lblSearchProductHolder = new QLabel(OrdersClient);
        lblSearchProductHolder->setObjectName(QStringLiteral("lblSearchProductHolder"));
        lblSearchProductHolder->setMaximumSize(QSize(250, 16777215));
        lblSearchProductHolder->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblSearchProductHolder->setFrameShape(QFrame::Panel);
        lblSearchProductHolder->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(lblSearchProductHolder);

        le_SearchProduct = new QLineEdit(OrdersClient);
        le_SearchProduct->setObjectName(QStringLiteral("le_SearchProduct"));
        le_SearchProduct->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(le_SearchProduct);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label_10 = new QLabel(OrdersClient);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_10->setFrameShape(QFrame::Panel);
        label_10->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_10);

        tableWidget = new QTableWidget(OrdersClient);
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

        verticalLayout_4->addWidget(tableWidget);

        label_35 = new QLabel(OrdersClient);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_35->setFrameShape(QFrame::Panel);
        label_35->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_35);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lblComputedTotal = new QLabel(OrdersClient);
        lblComputedTotal->setObjectName(QStringLiteral("lblComputedTotal"));
        lblComputedTotal->setMinimumSize(QSize(300, 0));
        lblComputedTotal->setMaximumSize(QSize(300, 200));
        QFont font2;
        font2.setFamily(QStringLiteral("KacstBook"));
        font2.setPointSize(31);
        font2.setBold(true);
        font2.setWeight(75);
        lblComputedTotal->setFont(font2);
        lblComputedTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"margin-left:4px;\n"
"text-align:center;"));

        verticalLayout_2->addWidget(lblComputedTotal);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_18 = new QLabel(OrdersClient);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(100, 20));
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_13->addWidget(label_18);

        line_9 = new QFrame(OrdersClient);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_13->addWidget(line_9);

        lblPossibleRewards = new QLabel(OrdersClient);
        lblPossibleRewards->setObjectName(QStringLiteral("lblPossibleRewards"));
        lblPossibleRewards->setMinimumSize(QSize(250, 0));
        lblPossibleRewards->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_13->addWidget(lblPossibleRewards);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_20 = new QLabel(OrdersClient);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_14->addWidget(label_20);

        line_10 = new QFrame(OrdersClient);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        horizontalLayout_14->addWidget(line_10);

        lblPossibleDiscounts = new QLabel(OrdersClient);
        lblPossibleDiscounts->setObjectName(QStringLiteral("lblPossibleDiscounts"));
        lblPossibleDiscounts->setMinimumSize(QSize(250, 0));
        lblPossibleDiscounts->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_14->addWidget(lblPossibleDiscounts);


        verticalLayout_2->addLayout(horizontalLayout_14);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_17 = new QLabel(OrdersClient);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(40, 0));
        label_17->setMaximumSize(QSize(16777215, 40));
        QFont font3;
        font3.setFamily(QStringLiteral("Waree"));
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_17->setFont(font3);
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_17);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        checkBox = new QCheckBox(OrdersClient);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        horizontalLayout_11->addWidget(checkBox);

        label_4 = new QLabel(OrdersClient);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_11->addWidget(label_4);

        lineEdit = new QLineEdit(OrdersClient);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_11->addWidget(lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_7 = new QLabel(OrdersClient);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_7);

        line_13 = new QFrame(OrdersClient);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);

        horizontalLayout_18->addWidget(line_13);

        lblSaleValue = new QLabel(OrdersClient);
        lblSaleValue->setObjectName(QStringLiteral("lblSaleValue"));
        lblSaleValue->setMinimumSize(QSize(250, 0));
        QFont font4;
        font4.setFamily(QStringLiteral("Waree"));
        font4.setPointSize(18);
        font4.setBold(true);
        font4.setWeight(75);
        lblSaleValue->setFont(font4);
        lblSaleValue->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding:4px;"));

        horizontalLayout_18->addWidget(lblSaleValue);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_8 = new QLabel(OrdersClient);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font3);
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_8);

        line_4 = new QFrame(OrdersClient);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_19->addWidget(line_4);

        lblSaleTax = new QLabel(OrdersClient);
        lblSaleTax->setObjectName(QStringLiteral("lblSaleTax"));
        lblSaleTax->setMinimumSize(QSize(250, 0));
        lblSaleTax->setFont(font4);
        lblSaleTax->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        horizontalLayout_19->addWidget(lblSaleTax);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_25 = new QLabel(OrdersClient);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font3);
        label_25->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_25->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_25);

        line_14 = new QFrame(OrdersClient);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);

        horizontalLayout_20->addWidget(line_14);

        lblThisSaleTotal = new QLabel(OrdersClient);
        lblThisSaleTotal->setObjectName(QStringLiteral("lblThisSaleTotal"));
        lblThisSaleTotal->setMinimumSize(QSize(250, 0));
        lblThisSaleTotal->setFont(font4);
        lblThisSaleTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        horizontalLayout_20->addWidget(lblThisSaleTotal);


        verticalLayout_3->addLayout(horizontalLayout_20);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        btnCompleteSales = new QPushButton(OrdersClient);
        btnCompleteSales->setObjectName(QStringLiteral("btnCompleteSales"));
        btnCompleteSales->setMinimumSize(QSize(150, 0));
        btnCompleteSales->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-receipt-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSales->setIcon(icon);
        btnCompleteSales->setIconSize(QSize(36, 36));

        verticalLayout_6->addWidget(btnCompleteSales);

        btnQueueSale = new QPushButton(OrdersClient);
        btnQueueSale->setObjectName(QStringLiteral("btnQueueSale"));
        btnQueueSale->setStyleSheet(QLatin1String("background-color: rgb(233, 185, 110);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-queue-90.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQueueSale->setIcon(icon1);
        btnQueueSale->setIconSize(QSize(24, 24));

        verticalLayout_6->addWidget(btnQueueSale);

        btnCancelSale = new QPushButton(OrdersClient);
        btnCancelSale->setObjectName(QStringLiteral("btnCancelSale"));
        btnCancelSale->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale->setIcon(icon2);
        btnCancelSale->setIconSize(QSize(24, 24));

        verticalLayout_6->addWidget(btnCancelSale);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(OrdersClient);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_3);

        label_6 = new QLabel(OrdersClient);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(250, 0));
        label_6->setFont(font);
        label_6->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_5->addWidget(label_6);


        verticalLayout_6->addLayout(horizontalLayout_5);

        label_24 = new QLabel(OrdersClient);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(250, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("Waree"));
        font5.setBold(true);
        font5.setWeight(75);
        label_24->setFont(font5);
        label_24->setStyleSheet(QLatin1String("background-color: rgb(238, 238, 236);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_6->addWidget(label_24);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_4->addLayout(horizontalLayout_3);

        label_36 = new QLabel(OrdersClient);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_36->setFrameShape(QFrame::Panel);
        label_36->setFrameShadow(QFrame::Raised);

        verticalLayout_4->addWidget(label_36);


        horizontalLayout_4->addLayout(verticalLayout_4);

        frame_2 = new QFrame(OrdersClient);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(280, 0));
        frame_2->setMaximumSize(QSize(280, 16777215));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(0, 300));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(80, 30));
        label_9->setMaximumSize(QSize(80, 16777215));
        QFont font6;
        font6.setFamily(QStringLiteral("Waree"));
        font6.setPointSize(10);
        font6.setBold(true);
        font6.setWeight(75);
        label_9->setFont(font6);
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_7->addWidget(label_9);

        line_6 = new QFrame(groupBox_3);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_6);

        lblCustomerPhone = new QLabel(groupBox_3);
        lblCustomerPhone->setObjectName(QStringLiteral("lblCustomerPhone"));
        lblCustomerPhone->setMinimumSize(QSize(250, 0));
        lblCustomerPhone->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_7->addWidget(lblCustomerPhone);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(80, 30));
        label_14->setMaximumSize(QSize(80, 16777215));
        label_14->setFont(font6);
        label_14->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
""));

        horizontalLayout_10->addWidget(label_14);

        line_11 = new QFrame(groupBox_3);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::VLine);
        line_11->setFrameShadow(QFrame::Sunken);

        horizontalLayout_10->addWidget(line_11);

        lblCashOnBusiness = new QLabel(groupBox_3);
        lblCashOnBusiness->setObjectName(QStringLiteral("lblCashOnBusiness"));
        lblCashOnBusiness->setMinimumSize(QSize(250, 0));
        lblCashOnBusiness->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_10->addWidget(lblCashOnBusiness);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(80, 30));
        label_16->setMaximumSize(QSize(80, 16777215));
        label_16->setFont(font6);
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_12->addWidget(label_16);

        line_8 = new QFrame(groupBox_3);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(line_8);

        lblAvailableRewards = new QLabel(groupBox_3);
        lblAvailableRewards->setObjectName(QStringLiteral("lblAvailableRewards"));
        lblAvailableRewards->setMinimumSize(QSize(250, 0));
        lblAvailableRewards->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_12->addWidget(lblAvailableRewards);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(80, 30));
        label_2->setMaximumSize(QSize(80, 16777215));
        label_2->setFont(font6);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_6->addWidget(label_2);

        line_2 = new QFrame(groupBox_3);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        lblAvailableCredit = new QLabel(groupBox_3);
        lblAvailableCredit->setObjectName(QStringLiteral("lblAvailableCredit"));
        lblAvailableCredit->setMinimumSize(QSize(250, 0));
        lblAvailableCredit->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_6->addWidget(lblAvailableCredit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(80, 30));
        label_13->setMaximumSize(QSize(80, 16777215));
        label_13->setFont(font6);
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_8->addWidget(label_13);

        line_7 = new QFrame(groupBox_3);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_7);

        lblDebt = new QLabel(groupBox_3);
        lblDebt->setObjectName(QStringLiteral("lblDebt"));
        lblDebt->setMinimumSize(QSize(250, 0));
        lblDebt->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_8->addWidget(lblDebt);


        verticalLayout->addLayout(horizontalLayout_8);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/new_icons_2/icons8-invisible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(pushButton);

        checkBoxClientRewardAuthorization = new QCheckBox(groupBox_3);
        checkBoxClientRewardAuthorization->setObjectName(QStringLiteral("checkBoxClientRewardAuthorization"));
        checkBoxClientRewardAuthorization->setMinimumSize(QSize(0, 30));
        checkBoxClientRewardAuthorization->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        verticalLayout->addWidget(checkBoxClientRewardAuthorization);


        gridLayout_4->addLayout(verticalLayout, 1, 0, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 40));
        label->setFont(font3);
        label->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_3, 1, 0, 1, 1);

        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_34->setFrameShape(QFrame::Panel);
        label_34->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_34, 10, 3, 1, 1);

        label_45 = new QLabel(groupBox);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_45->setFrameShape(QFrame::Panel);
        label_45->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_45, 18, 3, 1, 1);

        btnReduceQtyByOne = new QPushButton(groupBox);
        btnReduceQtyByOne->setObjectName(QStringLiteral("btnReduceQtyByOne"));
        btnReduceQtyByOne->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/new_icons_2/icons8-minus-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReduceQtyByOne->setIcon(icon4);
        btnReduceQtyByOne->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnReduceQtyByOne, 0, 2, 1, 1);

        label_46 = new QLabel(groupBox);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_46->setFrameShape(QFrame::Panel);
        label_46->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_46, 17, 3, 1, 1);

        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_29->setFrameShape(QFrame::Panel);
        label_29->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_29, 0, 3, 1, 1);

        btnViewStockStatus = new QPushButton(groupBox);
        btnViewStockStatus->setObjectName(QStringLiteral("btnViewStockStatus"));
        btnViewStockStatus->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/new_icons_2/icons8-plus-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewStockStatus->setIcon(icon5);
        btnViewStockStatus->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewStockStatus, 7, 2, 1, 1);

        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(0, 30));
        pushButton_13->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        pushButton_13->setIcon(icon4);
        pushButton_13->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButton_13, 19, 2, 1, 1);

        label_44 = new QLabel(groupBox);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_44->setFrameShape(QFrame::Panel);
        label_44->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_44, 12, 3, 1, 1);

        label_38 = new QLabel(groupBox);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_38->setFrameShape(QFrame::Panel);
        label_38->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_38, 19, 3, 1, 1);

        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_33->setFrameShape(QFrame::Panel);
        label_33->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_33, 7, 3, 1, 1);

        btnDeleteItem_2 = new QPushButton(groupBox);
        btnDeleteItem_2->setObjectName(QStringLiteral("btnDeleteItem_2"));
        btnDeleteItem_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnDeleteItem_2->setIcon(icon2);
        btnDeleteItem_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnDeleteItem_2, 12, 2, 1, 1);

        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_32->setFrameShape(QFrame::Panel);
        label_32->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_32, 3, 3, 1, 1);

        btnIncreaseQty = new QPushButton(groupBox);
        btnIncreaseQty->setObjectName(QStringLiteral("btnIncreaseQty"));
        btnIncreaseQty->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/new_icons_2/icons8-plus-144.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnIncreaseQty->setIcon(icon6);
        btnIncreaseQty->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnIncreaseQty, 2, 2, 1, 1);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_30->setFrameShape(QFrame::Panel);
        label_30->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_30, 1, 3, 1, 1);

        btnIncreaseQty_2 = new QPushButton(groupBox);
        btnIncreaseQty_2->setObjectName(QStringLiteral("btnIncreaseQty_2"));
        btnIncreaseQty_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnIncreaseQty_2->setIcon(icon6);
        btnIncreaseQty_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnIncreaseQty_2, 16, 2, 1, 1);

        btnViewItem_2 = new QPushButton(groupBox);
        btnViewItem_2->setObjectName(QStringLiteral("btnViewItem_2"));
        btnViewItem_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewItem_2->setIcon(icon3);
        btnViewItem_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewItem_2, 17, 2, 1, 1);

        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        pushButton_12->setIcon(icon4);
        pushButton_12->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButton_12, 10, 2, 1, 1);

        btnViewItem = new QPushButton(groupBox);
        btnViewItem->setObjectName(QStringLiteral("btnViewItem"));
        btnViewItem->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewItem->setIcon(icon3);
        btnViewItem->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewItem, 3, 2, 1, 1);

        btnViewStockStatus_2 = new QPushButton(groupBox);
        btnViewStockStatus_2->setObjectName(QStringLiteral("btnViewStockStatus_2"));
        btnViewStockStatus_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewStockStatus_2->setIcon(icon5);
        btnViewStockStatus_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewStockStatus_2, 18, 2, 1, 1);

        btnDeleteItem = new QPushButton(groupBox);
        btnDeleteItem->setObjectName(QStringLiteral("btnDeleteItem"));
        btnDeleteItem->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnDeleteItem->setIcon(icon2);
        btnDeleteItem->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnDeleteItem, 1, 2, 1, 1);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_42->setFrameShape(QFrame::Panel);
        label_42->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_42, 11, 3, 1, 1);

        label_47 = new QLabel(groupBox);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_47->setFrameShape(QFrame::Panel);
        label_47->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_47, 16, 3, 1, 1);

        btnReduceQtyByOne_2 = new QPushButton(groupBox);
        btnReduceQtyByOne_2->setObjectName(QStringLiteral("btnReduceQtyByOne_2"));
        btnReduceQtyByOne_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnReduceQtyByOne_2->setIcon(icon4);
        btnReduceQtyByOne_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnReduceQtyByOne_2, 11, 2, 1, 1);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_31->setFrameShape(QFrame::Panel);
        label_31->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_31, 2, 3, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 200));

        gridLayout_3->addWidget(groupBox_2, 3, 0, 1, 1);

        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(0, 200));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        btn_viewCustomers = new QPushButton(groupBox_4);
        btn_viewCustomers->setObjectName(QStringLiteral("btn_viewCustomers"));
        btn_viewCustomers->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/icons/rss-button (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_viewCustomers->setIcon(icon7);
        btn_viewCustomers->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(btn_viewCustomers, 1, 0, 1, 1);

        btn_addNewCustomer = new QPushButton(groupBox_4);
        btn_addNewCustomer->setObjectName(QStringLiteral("btn_addNewCustomer"));
        btn_addNewCustomer->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer->setIcon(icon7);
        btn_addNewCustomer->setIconSize(QSize(24, 24));

        gridLayout_5->addWidget(btn_addNewCustomer, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 2, 0, 1, 1);


        horizontalLayout_4->addWidget(frame_2);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        retranslateUi(OrdersClient);

        QMetaObject::connectSlotsByName(OrdersClient);
    } // setupUi

    void retranslateUi(QDialog *OrdersClient)
    {
        OrdersClient->setWindowTitle(QApplication::translate("OrdersClient", "Dialog", Q_NULLPTR));
        label_40->setText(QString());
        lblUserAvatar->setText(QString());
        lblUserName->setText(QString());
        label_11->setText(QString());
        label_5->setText(QString());
        label_12->setText(QString());
        lblTime_4->setText(QApplication::translate("OrdersClient", "Currently Serving:", Q_NULLPTR));
        lblServing->setText(QString());
        label_39->setText(QString());
        label_37->setText(QString());
        label_41->setText(QString());
        lblTime_5->setText(QApplication::translate("OrdersClient", "Order Id:", Q_NULLPTR));
        lblOrderId->setText(QString());
        label_43->setText(QString());
        label_48->setText(QString());
        label_49->setText(QString());
        lblDateHolder->setText(QApplication::translate("OrdersClient", "Date:", Q_NULLPTR));
        lblDate->setText(QString());
        lblTimeHolder->setText(QApplication::translate("OrdersClient", "Time:", Q_NULLPTR));
        lblTime->setText(QString());
        label_15->setText(QString());
        cbSalesType->clear();
        cbSalesType->insertItems(0, QStringList()
         << QApplication::translate("OrdersClient", "Retail", Q_NULLPTR)
         << QApplication::translate("OrdersClient", "Wholesale", Q_NULLPTR)
        );
        lblSaleType->setText(QApplication::translate("OrdersClient", "Transaction Type", Q_NULLPTR));
        lblClientNameHolder->setText(QApplication::translate("OrdersClient", "Enter Client Phone:", Q_NULLPTR));
        lblClientNameHolder_2->setText(QApplication::translate("OrdersClient", "Enter Ordering Client:", Q_NULLPTR));
        checkBox_2->setText(QApplication::translate("OrdersClient", "Ordered by customer", Q_NULLPTR));
        lblTime_6->setText(QApplication::translate("OrdersClient", "Order Placed By:", Q_NULLPTR));
        lblServing_2->setText(QString());
        btnExitClient->setText(QApplication::translate("OrdersClient", "Exit Order Client", Q_NULLPTR));
        label_21->setText(QString());
        lblBarCodeHolder->setText(QApplication::translate("OrdersClient", "#", Q_NULLPTR));
        lblSearchProductHolder->setText(QApplication::translate("OrdersClient", "Search Product:", Q_NULLPTR));
        label_10->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("OrdersClient", "Product Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("OrdersClient", "Barcode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("OrdersClient", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("OrdersClient", "Measuerment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("OrdersClient", "Unit Price", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("OrdersClient", "Quantity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("OrdersClient", "Discount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("OrdersClient", "Rewards", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("OrdersClient", "Sub Total", Q_NULLPTR));
        label_35->setText(QString());
        lblComputedTotal->setText(QApplication::translate("OrdersClient", " 00.00", Q_NULLPTR));
        label_18->setText(QApplication::translate("OrdersClient", "Possible Reward:", Q_NULLPTR));
        lblPossibleRewards->setText(QString());
        label_20->setText(QApplication::translate("OrdersClient", "Possible Discount:", Q_NULLPTR));
        lblPossibleDiscounts->setText(QString());
        label_17->setText(QApplication::translate("OrdersClient", "Order Information", Q_NULLPTR));
        checkBox->setText(QApplication::translate("OrdersClient", "Free Delivery", Q_NULLPTR));
        label_4->setText(QApplication::translate("OrdersClient", "Delivery Fee", Q_NULLPTR));
        label_7->setText(QApplication::translate("OrdersClient", "Order Value:", Q_NULLPTR));
        lblSaleValue->setText(QApplication::translate("OrdersClient", "00.00", Q_NULLPTR));
        label_8->setText(QApplication::translate("OrdersClient", "Order Tax(16%):", Q_NULLPTR));
        lblSaleTax->setText(QApplication::translate("OrdersClient", "00.00", Q_NULLPTR));
        label_25->setText(QApplication::translate("OrdersClient", "Order Total:", Q_NULLPTR));
        lblThisSaleTotal->setText(QApplication::translate("OrdersClient", "00.00", Q_NULLPTR));
        btnCompleteSales->setText(QApplication::translate("OrdersClient", "Place Order", Q_NULLPTR));
        btnQueueSale->setText(QApplication::translate("OrdersClient", "Queue", Q_NULLPTR));
        btnCancelSale->setText(QApplication::translate("OrdersClient", "Cancel Order", Q_NULLPTR));
        label_3->setText(QString());
        label_6->setText(QApplication::translate("OrdersClient", "VIAD TECHNOLOGIES POINT OF SALE", Q_NULLPTR));
        label_24->setText(QApplication::translate("OrdersClient", "Redefinig Technology", Q_NULLPTR));
        label_36->setText(QString());
        groupBox_3->setTitle(QApplication::translate("OrdersClient", "Customer Data", Q_NULLPTR));
        label_9->setText(QApplication::translate("OrdersClient", "Phone", Q_NULLPTR));
        lblCustomerPhone->setText(QString());
        label_14->setText(QApplication::translate("OrdersClient", "Cash", Q_NULLPTR));
        lblCashOnBusiness->setText(QString());
        label_16->setText(QApplication::translate("OrdersClient", "Rewards", Q_NULLPTR));
        lblAvailableRewards->setText(QString());
        label_2->setText(QApplication::translate("OrdersClient", "Avl Credit:", Q_NULLPTR));
        lblAvailableCredit->setText(QString());
        label_13->setText(QApplication::translate("OrdersClient", "Debts:", Q_NULLPTR));
        lblDebt->setText(QString());
        pushButton->setText(QApplication::translate("OrdersClient", "View This Customer", Q_NULLPTR));
        checkBoxClientRewardAuthorization->setText(QApplication::translate("OrdersClient", "Authorize rewards Payment", Q_NULLPTR));
        label->setText(QApplication::translate("OrdersClient", "Customer Data", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("OrdersClient", "Product Manager", Q_NULLPTR));
        label_34->setText(QApplication::translate("OrdersClient", "[F6]", Q_NULLPTR));
        label_45->setText(QApplication::translate("OrdersClient", "[F5]", Q_NULLPTR));
        btnReduceQtyByOne->setText(QApplication::translate("OrdersClient", "Reduce Qty by One", Q_NULLPTR));
        label_46->setText(QApplication::translate("OrdersClient", "[F4]", Q_NULLPTR));
        label_29->setText(QApplication::translate("OrdersClient", "[F2]", Q_NULLPTR));
        btnViewStockStatus->setText(QApplication::translate("OrdersClient", "View Stock Status", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("OrdersClient", "Complete Sales", Q_NULLPTR));
        label_44->setText(QApplication::translate("OrdersClient", "[Del]", Q_NULLPTR));
        label_38->setText(QApplication::translate("OrdersClient", "[F6]", Q_NULLPTR));
        label_33->setText(QApplication::translate("OrdersClient", "[F5]", Q_NULLPTR));
        btnDeleteItem_2->setText(QApplication::translate("OrdersClient", "Delete Item from Cart", Q_NULLPTR));
        label_32->setText(QApplication::translate("OrdersClient", "[F4]", Q_NULLPTR));
        btnIncreaseQty->setText(QApplication::translate("OrdersClient", "Increase QTY by One", Q_NULLPTR));
        label_30->setText(QApplication::translate("OrdersClient", "[Del]", Q_NULLPTR));
        btnIncreaseQty_2->setText(QApplication::translate("OrdersClient", "Increase QTY by One", Q_NULLPTR));
        btnViewItem_2->setText(QApplication::translate("OrdersClient", "View Item Details", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("OrdersClient", "Complete Sales", Q_NULLPTR));
        btnViewItem->setText(QApplication::translate("OrdersClient", "View Item Details", Q_NULLPTR));
        btnViewStockStatus_2->setText(QApplication::translate("OrdersClient", "View Stock Status", Q_NULLPTR));
        btnDeleteItem->setText(QApplication::translate("OrdersClient", "Delete Item from Cart", Q_NULLPTR));
        label_42->setText(QApplication::translate("OrdersClient", "[F2]", Q_NULLPTR));
        label_47->setText(QApplication::translate("OrdersClient", "[F3]", Q_NULLPTR));
        btnReduceQtyByOne_2->setText(QApplication::translate("OrdersClient", "Reduce Qty by One", Q_NULLPTR));
        label_31->setText(QApplication::translate("OrdersClient", "[F3]", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("OrdersClient", "My Queues", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("OrdersClient", "Customer Manager", Q_NULLPTR));
        btn_viewCustomers->setText(QApplication::translate("OrdersClient", "View Customers", Q_NULLPTR));
        btn_addNewCustomer->setText(QApplication::translate("OrdersClient", "Add New Customer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class OrdersClient: public Ui_OrdersClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSCLIENT_H