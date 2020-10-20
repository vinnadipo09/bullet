/********************************************************************************
** Form generated from reading UI file 'businesslimits.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSINESSLIMITS_H
#define UI_BUSINESSLIMITS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_BusinessLimits
{
public:
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *leLimitAmount;
    QComboBox *cbLimitScale;
    QLabel *label_5;
    QLineEdit *leLimitName;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;

    void setupUi(QDialog *BusinessLimits)
    {
        if (BusinessLimits->objectName().isEmpty())
            BusinessLimits->setObjectName(QStringLiteral("BusinessLimits"));
        BusinessLimits->resize(710, 467);
        label_2 = new QLabel(BusinessLimits);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-10, -10, 711, 471));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label = new QLabel(BusinessLimits);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(BusinessLimits);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 120, 591, 291));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(250, 50));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(250, 50));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_4->setFrameShape(QFrame::Panel);
        label_4->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        leLimitAmount = new QLineEdit(groupBox);
        leLimitAmount->setObjectName(QStringLiteral("leLimitAmount"));
        leLimitAmount->setMinimumSize(QSize(0, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        leLimitAmount->setFont(font1);
        leLimitAmount->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"color: rgb(0, 0, 0);\n"
""));

        formLayout->setWidget(2, QFormLayout::FieldRole, leLimitAmount);

        cbLimitScale = new QComboBox(groupBox);
        cbLimitScale->setObjectName(QStringLiteral("cbLimitScale"));
        cbLimitScale->setMinimumSize(QSize(250, 50));
        cbLimitScale->setFont(font);
        cbLimitScale->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cbLimitScale);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(250, 50));
        label_5->setFont(font);
        label_5->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        leLimitName = new QLineEdit(groupBox);
        leLimitName->setObjectName(QStringLiteral("leLimitName"));
        leLimitName->setMinimumSize(QSize(0, 50));
        leLimitName->setFont(font1);
        leLimitName->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"color: rgb(0, 0, 0);\n"
""));

        formLayout->setWidget(0, QFormLayout::FieldRole, leLimitName);


        horizontalLayout_4->addLayout(formLayout);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnSave = new QPushButton(groupBox);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setMinimumSize(QSize(0, 50));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/new_icons_2/icons8-ok-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon);
        btnSave->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(BusinessLimits);

        QMetaObject::connectSlotsByName(BusinessLimits);
    } // setupUi

    void retranslateUi(QDialog *BusinessLimits)
    {
        BusinessLimits->setWindowTitle(QApplication::translate("BusinessLimits", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("BusinessLimits", "Limit Set Up", Q_NULLPTR));
        label_3->setText(QApplication::translate("BusinessLimits", "Limit Name:", Q_NULLPTR));
        label_4->setText(QApplication::translate("BusinessLimits", "Limit Amount:", Q_NULLPTR));
        cbLimitScale->clear();
        cbLimitScale->insertItems(0, QStringList()
         << QApplication::translate("BusinessLimits", "Select Limit", Q_NULLPTR)
         << QApplication::translate("BusinessLimits", "Upper", Q_NULLPTR)
         << QApplication::translate("BusinessLimits", "Lower", Q_NULLPTR)
        );
        label_5->setText(QApplication::translate("BusinessLimits", "Limit Scale:", Q_NULLPTR));
        btnSave->setText(QApplication::translate("BusinessLimits", "Save", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("BusinessLimits", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class BusinessLimits: public Ui_BusinessLimits {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSINESSLIMITS_H
