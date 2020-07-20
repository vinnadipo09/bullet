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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
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
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *lblDate;
    QLabel *label_43;
    QLabel *lblTime;
    QSpacerItem *horizontalSpacer_14;
    QLabel *lblUserAvatar;
    QLabel *lblUserName;
    QPushButton *btnExitClient;
    QPushButton *btnLogout;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_35;
    QLineEdit *leClient;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkBoxApplyRewards;
    QCheckBox *checkBoxEnableDiscount;
    QCheckBox *checkBoxEnableRewards;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_28;
    QLineEdit *le_barcodeEntry;
    QLabel *label_12;
    QLineEdit *le_SearchProduct;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_15;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lblComputedTotal;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_9;
    QFrame *line_6;
    QLabel *lblCustomerPhone;
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
    QLabel *lblOutstandingDebt;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkBox;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
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
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_18;
    QFrame *line_9;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_20;
    QFrame *line_10;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_3;
    QLabel *label_24;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnCompleteSales;
    QPushButton *btnQueueSale;
    QPushButton *btnCancelSale;
    QFrame *line;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnReduceQtyByOne;
    QLabel *label_29;
    QPushButton *btnDeleteItem;
    QLabel *label_30;
    QPushButton *btnIncreaseQty;
    QLabel *label_31;
    QPushButton *btnViewItem;
    QLabel *label_32;
    QPushButton *btnViewStockStatus;
    QLabel *label_33;
    QPushButton *pushButton_12;
    QLabel *label_34;
    QPushButton *btnReduceQtyByOne_2;
    QLabel *label_42;
    QPushButton *btnDeleteItem_2;
    QLabel *label_44;
    QPushButton *btnIncreaseQty_2;
    QLabel *label_47;
    QPushButton *btnViewItem_2;
    QLabel *label_46;
    QPushButton *btnViewStockStatus_2;
    QLabel *label_45;
    QPushButton *pushButton_13;
    QLabel *label_38;
    QGroupBox *groupBox_2;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_addNewCustomer_2;
    QPushButton *btn_addNewCustomer_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_addNewCustomer_4;
    QPushButton *btn_addNewCustomer_5;
    QPushButton *btn_addNewCustomer;
    QPushButton *btn_viewCustomers;
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
        SalesClient->resize(1816, 1200);
        actionOne = new QAction(SalesClient);
        actionOne->setObjectName(QStringLiteral("actionOne"));
        actionTwo = new QAction(SalesClient);
        actionTwo->setObjectName(QStringLiteral("actionTwo"));
        actionStock = new QAction(SalesClient);
        actionStock->setObjectName(QStringLiteral("actionStock"));
        actionOne_2 = new QAction(SalesClient);
        actionOne_2->setObjectName(QStringLiteral("actionOne_2"));
        actionTwo_2 = new QAction(SalesClient);
        actionTwo_2->setObjectName(QStringLiteral("actionTwo_2"));
        centralwidget = new QWidget(SalesClient);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_40 = new QLabel(centralwidget);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setMinimumSize(QSize(64, 64));
        label_40->setMaximumSize(QSize(64, 64));
        label_40->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_40->setFrameShape(QFrame::Panel);
        label_40->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(label_40);

        label_41 = new QLabel(centralwidget);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setMinimumSize(QSize(30, 30));
        label_41->setMaximumSize(QSize(40, 40));
        label_41->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"padding: 2px;"));
        label_41->setFrameShape(QFrame::Panel);
        label_41->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(label_41);

        lblDate = new QLabel(centralwidget);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        lblDate->setMinimumSize(QSize(200, 40));
        lblDate->setMaximumSize(QSize(200, 40));
        lblDate->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        lblDate->setFrameShape(QFrame::Panel);
        lblDate->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(lblDate);

        label_43 = new QLabel(centralwidget);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setMinimumSize(QSize(50, 40));
        label_43->setMaximumSize(QSize(50, 40));
        label_43->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"padding: 2px;"));
        label_43->setFrameShape(QFrame::Panel);
        label_43->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(label_43);

        lblTime = new QLabel(centralwidget);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setMinimumSize(QSize(200, 40));
        lblTime->setMaximumSize(QSize(200, 40));
        lblTime->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
