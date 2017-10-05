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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelNumber;
    QLabel *labelTotalDistance;
    QPushButton *pushButton;
    QComboBox *comboCollege;
    QPushButton *startTrip;
    QLabel *collegeLocation;
    QPushButton *addCollege;
    QTableView *mainTable;
    QLabel *labelCollege;
    QSpinBox *spinCollege;
    QPushButton *customTrip;
    QVBoxLayout *verticalLayout;
    QPushButton *nextCollege;
    QTableView *selectTable;
    QPushButton *nextPurchase;
    QPushButton *purchaseSouvenir;
    QSpinBox *souvenirQuantity;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QTableView *uciTableView;
    QPushButton *uciTripButton;
    QLineEdit *uciTotalDistance;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *souvenirComboBox;
    QPushButton *souvenirFindButton;
    QTableView *souvenirTableView;
    QWidget *tab_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(907, 655);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));

        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

        labelNumber = new QLabel(tab);
        labelNumber->setObjectName(QStringLiteral("labelNumber"));

        gridLayout->addWidget(labelNumber, 5, 0, 1, 1);

        labelTotalDistance = new QLabel(tab);
        labelTotalDistance->setObjectName(QStringLiteral("labelTotalDistance"));

        gridLayout->addWidget(labelTotalDistance, 7, 0, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 10, 3, 1, 1);

        comboCollege = new QComboBox(tab);
        comboCollege->setObjectName(QStringLiteral("comboCollege"));
        comboCollege->setMaxVisibleItems(13);

        gridLayout->addWidget(comboCollege, 1, 1, 1, 1);

        startTrip = new QPushButton(tab);
        startTrip->setObjectName(QStringLiteral("startTrip"));

        gridLayout->addWidget(startTrip, 6, 1, 1, 1);

        collegeLocation = new QLabel(tab);
        collegeLocation->setObjectName(QStringLiteral("collegeLocation"));
        QFont font;
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        collegeLocation->setFont(font);
        collegeLocation->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(collegeLocation, 6, 0, 1, 1);

        addCollege = new QPushButton(tab);
        addCollege->setObjectName(QStringLiteral("addCollege"));
        addCollege->setEnabled(true);

        gridLayout->addWidget(addCollege, 3, 1, 1, 1);

        mainTable = new QTableView(tab);
        mainTable->setObjectName(QStringLiteral("mainTable"));

        gridLayout->addWidget(mainTable, 9, 2, 1, 2);

        labelCollege = new QLabel(tab);
        labelCollege->setObjectName(QStringLiteral("labelCollege"));

        gridLayout->addWidget(labelCollege, 1, 0, 1, 1);

        spinCollege = new QSpinBox(tab);
        spinCollege->setObjectName(QStringLiteral("spinCollege"));
        spinCollege->setMinimum(1);
        spinCollege->setMaximum(11);
        spinCollege->setValue(11);

        gridLayout->addWidget(spinCollege, 5, 1, 1, 1);

        customTrip = new QPushButton(tab);
        customTrip->setObjectName(QStringLiteral("customTrip"));

        gridLayout->addWidget(customTrip, 2, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        nextCollege = new QPushButton(tab);
        nextCollege->setObjectName(QStringLiteral("nextCollege"));

        verticalLayout->addWidget(nextCollege);

        selectTable = new QTableView(tab);
        selectTable->setObjectName(QStringLiteral("selectTable"));
        selectTable->horizontalHeader()->setCascadingSectionResizes(true);
        selectTable->horizontalHeader()->setStretchLastSection(true);
        selectTable->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(selectTable);

        nextPurchase = new QPushButton(tab);
        nextPurchase->setObjectName(QStringLiteral("nextPurchase"));

        verticalLayout->addWidget(nextPurchase);

        purchaseSouvenir = new QPushButton(tab);
        purchaseSouvenir->setObjectName(QStringLiteral("purchaseSouvenir"));

        verticalLayout->addWidget(purchaseSouvenir);

        souvenirQuantity = new QSpinBox(tab);
        souvenirQuantity->setObjectName(QStringLiteral("souvenirQuantity"));
        souvenirQuantity->setMinimum(1);

        verticalLayout->addWidget(souvenirQuantity);


        gridLayout->addLayout(verticalLayout, 9, 0, 1, 2);

        tabWidget->addTab(tab, QString());
        collegeLocation->raise();
        labelTotalDistance->raise();
        mainTable->raise();
        pushButton->raise();
        labelCollege->raise();
        comboCollege->raise();
        addCollege->raise();
        labelNumber->raise();
        spinCollege->raise();
        customTrip->raise();
        startTrip->raise();
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        uciTableView = new QTableView(tab_2);
        uciTableView->setObjectName(QStringLiteral("uciTableView"));

        gridLayout_3->addWidget(uciTableView, 2, 0, 1, 1);

        uciTripButton = new QPushButton(tab_2);
        uciTripButton->setObjectName(QStringLiteral("uciTripButton"));

        gridLayout_3->addWidget(uciTripButton, 1, 0, 1, 1);

        uciTotalDistance = new QLineEdit(tab_2);
        uciTotalDistance->setObjectName(QStringLiteral("uciTotalDistance"));

        gridLayout_3->addWidget(uciTotalDistance, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_2 = new QVBoxLayout(tab_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        souvenirComboBox = new QComboBox(tab_3);
        souvenirComboBox->setObjectName(QStringLiteral("souvenirComboBox"));

        verticalLayout_2->addWidget(souvenirComboBox);

        souvenirFindButton = new QPushButton(tab_3);
        souvenirFindButton->setObjectName(QStringLiteral("souvenirFindButton"));

        verticalLayout_2->addWidget(souvenirFindButton);

        souvenirTableView = new QTableView(tab_3);
        souvenirTableView->setObjectName(QStringLiteral("souvenirTableView"));

        verticalLayout_2->addWidget(souvenirTableView);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 907, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        labelNumber->setText(QApplication::translate("MainWindow", "Select the number of colleges you wish to visit:", Q_NULLPTR));
        labelTotalDistance->setText(QApplication::translate("MainWindow", "Total Trip Distance: ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Remove From Cart", Q_NULLPTR));
        startTrip->setText(QApplication::translate("MainWindow", "Start Trip", Q_NULLPTR));
        collegeLocation->setText(QApplication::translate("MainWindow", "You are here", Q_NULLPTR));
        addCollege->setText(QApplication::translate("MainWindow", "Add College", Q_NULLPTR));
        labelCollege->setText(QApplication::translate("MainWindow", "Select the college you wish to start at:", Q_NULLPTR));
        customTrip->setText(QApplication::translate("MainWindow", "Custom Trip", Q_NULLPTR));
        nextCollege->setText(QApplication::translate("MainWindow", "Next College", Q_NULLPTR));
        nextPurchase->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        purchaseSouvenir->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Custom Trip", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Starting at UCI here is the most efficient path to all the colleges!", Q_NULLPTR));
        uciTripButton->setText(QApplication::translate("MainWindow", "Start Trip", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "UCI Trip", Q_NULLPTR));
        souvenirFindButton->setText(QApplication::translate("MainWindow", "Find Souvenirs", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Souvenirs", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Michigan Trip", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
