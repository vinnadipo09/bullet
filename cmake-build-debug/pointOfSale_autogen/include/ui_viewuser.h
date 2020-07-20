/********************************************************************************
** Form generated from reading UI file 'viewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWUSER_H
#define UI_VIEWUSER_H

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

class Ui_ViewUser
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_email;
    QLabel *lbl_date;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QLabel *lbl_admin;
    QPushButton *btnEditUser;
    QPushButton *btn_close_view;
    QLabel *lbl_time;
    QLabel *lbl_avatar;
    QLabel *label_11;
    QLabel *view_name;
    QLabel *view_email;
    QLabel *view_phone;
    QLabel *view_time;
    QLabel *view_username;
    QLabel *view_admin;
    QLabel *view_date;
    QLabel *view_user_role;
    QLabel *lbl_username_2;
    QPushButton *btnDeleteUser;
    QPushButton *btnResetPassword;
    QLabel *lbl_admin_2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ViewUser)
    {
        if (ViewUser->objectName().isEmpty())
            ViewUser->setObjectName(QStringLiteral("ViewUser"));
        ViewUser->resize(980, 767);
        groupBox = new QGroupBox(ViewUser);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(130, 30, 681, 641));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(130, 310, 201, 31));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        lbl_email = new QLabel(groupBox);
        lbl_email->setObjectName(QStringLiteral("lbl_email"));
        lbl_email->setGeometry(QRect(130, 340, 201, 31));
        lbl_email->setFont(font);
        lbl_email->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_email->setFrameShape(QFrame::Panel);
        lbl_email->setFrameShadow(QFrame::Raised);
        lbl_date = new QLabel(groupBox);
        lbl_date->setObjectName(QStringLiteral("lbl_date"));
        lbl_date->setGeometry(QRect(130, 460, 201, 31));
        lbl_date->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_date->setFrameShape(QFrame::Panel);
        lbl_date->setFrameShadow(QFrame::Raised);
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(130, 400, 201, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Vemana2000"));
        font1.setPointSize(12);
        lbl_username->setFont(font1);
        lbl_username->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
        lbl_phone = new QLabel(groupBox);
        lbl_phone->setObjectName(QStringLiteral("lbl_phone"));
        lbl_phone->setGeometry(QRect(130, 370, 201, 31));
        lbl_phone->setFont(font);
        lbl_phone->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_phone->setFrameShape(QFrame::Panel);
        lbl_phone->setFrameShadow(QFrame::Sunken);
        lbl_admin = new QLabel(groupBox);
        lbl_admin->setObjectName(QStringLiteral("lbl_admin"));
        lbl_admin->setGeometry(QRect(130, 520, 201, 31));
        lbl_admin->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_admin->setFrameShape(QFrame::Panel);
        lbl_admin->setFrameShadow(QFrame::Raised);
        btnEditUser = new QPushButton(groupBox);
        btnEditUser->setObjectName(QStringLiteral("btnEditUser"));
        btnEditUser->setGeometry(QRect(110, 600, 111, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/edit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEditUser->setIcon(icon);
        btnEditUser->setIconSize(QSize(24, 24));
        btn_close_view = new QPushButton(groupBox);
        btn_close_view->setObjectName(QStringLiteral("btn_close_view"));
        btn_close_view->setGeometry(QRect(300, 600, 131, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close_view->setIcon(icon1);
        btn_close_view->setIconSize(QSize(24, 24));
        lbl_time = new QLabel(groupBox);
        lbl_time->setObjectName(QStringLiteral("lbl_time"));
        lbl_time->setGeometry(QRect(130, 490, 201, 31));
        lbl_time->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_time->setFrameShape(QFrame::Panel);
        lbl_time->setFrameShadow(QFrame::Sunken);
        lbl_avatar = new QLabel(groupBox);
        lbl_avatar->setObjectName(QStringLiteral("lbl_avatar"));
        lbl_avatar->setGeometry(QRect(70, 80, 191, 181));
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
        view_name = new QLabel(groupBox);
        view_name->setObjectName(QStringLiteral("view_name"));
        view_name->setGeometry(QRect(350, 310, 201, 31));
        view_name->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_name->setFrameShape(QFrame::Panel);
        view_name->setFrameShadow(QFrame::Raised);
        view_email = new QLabel(groupBox);
        view_email->setObjectName(QStringLiteral("view_email"));
        view_email->setGeometry(QRect(350, 340, 201, 31));
        view_email->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_email->setFrameShape(QFrame::Panel);
        view_email->setFrameShadow(QFrame::Raised);
        view_phone = new QLabel(groupBox);
        view_phone->setObjectName(QStringLiteral("view_phone"));
        view_phone->setGeometry(QRect(350, 370, 201, 31));
        view_phone->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_phone->setFrameShape(QFrame::Panel);
        view_phone->setFrameShadow(QFrame::Sunken);
        view_time = new QLabel(groupBox);
        view_time->setObjectName(QStringLiteral("view_time"));
        view_time->setGeometry(QRect(350, 490, 201, 31));
        view_time->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_time->setFrameShape(QFrame::Panel);
        view_time->setFrameShadow(QFrame::Sunken);
        view_username = new QLabel(groupBox);
        view_username->setObjectName(QStringLiteral("view_username"));
        view_username->setGeometry(QRect(350, 400, 201, 31));
        view_username->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_username->setFrameShape(QFrame::Panel);
        view_username->setFrameShadow(QFrame::Raised);
        view_admin = new QLabel(groupBox);
        view_admin->setObjectName(QStringLiteral("view_admin"));
        view_admin->setGeometry(QRect(350, 520, 201, 31));
        view_admin->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_admin->setFrameShape(QFrame::Panel);
        view_admin->setFrameShadow(QFrame::Raised);
        view_date = new QLabel(groupBox);
        view_date->setObjectName(QStringLiteral("view_date"));
        view_date->setGeometry(QRect(350, 460, 201, 31));
        view_date->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_date->setFrameShape(QFrame::Panel);
        view_date->setFrameShadow(QFrame::Raised);
        view_user_role = new QLabel(groupBox);
        view_user_role->setObjectName(QStringLiteral("view_user_role"));
        view_user_role->setGeometry(QRect(350, 430, 201, 31));
        view_user_role->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_user_role->setFrameShape(QFrame::Panel);
        view_user_role->setFrameShadow(QFrame::Sunken);
        lbl_username_2 = new QLabel(groupBox);
        lbl_username_2->setObjectName(QStringLiteral("lbl_username_2"));
        lbl_username_2->setGeometry(QRect(130, 430, 201, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Umpush"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbl_username_2->setFont(font2);
        lbl_username_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username_2->setFrameShape(QFrame::Panel);
        lbl_username_2->setFrameShadow(QFrame::Sunken);
        btnDeleteUser = new QPushButton(groupBox);
        btnDeleteUser->setObjectName(QStringLiteral("btnDeleteUser"));
        btnDeleteUser->setGeometry(QRect(480, 600, 141, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/icons8-delete-bin-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDeleteUser->setIcon(icon2);
        btnDeleteUser->setIconSize(QSize(24, 24));
        btnResetPassword = new QPushButton(groupBox);
        btnResetPassword->setObjectName(QStringLiteral("btnResetPassword"));
        btnResetPassword->setGeometry(QRect(350, 550, 131, 31));
        btnResetPassword->setIcon(icon);
        btnResetPassword->setIconSize(QSize(24, 24));
        lbl_admin_2 = new QLabel(groupBox);
        lbl_admin_2->setObjectName(QStringLiteral("lbl_admin_2"));
        lbl_admin_2->setGeometry(QRect(130, 550, 201, 31));
        lbl_admin_2->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_admin_2->setFrameShape(QFrame::Panel);
        lbl_admin_2->setFrameShadow(QFrame::Raised);
        label = new QLabel(ViewUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(ViewUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 981, 761));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(ViewUser);

        QMetaObject::connectSlotsByName(ViewUser);
    } // setupUi

    void retranslateUi(QDialog *ViewUser)
    {
        ViewUser->setWindowTitle(QApplication::translate("ViewUser", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ViewUser", "User Information", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("ViewUser", "Name", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("ViewUser", "Email", Q_NULLPTR));
        lbl_date->setText(QApplication::translate("ViewUser", "Entry Date", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("ViewUser", "Username", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("ViewUser", "Phone", Q_NULLPTR));
        lbl_admin->setText(QApplication::translate("ViewUser", "Entered By", Q_NULLPTR));
        btnEditUser->setText(QApplication::translate("ViewUser", "Edit Info", Q_NULLPTR));
        btn_close_view->setText(QApplication::translate("ViewUser", "Close Window", Q_NULLPTR));
        lbl_time->setText(QApplication::translate("ViewUser", "Entry Time", Q_NULLPTR));
        lbl_avatar->setText(QString());
        label_11->setText(QApplication::translate("ViewUser", "*Please note that User Password is concealed for the security of the users*", Q_NULLPTR));
        view_name->setText(QString());
        view_email->setText(QString());
        view_phone->setText(QString());
        view_time->setText(QString());
        view_username->setText(QString());
        view_admin->setText(QString());
        view_date->setText(QString());
        view_user_role->setText(QString());
        lbl_username_2->setText(QApplication::translate("ViewUser", "User Role", Q_NULLPTR));
        btnDeleteUser->setText(QApplication::translate("ViewUser", "Delete User", Q_NULLPTR));
        btnResetPassword->setText(QApplication::translate("ViewUser", "Reset Password", Q_NULLPTR));
        lbl_admin_2->setText(QApplication::translate("ViewUser", "Default Password to [1234]", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ViewUser: public Ui_ViewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWUSER_H
