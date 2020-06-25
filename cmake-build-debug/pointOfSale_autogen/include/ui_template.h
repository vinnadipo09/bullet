/********************************************************************************
** Form generated from reading UI file 'template.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPLATE_H
#define UI_TEMPLATE_H

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

class Ui_Template
{
public:
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *lbl_first_name;
    QLabel *lbl_other_names;
    QPushButton *btn_edit_view;
    QPushButton *btn_close_view;
    QLabel *view_first_name;
    QLabel *view_other_names;
    QPushButton *btn_delete_user;
    QLabel *label;

    void setupUi(QDialog *Template)
    {
        if (Template->objectName().isEmpty())
            Template->setObjectName(QStringLiteral("Template"));
        Template->resize(1024, 768);
        label_2 = new QLabel(Template);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 30, 481, 311));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/resources/background/picklit.jpg);"));
        groupBox = new QGroupBox(Template);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(120, 80, 361, 201));
        lbl_first_name = new QLabel(groupBox);
        lbl_first_name->setObjectName(QStringLiteral("lbl_first_name"));
        lbl_first_name->setGeometry(QRect(12, 30, 89, 21));
        QFont font;
        font.setPointSize(12);
        lbl_first_name->setFont(font);
        lbl_first_name->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(238, 238, 236);"));
        lbl_first_name->setFrameShape(QFrame::Panel);
        lbl_first_name->setFrameShadow(QFrame::Raised);
        lbl_other_names = new QLabel(groupBox);
        lbl_other_names->setObjectName(QStringLiteral("lbl_other_names"));
        lbl_other_names->setGeometry(QRect(12, 65, 107, 21));
        lbl_other_names->setFont(font);
        lbl_other_names->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        lbl_other_names->setFrameShape(QFrame::Panel);
        lbl_other_names->setFrameShadow(QFrame::Sunken);
        btn_edit_view = new QPushButton(groupBox);
        btn_edit_view->setObjectName(QStringLiteral("btn_edit_view"));
        btn_edit_view->setGeometry(QRect(12, 99, 83, 30));
        QIcon icon;
        icon.addFile(QStringLiteral(":/resources/icons/edit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_edit_view->setIcon(icon);
        btn_edit_view->setIconSize(QSize(24, 24));
        btn_close_view = new QPushButton(groupBox);
        btn_close_view->setObjectName(QStringLiteral("btn_close_view"));
        btn_close_view->setGeometry(QRect(101, 99, 114, 30));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/resources/icons/signs (3).png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_close_view->setIcon(icon1);
        btn_close_view->setIconSize(QSize(24, 24));
        view_first_name = new QLabel(groupBox);
        view_first_name->setObjectName(QStringLiteral("view_first_name"));
        view_first_name->setGeometry(QRect(175, 30, 16, 16));
        view_first_name->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_first_name->setFrameShape(QFrame::Panel);
        view_first_name->setFrameShadow(QFrame::Raised);
        view_other_names = new QLabel(groupBox);
        view_other_names->setObjectName(QStringLiteral("view_other_names"));
        view_other_names->setGeometry(QRect(175, 65, 16, 16));
        view_other_names->setStyleSheet(QStringLiteral("background-color: rgb(186, 189, 182);"));
        view_other_names->setFrameShape(QFrame::Panel);
        view_other_names->setFrameShadow(QFrame::Sunken);
        btn_delete_user = new QPushButton(groupBox);
        btn_delete_user->setObjectName(QStringLiteral("btn_delete_user"));
        btn_delete_user->setGeometry(QRect(248, 99, 101, 30));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/resources/icons/icons8-delete-bin-96.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_delete_user->setIcon(icon2);
        btn_delete_user->setIconSize(QSize(24, 24));
        label = new QLabel(Template);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 30, 101, 101));
        label->setStyleSheet(QStringLiteral("border-image: url(:/resources/icons/Logo2.png);"));

        retranslateUi(Template);

        QMetaObject::connectSlotsByName(Template);
    } // setupUi

    void retranslateUi(QDialog *Template)
    {
        Template->setWindowTitle(QApplication::translate("Template", "Dialog", Q_NULLPTR));
        label_2->setText(QString());
        groupBox->setTitle(QApplication::translate("Template", "User Information", Q_NULLPTR));
        lbl_first_name->setText(QApplication::translate("Template", "First Name", Q_NULLPTR));
        lbl_other_names->setText(QApplication::translate("Template", "Other Names", Q_NULLPTR));
        btn_edit_view->setText(QApplication::translate("Template", "Edit Info", Q_NULLPTR));
        btn_close_view->setText(QApplication::translate("Template", "Close Window", Q_NULLPTR));
        view_first_name->setText(QString());
        view_other_names->setText(QString());
        btn_delete_user->setText(QApplication::translate("Template", "Delete User", Q_NULLPTR));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Template: public Ui_Template {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPLATE_H