""));
        lblTime->setFrameShape(QFrame::Panel);
        lblTime->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(lblTime);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);

        lblUserAvatar = new QLabel(centralwidget);
        lblUserAvatar->setObjectName(QStringLiteral("lblUserAvatar"));
        lblUserAvatar->setMinimumSize(QSize(40, 40));
        lblUserAvatar->setMaximumSize(QSize(40, 40));
        lblUserAvatar->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_10->addWidget(lblUserAvatar);

        lblUserName = new QLabel(centralwidget);
        lblUserName->setObjectName(QStringLiteral("lblUserName"));
        lblUserName->setMinimumSize(QSize(200, 40));
        lblUserName->setMaximumSize(QSize(200, 40));
        lblUserName->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
""));
        lblUserName->setFrameShape(QFrame::Panel);
        lblUserName->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(lblUserName);

        btnExitClient = new QPushButton(centralwidget);
        btnExitClient->setObjectName(QStringLiteral("btnExitClient"));

        horizontalLayout_10->addWidget(btnExitClient);

        btnLogout = new QPushButton(centralwidget);
        btnLogout->setObjectName(QStringLiteral("btnLogout"));

        horizontalLayout_10->addWidget(btnLogout);


        verticalLayout_8->addLayout(horizontalLayout_10);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(label_21);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_9->addWidget(comboBox);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_5);

        label_35 = new QLabel(centralwidget);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"padding: 2px;"));
        label_35->setFrameShape(QFrame::Panel);
        label_35->setFrameShadow(QFrame::Raised);

        horizontalLayout_9->addWidget(label_35);

        leClient = new QLineEdit(centralwidget);
        leClient->setObjectName(QStringLiteral("leClient"));
        leClient->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_9->addWidget(leClient);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_3);

        checkBoxApplyRewards = new QCheckBox(centralwidget);
        checkBoxApplyRewards->setObjectName(QStringLiteral("checkBoxApplyRewards"));

        horizontalLayout_9->addWidget(checkBoxApplyRewards);

        checkBoxEnableDiscount = new QCheckBox(centralwidget);
        checkBoxEnableDiscount->setObjectName(QStringLiteral("checkBoxEnableDiscount"));

        horizontalLayout_9->addWidget(checkBoxEnableDiscount);

        checkBoxEnableRewards = new QCheckBox(centralwidget);
        checkBoxEnableRewards->setObjectName(QStringLiteral("checkBoxEnableRewards"));

        horizontalLayout_9->addWidget(checkBoxEnableRewards);


        verticalLayout_8->addLayout(horizontalLayout_9);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_10->setFrameShape(QFrame::Panel);
        label_10->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(label_10);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_28 = new QLabel(centralwidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMaximumSize(QSize(40, 40));
        label_28->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_28->setFrameShape(QFrame::Panel);
        label_28->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(label_28);

        le_barcodeEntry = new QLineEdit(centralwidget);
        le_barcodeEntry->setObjectName(QStringLiteral("le_barcodeEntry"));
        le_barcodeEntry->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_2->addWidget(le_barcodeEntry);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(250, 16777215));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_12->setFrameShape(QFrame::Panel);
        label_12->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(label_12);

        le_SearchProduct = new QLineEdit(centralwidget);
        le_SearchProduct->setObjectName(QStringLiteral("le_SearchProduct"));
        le_SearchProduct->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(le_SearchProduct);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_8->addLayout(horizontalLayout_2);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_15->setFrameShape(QFrame::Panel);
        label_15->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(label_15);

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
        tableWidget->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));

        verticalLayout_8->addWidget(tableWidget);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        lblComputedTotal = new QLabel(centralwidget);
        lblComputedTotal->setObjectName(QStringLiteral("lblComputedTotal"));
        lblComputedTotal->setMinimumSize(QSize(200, 0));
        lblComputedTotal->setMaximumSize(QSize(200, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("KacstBook"));
        font.setPointSize(31);
        font.setBold(true);
        font.setWeight(75);
        lblComputedTotal->setFont(font);
        lblComputedTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(78, 154, 6);\n"
"margin-left:4px;\n"
"text-align:center;"));

        horizontalLayout_11->addWidget(lblComputedTotal);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(100, 20));
        label_9->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
