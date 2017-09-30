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
    QSpinBox *spinCollege;
    QLabel *labelNumber;
    QPushButton *customTrip;
    QTableView *mainTable;
    QPushButton *addCollege;
    QPushButton *startTrip;
    QLabel *collegeLocation;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QPushButton *nextCollege;
    QVBoxLayout *verticalLayout_2;
    QTableView *selectTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *selectSouvenir;
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
        mainTable = new QTableView(centralWidget);
        mainTable->setObjectName(QStringLiteral("mainTable"));
        mainTable->setGeometry(QRect(450, 10, 431, 441));
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
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 110, 431, 341));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        nextCollege = new QPushButton(widget);
        nextCollege->setObjectName(QStringLiteral("nextCollege"));

        verticalLayout_3->addWidget(nextCollege);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        selectTable = new QTableView(widget);
        selectTable->setObjectName(QStringLiteral("selectTable"));
        selectTable->horizontalHeader()->setCascadingSectionResizes(true);
        selectTable->horizontalHeader()->setStretchLastSection(true);
        selectTable->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout_2->addWidget(selectTable);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        selectSouvenir = new QPushButton(widget);
        selectSouvenir->setObjectName(QStringLiteral("selectSouvenir"));

        horizontalLayout->addWidget(selectSouvenir);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        souvenirQuantity = new QSpinBox(widget);
        souvenirQuantity->setObjectName(QStringLiteral("souvenirQuantity"));

        verticalLayout->addWidget(souvenirQuantity);

        purchaseSouvenir = new QPushButton(widget);
        purchaseSouvenir->setObjectName(QStringLiteral("purchaseSouvenir"));

        verticalLayout->addWidget(purchaseSouvenir);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        comboCollege->raise();
        labelCollege->raise();
        spinCollege->raise();
        labelNumber->raise();
        mainTable->raise();
        customTrip->raise();
        addCollege->raise();
        startTrip->raise();
        nextCollege->raise();
        collegeLocation->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 887, 20));
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
        nextCollege->setText(QApplication::translate("MainWindow", "Next College", Q_NULLPTR));
        selectSouvenir->setText(QApplication::translate("MainWindow", "Select Souvenir", Q_NULLPTR));
        purchaseSouvenir->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
