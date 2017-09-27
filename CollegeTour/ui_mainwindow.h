/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QComboBox *comboCollege;
    QLabel *labelCollege;
    QSpinBox *spinNumber;
    QLabel *labelNumber;
    QPushButton *customTrip;
    QTableView *mainTable;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTableView *selectTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout;
    QSpinBox *souvenirQuantity;
    QPushButton *purchaseSouvenir;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(887, 519);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboCollege = new QComboBox(centralWidget);
        comboCollege->setObjectName(QStringLiteral("comboCollege"));
        comboCollege->setGeometry(QRect(200, 10, 241, 22));
        comboCollege->setMaxVisibleItems(13);
        labelCollege = new QLabel(centralWidget);
        labelCollege->setObjectName(QStringLiteral("labelCollege"));
        labelCollege->setGeometry(QRect(10, 10, 191, 16));
        spinNumber = new QSpinBox(centralWidget);
        spinNumber->setObjectName(QStringLiteral("spinNumber"));
        spinNumber->setGeometry(QRect(240, 40, 42, 22));
        spinNumber->setMinimum(1);
        spinNumber->setMaximum(11);
        spinNumber->setValue(11);
        labelNumber = new QLabel(centralWidget);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));
        labelNumber->setGeometry(QRect(10, 40, 231, 16));
        customTrip = new QPushButton(centralWidget);
        customTrip->setObjectName(QStringLiteral("customTrip"));
        customTrip->setGeometry(QRect(290, 40, 80, 21));
        mainTable = new QTableView(centralWidget);
        mainTable->setObjectName(QStringLiteral("mainTable"));
        mainTable->setGeometry(QRect(450, 10, 431, 441));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 190, 391, 254));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        selectTable = new QTableView(layoutWidget);
        selectTable->setObjectName(QStringLiteral("selectTable"));
        selectTable->horizontalHeader()->setCascadingSectionResizes(true);
        selectTable->horizontalHeader()->setStretchLastSection(true);
        selectTable->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_2->addWidget(selectTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        souvenirQuantity = new QSpinBox(layoutWidget);
        souvenirQuantity->setObjectName(QStringLiteral("souvenirQuantity"));

        verticalLayout->addWidget(souvenirQuantity);

        purchaseSouvenir = new QPushButton(layoutWidget);
        purchaseSouvenir->setObjectName(QStringLiteral("purchaseSouvenir"));

        verticalLayout->addWidget(purchaseSouvenir);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        comboCollege->raise();
        labelCollege->raise();
        spinNumber->raise();
        labelNumber->raise();
        mainTable->raise();
        customTrip->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 887, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        comboCollege->clear();
        comboCollege->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Arizona State University", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Massachusetts Institute of Technology (MIT)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Northwestern", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ohio State University", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Saddleback College", Q_NULLPTR)
         << QApplication::translate("MainWindow", "University of  Michigan", Q_NULLPTR)
         << QApplication::translate("MainWindow", "University of California, Irvine (UCI)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "University of California, Los Angeles (UCLA)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "University of Oregon", Q_NULLPTR)
         << QApplication::translate("MainWindow", "University of the Pacific", Q_NULLPTR)
         << QApplication::translate("MainWindow", "University of Wisconsin", Q_NULLPTR)
        );
        labelCollege->setText(QApplication::translate("MainWindow", "Select the college you wish to start at:", Q_NULLPTR));
        labelNumber->setText(QApplication::translate("MainWindow", "Select the number of colleges you wish to visit:", Q_NULLPTR));
        customTrip->setText(QApplication::translate("MainWindow", "Custom Trip", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Select College", Q_NULLPTR));
        purchaseSouvenir->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