""));

        horizontalLayout_7->addWidget(label_9);

        line_6 = new QFrame(centralwidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_7->addWidget(line_6);

        lblCustomerPhone = new QLabel(centralwidget);
        lblCustomerPhone->setObjectName(QStringLiteral("lblCustomerPhone"));
        lblCustomerPhone->setMinimumSize(QSize(250, 0));
        lblCustomerPhone->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
""));

        horizontalLayout_7->addWidget(lblCustomerPhone);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_12->addWidget(label_16);

        line_8 = new QFrame(centralwidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_12->addWidget(line_8);

        lblAvailableRewards = new QLabel(centralwidget);
        lblAvailableRewards->setObjectName(QStringLiteral("lblAvailableRewards"));
        lblAvailableRewards->setMinimumSize(QSize(250, 0));
        lblAvailableRewards->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_12->addWidget(lblAvailableRewards);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_6->addWidget(label_2);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(line_2);

        lblAvailableCredit = new QLabel(centralwidget);
        lblAvailableCredit->setObjectName(QStringLiteral("lblAvailableCredit"));
        lblAvailableCredit->setMinimumSize(QSize(250, 0));
        lblAvailableCredit->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_6->addWidget(lblAvailableCredit);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_8->addWidget(label_13);

        line_7 = new QFrame(centralwidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_8->addWidget(line_7);

        lblOutstandingDebt = new QLabel(centralwidget);
        lblOutstandingDebt->setObjectName(QStringLiteral("lblOutstandingDebt"));
        lblOutstandingDebt->setMinimumSize(QSize(250, 0));
        lblOutstandingDebt->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_8->addWidget(lblOutstandingDebt);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-invisible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));

        horizontalLayout_4->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_4->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_4);


        horizontalLayout_11->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);
        label_7->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_18->addWidget(label_7);

        line_13 = new QFrame(centralwidget);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);

        horizontalLayout_18->addWidget(line_13);

        lblSaleValue = new QLabel(centralwidget);
        lblSaleValue->setObjectName(QStringLiteral("lblSaleValue"));
        lblSaleValue->setMinimumSize(QSize(250, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Waree"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setWeight(75);
        lblSaleValue->setFont(font2);
        lblSaleValue->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding:4px;"));

        horizontalLayout_18->addWidget(lblSaleValue);


        verticalLayout_3->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);
        label_8->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_19->addWidget(label_8);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_19->addWidget(line_4);

        lblSaleTax = new QLabel(centralwidget);
        lblSaleTax->setObjectName(QStringLiteral("lblSaleTax"));
        lblSaleTax->setMinimumSize(QSize(250, 0));
        lblSaleTax->setFont(font2);
        lblSaleTax->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        horizontalLayout_19->addWidget(lblSaleTax);


        verticalLayout_3->addLayout(horizontalLayout_19);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setFont(font1);
        label_25->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_25->setAlignment(Qt::AlignCenter);

        horizontalLayout_20->addWidget(label_25);

        line_14 = new QFrame(centralwidget);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);

        horizontalLayout_20->addWidget(line_14);

        lblThisSaleTotal = new QLabel(centralwidget);
        lblThisSaleTotal->setObjectName(QStringLiteral("lblThisSaleTotal"));
        lblThisSaleTotal->setMinimumSize(QSize(250, 0));
        lblThisSaleTotal->setFont(font2);
        lblThisSaleTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(238, 238, 236);\n"
