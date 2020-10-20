/********************************************************************************
** Form generated from reading UI file 'adminauthentication.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINAUTHENTICATION_H
#define UI_ADMINAUTHENTICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AdminAuthentication
{
public:
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *leuserNameEmail;
    QLabel *label_4;
    QLineEdit *lePassword;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAuthenticate;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCancel;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QDialog *AdminAuthentication)
    {
        if (AdminAuthentication->objectName().isEmpty())
            AdminAuthentication->setObjectName(QStringLiteral("AdminAuthentication"));
        AdminAuthentication->resize(725, 551);
        groupBox = new QGroupBox(AdminAuthentication);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(70, 130, 528, 288));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(100, 100));
        label_5->setMaximumSize(QSize(100, 100));
        label_5->setStyleSheet(QStringLiteral("border-image: url(:/resources/newIcons/Apps-user-info-icon.png);"));
        label_5->setFrameShape(QFrame::Panel);
        label_5->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(label_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(250, 30));
        label_3->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QStringLiteral("Waree"));
        font.setPointSize(16);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_3->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        leuserNameEmail = new QLineEdit(groupBox);
        leuserNameEmail->setObjectName(QStringLiteral("leuserNameEmail"));
        leuserNameEmail->setMinimumSize(QSize(0, 30));
        leuserNameEmail->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setFamily(QStringLiteral("DejaVu Sans"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        leuserNameEmail->setFont(font1);
        leuserNameEmail->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"color: rgb(0, 0, 0);\n"
""));

        formLayout->setWidget(0, QFormLayout::FieldRole, leuserNameEmail);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(250, 30));
        label_4->setMaximumSize(QSize(16777215, 30));
        label_4->setFont(font);
        label_4->setStyleSheet(QLatin1String("background-color: rgb(136, 138, 133);\n"
"color: rgb(238, 238, 236);\n"
"border-radius:4px;\n"
"padding:4px;"));
        label_4->setFrameShape(QFrame::Panel);
        label_4->setFrameShadow(QFrame::Raised);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        lePassword = new QLineEdit(groupBox);
        lePassword->setObjectName(QStringLiteral("lePassword"));
        lePassword->setMinimumSize(QSize(0, 30));
        lePassword->setMaximumSize(QSize(16777215, 30));
        lePassword->setFont(font1);
        lePassword->setStyleSheet(QLatin1String("background-color: rgb(186, 189, 182);\n"
"color: rgb(0, 0, 0);\n"
""));

        formLayout->setWidget(1, QFormLayout::FieldRole, lePassword);


        horizontalLayout_4->addLayout(formLayout);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnAuthenticate = new QPushButton(groupBox);
        btnAuthenticate->setObjectName(QStringLiteral("btnAuthenticate"));
        btnAuthenticate->setMinimumSize(QSize(0, 50));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnAuthenticate->setIcon(icon);
        btnAuthenticate->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnAuthenticate);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCancel = new QPushButton(groupBox);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setMinimumSize(QSize(0, 50));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);
        btnCancel->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout);

        label_2 = new QLabel(AdminAuthentication);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-70, 0, 781, 521));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        label = new QLabel(AdminAuthentication);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));
        label_2->raise();
        groupBox->raise();
        label->raise();

        retranslateUi(AdminAuthentication);

        QMetaObject::connectSlotsByName(AdminAuthentication);
    } // setupUi

    void retranslateUi(QDialog *AdminAuthentication)
    {
        AdminAuthentication->setWindowTitle(QApplication::translate("AdminAuthentication", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AdminAuthentication", "Administrator Authentication", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("AdminAuthentication", "username/gmail", Q_NULLPTR));
        label_4->setText(QApplication::translate("AdminAuthentication", "Password:", Q_NULLPTR));
        btnAuthenticate->setText(QApplication::translate("AdminAuthentication", "Authenticate", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("AdminAuthentication", "Cancel", Q_NULLPTR));
        label_2->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AdminAuthentication: public Ui_AdminAuthentication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINAUTHENTICATION_H
