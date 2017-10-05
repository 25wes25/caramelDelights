/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLabel *label;
    QLabel *printNewUserLabel;
    QLabel *label_2;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(721, 510);
        UserNameInput = new QLineEdit(login);
        UserNameInput->setObjectName(QStringLiteral("UserNameInput"));
        UserNameInput->setGeometry(QRect(60, 230, 591, 20));
        PasswordInput = new QLineEdit(login);
        PasswordInput->setObjectName(QStringLiteral("PasswordInput"));
        PasswordInput->setGeometry(QRect(60, 290, 591, 20));
        PasswordInput->setEchoMode(QLineEdit::Password);
        userNameLabel = new QLabel(login);
        userNameLabel->setObjectName(QStringLiteral("userNameLabel"));
        userNameLabel->setGeometry(QRect(60, 210, 141, 21));
        passwordLabel = new QLabel(login);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(60, 270, 141, 21));
        CreateCheckBox = new QCheckBox(login);
        CreateCheckBox->setObjectName(QStringLiteral("CreateCheckBox"));
        CreateCheckBox->setGeometry(QRect(60, 310, 91, 41));
        LoginButton = new QPushButton(login);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(490, 320, 75, 23));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(570, 320, 81, 23));
        AdminInput = new QLineEdit(login);
        AdminInput->setObjectName(QStringLiteral("AdminInput"));
        AdminInput->setGeometry(QRect(290, 320, 181, 21));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(220, 310, 61, 41));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 10, 601, 331));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/CollegeTourTitle.png")));
        label->setScaledContents(true);
        label->setWordWrap(false);
        printNewUserLabel = new QLabel(login);
        printNewUserLabel->setObjectName(QStringLiteral("printNewUserLabel"));
        printNewUserLabel->setGeometry(QRect(290, 350, 361, 21));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 0, 341, 201));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pictures/scrollllll.png")));
        label_2->setScaledContents(true);
        label_2->raise();
        label->raise();
        UserNameInput->raise();
        PasswordInput->raise();
        userNameLabel->raise();
        passwordLabel->raise();
        CreateCheckBox->raise();
        LoginButton->raise();
        pushButton_2->raise();
        AdminInput->raise();
        label_3->raise();
        printNewUserLabel->raise();

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        userNameLabel->setText(QApplication::translate("login", "Username:", Q_NULLPTR));
        passwordLabel->setText(QApplication::translate("login", "Password:", Q_NULLPTR));
        CreateCheckBox->setText(QApplication::translate("login", "Create User", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("login", "Login", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("login", "Help", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "Admin code:", Q_NULLPTR));
        label->setText(QString());
        printNewUserLabel->setText(QApplication::translate("login", ".", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
