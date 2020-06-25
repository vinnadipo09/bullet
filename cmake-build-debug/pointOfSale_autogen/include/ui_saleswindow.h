/********************************************************************************
** Form generated from reading UI file 'saleswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESWINDOW_H
#define UI_SALESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_SalesWindow
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_12;
    QLineEdit *le_SearchProduct;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_24;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton_6;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_28;
    QLineEdit *le_barcodeEntry;
    QSpacerItem *horizontalSpacer_12;
    QTableWidget *tableWidget;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblComputedTotal;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_19;
    QLineEdit *lineEdit_8;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_20;
    QLineEdit *lineEdit_9;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label_25;
    QLineEdit *lineEdit_11;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_18;
    QLineEdit *lineEdit_7;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_13;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_26;
    QLineEdit *lineEdit_12;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_16;
    QLineEdit *lineEdit_5;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_14;
    QLineEdit *lineEdit_3;
    QSpacerItem *horizontalSpacer_10;
    QLabel *label_27;
    QLineEdit *lineEdit_13;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnCompleteSales;
    QPushButton *btnQueueSale;
    QPushButton *btnCancelSale;
    QFrame *frame_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
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
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QGroupBox *groupBox_4;
    QLabel *label_10;

    void setupUi(QDialog *SalesWindow)
    {
        if (SalesWindow->objectName().isEmpty())
            SalesWindow->setObjectName(QStringLiteral("SalesWindow"));
        SalesWindow->resize(1650, 968);
        SalesWindow->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(SalesWindow);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        frame = new QFrame(SalesWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(64, 64));
        label_6->setMaximumSize(QSize(64, 64));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_6->setFrameShape(QFrame::Panel);
        label_6->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(121, 0));
        label_7->setMaximumSize(QSize(121, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("KacstTitleL"));
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        label_7->setFont(font);
        label_7->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
"text-align:center;"));
        label_7->setFrameShape(QFrame::Panel);
        label_7->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_7);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(10, 16777215));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(60, 0));
        label->setMaximumSize(QSize(60, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("KacstTitleL"));
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 16777215));
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label_2->setFrameShape(QFrame::Panel);
        label_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(10, 16777215));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_5);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_22 = new QLabel(frame);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setMinimumSize(QSize(60, 0));
        label_22->setMaximumSize(QSize(60, 16777215));
        label_22->setFont(font1);
        label_22->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label_22->setFrameShape(QFrame::Panel);
        label_22->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(label_22);

        label_23 = new QLabel(frame);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setMaximumSize(QSize(60, 16777215));
        label_23->setFont(font1);
        label_23->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label_23->setFrameShape(QFrame::Panel);
        label_23->setFrameShadow(QFrame::Sunken);

        verticalLayout_5->addWidget(label_23);


        horizontalLayout->addLayout(verticalLayout_5);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QStringLiteral("KacstDigital"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        label_4->setFrameShape(QFrame::Panel);
        label_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(label_4);

        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFrameShape(QFrame::Panel);
        label_8->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_8);

        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFrameShape(QFrame::Panel);
        label_9->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(label_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(100, 0));
        pushButton->setMaximumSize(QSize(100, 16777215));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/icons8-macbook-money-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/icons8-logout-rounded-left-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(24, 24));

        verticalLayout->addWidget(pushButton_2);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout_3->addWidget(frame);

        label_11 = new QLabel(SalesWindow);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_11->setFrameShape(QFrame::Panel);
        label_11->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_11);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_12 = new QLabel(SalesWindow);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_12->setFrameShape(QFrame::Panel);
        label_12->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(label_12);

        le_SearchProduct = new QLineEdit(SalesWindow);
        le_SearchProduct->setObjectName(QStringLiteral("le_SearchProduct"));
        le_SearchProduct->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(le_SearchProduct);

        pushButton_3 = new QPushButton(SalesWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/new_icons_2/icons8-plus-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        label_24 = new QLabel(SalesWindow);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_24->setFrameShape(QFrame::Panel);
        label_24->setFrameShadow(QFrame::Raised);

        horizontalLayout_2->addWidget(label_24);

        lineEdit_10 = new QLineEdit(SalesWindow);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setMaximumSize(QSize(300, 16777215));

        horizontalLayout_2->addWidget(lineEdit_10);

        pushButton_6 = new QPushButton(SalesWindow);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/new_icons_2/icons8-invisible-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setIconSize(QSize(24, 24));

        horizontalLayout_2->addWidget(pushButton_6);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_5 = new QPushButton(SalesWindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        horizontalLayout_2->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(SalesWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        label_21 = new QLabel(SalesWindow);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_21->setFrameShape(QFrame::Panel);
        label_21->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_21);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_28 = new QLabel(SalesWindow);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setMaximumSize(QSize(40, 40));
        label_28->setStyleSheet(QStringLiteral("background-color: rgb(193, 125, 17);"));
        label_28->setFrameShape(QFrame::Panel);
        label_28->setFrameShadow(QFrame::Raised);

        horizontalLayout_8->addWidget(label_28);

        le_barcodeEntry = new QLineEdit(SalesWindow);
        le_barcodeEntry->setObjectName(QStringLiteral("le_barcodeEntry"));
        le_barcodeEntry->setMaximumSize(QSize(200, 16777215));

        horizontalLayout_8->addWidget(le_barcodeEntry);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_12);


        verticalLayout_7->addLayout(horizontalLayout_8);

        tableWidget = new QTableWidget(SalesWindow);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setStyleSheet(QStringLiteral("background-color: rgb(211, 215, 207);"));

        verticalLayout_7->addWidget(tableWidget);

        label_15 = new QLabel(SalesWindow);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_15->setFrameShape(QFrame::Panel);
        label_15->setFrameShadow(QFrame::Raised);

        verticalLayout_7->addWidget(label_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lblComputedTotal = new QLabel(SalesWindow);
        lblComputedTotal->setObjectName(QStringLiteral("lblComputedTotal"));
        lblComputedTotal->setMinimumSize(QSize(200, 0));
        lblComputedTotal->setMaximumSize(QSize(200, 16777215));
        QFont font3;
        font3.setFamily(QStringLiteral("KacstBook"));
        font3.setPointSize(31);
        font3.setBold(true);
        font3.setWeight(75);
        lblComputedTotal->setFont(font3);
        lblComputedTotal->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"color: rgb(78, 154, 6);\n"
"margin-left:4px;\n"
"text-align:center;"));

        horizontalLayout_7->addWidget(lblComputedTotal);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_19 = new QLabel(SalesWindow);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setMinimumSize(QSize(120, 0));
        label_19->setMaximumSize(QSize(120, 16777215));
        label_19->setFont(font1);
        label_19->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_19->setFrameShape(QFrame::Panel);
        label_19->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_19);

        lineEdit_8 = new QLineEdit(SalesWindow);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(150, 0));
        lineEdit_8->setMaximumSize(QSize(150, 16777215));
        lineEdit_8->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_4->addWidget(lineEdit_8);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        label_20 = new QLabel(SalesWindow);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setMinimumSize(QSize(100, 0));
        label_20->setMaximumSize(QSize(100, 16777215));
        label_20->setFont(font1);
        label_20->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_20->setFrameShape(QFrame::Panel);
        label_20->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_20);

        lineEdit_9 = new QLineEdit(SalesWindow);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(150, 0));
        lineEdit_9->setMaximumSize(QSize(150, 16777215));
        lineEdit_9->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_4->addWidget(lineEdit_9);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);

        label_25 = new QLabel(SalesWindow);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setMinimumSize(QSize(100, 0));
        label_25->setMaximumSize(QSize(100, 16777215));
        label_25->setFont(font1);
        label_25->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_25->setFrameShape(QFrame::Panel);
        label_25->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(label_25);

        lineEdit_11 = new QLineEdit(SalesWindow);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(150, 0));
        lineEdit_11->setMaximumSize(QSize(150, 16777215));
        lineEdit_11->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_4->addWidget(lineEdit_11);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_18 = new QLabel(SalesWindow);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(120, 0));
        label_18->setMaximumSize(QSize(120, 16777215));
        label_18->setFont(font1);
        label_18->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_18->setFrameShape(QFrame::Panel);
        label_18->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_18);

        lineEdit_7 = new QLineEdit(SalesWindow);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(150, 0));
        lineEdit_7->setMaximumSize(QSize(150, 16777215));
        lineEdit_7->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_5->addWidget(lineEdit_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        label_13 = new QLabel(SalesWindow);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(100, 0));
        label_13->setMaximumSize(QSize(100, 16777215));
        label_13->setFont(font1);
        label_13->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_13->setFrameShape(QFrame::Panel);
        label_13->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_13);

        lineEdit_2 = new QLineEdit(SalesWindow);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(150, 0));
        lineEdit_2->setMaximumSize(QSize(150, 16777215));
        lineEdit_2->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_5->addWidget(lineEdit_2);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label_26 = new QLabel(SalesWindow);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setMinimumSize(QSize(100, 0));
        label_26->setMaximumSize(QSize(100, 16777215));
        label_26->setFont(font1);
        label_26->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_26->setFrameShape(QFrame::Panel);
        label_26->setFrameShadow(QFrame::Raised);

        horizontalLayout_5->addWidget(label_26);

        lineEdit_12 = new QLineEdit(SalesWindow);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setMinimumSize(QSize(150, 0));
        lineEdit_12->setMaximumSize(QSize(150, 16777215));
        lineEdit_12->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_5->addWidget(lineEdit_12);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_16 = new QLabel(SalesWindow);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(120, 0));
        label_16->setMaximumSize(QSize(120, 16777215));
        label_16->setFont(font1);
        label_16->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_16->setFrameShape(QFrame::Panel);
        label_16->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_16);

        lineEdit_5 = new QLineEdit(SalesWindow);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(150, 0));
        lineEdit_5->setMaximumSize(QSize(150, 16777215));
        lineEdit_5->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_6->addWidget(lineEdit_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        label_14 = new QLabel(SalesWindow);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(100, 0));
        label_14->setMaximumSize(QSize(100, 16777215));
        label_14->setFont(font1);
        label_14->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_14->setFrameShape(QFrame::Panel);
        label_14->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_14);

        lineEdit_3 = new QLineEdit(SalesWindow);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(150, 0));
        lineEdit_3->setMaximumSize(QSize(150, 16777215));
        lineEdit_3->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_6->addWidget(lineEdit_3);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        label_27 = new QLabel(SalesWindow);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setMinimumSize(QSize(100, 0));
        label_27->setMaximumSize(QSize(100, 16777215));
        label_27->setFont(font1);
        label_27->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        label_27->setFrameShape(QFrame::Panel);
        label_27->setFrameShadow(QFrame::Raised);

        horizontalLayout_6->addWidget(label_27);

        lineEdit_13 = new QLineEdit(SalesWindow);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setMinimumSize(QSize(150, 0));
        lineEdit_13->setMaximumSize(QSize(150, 16777215));
        lineEdit_13->setStyleSheet(QLatin1String("border-radius:4px;\n"
"background-color: rgb(138, 226, 52);"));

        horizontalLayout_6->addWidget(lineEdit_13);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_11);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        btnCompleteSales = new QPushButton(SalesWindow);
        btnCompleteSales->setObjectName(QStringLiteral("btnCompleteSales"));
        btnCompleteSales->setMinimumSize(QSize(150, 0));
        btnCompleteSales->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/new_icons_2/icons8-ok-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCompleteSales->setIcon(icon4);
        btnCompleteSales->setIconSize(QSize(36, 36));

        verticalLayout_6->addWidget(btnCompleteSales);

        btnQueueSale = new QPushButton(SalesWindow);
        btnQueueSale->setObjectName(QStringLiteral("btnQueueSale"));
        btnQueueSale->setStyleSheet(QLatin1String("background-color: rgb(233, 185, 110);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/resources/new_icons_2/icons8-queue-90.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnQueueSale->setIcon(icon5);
        btnQueueSale->setIconSize(QSize(24, 24));

        verticalLayout_6->addWidget(btnQueueSale);

        btnCancelSale = new QPushButton(SalesWindow);
        btnCancelSale->setObjectName(QStringLiteral("btnCancelSale"));
        btnCancelSale->setStyleSheet(QLatin1String("background-color: rgb(239, 41, 41);\n"
"color: rgb(0, 0, 0);"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelSale->setIcon(icon6);
        btnCancelSale->setIconSize(QSize(24, 24));

        verticalLayout_6->addWidget(btnCancelSale);


        horizontalLayout_7->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_7);


        horizontalLayout_3->addLayout(verticalLayout_7);

        frame_2 = new QFrame(SalesWindow);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMinimumSize(QSize(250, 0));
        frame_2->setMaximumSize(QSize(250, 16777215));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 231, 252));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        btnReduceQtyByOne = new QPushButton(groupBox);
        btnReduceQtyByOne->setObjectName(QStringLiteral("btnReduceQtyByOne"));
        btnReduceQtyByOne->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/resources/new_icons_2/icons8-minus-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnReduceQtyByOne->setIcon(icon7);
        btnReduceQtyByOne->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btnReduceQtyByOne, 0, 0, 1, 1);

        label_29 = new QLabel(groupBox);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_29->setFrameShape(QFrame::Panel);
        label_29->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(label_29, 0, 1, 1, 1);

        btnDeleteItem = new QPushButton(groupBox);
        btnDeleteItem->setObjectName(QStringLiteral("btnDeleteItem"));
        btnDeleteItem->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnDeleteItem->setIcon(icon6);
        btnDeleteItem->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btnDeleteItem, 1, 0, 1, 1);

        label_30 = new QLabel(groupBox);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_30->setFrameShape(QFrame::Panel);
        label_30->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(label_30, 1, 1, 1, 1);

        btnIncreaseQty = new QPushButton(groupBox);
        btnIncreaseQty->setObjectName(QStringLiteral("btnIncreaseQty"));
        btnIncreaseQty->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/resources/new_icons_2/icons8-plus-144.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnIncreaseQty->setIcon(icon8);
        btnIncreaseQty->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btnIncreaseQty, 2, 0, 1, 1);

        label_31 = new QLabel(groupBox);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_31->setFrameShape(QFrame::Panel);
        label_31->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(label_31, 2, 1, 1, 1);

        btnViewItem = new QPushButton(groupBox);
        btnViewItem->setObjectName(QStringLiteral("btnViewItem"));
        btnViewItem->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewItem->setIcon(icon3);
        btnViewItem->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btnViewItem, 3, 0, 1, 1);

        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_32->setFrameShape(QFrame::Panel);
        label_32->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(label_32, 3, 1, 1, 1);

        btnViewStockStatus = new QPushButton(groupBox);
        btnViewStockStatus->setObjectName(QStringLiteral("btnViewStockStatus"));
        btnViewStockStatus->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        btnViewStockStatus->setIcon(icon2);
        btnViewStockStatus->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(btnViewStockStatus, 4, 0, 1, 1);

        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_33->setFrameShape(QFrame::Panel);
        label_33->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(label_33, 4, 1, 1, 1);

        pushButton_12 = new QPushButton(groupBox);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setStyleSheet(QLatin1String("text-align:left;\n"
"padding-left:2px;\n"
"padding: 1.5px;\n"
"background-color: rgb(186, 189, 182);"));
        pushButton_12->setIcon(icon7);
        pushButton_12->setIconSize(QSize(24, 24));

        gridLayout_3->addWidget(pushButton_12, 5, 0, 1, 1);

        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setStyleSheet(QLatin1String("background-color: rgb(78, 154, 6);\n"
"color: rgb(0, 0, 0);\n"
"padding:4px;"));
        label_34->setFrameShape(QFrame::Panel);
        label_34->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(label_34, 5, 1, 1, 1);

        groupBox_2 = new QGroupBox(frame_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 260, 231, 161));
        groupBox_2->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        groupBox_3 = new QGroupBox(frame_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 430, 231, 201));
        groupBox_3->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        groupBox_4 = new QGroupBox(frame_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 640, 231, 201));
        groupBox_4->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));

        horizontalLayout_3->addWidget(frame_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        label_10 = new QLabel(SalesWindow);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        label_10->setFrameShape(QFrame::Panel);
        label_10->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(label_10);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(SalesWindow);

        QMetaObject::connectSlotsByName(SalesWindow);
    } // setupUi

    void retranslateUi(QDialog *SalesWindow)
    {
        SalesWindow->setWindowTitle(QApplication::translate("SalesWindow", "Dialog", Q_NULLPTR));
        label_6->setText(QString());
        label_7->setText(QApplication::translate("SalesWindow", "ViAD POS", Q_NULLPTR));
        label_3->setText(QString());
        label->setText(QApplication::translate("SalesWindow", "Date:", Q_NULLPTR));
        label_2->setText(QApplication::translate("SalesWindow", "Time:", Q_NULLPTR));
        label_5->setText(QString());
        label_22->setText(QApplication::translate("SalesWindow", "Date:", Q_NULLPTR));
        label_23->setText(QApplication::translate("SalesWindow", "Time:", Q_NULLPTR));
        label_4->setText(QApplication::translate("SalesWindow", "Customer/Agent ID:", Q_NULLPTR));
        label_8->setText(QString());
        label_9->setText(QString());
        pushButton->setText(QApplication::translate("SalesWindow", "Exit Sales", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("SalesWindow", "Logout", Q_NULLPTR));
        label_11->setText(QString());
        label_12->setText(QApplication::translate("SalesWindow", "Search Product:", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("SalesWindow", "Add", Q_NULLPTR));
        label_24->setText(QApplication::translate("SalesWindow", "Customer/Agent:", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("SalesWindow", "Find", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("SalesWindow", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("SalesWindow", "PushButton", Q_NULLPTR));
        label_21->setText(QString());
        label_28->setText(QApplication::translate("SalesWindow", "#", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SalesWindow", "Stock ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SalesWindow", "Description", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SalesWindow", "Prod Qty", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SalesWindow", "Discount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SalesWindow", "Points", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SalesWindow", "Unit Price", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("SalesWindow", "Qty", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("SalesWindow", "Sub Total", Q_NULLPTR));
        label_15->setText(QString());
        lblComputedTotal->setText(QApplication::translate("SalesWindow", " 00.00", Q_NULLPTR));
        label_19->setText(QApplication::translate("SalesWindow", "Total Points:", Q_NULLPTR));
        label_20->setText(QApplication::translate("SalesWindow", "Total:", Q_NULLPTR));
        lineEdit_9->setText(QString());
        label_25->setText(QApplication::translate("SalesWindow", "Method", Q_NULLPTR));
        lineEdit_11->setText(QString());
        label_18->setText(QApplication::translate("SalesWindow", "Promotion:", Q_NULLPTR));
        label_13->setText(QApplication::translate("SalesWindow", "Discount", Q_NULLPTR));
        label_26->setText(QApplication::translate("SalesWindow", "Amount", Q_NULLPTR));
        lineEdit_12->setText(QString());
        label_16->setText(QApplication::translate("SalesWindow", "Discount:", Q_NULLPTR));
        label_14->setText(QApplication::translate("SalesWindow", "Sub Total", Q_NULLPTR));
        label_27->setText(QApplication::translate("SalesWindow", "Balance", Q_NULLPTR));
        lineEdit_13->setText(QString());
        btnCompleteSales->setText(QApplication::translate("SalesWindow", "Apply", Q_NULLPTR));
        btnQueueSale->setText(QApplication::translate("SalesWindow", "Queue", Q_NULLPTR));
        btnCancelSale->setText(QApplication::translate("SalesWindow", "Cancel", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("SalesWindow", "Product Details", Q_NULLPTR));
        btnReduceQtyByOne->setText(QApplication::translate("SalesWindow", "Reduce QTY", Q_NULLPTR));
        label_29->setText(QApplication::translate("SalesWindow", "[F2]", Q_NULLPTR));
        btnDeleteItem->setText(QApplication::translate("SalesWindow", "Delete Item", Q_NULLPTR));
        label_30->setText(QApplication::translate("SalesWindow", "[Del]", Q_NULLPTR));
        btnIncreaseQty->setText(QApplication::translate("SalesWindow", "Increase QTY", Q_NULLPTR));
        label_31->setText(QApplication::translate("SalesWindow", "[F3]", Q_NULLPTR));
        btnViewItem->setText(QApplication::translate("SalesWindow", "View Item", Q_NULLPTR));
        label_32->setText(QApplication::translate("SalesWindow", "[F4]", Q_NULLPTR));
        btnViewStockStatus->setText(QApplication::translate("SalesWindow", "Stock Status", Q_NULLPTR));
        label_33->setText(QApplication::translate("SalesWindow", "[F5]", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("SalesWindow", "Reduce QTY", Q_NULLPTR));
        label_34->setText(QApplication::translate("SalesWindow", "[F6]", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("SalesWindow", "Billing Details", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("SalesWindow", "Customer Details", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("SalesWindow", "Queues", Q_NULLPTR));
        label_10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SalesWindow: public Ui_SalesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESWINDOW_H
