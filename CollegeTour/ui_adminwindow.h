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
    QGroupBox *deleteBox;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *deleteCollegeName;
    QLabel *label_5;
    QLineEdit *deleteSouvenirName;
    QPushButton *deleteSouvenirButtonBox;
    QGroupBox *addBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *souvenirName;
    QLabel *label_2;
    QPushButton *sumbitSouvenirButton;
    QLabel *label_3;
    QLineEdit *nameOfCollege;
    QLineEdit *souvenirPrice;
    QTableView *souvenirTableView;
    QPushButton *addSouvenirButton;
    QPushButton *deleteSouvenirButton;
    QPushButton *modifySouvenir;
    QGroupBox *modifyBox;
    QGridLayout *gridLayout_2;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *updateCollegeName;
    QLabel *label_6;
    QLineEdit *updateSouvenirName;
    QLineEdit *updateSouvenirPrice;
    QPushButton *updateSouvenirButton;
    QPushButton *updateDB;
    QWidget *tab_2;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QStringLiteral("AdminWindow"));
        AdminWindow->resize(749, 640);
        verticalLayout = new QVBoxLayout(AdminWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SouvenirTab = new QTabWidget(AdminWindow);
        SouvenirTab->setObjectName(QStringLiteral("SouvenirTab"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        deleteBox = new QGroupBox(tab);
        deleteBox->setObjectName(QStringLiteral("deleteBox"));
        formLayout_2 = new QFormLayout(deleteBox);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        label_4 = new QLabel(deleteBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        deleteCollegeName = new QLineEdit(deleteBox);
        deleteCollegeName->setObjectName(QStringLiteral("deleteCollegeName"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, deleteCollegeName);

        label_5 = new QLabel(deleteBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        deleteSouvenirName = new QLineEdit(deleteBox);
        deleteSouvenirName->setObjectName(QStringLiteral("deleteSouvenirName"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, deleteSouvenirName);

        deleteSouvenirButtonBox = new QPushButton(deleteBox);
        deleteSouvenirButtonBox->setObjectName(QStringLiteral("deleteSouvenirButtonBox"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, deleteSouvenirButtonBox);


        gridLayout->addWidget(deleteBox, 3, 2, 1, 1);

        addBox = new QGroupBox(tab);
        addBox->setObjectName(QStringLiteral("addBox"));
        formLayout = new QFormLayout(addBox);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(addBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label);

        souvenirName = new QLineEdit(addBox);
        souvenirName->setObjectName(QStringLiteral("souvenirName"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, souvenirName);

        label_2 = new QLabel(addBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_2);

        sumbitSouvenirButton = new QPushButton(addBox);
        sumbitSouvenirButton->setObjectName(QStringLiteral("sumbitSouvenirButton"));

        formLayout->setWidget(6, QFormLayout::LabelRole, sumbitSouvenirButton);

        label_3 = new QLabel(addBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        nameOfCollege = new QLineEdit(addBox);
        nameOfCollege->setObjectName(QStringLiteral("nameOfCollege"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, nameOfCollege);

        souvenirPrice = new QLineEdit(addBox);
        souvenirPrice->setObjectName(QStringLiteral("souvenirPrice"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, souvenirPrice);


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

        modifyBox = new QGroupBox(tab);
        modifyBox->setObjectName(QStringLiteral("modifyBox"));
        gridLayout_2 = new QGridLayout(modifyBox);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_8 = new QLabel(modifyBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_2->addWidget(label_8, 4, 0, 1, 1);

        label_7 = new QLabel(modifyBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        updateCollegeName = new QLineEdit(modifyBox);
        updateCollegeName->setObjectName(QStringLiteral("updateCollegeName"));

        gridLayout_2->addWidget(updateCollegeName, 1, 0, 1, 1);

        label_6 = new QLabel(modifyBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        updateSouvenirName = new QLineEdit(modifyBox);
        updateSouvenirName->setObjectName(QStringLiteral("updateSouvenirName"));

        gridLayout_2->addWidget(updateSouvenirName, 3, 0, 1, 1);

        updateSouvenirPrice = new QLineEdit(modifyBox);
        updateSouvenirPrice->setObjectName(QStringLiteral("updateSouvenirPrice"));

        gridLayout_2->addWidget(updateSouvenirPrice, 5, 0, 1, 1);

        updateSouvenirButton = new QPushButton(modifyBox);
        updateSouvenirButton->setObjectName(QStringLiteral("updateSouvenirButton"));

        gridLayout_2->addWidget(updateSouvenirButton, 6, 0, 1, 1);

        updateSouvenirButton->raise();
        updateCollegeName->raise();
        updateSouvenirName->raise();
        updateSouvenirPrice->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();

        gridLayout->addWidget(modifyBox, 5, 0, 1, 3);

        updateDB = new QPushButton(tab);
        updateDB->setObjectName(QStringLiteral("updateDB"));

        gridLayout->addWidget(updateDB, 4, 1, 1, 1);

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
        deleteBox->setTitle(QApplication::translate("AdminWindow", "Delete", Q_NULLPTR));
        label_4->setText(QApplication::translate("AdminWindow", "Name Of College", Q_NULLPTR));
        label_5->setText(QApplication::translate("AdminWindow", "Name Of Souvenir", Q_NULLPTR));
        deleteSouvenirButtonBox->setText(QApplication::translate("AdminWindow", "Submit", Q_NULLPTR));
        addBox->setTitle(QApplication::translate("AdminWindow", "Add", Q_NULLPTR));
        label->setText(QApplication::translate("AdminWindow", "Name of Souvenir", Q_NULLPTR));
        label_2->setText(QApplication::translate("AdminWindow", "Price ", Q_NULLPTR));
        sumbitSouvenirButton->setText(QApplication::translate("AdminWindow", "Sumbit", Q_NULLPTR));
        label_3->setText(QApplication::translate("AdminWindow", "Name of College", Q_NULLPTR));
        addSouvenirButton->setText(QApplication::translate("AdminWindow", "Add Souvenir ", Q_NULLPTR));
        deleteSouvenirButton->setText(QApplication::translate("AdminWindow", "Delete Souvenir", Q_NULLPTR));
        modifySouvenir->setText(QApplication::translate("AdminWindow", "Modify Souvenir Price", Q_NULLPTR));
        modifyBox->setTitle(QApplication::translate("AdminWindow", "Modify Souvenir Price", Q_NULLPTR));
        label_8->setText(QApplication::translate("AdminWindow", "New Price", Q_NULLPTR));
        label_7->setText(QApplication::translate("AdminWindow", "Nmae of Souvenir", Q_NULLPTR));
        label_6->setText(QApplication::translate("AdminWindow", "Name Of College", Q_NULLPTR));
        updateSouvenirButton->setText(QApplication::translate("AdminWindow", "Submit", Q_NULLPTR));
        updateDB->setText(QApplication::translate("AdminWindow", "Update Database", Q_NULLPTR));
        SouvenirTab->setTabText(SouvenirTab->indexOf(tab), QApplication::translate("AdminWindow", "Souvenir", Q_NULLPTR));
        SouvenirTab->setTabText(SouvenirTab->indexOf(tab_2), QApplication::translate("AdminWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
