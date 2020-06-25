/********************************************************************************
** Form generated from reading UI file 'changeavatar.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEAVATAR_H
#define UI_CHANGEAVATAR_H

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

class Ui_ChangeAvatar
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *ChangeAvatar)
    {
        if (ChangeAvatar->objectName().isEmpty())
            ChangeAvatar->setObjectName(QStringLiteral("ChangeAvatar"));
        ChangeAvatar->resize(460, 352);
        label_2 = new QLabel(ChangeAvatar);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 461, 351));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(ChangeAvatar);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 401, 331));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 241, 201));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 240, 241, 21));
        label_3->setFrameShape(QFrame::Panel);
        label_3->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 236, 121, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/newIcons/App-user-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(24, 24));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(90, 280, 80, 31));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/newIcons/check-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(24, 24));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(200, 280, 80, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/newIcons/missed-calls-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(24, 24));

        retranslateUi(ChangeAvatar);

        QMetaObject::connectSlotsByName(ChangeAvatar);
    } // setupUi

    void retranslateUi(QDialog *ChangeAvatar)
    {
        ChangeAvatar->setWindowTitle(QApplication::translate("ChangeAvatar", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("ChangeAvatar", "Change Avatar", Q_NULLPTR));
        label->setText(QString());
        label_3->setText(QApplication::translate("ChangeAvatar", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ChangeAvatar", "Browse Avatar", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("ChangeAvatar", "Save", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("ChangeAvatar", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChangeAvatar: public Ui_ChangeAvatar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEAVATAR_H
