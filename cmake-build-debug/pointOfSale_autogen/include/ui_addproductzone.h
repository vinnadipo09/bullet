/********************************************************************************
** Form generated from reading UI file 'addproductzone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCTZONE_H
#define UI_ADDPRODUCTZONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddProductZone
{
public:
    QLabel *label_2;
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QPushButton *btnApply;
    QPushButton *btnCancel;
    QLabel *label_11;
    QLineEdit *leZone;
    QLineEdit *leZoneDescription;

    void setupUi(QDialog *AddProductZone)
    {
        if (AddProductZone->objectName().isEmpty())
            AddProductZone->setObjectName(QStringLiteral("AddProductZone"));
        AddProductZone->resize(922, 723);
        label_2 = new QLabel(AddProductZone);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, -20, 881, 741));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label = new QLabel(AddProductZone);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(AddProductZone);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(170, 50, 681, 351));
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(70, 180, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("Vemana2000"));
        font.setPointSize(12);
        lbl_username->setFont(font);
        lbl_username->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(70, 140, 201, 31));
        QFont font1;
        font1.setPointSize(12);
        lbl_phone->setFont(font1);
        lbl_phone->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Sunken);
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(150, 250, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(310, 250, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (2).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 631, 21));
        label_11->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        leZone = new QLineEdit(groupBox);
        leZone->setObjectName(QStringLiteral("leZone"));
        leZone->setGeometry(QRect(290, 140, 221, 31));
        leZone->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));
        leZoneDescription = new QLineEdit(groupBox);
        leZoneDescription->setObjectName(QStringLiteral("leZoneDescription"));
        leZoneDescription->setGeometry(QRect(290, 180, 221, 31));
        leZoneDescription->setStyleSheet(QLatin1String("border-radius: 4px;\n"
"background-color: rgb(136, 138, 133);"));

        retranslateUi(AddProductZone);

        QMetaObject::connectSlotsByName(AddProductZone);
    } // setupUi

    void retranslateUi(QDialog *AddProductZone)
    {
        AddProductZone->setWindowTitle(QApplication::translate("AddProductZone", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("AddProductZone", "Add New Product Zone", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("AddProductZone", "Zone Description", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("AddProductZone", "Zone Name", Q_NULLPTR));
        btnApply->setText(QApplication::translate("AddProductZone", "Ok", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AddProductZone", "Cancel", Q_NULLPTR));
        label_11->setText(QApplication::translate("AddProductZone", "*Please take uttermost care before editing or deleting any information from the table*", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddProductZone: public Ui_AddProductZone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCTZONE_H
