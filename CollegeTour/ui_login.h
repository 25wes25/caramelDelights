/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *UserNameInput;
    QLineEdit *PasswordInput;
    QLabel *userNameLabel;
    QLabel *passwordLabel;
    QCheckBox *CreateCheckBox;
    QPushButton *LoginButton;
    QPushButton *pushButton_2;
    QLineEdit *AdminInput;
    QLabel *label_3;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(717, 510);
        UserNameInput = new QLineEdit(login);
        UserNameInput->setObjectName(QStringLiteral("UserNameInput"));
        UserNameInput->setGeometry(QRect(60, 230, 591, 20));
        PasswordInput = new QLineEdit(login);
        PasswordInput->setObjectName(QStringLiteral("PasswordInput"));
        PasswordInput->setGeometry(QRect(60, 290, 591, 20));
        userNameLabel = new QLabel(login);
        userNameLabel->setObjectName(QStringLiteral("userNameLabel"));
        userNameLabel->setGeometry(QRect(60, 210, 141, 21));
        passwordLabel = new QLabel(login);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(60, 270, 141, 21));
        CreateCheckBox = new QCheckBox(login);
        CreateCheckBox->setObjectName(QStringLiteral("CreateCheckBox"));
        CreateCheckBox->setGeometry(QRect(60, 320, 91, 31));
        LoginButton = new QPushButton(login);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(490, 320, 75, 23));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 320, 81, 23));
        AdminInput = new QLineEdit(login);
        AdminInput->setObjectName(QStringLiteral("AdminInput"));
        AdminInput->setGeometry(QRect(290, 320, 171, 21));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 310, 71, 51));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", 0));
        userNameLabel->setText(QApplication::translate("login", "Username:", 0));
        passwordLabel->setText(QApplication::translate("login", "Password:", 0));
        CreateCheckBox->setText(QApplication::translate("login", "Create User", 0));
        LoginButton->setText(QApplication::translate("login", "Login", 0));
        pushButton_2->setText(QApplication::translate("login", "Help", 0));
        label_3->setText(QApplication::translate("login", "Admin code:", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
