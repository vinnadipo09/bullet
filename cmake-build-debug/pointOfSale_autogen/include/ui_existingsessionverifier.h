/********************************************************************************
** Form generated from reading UI file 'existingsessionverifier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXISTINGSESSIONVERIFIER_H
#define UI_EXISTINGSESSIONVERIFIER_H

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

class Ui_ExistingSessionVerifier
{
public:
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QPushButton *btnContinueSession;
    QPushButton *btnEndSession;
    QLabel *lblSessionName;
    QPushButton *btnCancel;
    QLabel *lbl_first_name_2;
    QLabel *lblSessionType;
    QLabel *lbl_first_name_3;
    QLabel *lblSessionCash;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *ExistingSessionVerifier)
    {
        if (ExistingSessionVerifier->objectName().isEmpty())
            ExistingSessionVerifier->setObjectName(QStringLiteral("ExistingSessionVerifier"));
        ExistingSessionVerifier->resize(677, 380);
        groupBox = new QGroupBox(ExistingSessionVerifier);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(150, 100, 431, 211));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(12, 30, 181, 31));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        btnContinueSession = new QPushButton(groupBox);
        btnContinueSession->setObjectName(QStringLiteral("btnContinueSession"));
        btnContinueSession->setGeometry(QRect(20, 160, 83, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/edit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnContinueSession->setIcon(icon);
        btnContinueSession->setIconSize(QSize(24, 24));
        btnEndSession = new QPushButton(groupBox);
        btnEndSession->setObjectName(QStringLiteral("btnEndSession"));
        btnEndSession->setGeometry(QRect(140, 160, 114, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEndSession->setIcon(icon1);
        btnEndSession->setIconSize(QSize(24, 24));
        lblSessionName = new QLabel(groupBox);
        lblSessionName->setObjectName(QStringLiteral("lblSessionName"));
        lblSessionName->setGeometry(QRect(220, 30, 201, 31));
        lblSessionName->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblSessionName->setFrameShape(QFrame::Panel);
        lblSessionName->setFrameShadow(QFrame::Raised);
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(270, 160, 101, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/icons8-delete-bin-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon2);
        btnCancel->setIconSize(QSize(24, 24));
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(12, 70, 181, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        lblSessionType = new QLabel(groupBox);
        lblSessionType->setObjectName(QStringLiteral("lblSessionType"));
        lblSessionType->setGeometry(QRect(220, 70, 201, 31));
        lblSessionType->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblSessionType->setFrameShape(QFrame::Panel);
        lblSessionType->setFrameShadow(QFrame::Raised);
        lbl_first_name_3 = new QLabel(groupBox);
        lbl_first_name_3->setObjectName(QStringLiteral("lbl_first_name_3"));
        lbl_first_name_3->setGeometry(QRect(12, 110, 181, 31));
        lbl_first_name_3->setFont(font);
        lbl_first_name_3->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_3->setFrameShape(QFrame::Panel);
        lbl_first_name_3->setFrameShadow(QFrame::Raised);
        lblSessionCash = new QLabel(groupBox);
        lblSessionCash->setObjectName(QStringLiteral("lblSessionCash"));
        lblSessionCash->setGeometry(QRect(220, 110, 201, 31));
        lblSessionCash->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        lblSessionCash->setFrameShape(QFrame::Panel);
        lblSessionCash->setFrameShadow(QFrame::Raised);
        label = new QLabel(ExistingSessionVerifier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2 = new QLabel(ExistingSessionVerifier);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 0, 621, 361));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(ExistingSessionVerifier);

        QMetaObject::connectSlotsByName(ExistingSessionVerifier);
    } // setupUi

    void retranslateUi(QDialog *ExistingSessionVerifier)
    {
        ExistingSessionVerifier->setWindowTitle(QApplication::translate("ExistingSessionVerifier", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ExistingSessionVerifier", "Session Verification", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("ExistingSessionVerifier", "Session Name", Q_NULLPTR));
        btnContinueSession->setText(QApplication::translate("ExistingSessionVerifier", "Continue", Q_NULLPTR));
        btnEndSession->setText(QApplication::translate("ExistingSessionVerifier", "Close", Q_NULLPTR));
        lblSessionName->setText(QString());
        btnCancel->setText(QApplication::translate("ExistingSessionVerifier", "Cancel", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("ExistingSessionVerifier", "Session Type", Q_NULLPTR));
        lblSessionType->setText(QString());
        lbl_first_name_3->setText(QApplication::translate("ExistingSessionVerifier", "Session Cash in Drawer", Q_NULLPTR));
        lblSessionCash->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExistingSessionVerifier: public Ui_ExistingSessionVerifier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXISTINGSESSIONVERIFIER_H
