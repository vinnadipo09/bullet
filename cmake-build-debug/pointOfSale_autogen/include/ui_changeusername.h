/********************************************************************************
** Form generated from reading UI file 'changeusername.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEUSERNAME_H
#define UI_CHANGEUSERNAME_H

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

class Ui_ChangeUsername
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *le_newUsername;
    QLabel *label;
    QLabel *lbl_currentUserDisplay;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *ChangeUsername)
    {
        if (ChangeUsername->objectName().isEmpty())
            ChangeUsername->setObjectName(QStringLiteral("ChangeUsername"));
        ChangeUsername->resize(487, 379);
        groupBox = new QGroupBox(ChangeUsername);
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
        le_newUsername = new QLineEdit(groupBox);
        le_newUsername->setObjectName(QStringLiteral("le_newUsername"));
        le_newUsername->setGeometry(QRect(180, 80, 191, 23));
        le_newUsername->setStyleSheet(QStringLiteral("border-color: rgb(239, 41, 41);"));
        le_newUsername->setEchoMode(QLineEdit::Password);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 80, 121, 21));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Raised);
        lbl_currentUserDisplay = new QLabel(groupBox);
        lbl_currentUserDisplay->setObjectName(QStringLiteral("lbl_currentUserDisplay"));
        lbl_currentUserDisplay->setGeometry(QRect(30, 40, 331, 21));
        lbl_currentUserDisplay->setStyleSheet(QStringLiteral("background-color: rgb(115, 210, 22);"));
        lbl_currentUserDisplay->setFrameShape(QFrame::Panel);
        lbl_currentUserDisplay->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(ChangeUsername);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 10, 481, 361));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_3 = new QLabel(ChangeUsername);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 41, 41));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);
        label_2->raise();
        groupBox->raise();
        label_3->raise();

        retranslateUi(ChangeUsername);

        QMetaObject::connectSlotsByName(ChangeUsername);
    } // setupUi

    void retranslateUi(QDialog *ChangeUsername)
    {
        ChangeUsername->setWindowTitle(QApplication::translate("ChangeUsername", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ChangeUsername", "Change Username", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ChangeUsername", "Save", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ChangeUsername", "Cancel", Q_NULLPTR));
        label->setText(QApplication::translate("ChangeUsername", "New Username*", Q_NULLPTR));
        lbl_currentUserDisplay->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChangeUsername: public Ui_ChangeUsername {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEUSERNAME_H
