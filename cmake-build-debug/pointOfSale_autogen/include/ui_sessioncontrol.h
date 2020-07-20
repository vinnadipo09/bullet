/********************************************************************************
** Form generated from reading UI file 'sessioncontrol.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SESSIONCONTROL_H
#define UI_SESSIONCONTROL_H

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

class Ui_SessionControl
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QPushButton *btnApply;
    QPushButton *btnCancel;
    QLabel *lbl_first_name_2;
    QLabel *lblName;
    QLineEdit *leCashInDrawer;
    QLabel *label_2;

    void setupUi(QDialog *SessionControl)
    {
        if (SessionControl->objectName().isEmpty())
            SessionControl->setObjectName(QStringLiteral("SessionControl"));
        SessionControl->resize(653, 411);
        label = new QLabel(SessionControl);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        groupBox = new QGroupBox(SessionControl);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 60, 461, 291));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(10, 50, 191, 31));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        btnApply = new QPushButton(groupBox);
        btnApply->setObjectName(QStringLiteral("btnApply"));
        btnApply->setGeometry(QRect(70, 190, 114, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btnApply->setIcon(icon);
        btnApply->setIconSize(QSize(24, 24));
        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setGeometry(QRect(210, 190, 101, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/icons8-delete-bin-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(24, 24));
        lbl_first_name_2 = new QLabel(groupBox);
        lbl_first_name_2->setObjectName(QStringLiteral("lbl_first_name_2"));
        lbl_first_name_2->setGeometry(QRect(10, 100, 191, 31));
        lbl_first_name_2->setFont(font);
        lbl_first_name_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name_2->setFrameShape(QFrame::Panel);
        lbl_first_name_2->setFrameShadow(QFrame::Raised);
        lblName = new QLabel(groupBox);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(220, 50, 191, 31));
        lblName->setFont(font);
        lblName->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lblName->setFrameShape(QFrame::Panel);
        lblName->setFrameShadow(QFrame::Raised);
        leCashInDrawer = new QLineEdit(groupBox);
        leCashInDrawer->setObjectName(QStringLiteral("leCashInDrawer"));
        leCashInDrawer->setGeometry(QRect(220, 100, 191, 31));
        label_2 = new QLabel(SessionControl);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 651, 411));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label_2->raise();
        label->raise();
        groupBox->raise();

        retranslateUi(SessionControl);

        QMetaObject::connectSlotsByName(SessionControl);
    } // setupUi

    void retranslateUi(QDialog *SessionControl)
    {
        SessionControl->setWindowTitle(QApplication::translate("SessionControl", "Dialog", Q_NULLPTR));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("SessionControl", "Session Control", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("SessionControl", "Authorizing Personnel:", Q_NULLPTR));
        btnApply->setText(QApplication::translate("SessionControl", "Apply", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("SessionControl", "Cancel", Q_NULLPTR));
        lbl_first_name_2->setText(QApplication::translate("SessionControl", "Cash in Drawer:", Q_NULLPTR));
        lblName->setText(QString());
        leCashInDrawer->setPlaceholderText(QApplication::translate("SessionControl", "Enter Cash in Drawer", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SessionControl: public Ui_SessionControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SESSIONCONTROL_H