"padding: 4px;"));

        horizontalLayout_20->addWidget(lblThisSaleTotal);


        verticalLayout_3->addLayout(horizontalLayout_20);


        horizontalLayout_11->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);
        label_4->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(100, 20));
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_13->addWidget(label_18);

        line_9 = new QFrame(centralwidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);

        horizontalLayout_13->addWidget(line_9);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(250, 0));
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_13->addWidget(label_19);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_14->addWidget(label_20);

        line_10 = new QFrame(centralwidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::VLine);
        line_10->setFrameShadow(QFrame::Sunken);

        horizontalLayout_14->addWidget(line_10);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(250, 0));
        label_22->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));

        horizontalLayout_14->addWidget(label_22);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(250, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Waree"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_6->setFont(font3);
        label_6->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_15->addWidget(label_6);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(20, 20));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        horizontalLayout_16->addWidget(label_3);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setMinimumSize(QSize(250, 0));
        QFont font4;
        font4.setFamily(QStringLiteral("Waree"));
        font4.setBold(true);
        font4.setWeight(75);
        label_24->setFont(font4);
        label_24->setStyleSheet(QLatin1String("background-color: rgb(238, 238, 236);\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_16->addWidget(label_24);


        verticalLayout_2->addLayout(horizontalLayout_16);


        horizontalLayout_11->addLayout(verticalLayout_2);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        btnCompleteSales = new QPushButton(centralwidget);
        btnCompleteSales->setObjectName(QStringLiteral("btnCompleteSales"));
        btnCompleteSales->setMinimumSize(QSize(150, 0));
        btnCompleteSales->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-receipt-80.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSales->setIcon(icon1);
        btnCompleteSales->setIconSize(QSize(36, 36));

        verticalLayout_6->addWidget(btnCompleteSales);

        btnQueueSale = new QPushButton(centralwidget);
        btnQueueSale->setObjectName(QStringLiteral("btnQueueSale"));
        btnQueueSale->setStyleSheet(QLatin1String("background-color: rgb(233, 185, 110);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/new_icons_2/icons8-queue-90.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQueueSale->setIcon(icon2);
        btnQueueSale->setIconSize(QSize(24, 24));

        verticalLayout_6->addWidget(btnQueueSale);

        btnCancelSale = new QPushButton(centralwidget);
        btnCancelSale->setObjectName(QStringLiteral("btnCancelSale"));
        btnCancelSale->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale->setIcon(icon3);
        btnCancelSale->setIconSize(QSize(24, 24));

        verticalLayout_6->addWidget(btnCancelSale);


        horizontalLayout_11->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_11);


        horizontalLayout->addLayout(verticalLayout_8);

        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(250, 0));
        frame_2->setMaximumSize(QSize(250, 16777215));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
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

        gridLayout->addWidget(btnReduceQtyByOne, 0, 0, 1, 1);

        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_29->setFrameShape(QFrame::Panel);
        label_29->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_29, 0, 1, 1, 1);

        btnDeleteItem = new QPushButton(groupBox);
        btnDeleteItem->setObjectName(QStringLiteral("btnDeleteItem"));
        btnDeleteItem->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnDeleteItem->setIcon(icon3);
        btnDeleteItem->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnDeleteItem, 1, 0, 1, 1);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_30->setFrameShape(QFrame::Panel);
        label_30->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_30, 1, 1, 1, 1);

        btnIncreaseQty = new QPushButton(groupBox);
        btnIncreaseQty->setObjectName(QStringLiteral("btnIncreaseQty"));
        btnIncreaseQty->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/new_icons_2/icons8-plus-144.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnIncreaseQty->setIcon(icon5);
        btnIncreaseQty->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnIncreaseQty, 2, 0, 1, 1);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_31->setFrameShape(QFrame::Panel);
        label_31->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_31, 2, 1, 1, 1);

        btnViewItem = new QPushButton(groupBox);
        btnViewItem->setObjectName(QStringLiteral("btnViewItem"));
        btnViewItem->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewItem->setIcon(icon);
        btnViewItem->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewItem, 3, 0, 1, 1);

        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_32->setFrameShape(QFrame::Panel);
        label_32->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_32, 3, 1, 1, 1);

        btnViewStockStatus = new QPushButton(groupBox);
        btnViewStockStatus->setObjectName(QStringLiteral("btnViewStockStatus"));
        btnViewStockStatus->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/new_icons_2/icons8-plus-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnViewStockStatus->setIcon(icon6);
        btnViewStockStatus->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewStockStatus, 4, 0, 1, 1);

        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_33->setFrameShape(QFrame::Panel);
        label_33->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_33, 4, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        pushButton_12->setIcon(icon4);
        pushButton_12->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButton_12, 5, 0, 1, 1);

        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_34->setFrameShape(QFrame::Panel);
        label_34->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_34, 5, 1, 1, 1);

        btnReduceQtyByOne_2 = new QPushButton(groupBox);
        btnReduceQtyByOne_2->setObjectName(QStringLiteral("btnReduceQtyByOne_2"));
        btnReduceQtyByOne_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnReduceQtyByOne_2->setIcon(icon4);
        btnReduceQtyByOne_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnReduceQtyByOne_2, 6, 0, 1, 1);

        label_42 = new QLabel(groupBox);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_42->setFrameShape(QFrame::Panel);
        label_42->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_42, 6, 1, 1, 1);

        btnDeleteItem_2 = new QPushButton(groupBox);
        btnDeleteItem_2->setObjectName(QStringLiteral("btnDeleteItem_2"));
        btnDeleteItem_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnDeleteItem_2->setIcon(icon3);
        btnDeleteItem_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnDeleteItem_2, 7, 0, 1, 1);

        label_44 = new QLabel(groupBox);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_44->setFrameShape(QFrame::Panel);
        label_44->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_44, 7, 1, 1, 1);

        btnIncreaseQty_2 = new QPushButton(groupBox);
        btnIncreaseQty_2->setObjectName(QStringLiteral("btnIncreaseQty_2"));
        btnIncreaseQty_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnIncreaseQty_2->setIcon(icon5);
        btnIncreaseQty_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnIncreaseQty_2, 8, 0, 1, 1);

        label_47 = new QLabel(groupBox);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_47->setFrameShape(QFrame::Panel);
        label_47->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_47, 8, 1, 1, 1);

        btnViewItem_2 = new QPushButton(groupBox);
        btnViewItem_2->setObjectName(QStringLiteral("btnViewItem_2"));
        btnViewItem_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewItem_2->setIcon(icon);
        btnViewItem_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewItem_2, 9, 0, 1, 1);

        label_46 = new QLabel(groupBox);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_46->setFrameShape(QFrame::Panel);
        label_46->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_46, 9, 1, 1, 1);

        btnViewStockStatus_2 = new QPushButton(groupBox);
        btnViewStockStatus_2->setObjectName(QStringLiteral("btnViewStockStatus_2"));
        btnViewStockStatus_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewStockStatus_2->setIcon(icon6);
        btnViewStockStatus_2->setIconSize(QSize(24, 24));

        gridLayout->addWidget(btnViewStockStatus_2, 10, 0, 1, 1);

        label_45 = new QLabel(groupBox);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_45->setFrameShape(QFrame::Panel);
        label_45->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_45, 10, 1, 1, 1);

        pushButton_13 = new QPushButton(groupBox);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        pushButton_13->setIcon(icon4);
        pushButton_13->setIconSize(QSize(24, 24));

        gridLayout->addWidget(pushButton_13, 11, 0, 1, 1);

        label_38 = new QLabel(groupBox);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_38->setFrameShape(QFrame::Panel);
        label_38->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(label_38, 11, 1, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 1, 3);

        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(0, 200));

        gridLayout_3->addWidget(groupBox_2, 1, 0, 2, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 2, 1, 1, 1);

        btn_addNewCustomer_2 = new QPushButton(frame_2);
        btn_addNewCustomer_2->setObjectName(QStringLiteral("btn_addNewCustomer_2"));
        btn_addNewCustomer_2->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/icons/rss-button (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_addNewCustomer_2->setIcon(icon7);
        btn_addNewCustomer_2->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btn_addNewCustomer_2, 3, 0, 1, 2);

        btn_addNewCustomer_3 = new QPushButton(frame_2);
        btn_addNewCustomer_3->setObjectName(QStringLiteral("btn_addNewCustomer_3"));
        btn_addNewCustomer_3->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer_3->setIcon(icon7);
        btn_addNewCustomer_3->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btn_addNewCustomer_3, 4, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 178, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 5, 2, 1, 1);

        btn_addNewCustomer_4 = new QPushButton(frame_2);
        btn_addNewCustomer_4->setObjectName(QStringLiteral("btn_addNewCustomer_4"));
        btn_addNewCustomer_4->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer_4->setIcon(icon7);
        btn_addNewCustomer_4->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btn_addNewCustomer_4, 6, 0, 1, 3);

        btn_addNewCustomer_5 = new QPushButton(frame_2);
        btn_addNewCustomer_5->setObjectName(QStringLiteral("btn_addNewCustomer_5"));
        btn_addNewCustomer_5->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer_5->setIcon(icon7);
        btn_addNewCustomer_5->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btn_addNewCustomer_5, 7, 0, 1, 3);

        btn_addNewCustomer = new QPushButton(frame_2);
        btn_addNewCustomer->setObjectName(QStringLiteral("btn_addNewCustomer"));
        btn_addNewCustomer->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_addNewCustomer->setIcon(icon7);
        btn_addNewCustomer->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btn_addNewCustomer, 8, 0, 1, 3);

        btn_viewCustomers = new QPushButton(frame_2);
        btn_viewCustomers->setObjectName(QStringLiteral("btn_viewCustomers"));
        btn_viewCustomers->setStyleSheet(QLatin1String("text-align:left;\n"
"padding: 4px;\n"
""));
        btn_viewCustomers->setIcon(icon7);
        btn_viewCustomers->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btn_viewCustomers, 9, 0, 1, 3);


        horizontalLayout->addWidget(frame_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        SalesClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SalesClient);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1816, 20));
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
        menuSales->addAction(actionStock);
        menuSettings->addSeparator();
        menuSettings->addSeparator();
        menuSettings->addAction(actionOne_2);
        menuSettings->addAction(actionTwo_2);

        retranslateUi(SalesClient);

        QMetaObject::connectSlotsByName(SalesClient);
    } // setupUi

    void retranslateUi(QMainWindow *SalesClient)
    {
        SalesClient->setWindowTitle(QApplication::translate("SalesClient", "MainWindow", Q_NULLPTR));
        actionOne->setText(QApplication::translate("SalesClient", "One", Q_NULLPTR));
        actionTwo->setText(QApplication::translate("SalesClient", "Two", Q_NULLPTR));
        actionStock->setText(QApplication::translate("SalesClient", "Stock", Q_NULLPTR));
        actionOne_2->setText(QApplication::translate("SalesClient", "One", Q_NULLPTR));
        actionTwo_2->setText(QApplication::translate("SalesClient", "Two", Q_NULLPTR));
        label_40->setText(QString());
        label_41->setText(QApplication::translate("SalesClient", "Date:", Q_NULLPTR));
        lblDate->setText(QString());
        label_43->setText(QApplication::translate("SalesClient", "Time:", Q_NULLPTR));
        lblTime->setText(QString());
        lblUserAvatar->setText(QString());
        lblUserName->setText(QString());
        btnExitClient->setText(QApplication::translate("SalesClient", "Exit Client", Q_NULLPTR));
        btnLogout->setText(QApplication::translate("SalesClient", "Log Out", Q_NULLPTR));
        label_21->setText(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("SalesClient", "Select Sale Type", Q_NULLPTR)
         << QApplication::translate("SalesClient", "Retail", Q_NULLPTR)
         << QApplication::translate("SalesClient", "Wholesale", Q_NULLPTR)
        );
        label_35->setText(QApplication::translate("SalesClient", "Enter Client Phone:", Q_NULLPTR));
        checkBoxApplyRewards->setText(QApplication::translate("SalesClient", "Enable Rewards Payment", Q_NULLPTR));
        checkBoxEnableDiscount->setText(QApplication::translate("SalesClient", "Enable Discount", Q_NULLPTR));
        checkBoxEnableRewards->setText(QApplication::translate("SalesClient", "Enable Rewards", Q_NULLPTR));
        label_10->setText(QString());
        label_28->setText(QApplication::translate("SalesClient", "#", Q_NULLPTR));
        label_12->setText(QApplication::translate("SalesClient", "Search Product:", Q_NULLPTR));
        label_15->setText(QString());
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
        lblComputedTotal->setText(QApplication::translate("SalesClient", " 00.00", Q_NULLPTR));
        label->setText(QApplication::translate("SalesClient", "Customer/ Agent Details", Q_NULLPTR));
        label_9->setText(QApplication::translate("SalesClient", "Customer Phone:", Q_NULLPTR));
        lblCustomerPhone->setText(QString());
        label_16->setText(QApplication::translate("SalesClient", "Customer Rewards:", Q_NULLPTR));
        lblAvailableRewards->setText(QString());
        label_2->setText(QApplication::translate("SalesClient", "Available Credit:", Q_NULLPTR));
        lblAvailableCredit->setText(QString());
        label_13->setText(QApplication::translate("SalesClient", "Outstanding Debt:", Q_NULLPTR));
        lblOutstandingDebt->setText(QString());
        pushButton->setText(QApplication::translate("SalesClient", "View This Customer", Q_NULLPTR));
        checkBox->setText(QApplication::translate("SalesClient", "Authorize rewards Payment", Q_NULLPTR));
        label_7->setText(QApplication::translate("SalesClient", "Sale Value:", Q_NULLPTR));
        lblSaleValue->setText(QApplication::translate("SalesClient", "00.00", Q_NULLPTR));
        label_8->setText(QApplication::translate("SalesClient", "Sale Tax(16%):", Q_NULLPTR));
        lblSaleTax->setText(QApplication::translate("SalesClient", "00.00", Q_NULLPTR));
        label_25->setText(QApplication::translate("SalesClient", "Sale Total:", Q_NULLPTR));
        lblThisSaleTotal->setText(QApplication::translate("SalesClient", "00.00", Q_NULLPTR));
        label_4->setText(QApplication::translate("SalesClient", "This Sale Data/ Discount", Q_NULLPTR));
        label_18->setText(QApplication::translate("SalesClient", "Possible Reward:", Q_NULLPTR));
        label_19->setText(QString());
        label_20->setText(QApplication::translate("SalesClient", "Possible Discount:", Q_NULLPTR));
        label_22->setText(QString());
        label_6->setText(QApplication::translate("SalesClient", "VIAD TECHNOLOGIES POINT OF SALE", Q_NULLPTR));
        label_3->setText(QString());
        label_24->setText(QApplication::translate("SalesClient", "Redefinig Technology", Q_NULLPTR));
        btnCompleteSales->setText(QApplication::translate("SalesClient", "Apply", Q_NULLPTR));
        btnQueueSale->setText(QApplication::translate("SalesClient", "Queue", Q_NULLPTR));
        btnCancelSale->setText(QApplication::translate("SalesClient", "Cancel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SalesClient", "Product Details", Q_NULLPTR));
        btnReduceQtyByOne->setText(QApplication::translate("SalesClient", "Reduce Qty by One", Q_NULLPTR));
        label_29->setText(QApplication::translate("SalesClient", "[F2]", Q_NULLPTR));
        btnDeleteItem->setText(QApplication::translate("SalesClient", "Delete Item from Cart", Q_NULLPTR));
        label_30->setText(QApplication::translate("SalesClient", "[Del]", Q_NULLPTR));
        btnIncreaseQty->setText(QApplication::translate("SalesClient", "Increase QTY by One", Q_NULLPTR));
        label_31->setText(QApplication::translate("SalesClient", "[F3]", Q_NULLPTR));
        btnViewItem->setText(QApplication::translate("SalesClient", "View Item Details", Q_NULLPTR));
        label_32->setText(QApplication::translate("SalesClient", "[F4]", Q_NULLPTR));
        btnViewStockStatus->setText(QApplication::translate("SalesClient", "View Stock Status", Q_NULLPTR));
        label_33->setText(QApplication::translate("SalesClient", "[F5]", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("SalesClient", "Complete Sales", Q_NULLPTR));
        label_34->setText(QApplication::translate("SalesClient", "[F6]", Q_NULLPTR));
        btnReduceQtyByOne_2->setText(QApplication::translate("SalesClient", "Reduce Qty by One", Q_NULLPTR));
        label_42->setText(QApplication::translate("SalesClient", "[F2]", Q_NULLPTR));
        btnDeleteItem_2->setText(QApplication::translate("SalesClient", "Delete Item from Cart", Q_NULLPTR));
        label_44->setText(QApplication::translate("SalesClient", "[Del]", Q_NULLPTR));
        btnIncreaseQty_2->setText(QApplication::translate("SalesClient", "Increase QTY by One", Q_NULLPTR));
        label_47->setText(QApplication::translate("SalesClient", "[F3]", Q_NULLPTR));
        btnViewItem_2->setText(QApplication::translate("SalesClient", "View Item Details", Q_NULLPTR));
        label_46->setText(QApplication::translate("SalesClient", "[F4]", Q_NULLPTR));
        btnViewStockStatus_2->setText(QApplication::translate("SalesClient", "View Stock Status", Q_NULLPTR));
        label_45->setText(QApplication::translate("SalesClient", "[F5]", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("SalesClient", "Complete Sales", Q_NULLPTR));
        label_38->setText(QApplication::translate("SalesClient", "[F6]", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SalesClient", "My Queues", Q_NULLPTR));
        btn_addNewCustomer_2->setText(QApplication::translate("SalesClient", "Add Order", Q_NULLPTR));
        btn_addNewCustomer_3->setText(QApplication::translate("SalesClient", "Process Order", Q_NULLPTR));
        btn_addNewCustomer_4->setText(QApplication::translate("SalesClient", "Add New Customer", Q_NULLPTR));
        btn_addNewCustomer_5->setText(QApplication::translate("SalesClient", "Add New Customer", Q_NULLPTR));
        btn_addNewCustomer->setText(QApplication::translate("SalesClient", "Add New Customer", Q_NULLPTR));
        btn_viewCustomers->setText(QApplication::translate("SalesClient", "View Customers", Q_NULLPTR));
        menuHome->setTitle(QApplication::translate("SalesClient", "Home", Q_NULLPTR));
        menuSales->setTitle(QApplication::translate("SalesClient", "Sales", Q_NULLPTR));
        menuCustomers->setTitle(QApplication::translate("SalesClient", "Customers", Q_NULLPTR));
        menuAgents->setTitle(QApplication::translate("SalesClient", "Agents", Q_NULLPTR));
        menuControl->setTitle(QApplication::translate("SalesClient", "Control", Q_NULLPTR));
        menuSettings->setTitle(QApplication::translate("SalesClient", "Settings", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("SalesClient", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SalesClient: public Ui_SalesClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESCLIENT_H
