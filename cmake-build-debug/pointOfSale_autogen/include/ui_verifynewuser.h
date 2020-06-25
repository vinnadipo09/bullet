/********************************************************************************
** Form generated from reading UI file 'verifynewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYNEWUSER_H
#define UI_VERIFYNEWUSER_H

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

class Ui_VerifyNewUser
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_email;
    QLabel *lbl_date;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QLabel *lbl_admin;
    QPushButton *btn_okay;
    QPushButton *btn_edit;
    QLabel *lbl_time;
    QLabel *lbl_avatar;
    QLabel *label_11;
    QLabel *ver_name;
    QLabel *ver_email;
    QLabel *ver_phone;
    QLabel *ver_time;
    QLabel *ver_username;
    QLabel *ver_admin;
    QLabel *ver_date;
    QLabel *ver_user_role;
    QLabel *lbl_username_2;
    QLabel *lbl_username_3;
    QLabel *ver_user_status;
    QLabel *label_2;

    void setupUi(QDialog *VerifyNewUser)
    {
        if (VerifyNewUser->objectName().isEmpty())
            VerifyNewUser->setObjectName(QStringLiteral("VerifyNewUser"));
        VerifyNewUser->resize(823, 604);
        label = new QLabel(VerifyNewUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(VerifyNewUser);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(140, 10, 591, 561));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(80, 240, 201, 21));
        lbl_first_name->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(80, 270, 201, 21));
        lbl_email->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_email->setFrameShape(QFrame::Panel);
        lbl_email->setFrameShadow(QFrame::Raised);
        lbl_date = new QLabel(groupBox);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setGeometry(QRect(80, 420, 201, 21));
        lbl_date->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(80, 330, 201, 21));
        lbl_username->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(80, 300, 201, 21));
        lbl_phone->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Raised);
        lbl_admin = new QLabel(groupBox);
        lbl_admin->setObjectName(QStringLiteral("lbl_admin"));
        lbl_admin->setGeometry(QRect(80, 480, 201, 21));
        lbl_admin->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_admin->setFrameShape(QFrame::Panel);
        lbl_admin->setFrameShadow(QFrame::Raised);
        btn_okay = new QPushButton(groupBox);
        btn_okay->setObjectName(QStringLiteral("btn_okay"));
        btn_okay->setGeometry(QRect(150, 520, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interfaces.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_okay->setIcon(icon);
        btn_okay->setIconSize(QSize(24, 24));
        btn_edit = new QPushButton(groupBox);
        btn_edit->setObjectName(QStringLiteral("btn_edit"));
        btn_edit->setGeometry(QRect(320, 520, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/Pencil-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit->setIcon(icon1);
        btn_edit->setIconSize(QSize(24, 24));
        lbl_time = new QLabel(groupBox);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(80, 450, 201, 21));
        lbl_time->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_time->setFrameShape(QFrame::Panel);
        lbl_time->setFrameShadow(QFrame::Raised);
        lbl_avatar = new QLabel(groupBox);
        lbl_avatar->setObjectName(QStringLiteral("lbl_avatar"));
        lbl_avatar->setGeometry(QRect(70, 80, 121, 111));
        lbl_avatar->setStyleSheet(QStringLiteral(""));
        lbl_avatar->setFrameShape(QFrame::Panel);
        lbl_avatar->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 30, 571, 21));
        label_11->setStyleSheet(QLatin1String("font: 57 11pt \"Ubuntu\";\n"
"color: rgb(239, 41, 41);\n"
""));
        label_11->setAlignment(Qt::AlignCenter);
        ver_name = new QLabel(groupBox);
        ver_name->setObjectName(QStringLiteral("ver_name"));
        ver_name->setGeometry(QRect(300, 240, 201, 21));
        ver_name->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_name->setFrameShape(QFrame::Panel);
        ver_name->setFrameShadow(QFrame::Raised);
        ver_email = new QLabel(groupBox);
        ver_email->setObjectName(QStringLiteral("ver_email"));
        ver_email->setGeometry(QRect(300, 270, 201, 21));
        ver_email->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_email->setFrameShape(QFrame::Panel);
        ver_email->setFrameShadow(QFrame::Raised);
        ver_phone = new QLabel(groupBox);
        ver_phone->setObjectName(QStringLiteral("ver_phone"));
        ver_phone->setGeometry(QRect(300, 300, 201, 21));
        ver_phone->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_phone->setFrameShape(QFrame::Panel);
        ver_phone->setFrameShadow(QFrame::Raised);
        ver_time = new QLabel(groupBox);
        ver_time->setObjectName(QStringLiteral("ver_time"));
        ver_time->setGeometry(QRect(300, 450, 201, 21));
        ver_time->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_time->setFrameShape(QFrame::Panel);
        ver_time->setFrameShadow(QFrame::Raised);
        ver_username = new QLabel(groupBox);
        ver_username->setObjectName(QStringLiteral("ver_username"));
        ver_username->setGeometry(QRect(300, 330, 201, 21));
        ver_username->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_username->setFrameShape(QFrame::Panel);
        ver_username->setFrameShadow(QFrame::Raised);
        ver_admin = new QLabel(groupBox);
        ver_admin->setObjectName(QStringLiteral("ver_admin"));
        ver_admin->setGeometry(QRect(300, 480, 201, 21));
        ver_admin->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_admin->setFrameShape(QFrame::Panel);
        ver_admin->setFrameShadow(QFrame::Raised);
        ver_date = new QLabel(groupBox);
        ver_date->setObjectName(QStringLiteral("ver_date"));
        ver_date->setGeometry(QRect(300, 420, 201, 21));
        ver_date->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_date->setFrameShape(QFrame::Panel);
        ver_date->setFrameShadow(QFrame::Raised);
        ver_user_role = new QLabel(groupBox);
        ver_user_role->setObjectName(QStringLiteral("ver_user_role"));
        ver_user_role->setGeometry(QRect(300, 360, 201, 21));
        ver_user_role->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_user_role->setFrameShape(QFrame::Panel);
        ver_user_role->setFrameShadow(QFrame::Raised);
        lbl_username_2 = new QLabel(groupBox);
        lbl_username_2->setObjectName(QStringLiteral("lbl_username_2"));
        lbl_username_2->setGeometry(QRect(80, 360, 201, 21));
        lbl_username_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username_2->setFrameShape(QFrame::Panel);
        lbl_username_2->setFrameShadow(QFrame::Raised);
        lbl_username_3 = new QLabel(groupBox);
        lbl_username_3->setObjectName(QStringLiteral("lbl_username_3"));
        lbl_username_3->setGeometry(QRect(80, 390, 201, 21));
        lbl_username_3->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username_3->setFrameShape(QFrame::Panel);
        lbl_username_3->setFrameShadow(QFrame::Raised);
        ver_user_status = new QLabel(groupBox);
        ver_user_status->setObjectName(QStringLiteral("ver_user_status"));
        ver_user_status->setGeometry(QRect(300, 390, 201, 21));
        ver_user_status->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        ver_user_status->setFrameShape(QFrame::Panel);
        ver_user_status->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(VerifyNewUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 821, 601));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label->raise();
        label_2->raise();
        groupBox->raise();

        retranslateUi(VerifyNewUser);

        QMetaObject::connectSlotsByName(VerifyNewUser);
    } // setupUi

    void retranslateUi(QDialog *VerifyNewUser)
    {
        VerifyNewUser->setWindowTitle(QApplication::translate("VerifyNewUser", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("VerifyNewUser", "Add New User", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("VerifyNewUser", "Name", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("VerifyNewUser", "Email", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("VerifyNewUser", "Entry Date", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("VerifyNewUser", "Username", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("VerifyNewUser", "Phone", Q_NULLPTR));
        lbl_admin->setText(QApplication::translate("VerifyNewUser", "Entered By", Q_NULLPTR));
        btn_okay->setText(QApplication::translate("VerifyNewUser", "Save", Q_NULLPTR));
        btn_edit->setText(QApplication::translate("VerifyNewUser", "Edit", Q_NULLPTR));
        lbl_time->setText(QApplication::translate("VerifyNewUser", "Entry Time", Q_NULLPTR));
        lbl_avatar->setText(QString());
        label_11->setText(QApplication::translate("VerifyNewUser", "*Please carefully review all the information before saving in the database*", Q_NULLPTR));
        ver_name->setText(QString());
        ver_email->setText(QString());
        ver_phone->setText(QString());
        ver_time->setText(QString());
        ver_username->setText(QString());
        ver_admin->setText(QString());
        ver_date->setText(QString());
        ver_user_role->setText(QString());
        lbl_username_2->setText(QApplication::translate("VerifyNewUser", "User Role", Q_NULLPTR));
        lbl_username_3->setText(QApplication::translate("VerifyNewUser", "User Status", Q_NULLPTR));
        ver_user_status->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VerifyNewUser: public Ui_VerifyNewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYNEWUSER_H
