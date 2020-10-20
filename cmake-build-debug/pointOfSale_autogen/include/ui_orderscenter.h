/********************************************************************************
** Form generated from reading UI file 'orderscenter.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDERSCENTER_H
#define UI_ORDERSCENTER_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OrdersCenter
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_42;
    QLabel *lbl_avatar;
    QLabel *lbl_username;
    QLabel *label_34;
    QLabel *label_8;
    QLabel *label_38;
    QSpacerItem *horizontalSpacer_13;
    QLabel *lblTime_8;
    QLabel *lblServing_4;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QSpacerItem *horizontalSpacer_14;
    QLabel *lblTime_9;
    QLabel *lbl_order_id;
    QLabel *label_47;
    QLabel *label_80;
    QLabel *label_81;
    QSpacerItem *horizontalSpacer_15;
    QLabel *lblDateHolder_2;
    QLabel *lbl_date;
    QLabel *lblTimeHolder_2;
    QLabel *lbl_time;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblBarCodeHolder_2;
    QLineEdit *le_barcode;
    QLabel *lblSearchProductHolder_2;
    QLineEdit *le_search_product;
    QSpacerItem *horizontalSpacer_12;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_15;
    QComboBox *cbSalesType_2;
    QSpacerItem *horizontalSpacer_10;
    QLabel *lblSaleType_2;
    QSpacerItem *horizontalSpacer_11;
    QLabel *lblClientNameHolder_3;
    QLineEdit *leClient_2;
    QLabel *lblClientNameHolder_4;
    QCheckBox *checkBoxClientOrdered_2;
    QLineEdit *leOrderingClient_2;
    QLabel *lblTime_7;
    QLabel *lblServing_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnExitClient_2;
    QLabel *label_33;
    QTableWidget *tableWidget;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_65;
    QLabel *label_66;
    QLabel *label_67;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QFormLayout *formLayout_5;
    QLabel *label_15;
    QLabel *lblCashOnBusiness_2;
    QLabel *label_17;
    QLabel *lblAvailableRewards_2;
    QLabel *label_6;
    QLabel *lblAvailableCredit_2;
    QLabel *label_18;
    QLabel *lblDebt_2;
    QPushButton *pushButton_2;
    QCheckBox *checkBoxClientRewardAuthorization_2;
    QLabel *label_68;
    QLabel *label_69;
    QLabel *label_70;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout_6;
    QLabel *label_7;
    QLineEdit *lineEditDeliveryFee_2;
    QLabel *label_10;
    QCheckBox *checkBoxFreeDelivery_2;
    QLabel *lbl_computed_total;
    QFormLayout *formLayout_7;
    QLabel *label_20;
    QLabel *lbl_possible_reward;
    QLabel *label_24;
    QLabel *lbl_discount;
    QLabel *label_71;
    QLabel *label_72;
    QLabel *label_73;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_25;
    QFormLayout *formLayout_8;
    QLabel *label_29;
    QLabel *lbl_sale_value;
    QLabel *label_30;
    QLabel *lbl_sale_tax;
    QLabel *label_31;
    QLabel *lbl_total;
    QLabel *label_74;
    QLabel *label_75;
    QLabel *label_76;
    QVBoxLayout *verticalLayout_9;
    QPushButton *btnCompleteSales_3;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *btnPlaceOrder_2;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnQueueSale_3;
    QPushButton *btnCancelSale_3;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btn_addNewCustomer_2;
    QPushButton *btn_viewCustomers_2;
    QLabel *label_77;
    QLabel *label_78;
    QLabel *label_79;
    QLabel *label_36;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OrdersCenter)
    {
        if (OrdersCenter->objectName().isEmpty())
            OrdersCenter->setObjectName(QStringLiteral("OrdersCenter"));
        OrdersCenter->resize(1676, 1080);
        centralwidget = new QWidget(OrdersCenter);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_42 = new QLabel(centralwidget);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setMinimumSize(QSize(64, 64));
        label_42->setMaximumSize(QSize(64, 64));
        label_42->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_42->setFrameShape(QFrame::Panel);
        label_42->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_42);

        lbl_avatar = new QLabel(centralwidget);
        lbl_avatar->setObjectName(QStringLiteral("lbl_avatar"));
        lbl_avatar->setMinimumSize(QSize(40, 40));
        lbl_avatar->setMaximumSize(QSize(40, 40));
        lbl_avatar->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_4->addWidget(lbl_avatar);

        lbl_username = new QLabel(centralwidget);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setMinimumSize(QSize(120, 40));
        lbl_username->setMaximumSize(QSize(120, 40));
        lbl_username->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(255, 255, 255);\n"
""));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lbl_username);

        label_34 = new QLabel(centralwidget);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setMinimumSize(QSize(10, 40));
        label_34->setMaximumSize(QSize(10, 40));
        label_34->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_34->setFrameShape(QFrame::Panel);
        label_34->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_34);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(10, 40));
        label_8->setMaximumSize(QSize(10, 40));
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_8->setFrameShape(QFrame::Panel);
        label_8->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_8);

        label_38 = new QLabel(centralwidget);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setMinimumSize(QSize(10, 40));
        label_38->setMaximumSize(QSize(10, 40));
        label_38->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_38->setFrameShape(QFrame::Panel);
        label_38->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_38);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);

        lblTime_8 = new QLabel(centralwidget);
        lblTime_8->setObjectName(QStringLiteral("lblTime_8"));
        lblTime_8->setMinimumSize(QSize(180, 40));
        lblTime_8->setMaximumSize(QSize(180, 40));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        lblTime_8->setFont(font);
        lblTime_8->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblTime_8->setFrameShape(QFrame::Panel);
        lblTime_8->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lblTime_8);

        lblServing_4 = new QLabel(centralwidget);
        lblServing_4->setObjectName(QStringLiteral("lblServing_4"));
        lblServing_4->setMinimumSize(QSize(250, 40));
        lblServing_4->setMaximumSize(QSize(250, 40));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(11);
        lblServing_4->setFont(font1);
        lblServing_4->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);\n"
""));
        lblServing_4->setFrameShape(QFrame::Panel);
        lblServing_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lblServing_4);

        label_44 = new QLabel(centralwidget);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setMinimumSize(QSize(10, 40));
        label_44->setMaximumSize(QSize(10, 40));
        label_44->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_44->setFrameShape(QFrame::Panel);
        label_44->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_44);

        label_45 = new QLabel(centralwidget);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setMinimumSize(QSize(10, 40));
        label_45->setMaximumSize(QSize(10, 40));
        label_45->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_45->setFrameShape(QFrame::Panel);
        label_45->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_45);

        label_46 = new QLabel(centralwidget);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setMinimumSize(QSize(10, 40));
        label_46->setMaximumSize(QSize(10, 40));
        label_46->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_46->setFrameShape(QFrame::Panel);
        label_46->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_46);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        lblTime_9 = new QLabel(centralwidget);
        lblTime_9->setObjectName(QStringLiteral("lblTime_9"));
        lblTime_9->setMinimumSize(QSize(100, 40));
        lblTime_9->setMaximumSize(QSize(100, 40));
        lblTime_9->setFont(font);
        lblTime_9->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblTime_9->setFrameShape(QFrame::Panel);
        lblTime_9->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lblTime_9);

        lbl_order_id = new QLabel(centralwidget);
        lbl_order_id->setObjectName(QStringLiteral("lbl_order_id"));
        lbl_order_id->setMinimumSize(QSize(200, 40));
        lbl_order_id->setMaximumSize(QSize(200, 40));
        lbl_order_id->setFont(font1);
        lbl_order_id->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);"));
        lbl_order_id->setFrameShape(QFrame::Panel);
        lbl_order_id->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lbl_order_id);

        label_47 = new QLabel(centralwidget);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setMinimumSize(QSize(10, 40));
        label_47->setMaximumSize(QSize(10, 40));
        label_47->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_47->setFrameShape(QFrame::Panel);
        label_47->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_47);

        label_80 = new QLabel(centralwidget);
        label_80->setObjectName(QStringLiteral("label_80"));
        label_80->setMinimumSize(QSize(10, 40));
        label_80->setMaximumSize(QSize(10, 40));
        label_80->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_80->setFrameShape(QFrame::Panel);
        label_80->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_80);

        label_81 = new QLabel(centralwidget);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setMinimumSize(QSize(10, 40));
        label_81->setMaximumSize(QSize(10, 40));
        label_81->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_81->setFrameShape(QFrame::Panel);
        label_81->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_81);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_15);

        lblDateHolder_2 = new QLabel(centralwidget);
        lblDateHolder_2->setObjectName(QStringLiteral("lblDateHolder_2"));
        lblDateHolder_2->setMinimumSize(QSize(60, 30));
        lblDateHolder_2->setMaximumSize(QSize(40, 40));
        lblDateHolder_2->setFont(font);
        lblDateHolder_2->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblDateHolder_2->setFrameShape(QFrame::Panel);
        lblDateHolder_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lblDateHolder_2);

        lbl_date = new QLabel(centralwidget);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setMinimumSize(QSize(120, 40));
        lbl_date->setMaximumSize(QSize(120, 40));
        lbl_date->setFont(font1);
        lbl_date->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lbl_date);

        lblTimeHolder_2 = new QLabel(centralwidget);
        lblTimeHolder_2->setObjectName(QStringLiteral("lblTimeHolder_2"));
        lblTimeHolder_2->setMinimumSize(QSize(60, 40));
        lblTimeHolder_2->setMaximumSize(QSize(50, 40));
        lblTimeHolder_2->setFont(font);
        lblTimeHolder_2->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblTimeHolder_2->setFrameShape(QFrame::Panel);
        lblTimeHolder_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lblTimeHolder_2);

        lbl_time = new QLabel(centralwidget);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setMinimumSize(QSize(120, 40));
        lbl_time->setMaximumSize(QSize(120, 40));
        lbl_time->setFont(font1);
        lbl_time->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);\n"
""));
        lbl_time->setFrameShape(QFrame::Panel);
        lbl_time->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(lbl_time);


        verticalLayout_3->addLayout(horizontalLayout_4);

        label_32 = new QLabel(centralwidget);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_32->setFrameShape(QFrame::Panel);
        label_32->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_32);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lblBarCodeHolder_2 = new QLabel(centralwidget);
        lblBarCodeHolder_2->setObjectName(QStringLiteral("lblBarCodeHolder_2"));
        lblBarCodeHolder_2->setMaximumSize(QSize(40, 40));
        lblBarCodeHolder_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblBarCodeHolder_2->setFrameShape(QFrame::Panel);
        lblBarCodeHolder_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(lblBarCodeHolder_2);

        le_barcode = new QLineEdit(centralwidget);
        le_barcode->setObjectName(QStringLiteral("le_barcode"));
        le_barcode->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_3->addWidget(le_barcode);

        lblSearchProductHolder_2 = new QLabel(centralwidget);
        lblSearchProductHolder_2->setObjectName(QStringLiteral("lblSearchProductHolder_2"));
        lblSearchProductHolder_2->setMaximumSize(QSize(250, 16777215));
        lblSearchProductHolder_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblSearchProductHolder_2->setFrameShape(QFrame::Panel);
        lblSearchProductHolder_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(lblSearchProductHolder_2);

        le_search_product = new QLineEdit(centralwidget);
        le_search_product->setObjectName(QStringLiteral("le_search_product"));
        le_search_product->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_3->addWidget(le_search_product);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_21);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        cbSalesType_2 = new QComboBox(centralwidget);
        cbSalesType_2->setObjectName(QStringLiteral("cbSalesType_2"));
        cbSalesType_2->setMinimumSize(QSize(30, 30));
        cbSalesType_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_15->addWidget(cbSalesType_2);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_10);

        lblSaleType_2 = new QLabel(centralwidget);
        lblSaleType_2->setObjectName(QStringLiteral("lblSaleType_2"));
        lblSaleType_2->setMinimumSize(QSize(0, 30));
        lblSaleType_2->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"border-radius:3px;"));
        lblSaleType_2->setFrameShape(QFrame::Panel);
        lblSaleType_2->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(lblSaleType_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_11);

        lblClientNameHolder_3 = new QLabel(centralwidget);
        lblClientNameHolder_3->setObjectName(QStringLiteral("lblClientNameHolder_3"));
        lblClientNameHolder_3->setMinimumSize(QSize(0, 30));
        lblClientNameHolder_3->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblClientNameHolder_3->setFrameShape(QFrame::Panel);
        lblClientNameHolder_3->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(lblClientNameHolder_3);

        leClient_2 = new QLineEdit(centralwidget);
        leClient_2->setObjectName(QStringLiteral("leClient_2"));
        leClient_2->setMinimumSize(QSize(0, 30));
        leClient_2->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_15->addWidget(leClient_2);

        lblClientNameHolder_4 = new QLabel(centralwidget);
        lblClientNameHolder_4->setObjectName(QStringLiteral("lblClientNameHolder_4"));
        lblClientNameHolder_4->setMinimumSize(QSize(0, 30));
        lblClientNameHolder_4->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"padding: 2px;"));
        lblClientNameHolder_4->setFrameShape(QFrame::Panel);
        lblClientNameHolder_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(lblClientNameHolder_4);

        checkBoxClientOrdered_2 = new QCheckBox(centralwidget);
        checkBoxClientOrdered_2->setObjectName(QStringLiteral("checkBoxClientOrdered_2"));
        checkBoxClientOrdered_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        horizontalLayout_15->addWidget(checkBoxClientOrdered_2);

        leOrderingClient_2 = new QLineEdit(centralwidget);
        leOrderingClient_2->setObjectName(QStringLiteral("leOrderingClient_2"));
        leOrderingClient_2->setMinimumSize(QSize(0, 30));
        leOrderingClient_2->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_15->addWidget(leOrderingClient_2);

        lblTime_7 = new QLabel(centralwidget);
        lblTime_7->setObjectName(QStringLiteral("lblTime_7"));
        lblTime_7->setMinimumSize(QSize(180, 40));
        lblTime_7->setMaximumSize(QSize(180, 40));
        lblTime_7->setFont(font);
        lblTime_7->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        lblTime_7->setFrameShape(QFrame::Panel);
        lblTime_7->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(lblTime_7);

        lblServing_3 = new QLabel(centralwidget);
        lblServing_3->setObjectName(QStringLiteral("lblServing_3"));
        lblServing_3->setMinimumSize(QSize(250, 40));
        lblServing_3->setMaximumSize(QSize(250, 40));
        lblServing_3->setFont(font1);
        lblServing_3->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(238, 238, 236);\n"
""));
        lblServing_3->setFrameShape(QFrame::Panel);
        lblServing_3->setFrameShadow(QFrame::Raised);

        horizontalLayout_15->addWidget(lblServing_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_4);

        btnExitClient_2 = new QPushButton(centralwidget);
        btnExitClient_2->setObjectName(QStringLiteral("btnExitClient_2"));

        horizontalLayout_15->addWidget(btnExitClient_2);


        verticalLayout_3->addLayout(horizontalLayout_15);

        label_33 = new QLabel(centralwidget);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_33->setFrameShape(QFrame::Panel);
        label_33->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_33);

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

        verticalLayout_3->addWidget(tableWidget);

        label_35 = new QLabel(centralwidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_35->setFrameShape(QFrame::Panel);
        label_35->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_35);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_65 = new QLabel(centralwidget);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_65->setFrameShape(QFrame::Panel);
        label_65->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_65);

        label_66 = new QLabel(centralwidget);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_66->setFrameShape(QFrame::Panel);
        label_66->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_66);

        label_67 = new QLabel(centralwidget);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_67->setFrameShape(QFrame::Panel);
        label_67->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_67);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 40));
        QFont font2;
        font2.setFamily(QStringLiteral("Waree"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_3);

        formLayout_5 = new QFormLayout();
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(150, 30));
        label_15->setMaximumSize(QSize(16777215, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("Waree"));
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_15->setFont(font3);
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_15);

        lblCashOnBusiness_2 = new QLabel(centralwidget);
        lblCashOnBusiness_2->setObjectName(QStringLiteral("lblCashOnBusiness_2"));
        lblCashOnBusiness_2->setMinimumSize(QSize(250, 0));
        lblCashOnBusiness_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, lblCashOnBusiness_2);

        label_17 = new QLabel(centralwidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(150, 30));
        label_17->setMaximumSize(QSize(16777215, 16777215));
        label_17->setFont(font3);
        label_17->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_17);

        lblAvailableRewards_2 = new QLabel(centralwidget);
        lblAvailableRewards_2->setObjectName(QStringLiteral("lblAvailableRewards_2"));
        lblAvailableRewards_2->setMinimumSize(QSize(250, 0));
        lblAvailableRewards_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, lblAvailableRewards_2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(150, 30));
        label_6->setMaximumSize(QSize(16777215, 16777215));
        label_6->setFont(font3);
        label_6->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_6);

        lblAvailableCredit_2 = new QLabel(centralwidget);
        lblAvailableCredit_2->setObjectName(QStringLiteral("lblAvailableCredit_2"));
        lblAvailableCredit_2->setMinimumSize(QSize(250, 0));
        lblAvailableCredit_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, lblAvailableCredit_2);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(150, 30));
        label_18->setMaximumSize(QSize(16777215, 16777215));
        label_18->setFont(font3);
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_18);

        lblDebt_2 = new QLabel(centralwidget);
        lblDebt_2->setObjectName(QStringLiteral("lblDebt_2"));
        lblDebt_2->setMinimumSize(QSize(250, 0));
        lblDebt_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, lblDebt_2);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-invisible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(24, 24));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, pushButton_2);

        checkBoxClientRewardAuthorization_2 = new QCheckBox(centralwidget);
        checkBoxClientRewardAuthorization_2->setObjectName(QStringLiteral("checkBoxClientRewardAuthorization_2"));
        checkBoxClientRewardAuthorization_2->setMinimumSize(QSize(0, 30));
        checkBoxClientRewardAuthorization_2->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, checkBoxClientRewardAuthorization_2);


        verticalLayout_2->addLayout(formLayout_5);


        horizontalLayout_11->addLayout(verticalLayout_2);

        label_68 = new QLabel(centralwidget);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_68->setFrameShape(QFrame::Panel);
        label_68->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_68);

        label_69 = new QLabel(centralwidget);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_69->setFrameShape(QFrame::Panel);
        label_69->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_69);

        label_70 = new QLabel(centralwidget);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_70->setFrameShape(QFrame::Panel);
        label_70->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_70);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        formLayout_6 = new QFormLayout();
        formLayout_6->setObjectName(QStringLiteral("formLayout_6"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEditDeliveryFee_2 = new QLineEdit(centralwidget);
        lineEditDeliveryFee_2->setObjectName(QStringLiteral("lineEditDeliveryFee_2"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, lineEditDeliveryFee_2);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_10);

        checkBoxFreeDelivery_2 = new QCheckBox(centralwidget);
        checkBoxFreeDelivery_2->setObjectName(QStringLiteral("checkBoxFreeDelivery_2"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, checkBoxFreeDelivery_2);


        verticalLayout_6->addLayout(formLayout_6);

        lbl_computed_total = new QLabel(centralwidget);
        lbl_computed_total->setObjectName(QStringLiteral("lbl_computed_total"));
        lbl_computed_total->setMinimumSize(QSize(300, 150));
        lbl_computed_total->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("KacstBook"));
        font4.setPointSize(31);
        font4.setBold(true);
        font4.setWeight(75);
        lbl_computed_total->setFont(font4);
        lbl_computed_total->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"margin-left:4px;\n"
"text-align:center;"));

        verticalLayout_6->addWidget(lbl_computed_total);

        formLayout_7 = new QFormLayout();
        formLayout_7->setObjectName(QStringLiteral("formLayout_7"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(100, 20));
        label_20->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_20);

        lbl_possible_reward = new QLabel(centralwidget);
        lbl_possible_reward->setObjectName(QStringLiteral("lbl_possible_reward"));
        lbl_possible_reward->setMinimumSize(QSize(250, 30));
        lbl_possible_reward->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, lbl_possible_reward);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_24);

        lbl_discount = new QLabel(centralwidget);
        lbl_discount->setObjectName(QStringLiteral("lbl_discount"));
        lbl_discount->setMinimumSize(QSize(250, 30));
        lbl_discount->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, lbl_discount);


        verticalLayout_6->addLayout(formLayout_7);


        horizontalLayout_11->addLayout(verticalLayout_6);

        label_71 = new QLabel(centralwidget);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_71->setFrameShape(QFrame::Panel);
        label_71->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_71);

        label_72 = new QLabel(centralwidget);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_72->setFrameShape(QFrame::Panel);
        label_72->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_72);

        label_73 = new QLabel(centralwidget);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_73->setFrameShape(QFrame::Panel);
        label_73->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_73);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(40, 0));
        label_25->setMaximumSize(QSize(16777215, 40));
        label_25->setFont(font2);
        label_25->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_25->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_25);

        formLayout_8 = new QFormLayout();
        formLayout_8->setObjectName(QStringLiteral("formLayout_8"));
        label_29 = new QLabel(centralwidget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(150, 0));
        label_29->setFont(font2);
        label_29->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_29->setAlignment(Qt::AlignCenter);

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_29);

        lbl_sale_value = new QLabel(centralwidget);
        lbl_sale_value->setObjectName(QStringLiteral("lbl_sale_value"));
        lbl_sale_value->setMinimumSize(QSize(200, 0));
        QFont font5;
        font5.setFamily(QStringLiteral("Waree"));
        font5.setPointSize(18);
        font5.setBold(true);
        font5.setWeight(75);
        lbl_sale_value->setFont(font5);
        lbl_sale_value->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding:4px;"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, lbl_sale_value);

        label_30 = new QLabel(centralwidget);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setMinimumSize(QSize(150, 0));
        label_30->setFont(font2);
        label_30->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_30->setAlignment(Qt::AlignCenter);

        formLayout_8->setWidget(1, QFormLayout::LabelRole, label_30);

        lbl_sale_tax = new QLabel(centralwidget);
        lbl_sale_tax->setObjectName(QStringLiteral("lbl_sale_tax"));
        lbl_sale_tax->setMinimumSize(QSize(200, 0));
        lbl_sale_tax->setFont(font5);
        lbl_sale_tax->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        formLayout_8->setWidget(1, QFormLayout::FieldRole, lbl_sale_tax);

        label_31 = new QLabel(centralwidget);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setMinimumSize(QSize(150, 0));
        label_31->setFont(font2);
        label_31->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_31->setAlignment(Qt::AlignCenter);

        formLayout_8->setWidget(2, QFormLayout::LabelRole, label_31);

        lbl_total = new QLabel(centralwidget);
        lbl_total->setObjectName(QStringLiteral("lbl_total"));
        lbl_total->setMinimumSize(QSize(200, 0));
        lbl_total->setFont(font5);
        lbl_total->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        formLayout_8->setWidget(2, QFormLayout::FieldRole, lbl_total);


        verticalLayout_8->addLayout(formLayout_8);


        horizontalLayout_11->addLayout(verticalLayout_8);

        label_74 = new QLabel(centralwidget);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_74->setFrameShape(QFrame::Panel);
        label_74->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_74);

        label_75 = new QLabel(centralwidget);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_75->setFrameShape(QFrame::Panel);
        label_75->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_75);

        label_76 = new QLabel(centralwidget);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_76->setFrameShape(QFrame::Panel);
        label_76->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_76);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        btnCompleteSales_3 = new QPushButton(centralwidget);
        btnCompleteSales_3->setObjectName(QStringLiteral("btnCompleteSales_3"));
        btnCompleteSales_3->setMinimumSize(QSize(150, 0));
        btnCompleteSales_3->setStyleSheet(QLatin1String("background-color: rgb(143, 89, 2);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-receipt-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSales_3->setIcon(icon1);
        btnCompleteSales_3->setIconSize(QSize(36, 36));

        verticalLayout_9->addWidget(btnCompleteSales_3);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        btnPlaceOrder_2 = new QPushButton(centralwidget);
        btnPlaceOrder_2->setObjectName(QStringLiteral("btnPlaceOrder_2"));
        btnPlaceOrder_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/rss-button (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlaceOrder_2->setIcon(icon2);
        btnPlaceOrder_2->setIconSize(QSize(24, 24));

        horizontalLayout_12->addWidget(btnPlaceOrder_2);


        verticalLayout_9->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        btnQueueSale_3 = new QPushButton(centralwidget);
        btnQueueSale_3->setObjectName(QStringLiteral("btnQueueSale_3"));
        btnQueueSale_3->setStyleSheet(QLatin1String("background-color: rgb(233, 185, 110);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/new_icons_2/icons8-queue-90.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQueueSale_3->setIcon(icon3);
        btnQueueSale_3->setIconSize(QSize(24, 24));

        horizontalLayout_13->addWidget(btnQueueSale_3);

        btnCancelSale_3 = new QPushButton(centralwidget);
        btnCancelSale_3->setObjectName(QStringLiteral("btnCancelSale_3"));
        btnCancelSale_3->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale_3->setIcon(icon4);
        btnCancelSale_3->setIconSize(QSize(24, 24));

        horizontalLayout_13->addWidget(btnCancelSale_3);


        verticalLayout_9->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        btn_addNewCustomer_2 = new QPushButton(centralwidget);
        btn_addNewCustomer_2->setObjectName(QStringLiteral("btn_addNewCustomer_2"));
        btn_addNewCustomer_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer_2->setIcon(icon2);
        btn_addNewCustomer_2->setIconSize(QSize(24, 24));

        horizontalLayout_14->addWidget(btn_addNewCustomer_2);

        btn_viewCustomers_2 = new QPushButton(centralwidget);
        btn_viewCustomers_2->setObjectName(QStringLiteral("btn_viewCustomers_2"));
        btn_viewCustomers_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_viewCustomers_2->setIcon(icon2);
        btn_viewCustomers_2->setIconSize(QSize(24, 24));

        horizontalLayout_14->addWidget(btn_viewCustomers_2);


        verticalLayout_9->addLayout(horizontalLayout_14);


        horizontalLayout_11->addLayout(verticalLayout_9);

        label_77 = new QLabel(centralwidget);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_77->setFrameShape(QFrame::Panel);
        label_77->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_77);

        label_78 = new QLabel(centralwidget);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_78->setFrameShape(QFrame::Panel);
        label_78->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_78);

        label_79 = new QLabel(centralwidget);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setStyleSheet(QStringLiteral("background-color: rgb(143, 89, 2);"));
        label_79->setFrameShape(QFrame::Panel);
        label_79->setFrameShadow(QFrame::Raised);

        horizontalLayout_11->addWidget(label_79);


        verticalLayout_3->addLayout(horizontalLayout_11);

        label_36 = new QLabel(centralwidget);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_36->setFrameShape(QFrame::Panel);
        label_36->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_36);

        OrdersCenter->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OrdersCenter);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1676, 20));
        OrdersCenter->setMenuBar(menubar);
        statusbar = new QStatusBar(OrdersCenter);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        OrdersCenter->setStatusBar(statusbar);

        retranslateUi(OrdersCenter);

        QMetaObject::connectSlotsByName(OrdersCenter);
    } // setupUi

    void retranslateUi(QMainWindow *OrdersCenter)
    {
        OrdersCenter->setWindowTitle(QApplication::translate("OrdersCenter", "MainWindow", Q_NULLPTR));
        label_42->setText(QString());
        lbl_avatar->setText(QString());
        lbl_username->setText(QString());
        label_34->setText(QString());
        label_8->setText(QString());
        label_38->setText(QString());
        lblTime_8->setText(QApplication::translate("OrdersCenter", "Currently Serving:", Q_NULLPTR));
        lblServing_4->setText(QString());
        label_44->setText(QString());
        label_45->setText(QString());
        label_46->setText(QString());
        lblTime_9->setText(QApplication::translate("OrdersCenter", "Order Id:", Q_NULLPTR));
        lbl_order_id->setText(QString());
        label_47->setText(QString());
        label_80->setText(QString());
        label_81->setText(QString());
        lblDateHolder_2->setText(QApplication::translate("OrdersCenter", "Date:", Q_NULLPTR));
        lbl_date->setText(QString());
        lblTimeHolder_2->setText(QApplication::translate("OrdersCenter", "Time:", Q_NULLPTR));
        lbl_time->setText(QString());
        label_32->setText(QString());
        lblBarCodeHolder_2->setText(QApplication::translate("OrdersCenter", "#", Q_NULLPTR));
        lblSearchProductHolder_2->setText(QApplication::translate("OrdersCenter", "Search Product:", Q_NULLPTR));
        label_21->setText(QString());
        cbSalesType_2->clear();
        cbSalesType_2->insertItems(0, QStringList()
         << QApplication::translate("OrdersCenter", "Retail", Q_NULLPTR)
         << QApplication::translate("OrdersCenter", "Wholesale", Q_NULLPTR)
        );
        lblSaleType_2->setText(QApplication::translate("OrdersCenter", "Transaction Type", Q_NULLPTR));
        lblClientNameHolder_3->setText(QApplication::translate("OrdersCenter", "Enter Client Phone:", Q_NULLPTR));
        lblClientNameHolder_4->setText(QApplication::translate("OrdersCenter", "Enter Ordering Client:", Q_NULLPTR));
        checkBoxClientOrdered_2->setText(QApplication::translate("OrdersCenter", "Ordered by customer", Q_NULLPTR));
        lblTime_7->setText(QApplication::translate("OrdersCenter", "Order Placed By:", Q_NULLPTR));
        lblServing_3->setText(QString());
        btnExitClient_2->setText(QApplication::translate("OrdersCenter", "Exit Order Client", Q_NULLPTR));
        label_33->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("OrdersCenter", "Product Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("OrdersCenter", "Barcode", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("OrdersCenter", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("OrdersCenter", "Measuerment", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("OrdersCenter", "Unit Price", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("OrdersCenter", "Quantity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("OrdersCenter", "Discount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("OrdersCenter", "Rewards", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("OrdersCenter", "Sub Total", Q_NULLPTR));
        label_35->setText(QString());
        label_65->setText(QString());
        label_66->setText(QString());
        label_67->setText(QString());
        label_3->setText(QApplication::translate("OrdersCenter", "Customer Data", Q_NULLPTR));
        label_15->setText(QApplication::translate("OrdersCenter", "Cash", Q_NULLPTR));
        lblCashOnBusiness_2->setText(QString());
        label_17->setText(QApplication::translate("OrdersCenter", "Rewards", Q_NULLPTR));
        lblAvailableRewards_2->setText(QString());
        label_6->setText(QApplication::translate("OrdersCenter", "Avl Credit:", Q_NULLPTR));
        lblAvailableCredit_2->setText(QString());
        label_18->setText(QApplication::translate("OrdersCenter", "Debts:", Q_NULLPTR));
        lblDebt_2->setText(QString());
        pushButton_2->setText(QApplication::translate("OrdersCenter", "View This Customer", Q_NULLPTR));
        checkBoxClientRewardAuthorization_2->setText(QApplication::translate("OrdersCenter", "Authorize rewards Payment", Q_NULLPTR));
        label_68->setText(QString());
        label_69->setText(QString());
        label_70->setText(QString());
        label_7->setText(QApplication::translate("OrdersCenter", "Delivery Fee", Q_NULLPTR));
        label_10->setText(QApplication::translate("OrdersCenter", "Delivery Fee", Q_NULLPTR));
        checkBoxFreeDelivery_2->setText(QApplication::translate("OrdersCenter", "Free Delivery", Q_NULLPTR));
        lbl_computed_total->setText(QApplication::translate("OrdersCenter", " 00.00", Q_NULLPTR));
        label_20->setText(QApplication::translate("OrdersCenter", "Possible Reward:", Q_NULLPTR));
        lbl_possible_reward->setText(QString());
        label_24->setText(QApplication::translate("OrdersCenter", "Possible Discount:", Q_NULLPTR));
        lbl_discount->setText(QString());
        label_71->setText(QString());
        label_72->setText(QString());
        label_73->setText(QString());
        label_25->setText(QApplication::translate("OrdersCenter", "Sale information", Q_NULLPTR));
        label_29->setText(QApplication::translate("OrdersCenter", "Sale Value:", Q_NULLPTR));
        lbl_sale_value->setText(QApplication::translate("OrdersCenter", "00.00", Q_NULLPTR));
        label_30->setText(QApplication::translate("OrdersCenter", "Sale Tax(16%):", Q_NULLPTR));
        lbl_sale_tax->setText(QApplication::translate("OrdersCenter", "00.00", Q_NULLPTR));
        label_31->setText(QApplication::translate("OrdersCenter", "Sale Total:", Q_NULLPTR));
        lbl_total->setText(QApplication::translate("OrdersCenter", "00.00", Q_NULLPTR));
        label_74->setText(QString());
        label_75->setText(QString());
        label_76->setText(QString());
        btnCompleteSales_3->setText(QApplication::translate("OrdersCenter", "Apply", Q_NULLPTR));
        btnPlaceOrder_2->setText(QApplication::translate("OrdersCenter", "Place an Order", Q_NULLPTR));
        btnQueueSale_3->setText(QApplication::translate("OrdersCenter", "Queue", Q_NULLPTR));
        btnCancelSale_3->setText(QApplication::translate("OrdersCenter", "Cancel", Q_NULLPTR));
        btn_addNewCustomer_2->setText(QApplication::translate("OrdersCenter", "Add New Customer", Q_NULLPTR));
        btn_viewCustomers_2->setText(QApplication::translate("OrdersCenter", "View Customers", Q_NULLPTR));
        label_77->setText(QString());
        label_78->setText(QString());
        label_79->setText(QString());
        label_36->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OrdersCenter: public Ui_OrdersCenter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDERSCENTER_H
