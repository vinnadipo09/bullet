/********************************************************************************
** Form generated from reading UI file 'profileviewer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILEVIEWER_H
#define UI_PROFILEVIEWER_H

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

class Ui_ProfileViewer
{
public:
    QGroupBox *groupBox;
    QPushButton *btn_closeWindow;
    QLabel *label_12;
    QGroupBox *groupBox_2;
    QLabel *mpEmail;
    QLabel *mp_otherNames;
    QLabel *lbl_email_2;
    QLabel *mp_firstName;
    QLabel *lbl_other_names_2;
    QLabel *lbl_first_name_2;
    QLabel *mp_userRole;
    QLabel *lbl_username_4;
    QGroupBox *groupBox_3;
    QPushButton *pb_change_userName;
    QLabel *mp_userName;
    QPushButton *pb_change_phone;
    QLabel *lbl_username_3;
    QLabel *mp_Phone;
    QPushButton *pb_changePassword;
    QLabel *lbl_admin_3;
    QLabel *mp_password;
    QLabel *lbl_phone_2;
    QLabel *mp_avatar;
    QPushButton *pb_changeAvatar;
    QPushButton *btn_ApplyChanges;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ProfileViewer)
    {
        if (ProfileViewer->objectName().isEmpty())
            ProfileViewer->setObjectName(QStringLiteral("ProfileViewer"));
        ProfileViewer->resize(1136, 829);
        groupBox = new QGroupBox(ProfileViewer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 50, 761, 751));
        btn_closeWindow = new QPushButton(groupBox);
        btn_closeWindow->setObjectName(QStringLiteral("btn_closeWindow"));
        btn_closeWindow->setGeometry(QRect(400, 650, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_closeWindow->setIcon(icon);
        btn_closeWindow->setIconSize(QSize(24, 24));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 30, 571, 21));
        label_12->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_12->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 60, 641, 211));
        mpEmail = new QLabel(groupBox_2);
        mpEmail->setObjectName(QStringLiteral("mpEmail"));
        mpEmail->setGeometry(QRect(230, 104, 201, 31));
        mpEmail->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        mpEmail->setFrameShape(QFrame::Panel);
        mpEmail->setFrameShadow(QFrame::Raised);
        mp_otherNames = new QLabel(groupBox_2);
        mp_otherNames->setObjectName(QStringLiteral("mp_otherNames"));
        mp_otherNames->setGeometry(QRect(230, 72, 201, 31));
        mp_otherNames->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        mp_otherNames->setFrameShape(QFrame::Panel);
        mp_otherNames->setFrameShadow(QFrame::Sunken);
        lbl_email_2 = new QLabel(groupBox_2);
        lbl_email_2->setObjectName(QStringLiteral("lbl_email_2"));
        lbl_email_2->setGeometry(QRect(10, 104, 201, 31));
        QFont font;
        font.setPointSize(12);
        lbl_email_2->setFont(font);
        lbl_email_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_email_2->setFrameShape(QFrame::Panel);
        lbl_email_2->setFrameShadow(QFrame::Raised);
        mp_firstName = new QLabel(groupBox_2);
        mp_firstName->setObjectName(QStringLiteral("mp_firstName"));
        mp_firstName->setGeometry(QRect(230, 40, 201, 31));
        mp_firstName->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        mp_firstName->setFrameShape(QFrame::Panel);
        mp_firstName->setFrameShadow(QFrame::Raised);
        lbl_other_names_2 = new QLabel(groupBox_2);
        lbl_other_names_2->setObjectName(QStringLiteral("lbl_other_names_2"));
        lbl_other_names_2->setGeometry(QRect(10, 72, 201, 31));
        lbl_other_names_2->setFont(font);
        lbl_other_names_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_other_names_2->setFrameShape(QFrame::Panel);
        lbl_other_names_2->setFrameShadow(QFrame::Sunken);
        lbl_first_name_2 = new QLabel(groupBox_2);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(10, 40, 201, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Ubuntu"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        lbl_first_name_2->setFont(font1);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        mp_userRole = new QLabel(groupBox_2);
        mp_userRole->setObjectName(QStringLiteral("mp_userRole"));
        mp_userRole->setGeometry(QRect(230, 138, 201, 31));
        mp_userRole->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        mp_userRole->setFrameShape(QFrame::Panel);
        mp_userRole->setFrameShadow(QFrame::Sunken);
        lbl_username_4 = new QLabel(groupBox_2);
        lbl_username_4->setObjectName(QStringLiteral("lbl_username_4"));
        lbl_username_4->setGeometry(QRect(10, 138, 201, 31));
        lbl_username_4->setFont(font1);
        lbl_username_4->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_username_4->setFrameShape(QFrame::Panel);
        lbl_username_4->setFrameShadow(QFrame::Sunken);
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(50, 280, 641, 341));
        pb_change_userName = new QPushButton(groupBox_3);
        pb_change_userName->setObjectName(QStringLiteral("pb_change_userName"));
        pb_change_userName->setGeometry(QRect(440, 203, 131, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_change_userName->setIcon(icon1);
        mp_userName = new QLabel(groupBox_3);
        mp_userName->setObjectName(QStringLiteral("mp_userName"));
        mp_userName->setGeometry(QRect(230, 202, 201, 31));
        mp_userName->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        mp_userName->setFrameShape(QFrame::Panel);
        mp_userName->setFrameShadow(QFrame::Raised);
        pb_change_phone = new QPushButton(groupBox_3);
        pb_change_phone->setObjectName(QStringLiteral("pb_change_phone"));
        pb_change_phone->setGeometry(QRect(440, 270, 131, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/Pencil-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_change_phone->setIcon(icon2);
        lbl_username_3 = new QLabel(groupBox_3);
        lbl_username_3->setObjectName(QStringLiteral("lbl_username_3"));
        lbl_username_3->setGeometry(QRect(10, 202, 201, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Ubuntu"));
        font2.setPointSize(12);
        lbl_username_3->setFont(font2);
        lbl_username_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_username_3->setFrameShape(QFrame::Panel);
        lbl_username_3->setFrameShadow(QFrame::Raised);
        mp_Phone = new QLabel(groupBox_3);
        mp_Phone->setObjectName(QStringLiteral("mp_Phone"));
        mp_Phone->setGeometry(QRect(230, 270, 201, 31));
        mp_Phone->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        mp_Phone->setFrameShape(QFrame::Panel);
        mp_Phone->setFrameShadow(QFrame::Sunken);
        pb_changePassword = new QPushButton(groupBox_3);
        pb_changePassword->setObjectName(QStringLiteral("pb_changePassword"));
        pb_changePassword->setGeometry(QRect(440, 237, 131, 31));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/resources/newIcons/user.png"), QSize(), QIcon::Normal, QIcon::Off);
        pb_changePassword->setIcon(icon3);
        lbl_admin_3 = new QLabel(groupBox_3);
        lbl_admin_3->setObjectName(QStringLiteral("lbl_admin_3"));
        lbl_admin_3->setGeometry(QRect(10, 236, 201, 31));
        lbl_admin_3->setFont(font);
        lbl_admin_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_admin_3->setFrameShape(QFrame::Panel);
        lbl_admin_3->setFrameShadow(QFrame::Raised);
        mp_password = new QLabel(groupBox_3);
        mp_password->setObjectName(QStringLiteral("mp_password"));
        mp_password->setGeometry(QRect(230, 236, 201, 31));
        mp_password->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        mp_password->setFrameShape(QFrame::Panel);
        mp_password->setFrameShadow(QFrame::Raised);
        lbl_phone_2 = new QLabel(groupBox_3);
        lbl_phone_2->setObjectName(QStringLiteral("lbl_phone_2"));
        lbl_phone_2->setGeometry(QRect(10, 270, 201, 31));
        lbl_phone_2->setFont(font);
        lbl_phone_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_phone_2->setFrameShape(QFrame::Panel);
        lbl_phone_2->setFrameShadow(QFrame::Sunken);
        mp_avatar = new QLabel(groupBox_3);
        mp_avatar->setObjectName(QStringLiteral("mp_avatar"));
        mp_avatar->setGeometry(QRect(20, 30, 171, 141));
        mp_avatar->setStyleSheet(QStringLiteral(""));
        mp_avatar->setFrameShape(QFrame::Panel);
        mp_avatar->setFrameShadow(QFrame::Raised);
        pb_changeAvatar = new QPushButton(groupBox_3);
        pb_changeAvatar->setObjectName(QStringLiteral("pb_changeAvatar"));
        pb_changeAvatar->setGeometry(QRect(200, 140, 131, 31));
        pb_changeAvatar->setIcon(icon1);
        btn_ApplyChanges = new QPushButton(groupBox);
        btn_ApplyChanges->setObjectName(QStringLiteral("btn_ApplyChanges"));
        btn_ApplyChanges->setGeometry(QRect(240, 650, 141, 31));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_ApplyChanges->setIcon(icon4);
        btn_ApplyChanges->setIconSize(QSize(24, 24));
        label = new QLabel(ProfileViewer);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 121, 121));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(ProfileViewer);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, -10, 1131, 831));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(ProfileViewer);

        QMetaObject::connectSlotsByName(ProfileViewer);
    } // setupUi

    void retranslateUi(QDialog *ProfileViewer)
    {
        ProfileViewer->setWindowTitle(QApplication::translate("ProfileViewer", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ProfileViewer", "User Information", Q_NULLPTR));
        btn_closeWindow->setText(QApplication::translate("ProfileViewer", "Close Window", Q_NULLPTR));
        label_12->setText(QApplication::translate("ProfileViewer", "*Please note that User Password is concealed for the security of the users*", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("ProfileViewer", "Static Data", Q_NULLPTR));
        mpEmail->setText(QString());
        mp_otherNames->setText(QString());
        lbl_email_2->setText(QApplication::translate("ProfileViewer", "Email", Q_NULLPTR));
        mp_firstName->setText(QString());
        lbl_other_names_2->setText(QApplication::translate("ProfileViewer", "Other Names", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("ProfileViewer", "First Name", Q_NULLPTR));
        mp_userRole->setText(QString());
        lbl_username_4->setText(QApplication::translate("ProfileViewer", "User Role", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("ProfileViewer", "Editable Data", Q_NULLPTR));
        pb_change_userName->setText(QApplication::translate("ProfileViewer", "Change Username", Q_NULLPTR));
        mp_userName->setText(QString());
        pb_change_phone->setText(QApplication::translate("ProfileViewer", "Change Phone No.", Q_NULLPTR));
        lbl_username_3->setText(QApplication::translate("ProfileViewer", "Username", Q_NULLPTR));
        mp_Phone->setText(QString());
        pb_changePassword->setText(QApplication::translate("ProfileViewer", "Change Password", Q_NULLPTR));
        lbl_admin_3->setText(QApplication::translate("ProfileViewer", "Password", Q_NULLPTR));
        mp_password->setText(QString());
        lbl_phone_2->setText(QApplication::translate("ProfileViewer", "Phone", Q_NULLPTR));
        mp_avatar->setText(QString());
        pb_changeAvatar->setText(QApplication::translate("ProfileViewer", "Change Avatar", Q_NULLPTR));
        btn_ApplyChanges->setText(QApplication::translate("ProfileViewer", "Apply Changes", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ProfileViewer: public Ui_ProfileViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILEVIEWER_H
