/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QLabel *label;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLineEdit *le_username;
    QPushButton *btnLogin;
    QLineEdit *le_userPassword;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *btnCancel;
    QLabel *lblTime;
    QLabel *lblDate;
    QFrame *line_2;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(800, 600);
        Login->setMinimumSize(QSize(800, 600));
        Login->setMaximumSize(QSize(800, 600));
        Login->setStyleSheet(QStringLiteral(""));
        label = new QLabel(Login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 801, 601));
        label->setStyleSheet(QStringLiteral("background-image: url(:/resources/complete/data_analytics-shutterstock489.jpg);"));
        line = new QFrame(Login);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(390, 220, 3, 200));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(Login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 381, 31));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QLatin1String("background-color: rgb(52, 101, 164);\n"
"color: rgb(238, 238, 236);\n"
"border-radius: 12px;"));
        label_3 = new QLabel(Login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 0, 51, 51));
        label_3->setStyleSheet(QLatin1String("border-image: url(:/resources/icons/Logo2.png);\n"
"border-radius: 5px;"));
        groupBox = new QGroupBox(Login);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(190, 210, 421, 241));
        groupBox->setStyleSheet(QStringLiteral("background-color: rgb(114, 159, 207);"));
        le_username = new QLineEdit(groupBox);
        le_username->setObjectName(QStringLiteral("le_username"));
        le_username->setGeometry(QRect(100, 60, 221, 31));
        le_username->setCursorPosition(0);
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(100, 160, 101, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/icons8-login-100.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogin->setIcon(icon);
        btnLogin->setIconSize(QSize(24, 24));
        le_userPassword = new QLineEdit(groupBox);
        le_userPassword->setObjectName(QStringLiteral("le_userPassword"));
        le_userPassword->setGeometry(QRect(100, 100, 221, 31));
        le_userPassword->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 100, 31, 31));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/resources/newIcons/user.png);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(49, 59, 31, 31));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/resources/newIcons/Users-Name-icon.png);"));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(220, 160, 101, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/cancellation.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        lblTime = new QLabel(Login);
        lblTime->setObjectName(QStringLiteral("lblTime"));
        lblTime->setGeometry(QRect(690, 560, 101, 31));
        QFont font1;
        font1.setPointSize(13);
        lblTime->setFont(font1);
        lblTime->setStyleSheet(QLatin1String("background-color: rgb(52, 101, 164);\n"
"color: rgb(255, 255, 255);\n"
"padding-left:8px;\n"
"border-radius: 8px;"));
        lblDate = new QLabel(Login);
        lblDate->setObjectName(QStringLiteral("lblDate"));
        lblDate->setGeometry(QRect(562, 560, 111, 31));
        lblDate->setFont(font1);
        lblDate->setStyleSheet(QLatin1String("background-color: rgb(52, 101, 164);\n"
"color: rgb(255, 255, 255);\n"
"padding-left:8px;\n"
"border-radius: 8px;"));
        line_2 = new QFrame(Login);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(682, 560, 3, 30));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Login", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("Login", "      ViaD Technologies POS", Q_NULLPTR));
        label_3->setText(QString());
        groupBox->setTitle(QApplication::translate("Login", "User Login", Q_NULLPTR));
        le_username->setPlaceholderText(QApplication::translate("Login", "Username", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("Login", "Login", Q_NULLPTR));
        le_userPassword->setPlaceholderText(QApplication::translate("Login", "Password", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QString());
        btnCancel->setText(QApplication::translate("Login", "Cancel", Q_NULLPTR));
        lblTime->setText(QString());
        lblDate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
