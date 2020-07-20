/********************************************************************************
** Form generated from reading UI file 'customerviewall.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERVIEWALL_H
#define UI_CUSTOMERVIEWALL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CustomerViewAll
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QTableWidget *twCustomersAgents;

    void setupUi(QDialog *CustomerViewAll)
    {
        if (CustomerViewAll->objectName().isEmpty())
            CustomerViewAll->setObjectName(QStringLiteral("CustomerViewAll"));
        CustomerViewAll->resize(1600, 877);
        gridLayout = new QGridLayout(CustomerViewAll);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(CustomerViewAll);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(100, 50));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(CustomerViewAll);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        comboBox = new QComboBox(CustomerViewAll);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(CustomerViewAll);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        comboBox_3 = new QComboBox(CustomerViewAll);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);

        lineEdit_2 = new QLineEdit(CustomerViewAll);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);

        pushButton = new QPushButton(CustomerViewAll);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        label_3 = new QLabel(CustomerViewAll);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 30));
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(193, 125, 17);"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(label_3);

        twCustomersAgents = new QTableWidget(CustomerViewAll);
        if (twCustomersAgents->columnCount() < 16)
            twCustomersAgents->setColumnCount(16);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        twCustomersAgents->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        twCustomersAgents->setObjectName(QStringLiteral("twCustomersAgents"));
        twCustomersAgents->setMaximumSize(QSize(16777215, 300));

        verticalLayout->addWidget(twCustomersAgents);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(CustomerViewAll);

        QMetaObject::connectSlotsByName(CustomerViewAll);
    } // setupUi

    void retranslateUi(QDialog *CustomerViewAll)
    {
        CustomerViewAll->setWindowTitle(QApplication::translate("CustomerViewAll", "Dialog", Q_NULLPTR));
        label->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("CustomerViewAll", "Enter Customer Phone Number", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CustomerViewAll", "Filter By Debts", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("CustomerViewAll", "Filter By Customer Types", Q_NULLPTR)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("CustomerViewAll", "Filter By Debt Amounts", Q_NULLPTR)
        );
        lineEdit_2->setPlaceholderText(QApplication::translate("CustomerViewAll", "Enter Filter Amount", Q_NULLPTR));
        pushButton->setText(QApplication::translate("CustomerViewAll", "Apply Filters", Q_NULLPTR));
        label_3->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = twCustomersAgents->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CustomerViewAll", "Db Id", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = twCustomersAgents->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CustomerViewAll", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = twCustomersAgents->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CustomerViewAll", "Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = twCustomersAgents->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CustomerViewAll", "Phone", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = twCustomersAgents->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("CustomerViewAll", "Authorizing User", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = twCustomersAgents->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("CustomerViewAll", "Date Modified", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = twCustomersAgents->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("CustomerViewAll", "Cash Available", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = twCustomersAgents->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("CustomerViewAll", "Credit Allowed", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = twCustomersAgents->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("CustomerViewAll", "Credit remaining", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = twCustomersAgents->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("CustomerViewAll", "Credit Rating", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = twCustomersAgents->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("CustomerViewAll", "Rewards", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = twCustomersAgents->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("CustomerViewAll", "Active Count", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = twCustomersAgents->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("CustomerViewAll", "Active Debts", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = twCustomersAgents->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("CustomerViewAll", "Overdue count", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = twCustomersAgents->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("CustomerViewAll", "Overdue Amount", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = twCustomersAgents->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("CustomerViewAll", "View", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomerViewAll: public Ui_CustomerViewAll {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEWALL_H
