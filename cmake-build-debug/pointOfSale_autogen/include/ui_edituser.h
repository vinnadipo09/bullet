/********************************************************************************
** Form generated from reading UI file 'edituser.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITUSER_H
#define UI_EDITUSER_H

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

class Ui_EditUser
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLineEdit *le_name;
    QLineEdit *le_email;
    QLabel *lbl_email;
    QLineEdit *le_phone;
    QLineEdit *le_username;
    QLabel *lbl_username;
    QLabel *lbl_phone;
    QLabel *lbl_avatar;
    QPushButton *btnUpdateRecord;
    QPushButton *btnDiscardChanges;
    QLabel *lbl_username_2;
    QComboBox *cb_user_role;
    QLabel *lbl_image;
    QPushButton *pushbuttonAvatar;
    QLabel *avatar_display;
    QLabel *lbl_username_3;
    QComboBox *cb_user_status;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *EditUser)
    {
        if (EditUser->objectName().isEmpty())
            EditUser->setObjectName(QStringLiteral("EditUser"));
        EditUser->resize(912, 753);
        groupBox = new QGroupBox(EditUser);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(210, 100, 551, 511));
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
        lbl_username = new QLabel(groupBox);
        lbl_username->setObjectName(QStringLiteral("lbl_username"));
        lbl_username->setGeometry(QRect(20, 290, 201, 21));
        lbl_username->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_username->setFrameShape(QFrame::Panel);
        lbl_username->setFrameShadow(QFrame::Raised);
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
        btnUpdateRecord = new QPushButton(groupBox);
        btnUpdateRecord->setObjectName(QStringLiteral("btnUpdateRecord"));
        btnUpdateRecord->setGeometry(QRect(90, 410, 141, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/interfaces.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUpdateRecord->setIcon(icon);
        btnUpdateRecord->setIconSize(QSize(24, 24));
        btnDiscardChanges = new QPushButton(groupBox);
        btnDiscardChanges->setObjectName(QStringLiteral("btnDiscardChanges"));
        btnDiscardChanges->setGeometry(QRect(260, 410, 141, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDiscardChanges->setIcon(icon1);
        btnDiscardChanges->setIconSize(QSize(24, 24));
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
        label = new QLabel(EditUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 70, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(EditUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 0, 791, 641));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(EditUser);

        QMetaObject::connectSlotsByName(EditUser);
    } // setupUi

    void retranslateUi(QDialog *EditUser)
    {
        EditUser->setWindowTitle(QApplication::translate("EditUser", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("EditUser", "Edit Existing User", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("EditUser", "Name*", Q_NULLPTR));
        lbl_email->setText(QApplication::translate("EditUser", "Email*", Q_NULLPTR));
        lbl_username->setText(QApplication::translate("EditUser", "Username*", Q_NULLPTR));
        lbl_phone->setText(QApplication::translate("EditUser", "Phone*", Q_NULLPTR));
        lbl_avatar->setText(QApplication::translate("EditUser", "Avtar*", Q_NULLPTR));
        btnUpdateRecord->setText(QApplication::translate("EditUser", "Update Record", Q_NULLPTR));
        btnDiscardChanges->setText(QApplication::translate("EditUser", "Discard Changes", Q_NULLPTR));
        lbl_username_2->setText(QApplication::translate("EditUser", "User Role*", Q_NULLPTR));
        cb_user_role->clear();
        cb_user_role->insertItems(0, QStringList()
         << QApplication::translate("EditUser", "Select user role", Q_NULLPTR)
         << QApplication::translate("EditUser", "cashier", Q_NULLPTR)
         << QApplication::translate("EditUser", "Supervisor", Q_NULLPTR)
         << QApplication::translate("EditUser", "admin", Q_NULLPTR)
         << QApplication::translate("EditUser", "superadmin", Q_NULLPTR)
        );
        lbl_image->setText(QString());
        pushbuttonAvatar->setText(QApplication::translate("EditUser", "Open...", Q_NULLPTR));
        avatar_display->setText(QString());
        lbl_username_3->setText(QApplication::translate("EditUser", "Set User Status*", Q_NULLPTR));
        cb_user_status->clear();
        cb_user_status->insertItems(0, QStringList()
         << QApplication::translate("EditUser", "Select User Status", Q_NULLPTR)
         << QApplication::translate("EditUser", "active", Q_NULLPTR)
         << QApplication::translate("EditUser", "under evaluation", Q_NULLPTR)
        );
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class EditUser: public Ui_EditUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITUSER_H
