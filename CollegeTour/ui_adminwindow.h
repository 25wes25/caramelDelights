/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *SouvenirTab;
    QWidget *tab;
    QGridLayout *gridLayout;
    QGroupBox *addBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *souvenirName;
    QLabel *label_2;
    QLineEdit *souvenirPrice;
    QPushButton *sumbitSouvenirButton;
    QTableView *souvenirTableView;
    QPushButton *addSouvenirButton;
    QPushButton *deleteSouvenirButton;
    QPushButton *modifySouvenir;
    QGroupBox *deleteBox;
    QWidget *tab_2;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(749, 499);
        verticalLayout = new QVBoxLayout(AdminWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SouvenirTab = new QTabWidget(AdminWindow);
        SouvenirTab->setObjectName(QStringLiteral("SouvenirTab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        addBox = new QGroupBox(tab);
        addBox->setObjectName(QStringLiteral("addBox"));
        formLayout = new QFormLayout(addBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(addBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        souvenirName = new QLineEdit(addBox);
        souvenirName->setObjectName(QStringLiteral("souvenirName"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, souvenirName);

        label_2 = new QLabel(addBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        souvenirPrice = new QLineEdit(addBox);
        souvenirPrice->setObjectName(QStringLiteral("souvenirPrice"));

        formLayout->setWidget(3, QFormLayout::LabelRole, souvenirPrice);

        sumbitSouvenirButton = new QPushButton(addBox);
        sumbitSouvenirButton->setObjectName(QStringLiteral("sumbitSouvenirButton"));

        formLayout->setWidget(4, QFormLayout::LabelRole, sumbitSouvenirButton);


        gridLayout->addWidget(addBox, 3, 0, 1, 1);

        souvenirTableView = new QTableView(tab);
        souvenirTableView->setObjectName(QStringLiteral("souvenirTableView"));

        gridLayout->addWidget(souvenirTableView, 3, 1, 1, 1);

        addSouvenirButton = new QPushButton(tab);
        addSouvenirButton->setObjectName(QStringLiteral("addSouvenirButton"));

        gridLayout->addWidget(addSouvenirButton, 0, 1, 1, 1);

        deleteSouvenirButton = new QPushButton(tab);
        deleteSouvenirButton->setObjectName(QStringLiteral("deleteSouvenirButton"));

        gridLayout->addWidget(deleteSouvenirButton, 1, 1, 1, 1);

        modifySouvenir = new QPushButton(tab);
        modifySouvenir->setObjectName(QStringLiteral("modifySouvenir"));

        gridLayout->addWidget(modifySouvenir, 2, 1, 1, 1);

        deleteBox = new QGroupBox(tab);
        deleteBox->setObjectName(QStringLiteral("deleteBox"));

        gridLayout->addWidget(deleteBox, 3, 2, 1, 1);

        SouvenirTab->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        SouvenirTab->addTab(tab_2, QString());

        verticalLayout->addWidget(SouvenirTab);


        retranslateUi(AdminWindow);

        SouvenirTab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", Q_NULLPTR));
        addBox->setTitle(QApplication::translate("AdminWindow", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("AdminWindow", "Name of Souvenir", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminWindow", "Price ", Q_NULLPTR));
        sumbitSouvenirButton->setText(QApplication::translate("AdminWindow", "Sumbit", Q_NULLPTR));
        addSouvenirButton->setText(QApplication::translate("AdminWindow", "Add Souvenir ", Q_NULLPTR));
        deleteSouvenirButton->setText(QApplication::translate("AdminWindow", "Delete Souvenir", Q_NULLPTR));
        modifySouvenir->setText(QApplication::translate("AdminWindow", "Modify Souvenir Price", Q_NULLPTR));
        deleteBox->setTitle(QApplication::translate("AdminWindow", "Delete", Q_NULLPTR));
        SouvenirTab->setTabText(SouvenirTab->indexOf(tab), QApplication::translate("AdminWindow", "Souvenir", Q_NULLPTR));
        SouvenirTab->setTabText(SouvenirTab->indexOf(tab_2), QApplication::translate("AdminWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
