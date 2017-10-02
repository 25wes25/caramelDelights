/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
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
    QSpinBox *spinCollege;
    QLabel *labelNumber;
    QPushButton *customTrip;
    QPushButton *addCollege;
    QPushButton *startTrip;
    QLabel *collegeLocation;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QTableView *mainTable;
    QPushButton *pushButton;
    QPushButton *nextPurchase;
    QPushButton *purchaseSouvenir;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *nextCollege;
    QTableView *selectTable;
    QSpinBox *souvenirQuantity;
    QLabel *labelTotalDistance;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(900, 527);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        comboCollege = new QComboBox(centralWidget);
        comboCollege->setObjectName(QStringLiteral("comboCollege"));
        comboCollege->setGeometry(QRect(200, 10, 241, 22));
        comboCollege->setMaxVisibleItems(13);
        labelCollege = new QLabel(centralWidget);
        labelCollege->setObjectName(QStringLiteral("labelCollege"));
        labelCollege->setGeometry(QRect(10, 10, 191, 16));
        spinCollege = new QSpinBox(centralWidget);
        spinCollege->setObjectName(QStringLiteral("spinCollege"));
        spinCollege->setGeometry(QRect(240, 40, 42, 22));
        spinCollege->setMinimum(1);
        spinCollege->setMaximum(11);
        spinCollege->setValue(11);
        labelNumber = new QLabel(centralWidget);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));
        labelNumber->setGeometry(QRect(10, 40, 231, 16));
        customTrip = new QPushButton(centralWidget);
        customTrip->setObjectName(QStringLiteral("customTrip"));
        customTrip->setGeometry(QRect(290, 40, 80, 21));
        addCollege = new QPushButton(centralWidget);
        addCollege->setObjectName(QStringLiteral("addCollege"));
        addCollege->setEnabled(true);
        addCollege->setGeometry(QRect(290, 40, 81, 23));
        startTrip = new QPushButton(centralWidget);
        startTrip->setObjectName(QStringLiteral("startTrip"));
        startTrip->setGeometry(QRect(290, 70, 81, 21));
        collegeLocation = new QLabel(centralWidget);
        collegeLocation->setObjectName(QStringLiteral("collegeLocation"));
        collegeLocation->setGeometry(QRect(40, 30, 371, 51));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        collegeLocation->setFont(font);
        collegeLocation->setLayoutDirection(Qt::LeftToRight);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(450, 10, 431, 451));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mainTable = new QTableView(layoutWidget);
        mainTable->setObjectName(QStringLiteral("mainTable"));

        verticalLayout_4->addWidget(mainTable);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_4->addWidget(pushButton);

        nextPurchase = new QPushButton(centralWidget);
        nextPurchase->setObjectName(QStringLiteral("nextPurchase"));
        nextPurchase->setGeometry(QRect(10, 440, 431, 21));
        purchaseSouvenir = new QPushButton(centralWidget);
        purchaseSouvenir->setObjectName(QStringLiteral("purchaseSouvenir"));
        purchaseSouvenir->setGeometry(QRect(10, 440, 431, 21));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 100, 431, 341));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nextCollege = new QPushButton(layoutWidget1);
        nextCollege->setObjectName(QStringLiteral("nextCollege"));

        verticalLayout->addWidget(nextCollege);

        selectTable = new QTableView(layoutWidget1);
        selectTable->setObjectName(QStringLiteral("selectTable"));
        selectTable->horizontalHeader()->setCascadingSectionResizes(true);
        selectTable->horizontalHeader()->setStretchLastSection(true);
        selectTable->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(selectTable);

        souvenirQuantity = new QSpinBox(layoutWidget1);
        souvenirQuantity->setObjectName(QStringLiteral("souvenirQuantity"));
        souvenirQuantity->setMinimum(1);

        verticalLayout->addWidget(souvenirQuantity);

        labelTotalDistance = new QLabel(centralWidget);
        labelTotalDistance->setObjectName(QStringLiteral("labelTotalDistance"));
        labelTotalDistance->setGeometry(QRect(120, 70, 151, 16));
        MainWindow->setCentralWidget(centralWidget);
        purchaseSouvenir->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        comboCollege->raise();
        labelCollege->raise();
        spinCollege->raise();
        labelNumber->raise();
        customTrip->raise();
        addCollege->raise();
        startTrip->raise();
        collegeLocation->raise();
        nextPurchase->raise();
        labelTotalDistance->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 900, 20));
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
        addCollege->setText(QApplication::translate("MainWindow", "Add College", Q_NULLPTR));
        startTrip->setText(QApplication::translate("MainWindow", "Start Trip", Q_NULLPTR));
        collegeLocation->setText(QApplication::translate("MainWindow", "You are here", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Remove From Cart", Q_NULLPTR));
        nextPurchase->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        purchaseSouvenir->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        nextCollege->setText(QApplication::translate("MainWindow", "Next College", Q_NULLPTR));
        labelTotalDistance->setText(QApplication::translate("MainWindow", "Total Trip Distance: ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
