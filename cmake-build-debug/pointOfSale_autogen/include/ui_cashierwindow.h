/********************************************************************************
** Form generated from reading UI file 'cashierwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CASHIERWINDOW_H
#define UI_CASHIERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CashierWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_13;
    QFrame *frame_2;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_dashboard;
    QPushButton *pushButton_users;
    QPushButton *pushButton_8;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_12;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QPushButton *pushButton_6;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_viewProfile;
    QPushButton *pb_logout_cashier;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page_dashboard;
    QLabel *label_2;
    QWidget *page_users;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame_3;
    QPushButton *pushButton_addNewUser;
    QPushButton *btn_loadUsers;
    QLabel *label_3;
    QFrame *frame_4;
    QLabel *label_5;
    QTableWidget *tableWidgetCashiers;
    QFrame *frame_5;
    QLabel *label_6;
    QTableWidget *tableWidgetSupervisors;
    QFrame *frame_6;
    QLabel *label_7;
    QTableWidget *tableWidgetAdministrators;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CashierWindow)
    {
        if (CashierWindow->objectName().isEmpty())
            CashierWindow->setObjectName(QStringLiteral("CashierWindow"));
        CashierWindow->resize(2919, 944);
        centralwidget = new QWidget(CashierWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_13 = new QPushButton(centralwidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(pushButton_13);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setStyleSheet(QStringLiteral("background-color: rgb(78, 154, 6);"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(580, 4, 111, 16));
        label_8->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(frame_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(200, 0));
        frame->setMaximumSize(QSize(200, 16777215));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(50, 150));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/man.png);"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton_dashboard = new QPushButton(frame);
        pushButton_dashboard->setObjectName(QStringLiteral("pushButton_dashboard"));

        verticalLayout_2->addWidget(pushButton_dashboard);

        pushButton_users = new QPushButton(frame);
        pushButton_users->setObjectName(QStringLiteral("pushButton_users"));

        verticalLayout_2->addWidget(pushButton_users);

        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_12 = new QPushButton(frame);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        verticalLayout_2->addWidget(pushButton_12);

        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_10 = new QPushButton(frame);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_11 = new QPushButton(frame);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        verticalLayout_2->addWidget(pushButton_11);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        btn_viewProfile = new QPushButton(frame);
        btn_viewProfile->setObjectName(QStringLiteral("btn_viewProfile"));

        verticalLayout_2->addWidget(btn_viewProfile);

        pb_logout_cashier = new QPushButton(frame);
        pb_logout_cashier->setObjectName(QStringLiteral("pb_logout_cashier"));

        verticalLayout_2->addWidget(pb_logout_cashier);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);


        verticalLayout->addWidget(frame);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setStyleSheet(QStringLiteral(""));
        page_dashboard = new QWidget();
        page_dashboard->setObjectName(QStringLiteral("page_dashboard"));
        label_2 = new QLabel(page_dashboard);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(220, 150, 401, 291));
        QFont font;
        font.setPointSize(21);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(138, 226, 52);"));
        stackedWidget->addWidget(page_dashboard);
        page_users = new QWidget();
        page_users->setObjectName(QStringLiteral("page_users"));
        gridLayout = new QGridLayout(page_users);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        frame_3 = new QFrame(page_users);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setMinimumSize(QSize(0, 30));
        frame_3->setMaximumSize(QSize(16777215, 30));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        pushButton_addNewUser = new QPushButton(frame_3);
        pushButton_addNewUser->setObjectName(QStringLiteral("pushButton_addNewUser"));
        pushButton_addNewUser->setGeometry(QRect(10, 4, 80, 23));
        btn_loadUsers = new QPushButton(frame_3);
        btn_loadUsers->setObjectName(QStringLiteral("btn_loadUsers"));
        btn_loadUsers->setGeometry(QRect(100, 4, 80, 23));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(210, 7, 401, 16));
        QFont font1;
        font1.setPointSize(13);
        label_3->setFont(font1);

        verticalLayout_5->addWidget(frame_3);

        frame_4 = new QFrame(page_users);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setMinimumSize(QSize(0, 30));
        frame_4->setMaximumSize(QSize(16777215, 30));
        frame_4->setStyleSheet(QStringLiteral("background-color: rgb(52, 101, 164);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(420, 10, 71, 16));
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(frame_4);

        tableWidgetCashiers = new QTableWidget(page_users);
        if (tableWidgetCashiers->columnCount() < 9)
            tableWidgetCashiers->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetCashiers->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidgetCashiers->setObjectName(QStringLiteral("tableWidgetCashiers"));
        tableWidgetCashiers->setMaximumSize(QSize(16777215, 300));

        verticalLayout_5->addWidget(tableWidgetCashiers);

        frame_5 = new QFrame(page_users);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(0, 30));
        frame_5->setMaximumSize(QSize(16777215, 30));
        frame_5->setStyleSheet(QStringLiteral("background-color: rgb(52, 101, 164);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_5);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(420, 10, 81, 16));
        label_6->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(frame_5);

        tableWidgetSupervisors = new QTableWidget(page_users);
        if (tableWidgetSupervisors->columnCount() < 10)
            tableWidgetSupervisors->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(6, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(7, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(8, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidgetSupervisors->setHorizontalHeaderItem(9, __qtablewidgetitem18);
        tableWidgetSupervisors->setObjectName(QStringLiteral("tableWidgetSupervisors"));
        tableWidgetSupervisors->setMaximumSize(QSize(16777215, 300));

        verticalLayout_5->addWidget(tableWidgetSupervisors);

        frame_6 = new QFrame(page_users);
        frame_6->setObjectName(QStringLiteral("frame_6"));
        frame_6->setMinimumSize(QSize(0, 30));
        frame_6->setMaximumSize(QSize(16777215, 30));
        frame_6->setStyleSheet(QStringLiteral("background-color: rgb(52, 101, 164);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_6);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 10, 111, 16));
        label_7->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout_5->addWidget(frame_6);

        tableWidgetAdministrators = new QTableWidget(page_users);
        if (tableWidgetAdministrators->columnCount() < 10)
            tableWidgetAdministrators->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(5, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(6, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(7, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(8, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidgetAdministrators->setHorizontalHeaderItem(9, __qtablewidgetitem28);
        tableWidgetAdministrators->setObjectName(QStringLiteral("tableWidgetAdministrators"));
        tableWidgetAdministrators->setMaximumSize(QSize(16777215, 300));

        verticalLayout_5->addWidget(tableWidgetAdministrators);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page_users);

        verticalLayout_3->addWidget(stackedWidget);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);

        CashierWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CashierWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 2919, 20));
        CashierWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CashierWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CashierWindow->setStatusBar(statusbar);

        retranslateUi(CashierWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CashierWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CashierWindow)
    {
        CashierWindow->setWindowTitle(QApplication::translate("CashierWindow", "MainWindow", Q_NULLPTR));
        pushButton_13->setText(QApplication::translate("CashierWindow", "PushButton", Q_NULLPTR));
        label_8->setText(QApplication::translate("CashierWindow", "CASHIER CENTRAL", Q_NULLPTR));
        label->setText(QString());
        pushButton_dashboard->setText(QApplication::translate("CashierWindow", "Dashboard", Q_NULLPTR));
        pushButton_users->setText(QApplication::translate("CashierWindow", "Users", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("CashierWindow", "Dashboard", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("CashierWindow", "Two", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CashierWindow", "Three", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("CashierWindow", "Four", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("CashierWindow", "Dashboard", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("CashierWindow", "Dashboard", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("CashierWindow", "Dashboard", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("CashierWindow", "Dashboard", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("CashierWindow", "Five", Q_NULLPTR));
        btn_viewProfile->setText(QApplication::translate("CashierWindow", "View Profile", Q_NULLPTR));
        pb_logout_cashier->setText(QApplication::translate("CashierWindow", "Logout", Q_NULLPTR));
        label_2->setText(QApplication::translate("CashierWindow", "DASHBOARD", Q_NULLPTR));
        pushButton_addNewUser->setText(QApplication::translate("CashierWindow", "Add User", Q_NULLPTR));
        btn_loadUsers->setText(QApplication::translate("CashierWindow", "Load Users", Q_NULLPTR));
        label_3->setText(QApplication::translate("CashierWindow", "USERS", Q_NULLPTR));
        label_5->setText(QApplication::translate("CashierWindow", "CASHIERS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCashiers->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CashierWindow", "User ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCashiers->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CashierWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetCashiers->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CashierWindow", "Other Names", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetCashiers->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CashierWindow", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetCashiers->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CashierWindow", "Phone Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetCashiers->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CashierWindow", "Username", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetCashiers->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CashierWindow", "User Role", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetCashiers->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CashierWindow", "Avatar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetCashiers->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("CashierWindow", "View User", Q_NULLPTR));
        label_6->setText(QApplication::translate("CashierWindow", "SUPERVISORS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetSupervisors->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("CashierWindow", "User ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetSupervisors->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("CashierWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetSupervisors->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("CashierWindow", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetSupervisors->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("CashierWindow", "Other Names", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetSupervisors->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("CashierWindow", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetSupervisors->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("CashierWindow", "Phone Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidgetSupervisors->horizontalHeaderItem(6);
        ___qtablewidgetitem15->setText(QApplication::translate("CashierWindow", "Username", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidgetSupervisors->horizontalHeaderItem(7);
        ___qtablewidgetitem16->setText(QApplication::translate("CashierWindow", "User Role", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidgetSupervisors->horizontalHeaderItem(8);
        ___qtablewidgetitem17->setText(QApplication::translate("CashierWindow", "Avatar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidgetSupervisors->horizontalHeaderItem(9);
        ___qtablewidgetitem18->setText(QApplication::translate("CashierWindow", "View Record", Q_NULLPTR));
        label_7->setText(QApplication::translate("CashierWindow", "ADMINISTRATORS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidgetAdministrators->horizontalHeaderItem(0);
        ___qtablewidgetitem19->setText(QApplication::translate("CashierWindow", "User ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidgetAdministrators->horizontalHeaderItem(1);
        ___qtablewidgetitem20->setText(QApplication::translate("CashierWindow", "First Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidgetAdministrators->horizontalHeaderItem(2);
        ___qtablewidgetitem21->setText(QApplication::translate("CashierWindow", "New Column", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidgetAdministrators->horizontalHeaderItem(3);
        ___qtablewidgetitem22->setText(QApplication::translate("CashierWindow", "Other Names", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidgetAdministrators->horizontalHeaderItem(4);
        ___qtablewidgetitem23->setText(QApplication::translate("CashierWindow", "Email", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidgetAdministrators->horizontalHeaderItem(5);
        ___qtablewidgetitem24->setText(QApplication::translate("CashierWindow", "Phone Number", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidgetAdministrators->horizontalHeaderItem(6);
        ___qtablewidgetitem25->setText(QApplication::translate("CashierWindow", "Username", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidgetAdministrators->horizontalHeaderItem(7);
        ___qtablewidgetitem26->setText(QApplication::translate("CashierWindow", "User Role", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidgetAdministrators->horizontalHeaderItem(8);
        ___qtablewidgetitem27->setText(QApplication::translate("CashierWindow", "Avatar", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidgetAdministrators->horizontalHeaderItem(9);
        ___qtablewidgetitem28->setText(QApplication::translate("CashierWindow", "View Record", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CashierWindow: public Ui_CashierWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CASHIERWINDOW_H
