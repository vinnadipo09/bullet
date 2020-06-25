/********************************************************************************
** Form generated from reading UI file 'passwordconfirmation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDCONFIRMATION_H
#define UI_PASSWORDCONFIRMATION_H

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

class Ui_PasswordConfirmation
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_5;

    void setupUi(QDialog *PasswordConfirmation)
    {
        if (PasswordConfirmation->objectName().isEmpty())
            PasswordConfirmation->setObjectName(QStringLiteral("PasswordConfirmation"));
        PasswordConfirmation->resize(487, 364);
        label_2 = new QLabel(PasswordConfirmation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 481, 361));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(PasswordConfirmation);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 20, 391, 251));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 180, 80, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(24, 24));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 180, 80, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        pushButton_3->setIconSize(QSize(24, 24));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(104, 90, 191, 23));
        lineEdit->setStyleSheet(QStringLiteral("border-color: rgb(239, 41, 41);"));
        lineEdit->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 86, 31, 31));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/newIcons/user.png);"));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 40, 361, 21));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);

        retranslateUi(PasswordConfirmation);

        QMetaObject::connectSlotsByName(PasswordConfirmation);
    } // setupUi

    void retranslateUi(QDialog *PasswordConfirmation)
    {
        PasswordConfirmation->setWindowTitle(QApplication::translate("PasswordConfirmation", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("PasswordConfirmation", "Change Phone Number", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("PasswordConfirmation", "Save", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("PasswordConfirmation", "Cancel", Q_NULLPTR));
        label->setText(QString());
        label_5->setText(QApplication::translate("PasswordConfirmation", "Please enter your password to validate the change requested.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PasswordConfirmation: public Ui_PasswordConfirmation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDCONFIRMATION_H
