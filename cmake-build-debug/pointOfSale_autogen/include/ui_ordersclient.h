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
#include <QtWidgets/QFormLayout>
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
    QVBoxLayout *verticalLayout_2;
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
    QLabel *lblClientNameHolder_2;
    QCheckBox *checkBoxClientOrdered;
    QLineEdit *leOrderingClient;
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
    QHBoxLayout *horizontalLayout_6;
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
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_4;
    QLineEdit *lineEditDeliveryFee;
    QLabel *label_9;
    QCheckBox *checkBoxFreeDelivery;
    QLabel *lblComputedTotal;
    QFormLayout *formLayout_2;
    QLabel *label_19;
    QLabel *lblPossibleRewards;
    QLabel *label_22;
    QLabel *lblPossibleDiscounts;
    QLabel *label_63;
    QLabel *label_62;
    QLabel *label_64;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_23;
    QFormLayout *formLayout_3;
    QLabel *label_26;
    QLabel *lblSaleValue;
    QLabel *label_27;
    QLabel *lblSaleTax;
    QLabel *label_28;
    QLabel *lblThisSaleTotal;
    QLabel *label_60;
    QLabel *label_59;
    QLabel *label_61;
    QVBoxLayout *verticalLayout_7;
    QPushButton *btnCompleteSales_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnPlaceOrder;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *btnQueueSale_2;
    QPushButton *btnCancelSale_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *btn_addNewCustomer;
    QPushButton *btn_viewCustomers;
    QLabel *label_58;
    QLabel *label_56;
    QLabel *label_57;
    QLabel *label_36;

    void setupUi(QDialog *OrdersClient)
    {
        if (OrdersClient->objectName().isEmpty())
            OrdersClient->setObjectName(QStringLiteral("OrdersClient"));
        OrdersClient->resize(1627, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OrdersClient->sizePolicy().hasHeightForWidth());
        OrdersClient->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(OrdersClient);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
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


        verticalLayout_2->addLayout(horizontalLayout);

        label_15 = new QLabel(OrdersClient);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_15->setFrameShape(QFrame::Panel);
        label_15->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(label_15);

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

        checkBoxClientOrdered = new QCheckBox(OrdersClient);
        checkBoxClientOrdered->setObjectName(QStringLiteral("checkBoxClientOrdered"));
        checkBoxClientOrdered->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_9->addWidget(checkBoxClientOrdered);

        leOrderingClient = new QLineEdit(OrdersClient);
        leOrderingClient->setObjectName(QStringLiteral("leOrderingClient"));
        leOrderingClient->setMinimumSize(QSize(0, 30));
        leOrderingClient->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_9->addWidget(leOrderingClient);

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


        verticalLayout_2->addLayout(horizontalLayout_9);

        label_21 = new QLabel(OrdersClient);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(label_21);

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


        verticalLayout_2->addLayout(horizontalLayout_2);

        label_10 = new QLabel(OrdersClient);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_10->setFrameShape(QFrame::Panel);
        label_10->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(label_10);

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

        verticalLayout_2->addWidget(tableWidget);

        label_35 = new QLabel(OrdersClient);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_35->setFrameShape(QFrame::Panel);
        label_35->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(label_35);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_54 = new QLabel(OrdersClient);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_54->setFrameShape(QFrame::Panel);
        label_54->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_54);

        label_53 = new QLabel(OrdersClient);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_53->setFrameShape(QFrame::Panel);
        label_53->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_53);

        label_55 = new QLabel(OrdersClient);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_55->setFrameShape(QFrame::Panel);
        label_55->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_55);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(OrdersClient);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Waree"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout_4 = new QFormLayout();
        formLayout_4->setObjectName(QStringLiteral("formLayout_4"));
        label_14 = new QLabel(OrdersClient);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(150, 30));
        label_14->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Waree"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_14->setFont(font3);
        label_14->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_14);

        lblCashOnBusiness = new QLabel(OrdersClient);
        lblCashOnBusiness->setObjectName(QStringLiteral("lblCashOnBusiness"));
        lblCashOnBusiness->setMinimumSize(QSize(250, 0));
        lblCashOnBusiness->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, lblCashOnBusiness);

        label_16 = new QLabel(OrdersClient);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(150, 30));
        label_16->setMaximumSize(QSize(16777215, 16777215));
        label_16->setFont(font3);
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_16);

        lblAvailableRewards = new QLabel(OrdersClient);
        lblAvailableRewards->setObjectName(QStringLiteral("lblAvailableRewards"));
        lblAvailableRewards->setMinimumSize(QSize(250, 0));
        lblAvailableRewards->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, lblAvailableRewards);

        label_2 = new QLabel(OrdersClient);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 30));
        label_2->setMaximumSize(QSize(16777215, 16777215));
        label_2->setFont(font3);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_2);

        lblAvailableCredit = new QLabel(OrdersClient);
        lblAvailableCredit->setObjectName(QStringLiteral("lblAvailableCredit"));
        lblAvailableCredit->setMinimumSize(QSize(250, 0));
        lblAvailableCredit->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, lblAvailableCredit);

        label_13 = new QLabel(OrdersClient);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(150, 30));
        label_13->setMaximumSize(QSize(16777215, 16777215));
        label_13->setFont(font3);
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_13);

        lblDebt = new QLabel(OrdersClient);
        lblDebt->setObjectName(QStringLiteral("lblDebt"));
        lblDebt->setMinimumSize(QSize(250, 0));
        lblDebt->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, lblDebt);

        pushButton = new QPushButton(OrdersClient);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-invisible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, pushButton);

        checkBoxClientRewardAuthorization = new QCheckBox(OrdersClient);
        checkBoxClientRewardAuthorization->setObjectName(QStringLiteral("checkBoxClientRewardAuthorization"));
        checkBoxClientRewardAuthorization->setMinimumSize(QSize(0, 30));
        checkBoxClientRewardAuthorization->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, checkBoxClientRewardAuthorization);


        verticalLayout->addLayout(formLayout_4);


        horizontalLayout_6->addLayout(verticalLayout);

        label_51 = new QLabel(OrdersClient);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_51->setFrameShape(QFrame::Panel);
        label_51->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_51);

        label_50 = new QLabel(OrdersClient);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_50->setFrameShape(QFrame::Panel);
        label_50->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_50);

        label_52 = new QLabel(OrdersClient);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_52->setFrameShape(QFrame::Panel);
        label_52->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_52);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_4 = new QLabel(OrdersClient);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        lineEditDeliveryFee = new QLineEdit(OrdersClient);
        lineEditDeliveryFee->setObjectName(QStringLiteral("lineEditDeliveryFee"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditDeliveryFee);

        label_9 = new QLabel(OrdersClient);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        checkBoxFreeDelivery = new QCheckBox(OrdersClient);
        checkBoxFreeDelivery->setObjectName(QStringLiteral("checkBoxFreeDelivery"));

        formLayout->setWidget(1, QFormLayout::FieldRole, checkBoxFreeDelivery);


        verticalLayout_4->addLayout(formLayout);

        lblComputedTotal = new QLabel(OrdersClient);
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
"color: rgb(238, 238, 236);\n"
"margin-left:4px;\n"
"text-align:center;"));

        verticalLayout_4->addWidget(lblComputedTotal);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_19 = new QLabel(OrdersClient);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(100, 20));
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_19);

        lblPossibleRewards = new QLabel(OrdersClient);
        lblPossibleRewards->setObjectName(QStringLiteral("lblPossibleRewards"));
        lblPossibleRewards->setMinimumSize(QSize(250, 30));
        lblPossibleRewards->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lblPossibleRewards);

        label_22 = new QLabel(OrdersClient);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_22);

        lblPossibleDiscounts = new QLabel(OrdersClient);
        lblPossibleDiscounts->setObjectName(QStringLiteral("lblPossibleDiscounts"));
        lblPossibleDiscounts->setMinimumSize(QSize(250, 30));
        lblPossibleDiscounts->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lblPossibleDiscounts);


        verticalLayout_4->addLayout(formLayout_2);


        horizontalLayout_6->addLayout(verticalLayout_4);

        label_63 = new QLabel(OrdersClient);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_63->setFrameShape(QFrame::Panel);
        label_63->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_63);

        label_62 = new QLabel(OrdersClient);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_62->setFrameShape(QFrame::Panel);
        label_62->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_62);

        label_64 = new QLabel(OrdersClient);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_64->setFrameShape(QFrame::Panel);
        label_64->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_64);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_23 = new QLabel(OrdersClient);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMinimumSize(QSize(40, 0));
        label_23->setMaximumSize(QSize(16777215, 40));
        label_23->setFont(font2);
        label_23->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_23->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_23);

        formLayout_3 = new QFormLayout();
        formLayout_3->setObjectName(QStringLiteral("formLayout_3"));
        label_26 = new QLabel(OrdersClient);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(150, 0));
        label_26->setFont(font2);
        label_26->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_26->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_26);

        lblSaleValue = new QLabel(OrdersClient);
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

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lblSaleValue);

        label_27 = new QLabel(OrdersClient);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(150, 0));
        label_27->setFont(font2);
        label_27->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_27->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_27);

        lblSaleTax = new QLabel(OrdersClient);
        lblSaleTax->setObjectName(QStringLiteral("lblSaleTax"));
        lblSaleTax->setMinimumSize(QSize(200, 0));
        lblSaleTax->setFont(font5);
        lblSaleTax->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lblSaleTax);

        label_28 = new QLabel(OrdersClient);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMinimumSize(QSize(150, 0));
        label_28->setFont(font2);
        label_28->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_28->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_28);

        lblThisSaleTotal = new QLabel(OrdersClient);
        lblThisSaleTotal->setObjectName(QStringLiteral("lblThisSaleTotal"));
        lblThisSaleTotal->setMinimumSize(QSize(200, 0));
        lblThisSaleTotal->setFont(font5);
        lblThisSaleTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lblThisSaleTotal);


        verticalLayout_5->addLayout(formLayout_3);


        horizontalLayout_6->addLayout(verticalLayout_5);

        label_60 = new QLabel(OrdersClient);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_60->setFrameShape(QFrame::Panel);
        label_60->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_60);

        label_59 = new QLabel(OrdersClient);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_59->setFrameShape(QFrame::Panel);
        label_59->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_59);

        label_61 = new QLabel(OrdersClient);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_61->setFrameShape(QFrame::Panel);
        label_61->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_61);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        btnCompleteSales_2 = new QPushButton(OrdersClient);
        btnCompleteSales_2->setObjectName(QStringLiteral("btnCompleteSales_2"));
        btnCompleteSales_2->setMinimumSize(QSize(150, 0));
        btnCompleteSales_2->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-receipt-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSales_2->setIcon(icon1);
        btnCompleteSales_2->setIconSize(QSize(36, 36));

        verticalLayout_7->addWidget(btnCompleteSales_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        btnPlaceOrder = new QPushButton(OrdersClient);
        btnPlaceOrder->setObjectName(QStringLiteral("btnPlaceOrder"));
        btnPlaceOrder->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/rss-button (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlaceOrder->setIcon(icon2);
        btnPlaceOrder->setIconSize(QSize(24, 24));

        horizontalLayout_7->addWidget(btnPlaceOrder);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        btnQueueSale_2 = new QPushButton(OrdersClient);
        btnQueueSale_2->setObjectName(QStringLiteral("btnQueueSale_2"));
        btnQueueSale_2->setStyleSheet(QLatin1String("background-color: rgb(233, 185, 110);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/new_icons_2/icons8-queue-90.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQueueSale_2->setIcon(icon3);
        btnQueueSale_2->setIconSize(QSize(24, 24));

        horizontalLayout_8->addWidget(btnQueueSale_2);

        btnCancelSale_2 = new QPushButton(OrdersClient);
        btnCancelSale_2->setObjectName(QStringLiteral("btnCancelSale_2"));
        btnCancelSale_2->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale_2->setIcon(icon4);
        btnCancelSale_2->setIconSize(QSize(24, 24));

        horizontalLayout_8->addWidget(btnCancelSale_2);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        btn_addNewCustomer = new QPushButton(OrdersClient);
        btn_addNewCustomer->setObjectName(QStringLiteral("btn_addNewCustomer"));
        btn_addNewCustomer->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer->setIcon(icon2);
        btn_addNewCustomer->setIconSize(QSize(24, 24));

        horizontalLayout_10->addWidget(btn_addNewCustomer);

        btn_viewCustomers = new QPushButton(OrdersClient);
        btn_viewCustomers->setObjectName(QStringLiteral("btn_viewCustomers"));
        btn_viewCustomers->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_viewCustomers->setIcon(icon2);
        btn_viewCustomers->setIconSize(QSize(24, 24));

        horizontalLayout_10->addWidget(btn_viewCustomers);


        verticalLayout_7->addLayout(horizontalLayout_10);


        horizontalLayout_6->addLayout(verticalLayout_7);

        label_58 = new QLabel(OrdersClient);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_58->setFrameShape(QFrame::Panel);
        label_58->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_58);

        label_56 = new QLabel(OrdersClient);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_56->setFrameShape(QFrame::Panel);
        label_56->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_56);

        label_57 = new QLabel(OrdersClient);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_57->setFrameShape(QFrame::Panel);
        label_57->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_57);


        verticalLayout_2->addLayout(horizontalLayout_6);

        label_36 = new QLabel(OrdersClient);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_36->setFrameShape(QFrame::Panel);
        label_36->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(label_36);


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
        checkBoxClientOrdered->setText(QApplication::translate("OrdersClient", "Ordered by customer", Q_NULLPTR));
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
        label_54->setText(QString());
        label_53->setText(QString());
        label_55->setText(QString());
        label->setText(QApplication::translate("OrdersClient", "Customer Data", Q_NULLPTR));
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
        label_51->setText(QString());
        label_50->setText(QString());
        label_52->setText(QString());
        label_4->setText(QApplication::translate("OrdersClient", "Delivery Fee", Q_NULLPTR));
        label_9->setText(QApplication::translate("OrdersClient", "Delivery Fee", Q_NULLPTR));
        checkBoxFreeDelivery->setText(QApplication::translate("OrdersClient", "Free Delivery", Q_NULLPTR));
        lblComputedTotal->setText(QApplication::translate("OrdersClient", " 00.00", Q_NULLPTR));
        label_19->setText(QApplication::translate("OrdersClient", "Possible Reward:", Q_NULLPTR));
        lblPossibleRewards->setText(QString());
        label_22->setText(QApplication::translate("OrdersClient", "Possible Discount:", Q_NULLPTR));
        lblPossibleDiscounts->setText(QString());
        label_63->setText(QString());
        label_62->setText(QString());
        label_64->setText(QString());
        label_23->setText(QApplication::translate("OrdersClient", "Sale information", Q_NULLPTR));
        label_26->setText(QApplication::translate("OrdersClient", "Sale Value:", Q_NULLPTR));
        lblSaleValue->setText(QApplication::translate("OrdersClient", "00.00", Q_NULLPTR));
        label_27->setText(QApplication::translate("OrdersClient", "Sale Tax(16%):", Q_NULLPTR));
        lblSaleTax->setText(QApplication::translate("OrdersClient", "00.00", Q_NULLPTR));
        label_28->setText(QApplication::translate("OrdersClient", "Sale Total:", Q_NULLPTR));
        lblThisSaleTotal->setText(QApplication::translate("OrdersClient", "00.00", Q_NULLPTR));
        label_60->setText(QString());
        label_59->setText(QString());
        label_61->setText(QString());
        btnCompleteSales_2->setText(QApplication::translate("OrdersClient", "Apply", Q_NULLPTR));
        btnPlaceOrder->setText(QApplication::translate("OrdersClient", "Place an Order", Q_NULLPTR));
        btnQueueSale_2->setText(QApplication::translate("OrdersClient", "Queue", Q_NULLPTR));
        btnCancelSale_2->setText(QApplication::translate("OrdersClient", "Cancel", Q_NULLPTR));
        btn_addNewCustomer->setText(QApplication::translate("OrdersClient", "Add New Customer", Q_NULLPTR));
        btn_viewCustomers->setText(QApplication::translate("OrdersClient", "View Customers", Q_NULLPTR));
        label_58->setText(QString());
        label_56->setText(QString());
        label_57->setText(QString());
        label_36->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrdersClient: public Ui_OrdersClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSCLIENT_H
