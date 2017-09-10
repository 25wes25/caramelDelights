/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableColleges;
    QComboBox *comboCollege;
    QLabel *labelCollege;
    QSpinBox *spinNumber;
    QLabel *labelNumber;
    QTableWidget *tableSouvenirs;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(875, 502);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableColleges = new QTableWidget(centralWidget);
        if (tableColleges->columnCount() < 2)
            tableColleges->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableColleges->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableColleges->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableColleges->setObjectName(QStringLiteral("tableColleges"));
        tableColleges->setGeometry(QRect(450, 10, 411, 421));
        tableColleges->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableColleges->setSortingEnabled(false);
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
        tableSouvenirs = new QTableWidget(centralWidget);
        if (tableSouvenirs->columnCount() < 2)
            tableSouvenirs->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableSouvenirs->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableSouvenirs->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        tableSouvenirs->setObjectName(QStringLiteral("tableSouvenirs"));
        tableSouvenirs->setGeometry(QRect(180, 240, 261, 192));
        tableSouvenirs->setEditTriggers(QAbstractItemView::NoEditTriggers);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 875, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        QTableWidgetItem *___qtablewidgetitem = tableColleges->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "College", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableColleges->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Distance", 0));
        comboCollege->clear();
        comboCollege->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Arizona State University", 0)
         << QApplication::translate("MainWindow", "Massachusetts Institute of Technology (MIT)", 0)
         << QApplication::translate("MainWindow", "Northwestern", 0)
         << QApplication::translate("MainWindow", "Ohio State University", 0)
         << QApplication::translate("MainWindow", "Saddleback College", 0)
         << QApplication::translate("MainWindow", "University of  Michigan", 0)
         << QApplication::translate("MainWindow", "University of California, Irvine (UCI)", 0)
         << QApplication::translate("MainWindow", "University of California, Los Angeles (UCLA)", 0)
         << QApplication::translate("MainWindow", "University of Oregon", 0)
         << QApplication::translate("MainWindow", "University of the Pacific", 0)
         << QApplication::translate("MainWindow", "University of Wisconsin", 0)
        );
        labelCollege->setText(QApplication::translate("MainWindow", "Select the college you wish to start at:", 0));
        labelNumber->setText(QApplication::translate("MainWindow", "Select the number of colleges you wish to visit:", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableSouvenirs->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Souvenirs", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableSouvenirs->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Price", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
