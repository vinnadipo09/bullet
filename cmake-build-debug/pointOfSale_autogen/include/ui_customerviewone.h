/********************************************************************************
** Form generated from reading UI file 'customerviewone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERVIEWONE_H
#define UI_CUSTOMERVIEWONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CustomerViewOne
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QPushButton *btn_edit;
    QLabel *label_11;
    QLabel *lblName;
    QLabel *lblPhone;
    QLabel *lbl_first_name_2;
    QLabel *lblCusType;
    QLabel *lbl_first_name_3;
    QLabel *lbl_first_name_4;
    QLabel *lblCreditAllowed;
    QLabel *lblCreditRating;
    QLabel *lbl_first_name_5;
    QLabel *lbl_first_name_6;
    QLabel *lblAwardsAccrued;
    QLabel *lbl_first_name_7;
    QLabel *lblCashOnBusiness;
    QLabel *lblOverdueDebts;
    QLabel *lbl_first_name_8;
    QLabel *lbl_first_name_9;
    QLabel *lblOverdueDebtsTotal;
    QPushButton *btn_edit_2;
    QPushButton *btn_edit_3;
    QLabel *lblActiveDebts;
    QLabel *lbl_first_name_10;
    QLabel *lbl_first_name_11;
    QLabel *lblActiveDebtsTotal;
    QLabel *lbl_first_name_12;
    QLabel *lblDebtsTotal;
    QLabel *lbl_first_name_13;
    QLabel *lblCompletedOrders;
    QLabel *lbl_first_name_14;
    QLabel *lblActiveOrders;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *CustomerViewOne)
    {
        if (CustomerViewOne->objectName().isEmpty())
            CustomerViewOne->setObjectName(QStringLiteral("CustomerViewOne"));
        CustomerViewOne->resize(958, 888);
        groupBox = new QGroupBox(CustomerViewOne);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 30, 741, 841));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(100, 60, 241, 41));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        btn_edit = new QPushButton(groupBox);
        btn_edit->setObjectName(QStringLiteral("btn_edit"));
        btn_edit->setGeometry(QRect(120, 770, 131, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/Pencil-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit->setIcon(icon);
        btn_edit->setIconSize(QSize(24, 24));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 571, 21));
        label_11->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        lblName = new QLabel(groupBox);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(350, 60, 261, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Waree"));
        font1.setPointSize(12);
        lblName->setFont(font1);
        lblName->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblName->setFrameShape(QFrame::Panel);
        lblName->setFrameShadow(QFrame::Raised);
        lblPhone = new QLabel(groupBox);
        lblPhone->setObjectName(QStringLiteral("lblPhone"));
        lblPhone->setGeometry(QRect(350, 110, 261, 41));
        lblPhone->setFont(font1);
        lblPhone->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblPhone->setFrameShape(QFrame::Panel);
        lblPhone->setFrameShadow(QFrame::Raised);
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(100, 110, 241, 41));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        lblCusType = new QLabel(groupBox);
        lblCusType->setObjectName(QStringLiteral("lblCusType"));
        lblCusType->setGeometry(QRect(350, 160, 261, 41));
        lblCusType->setFont(font1);
        lblCusType->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblCusType->setFrameShape(QFrame::Panel);
        lblCusType->setFrameShadow(QFrame::Raised);
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(100, 160, 241, 41));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        lbl_first_name_4 = new QLabel(groupBox);
        lbl_first_name_4->setObjectName(QStringLiteral("lbl_first_name_4"));
        lbl_first_name_4->setGeometry(QRect(100, 210, 241, 41));
        lbl_first_name_4->setFont(font);
        lbl_first_name_4->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_4->setFrameShape(QFrame::Panel);
        lbl_first_name_4->setFrameShadow(QFrame::Raised);
        lblCreditAllowed = new QLabel(groupBox);
        lblCreditAllowed->setObjectName(QStringLiteral("lblCreditAllowed"));
        lblCreditAllowed->setGeometry(QRect(350, 210, 261, 41));
        lblCreditAllowed->setFont(font1);
        lblCreditAllowed->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblCreditAllowed->setFrameShape(QFrame::Panel);
        lblCreditAllowed->setFrameShadow(QFrame::Raised);
        lblCreditRating = new QLabel(groupBox);
        lblCreditRating->setObjectName(QStringLiteral("lblCreditRating"));
        lblCreditRating->setGeometry(QRect(350, 260, 261, 41));
        lblCreditRating->setFont(font1);
        lblCreditRating->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblCreditRating->setFrameShape(QFrame::Panel);
        lblCreditRating->setFrameShadow(QFrame::Raised);
        lbl_first_name_5 = new QLabel(groupBox);
        lbl_first_name_5->setObjectName(QStringLiteral("lbl_first_name_5"));
        lbl_first_name_5->setGeometry(QRect(100, 260, 241, 41));
        lbl_first_name_5->setFont(font);
        lbl_first_name_5->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_5->setFrameShape(QFrame::Panel);
        lbl_first_name_5->setFrameShadow(QFrame::Raised);
        lbl_first_name_6 = new QLabel(groupBox);
        lbl_first_name_6->setObjectName(QStringLiteral("lbl_first_name_6"));
        lbl_first_name_6->setGeometry(QRect(100, 310, 241, 41));
        lbl_first_name_6->setFont(font);
        lbl_first_name_6->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_6->setFrameShape(QFrame::Panel);
        lbl_first_name_6->setFrameShadow(QFrame::Raised);
        lblAwardsAccrued = new QLabel(groupBox);
        lblAwardsAccrued->setObjectName(QStringLiteral("lblAwardsAccrued"));
        lblAwardsAccrued->setGeometry(QRect(350, 310, 261, 41));
        lblAwardsAccrued->setFont(font1);
        lblAwardsAccrued->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblAwardsAccrued->setFrameShape(QFrame::Panel);
        lblAwardsAccrued->setFrameShadow(QFrame::Raised);
        lbl_first_name_7 = new QLabel(groupBox);
        lbl_first_name_7->setObjectName(QStringLiteral("lbl_first_name_7"));
        lbl_first_name_7->setGeometry(QRect(100, 360, 241, 41));
        lbl_first_name_7->setFont(font);
        lbl_first_name_7->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_7->setFrameShape(QFrame::Panel);
        lbl_first_name_7->setFrameShadow(QFrame::Raised);
        lblCashOnBusiness = new QLabel(groupBox);
        lblCashOnBusiness->setObjectName(QStringLiteral("lblCashOnBusiness"));
        lblCashOnBusiness->setGeometry(QRect(350, 360, 261, 41));
        lblCashOnBusiness->setFont(font1);
        lblCashOnBusiness->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblCashOnBusiness->setFrameShape(QFrame::Panel);
        lblCashOnBusiness->setFrameShadow(QFrame::Raised);
        lblOverdueDebts = new QLabel(groupBox);
        lblOverdueDebts->setObjectName(QStringLiteral("lblOverdueDebts"));
        lblOverdueDebts->setGeometry(QRect(350, 520, 261, 41));
        lblOverdueDebts->setFont(font1);
        lblOverdueDebts->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblOverdueDebts->setFrameShape(QFrame::Panel);
        lblOverdueDebts->setFrameShadow(QFrame::Raised);
        lbl_first_name_8 = new QLabel(groupBox);
        lbl_first_name_8->setObjectName(QStringLiteral("lbl_first_name_8"));
        lbl_first_name_8->setGeometry(QRect(100, 520, 241, 41));
        lbl_first_name_8->setFont(font);
        lbl_first_name_8->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_8->setFrameShape(QFrame::Panel);
        lbl_first_name_8->setFrameShadow(QFrame::Raised);
        lbl_first_name_9 = new QLabel(groupBox);
        lbl_first_name_9->setObjectName(QStringLiteral("lbl_first_name_9"));
        lbl_first_name_9->setGeometry(QRect(100, 570, 241, 41));
        lbl_first_name_9->setFont(font);
        lbl_first_name_9->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_9->setFrameShape(QFrame::Panel);
        lbl_first_name_9->setFrameShadow(QFrame::Raised);
        lblOverdueDebtsTotal = new QLabel(groupBox);
        lblOverdueDebtsTotal->setObjectName(QStringLiteral("lblOverdueDebtsTotal"));
        lblOverdueDebtsTotal->setGeometry(QRect(350, 570, 261, 41));
        lblOverdueDebtsTotal->setFont(font1);
        lblOverdueDebtsTotal->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblOverdueDebtsTotal->setFrameShape(QFrame::Panel);
        lblOverdueDebtsTotal->setFrameShadow(QFrame::Raised);
        btn_edit_2 = new QPushButton(groupBox);
        btn_edit_2->setObjectName(QStringLiteral("btn_edit_2"));
        btn_edit_2->setGeometry(QRect(290, 770, 151, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/new_icons_2/icons8-cancel-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit_2->setIcon(icon1);
        btn_edit_2->setIconSize(QSize(24, 24));
        btn_edit_3 = new QPushButton(groupBox);
        btn_edit_3->setObjectName(QStringLiteral("btn_edit_3"));
        btn_edit_3->setGeometry(QRect(460, 770, 151, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/new_icons_2/icons8-coin-in-hand-60.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit_3->setIcon(icon2);
        btn_edit_3->setIconSize(QSize(24, 24));
        lblActiveDebts = new QLabel(groupBox);
        lblActiveDebts->setObjectName(QStringLiteral("lblActiveDebts"));
        lblActiveDebts->setGeometry(QRect(350, 410, 261, 41));
        lblActiveDebts->setFont(font1);
        lblActiveDebts->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblActiveDebts->setFrameShape(QFrame::Panel);
        lblActiveDebts->setFrameShadow(QFrame::Raised);
        lbl_first_name_10 = new QLabel(groupBox);
        lbl_first_name_10->setObjectName(QStringLiteral("lbl_first_name_10"));
        lbl_first_name_10->setGeometry(QRect(100, 410, 241, 41));
        lbl_first_name_10->setFont(font);
        lbl_first_name_10->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_10->setFrameShape(QFrame::Panel);
        lbl_first_name_10->setFrameShadow(QFrame::Raised);
        lbl_first_name_11 = new QLabel(groupBox);
        lbl_first_name_11->setObjectName(QStringLiteral("lbl_first_name_11"));
        lbl_first_name_11->setGeometry(QRect(100, 460, 241, 41));
        lbl_first_name_11->setFont(font);
        lbl_first_name_11->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_11->setFrameShape(QFrame::Panel);
        lbl_first_name_11->setFrameShadow(QFrame::Raised);
        lblActiveDebtsTotal = new QLabel(groupBox);
        lblActiveDebtsTotal->setObjectName(QStringLiteral("lblActiveDebtsTotal"));
        lblActiveDebtsTotal->setGeometry(QRect(350, 460, 261, 41));
        lblActiveDebtsTotal->setFont(font1);
        lblActiveDebtsTotal->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblActiveDebtsTotal->setFrameShape(QFrame::Panel);
        lblActiveDebtsTotal->setFrameShadow(QFrame::Raised);
        lbl_first_name_12 = new QLabel(groupBox);
        lbl_first_name_12->setObjectName(QStringLiteral("lbl_first_name_12"));
        lbl_first_name_12->setGeometry(QRect(100, 620, 241, 41));
        lbl_first_name_12->setFont(font);
        lbl_first_name_12->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_12->setFrameShape(QFrame::Panel);
        lbl_first_name_12->setFrameShadow(QFrame::Raised);
        lblDebtsTotal = new QLabel(groupBox);
        lblDebtsTotal->setObjectName(QStringLiteral("lblDebtsTotal"));
        lblDebtsTotal->setGeometry(QRect(350, 620, 261, 41));
        lblDebtsTotal->setFont(font1);
        lblDebtsTotal->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblDebtsTotal->setFrameShape(QFrame::Panel);
        lblDebtsTotal->setFrameShadow(QFrame::Raised);
        lbl_first_name_13 = new QLabel(groupBox);
        lbl_first_name_13->setObjectName(QStringLiteral("lbl_first_name_13"));
        lbl_first_name_13->setGeometry(QRect(100, 720, 241, 41));
        lbl_first_name_13->setFont(font);
        lbl_first_name_13->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_13->setFrameShape(QFrame::Panel);
        lbl_first_name_13->setFrameShadow(QFrame::Raised);
        lblCompletedOrders = new QLabel(groupBox);
        lblCompletedOrders->setObjectName(QStringLiteral("lblCompletedOrders"));
        lblCompletedOrders->setGeometry(QRect(350, 720, 261, 41));
        lblCompletedOrders->setFont(font1);
        lblCompletedOrders->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblCompletedOrders->setFrameShape(QFrame::Panel);
        lblCompletedOrders->setFrameShadow(QFrame::Raised);
        lbl_first_name_14 = new QLabel(groupBox);
        lbl_first_name_14->setObjectName(QStringLiteral("lbl_first_name_14"));
        lbl_first_name_14->setGeometry(QRect(100, 670, 241, 41));
        lbl_first_name_14->setFont(font);
        lbl_first_name_14->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name_14->setFrameShape(QFrame::Panel);
        lbl_first_name_14->setFrameShadow(QFrame::Raised);
        lblActiveOrders = new QLabel(groupBox);
        lblActiveOrders->setObjectName(QStringLiteral("lblActiveOrders"));
        lblActiveOrders->setGeometry(QRect(350, 670, 261, 41));
        lblActiveOrders->setFont(font1);
        lblActiveOrders->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblActiveOrders->setFrameShape(QFrame::Panel);
        lblActiveOrders->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(620, 410, 101, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/new_icons_2/icons8-money-bag-90.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon3);
        pushButton->setIconSize(QSize(24, 24));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 520, 101, 41));
        pushButton_2->setIcon(icon3);
        pushButton_2->setIconSize(QSize(24, 24));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(620, 670, 101, 41));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/icons/search-good-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon4);
        pushButton_3->setIconSize(QSize(24, 24));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 620, 101, 41));
        pushButton_4->setIcon(icon3);
        pushButton_4->setIconSize(QSize(24, 24));
        label_2 = new QLabel(CustomerViewOne);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 861, 861));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label = new QLabel(CustomerViewOne);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(CustomerViewOne);

        QMetaObject::connectSlotsByName(CustomerViewOne);
    } // setupUi

    void retranslateUi(QDialog *CustomerViewOne)
    {
        CustomerViewOne->setWindowTitle(QApplication::translate("CustomerViewOne", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CustomerViewOne", "View Customer", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("CustomerViewOne", "Name", Q_NULLPTR));
        btn_edit->setText(QApplication::translate("CustomerViewOne", "Edit", Q_NULLPTR));
        label_11->setText(QApplication::translate("CustomerViewOne", "*Please carefully review all the information before saving in the database*", Q_NULLPTR));
        lblName->setText(QString());
        lblPhone->setText(QString());
        lbl_first_name_2->setText(QApplication::translate("CustomerViewOne", "Phone", Q_NULLPTR));
        lblCusType->setText(QString());
        lbl_first_name_3->setText(QApplication::translate("CustomerViewOne", "Customer Type", Q_NULLPTR));
        lbl_first_name_4->setText(QApplication::translate("CustomerViewOne", "Credit Allowed", Q_NULLPTR));
        lblCreditAllowed->setText(QString());
        lblCreditRating->setText(QString());
        lbl_first_name_5->setText(QApplication::translate("CustomerViewOne", "Credit Rating", Q_NULLPTR));
        lbl_first_name_6->setText(QApplication::translate("CustomerViewOne", "Rewards Accrued", Q_NULLPTR));
        lblAwardsAccrued->setText(QString());
        lbl_first_name_7->setText(QApplication::translate("CustomerViewOne", "Cash On Business", Q_NULLPTR));
        lblCashOnBusiness->setText(QString());
        lblOverdueDebts->setText(QString());
        lbl_first_name_8->setText(QApplication::translate("CustomerViewOne", "Overdue Debts", Q_NULLPTR));
        lbl_first_name_9->setText(QApplication::translate("CustomerViewOne", "Overdue Debts Amount", Q_NULLPTR));
        lblOverdueDebtsTotal->setText(QString());
        btn_edit_2->setText(QApplication::translate("CustomerViewOne", "Close", Q_NULLPTR));
        btn_edit_3->setText(QApplication::translate("CustomerViewOne", "Pay Debt", Q_NULLPTR));
        lblActiveDebts->setText(QString());
        lbl_first_name_10->setText(QApplication::translate("CustomerViewOne", "Active Debts", Q_NULLPTR));
        lbl_first_name_11->setText(QApplication::translate("CustomerViewOne", "Active Debts Amount", Q_NULLPTR));
        lblActiveDebtsTotal->setText(QString());
        lbl_first_name_12->setText(QApplication::translate("CustomerViewOne", "Debts Total", Q_NULLPTR));
        lblDebtsTotal->setText(QString());
        lbl_first_name_13->setText(QApplication::translate("CustomerViewOne", "Completed Orders", Q_NULLPTR));
        lblCompletedOrders->setText(QString());
        lbl_first_name_14->setText(QApplication::translate("CustomerViewOne", "Active Orders", Q_NULLPTR));
        lblActiveOrders->setText(QString());
        pushButton->setText(QApplication::translate("CustomerViewOne", "Pay Debt", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CustomerViewOne", "Pay Debt", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("CustomerViewOne", "Complete", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("CustomerViewOne", "Pay Debt", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CustomerViewOne: public Ui_CustomerViewOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERVIEWONE_H
