/********************************************************************************
** Form generated from reading UI file 'addnewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWUSER_H
#define UI_ADDNEWUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AddNewUser
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLineEdit *le_name;
    QLineEdit *le_email;
    QLabel *lbl_email;
    QLineEdit *le_phone;
    QLineEdit *le_username;
    QLabel *lbl_password;
    QLabel *lbl_username;
    QLineEdit *le_password;
    QLabel *lbl_phone;
    QLabel *lbl_avatar;
    QPushButton *btn_okay;
    QPushButton *btn_cancel;
    QLabel *lbl_confirm_password;
    QLineEdit *le_password_2;
    QLabel *lbl_username_2;
    QComboBox *cb_user_role;
    QLabel *lbl_image;
    QPushButton *pushbuttonAvatar;
    QLabel *avatar_display;
    QLabel *lbl_username_3;
    QComboBox *cb_user_status;
    QLabel *label_2;

    void setupUi(QDialog *AddNewUser)
    {
        if (AddNewUser->objectName().isEmpty())
            AddNewUser->setObjectName(QStringLiteral("AddNewUser"));
        AddNewUser->resize(724, 589);
        label = new QLabel(AddNewUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(AddNewUser);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 40, 551, 511));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(20, 200, 201, 21));
        lbl_first_name->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        le_name = new QLineEdit(groupBox);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(240, 200, 231, 23));
        le_email = new QLineEdit(groupBox);
        le_email->setObjectName(QStringLiteral("le_email"));
        le_email->setGeometry(QRect(240, 230, 231, 23));
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(20, 230, 201, 21));
        lbl_email->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_email->setFrameShape(QFrame::Panel);
        lbl_email->setFrameShadow(QFrame::Raised);
        le_phone = new QLineEdit(groupBox);
        le_phone->setObjectName(QStringLiteral("le_phone"));
        le_phone->setGeometry(QRect(240, 260, 231, 23));
        le_username = new QLineEdit(groupBox);
        le_username->setObjectName(QStringLiteral("le_username"));
        le_username->setGeometry(QRect(240, 290, 231, 23));
        lbl_password = new QLabel(groupBox);
        lbl_password->setObjectName(QStringLiteral("lbl_password"));
        lbl_password->setGeometry(QRect(20, 380, 201, 21));
        lbl_password->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_password->setFrameShape(QFrame::Panel);
        lbl_password->setFrameShadow(QFrame::Raised);
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(20, 290, 201, 21));
        lbl_username->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        le_password = new QLineEdit(groupBox);
        le_password->setObjectName(QStringLiteral("le_password"));
        le_password->setGeometry(QRect(240, 380, 231, 23));
        le_password->setEchoMode(QLineEdit::Password);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(20, 260, 201, 21));
        lbl_phone->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Raised);
        lbl_avatar = new QLabel(groupBox);
        lbl_avatar->setObjectName(QStringLiteral("lbl_avatar"));
        lbl_avatar->setGeometry(QRect(19, 170, 201, 21));
        lbl_avatar->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_avatar->setFrameShape(QFrame::Panel);
        lbl_avatar->setFrameShadow(QFrame::Raised);
        btn_okay = new QPushButton(groupBox);
        btn_okay->setObjectName(QStringLiteral("btn_okay"));
        btn_okay->setGeometry(QRect(90, 450, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interfaces.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_okay->setIcon(icon);
        btn_okay->setIconSize(QSize(24, 24));
        btn_cancel = new QPushButton(groupBox);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));
        btn_cancel->setGeometry(QRect(260, 450, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_cancel->setIcon(icon1);
        btn_cancel->setIconSize(QSize(24, 24));
        lbl_confirm_password = new QLabel(groupBox);
        lbl_confirm_password->setObjectName(QStringLiteral("lbl_confirm_password"));
        lbl_confirm_password->setGeometry(QRect(20, 410, 201, 21));
        lbl_confirm_password->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_confirm_password->setFrameShape(QFrame::Panel);
        lbl_confirm_password->setFrameShadow(QFrame::Raised);
        le_password_2 = new QLineEdit(groupBox);
        le_password_2->setObjectName(QStringLiteral("le_password_2"));
        le_password_2->setGeometry(QRect(240, 410, 231, 23));
        le_password_2->setEchoMode(QLineEdit::Password);
        lbl_username_2 = new QLabel(groupBox);
        lbl_username_2->setObjectName(QStringLiteral("lbl_username_2"));
        lbl_username_2->setGeometry(QRect(20, 320, 201, 21));
        lbl_username_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username_2->setFrameShape(QFrame::Panel);
        lbl_username_2->setFrameShadow(QFrame::Raised);
        cb_user_role = new QComboBox(groupBox);
        cb_user_role->setObjectName(QStringLiteral("cb_user_role"));
        cb_user_role->setGeometry(QRect(240, 320, 231, 23));
        lbl_image = new QLabel(groupBox);
        lbl_image->setObjectName(QStringLiteral("lbl_image"));
        lbl_image->setGeometry(QRect(239, 170, 151, 21));
        lbl_image->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_image->setFrameShape(QFrame::Panel);
        lbl_image->setFrameShadow(QFrame::Raised);
        pushbuttonAvatar = new QPushButton(groupBox);
        pushbuttonAvatar->setObjectName(QStringLiteral("pushbuttonAvatar"));
        pushbuttonAvatar->setGeometry(QRect(400, 170, 71, 23));
        avatar_display = new QLabel(groupBox);
        avatar_display->setObjectName(QStringLiteral("avatar_display"));
        avatar_display->setGeometry(QRect(20, 40, 141, 121));
        avatar_display->setFrameShape(QFrame::Panel);
        avatar_display->setFrameShadow(QFrame::Raised);
        lbl_username_3 = new QLabel(groupBox);
        lbl_username_3->setObjectName(QStringLiteral("lbl_username_3"));
        lbl_username_3->setGeometry(QRect(20, 350, 201, 21));
        lbl_username_3->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username_3->setFrameShape(QFrame::Panel);
        lbl_username_3->setFrameShadow(QFrame::Raised);
        cb_user_status = new QComboBox(groupBox);
        cb_user_status->setObjectName(QStringLiteral("cb_user_status"));
        cb_user_status->setGeometry(QRect(240, 350, 231, 23));
        label_2 = new QLabel(AddNewUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 721, 581));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(AddNewUser);

        QMetaObject::connectSlotsByName(AddNewUser);
    } // setupUi

    void retranslateUi(QDialog *AddNewUser)
    {
        AddNewUser->setWindowTitle(QApplication::translate("AddNewUser", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("AddNewUser", "Add New User", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("AddNewUser", "Name*", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("AddNewUser", "Email*", Q_NULLPTR));
        lbl_password->setText(QApplication::translate("AddNewUser", "Password*", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("AddNewUser", "Username*", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("AddNewUser", "Phone*", Q_NULLPTR));
        lbl_avatar->setText(QApplication::translate("AddNewUser", "Avtar*", Q_NULLPTR));
        btn_okay->setText(QApplication::translate("AddNewUser", "Okay", Q_NULLPTR));
        btn_cancel->setText(QApplication::translate("AddNewUser", "Cancel", Q_NULLPTR));
        lbl_confirm_password->setText(QApplication::translate("AddNewUser", "Confirm Password*", Q_NULLPTR));
        lbl_username_2->setText(QApplication::translate("AddNewUser", "User Role*", Q_NULLPTR));
        cb_user_role->clear();
        cb_user_role->insertItems(0, QStringList()
         << QApplication::translate("AddNewUser", "Select user role", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "cashier", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "Supervisor", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "admin", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "superadmin", Q_NULLPTR)
        );
        lbl_image->setText(QString());
        pushbuttonAvatar->setText(QApplication::translate("AddNewUser", "Open...", Q_NULLPTR));
        avatar_display->setText(QString());
        lbl_username_3->setText(QApplication::translate("AddNewUser", "Set User Status*", Q_NULLPTR));
        cb_user_status->clear();
        cb_user_status->insertItems(0, QStringList()
         << QApplication::translate("AddNewUser", "Select User Status", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "active", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "under evaluation", Q_NULLPTR)
        );
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddNewUser: public Ui_AddNewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWUSER_H
