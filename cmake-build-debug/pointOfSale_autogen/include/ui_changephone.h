/********************************************************************************
** Form generated from reading UI file 'changephone.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPHONE_H
#define UI_CHANGEPHONE_H

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

class Ui_ChangePhone
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_5;
    QLabel *label_3;

    void setupUi(QDialog *ChangePhone)
    {
        if (ChangePhone->objectName().isEmpty())
            ChangePhone->setObjectName(QStringLiteral("ChangePhone"));
        ChangePhone->resize(487, 366);
        label_2 = new QLabel(ChangePhone);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 481, 361));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(ChangePhone);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 80, 391, 251));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 140, 80, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(24, 24));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 140, 80, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(24, 24));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 80, 191, 23));
        lineEdit->setStyleSheet(QStringLiteral("border-color: rgb(239, 41, 41);"));
        lineEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 121, 21));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 40, 331, 21));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(ChangePhone);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 20, 51, 51));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        retranslateUi(ChangePhone);

        QMetaObject::connectSlotsByName(ChangePhone);
    } // setupUi

    void retranslateUi(QDialog *ChangePhone)
    {
        ChangePhone->setWindowTitle(QApplication::translate("ChangePhone", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("ChangePhone", "Change Phone Number", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ChangePhone", "Save", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ChangePhone", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("ChangePhone", "New Phone Number*", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangePhone: public Ui_ChangePhone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPHONE_H
