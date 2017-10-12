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
#include <QtWidgets/QSpacerItem>
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
    QGridLayout *gridLayout_4;
    QTabWidget *saddlebackTab;
    QWidget *tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelNumber;
    QLabel *labelTotalDistance;
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
    QPushButton *customTripTotal;
    QTableView *selectTable;
    QLabel *customQuantityLabel;
    QSpinBox *souvenirQuantity;
    QPushButton *nextPurchase;
    QPushButton *purchaseSouvenir;
    QPushButton *customRemoveCart;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *uciTripButton;
    QLineEdit *uciTotalDistance;
    QLabel *label_3;
    QTableView *uciTableView;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *souvenirComboBox;
    QPushButton *souvenirFindButton;
    QTableView *souvenirTableView;
    QWidget *tab_4;
    QGridLayout *gridLayout_2;
    QLabel *michiganLocationLabel;
    QLabel *michiganDistanceLabel;
    QLabel *michiganLabel;
    QSpinBox *michiganSouvQuantity;
    QSpinBox *michiganSpinBox;
    QTableView *SouvenirNames;
    QPushButton *michiganTripButton;
    QTableView *souvenirCart;
    QTableView *michiganTripTableView;
    QPushButton *michiganNextPurchase;
    QLabel *michiganQuantityLabel;
    QPushButton *michiganPurchase;
    QPushButton *michiganNextCollege;
    QPushButton *michiganRemoveCart;
    QPushButton *michiganTripTotal;
    QWidget *tab_5;
    QGridLayout *gridLayout_5;
    QPushButton *saddleStartButton;
    QLabel *saddleLabel;
    QLabel *saddlebackLocationLabel;
    QLabel *saddleDistanceLabel;
    QTableView *saddleCollegeTable;
    QTableView *saddleShopTable;
    QLabel *saddleQuantityLabel;
    QPushButton *saddlePurchase;
    QSpinBox *saddleSouvQuantity;
    QPushButton *saddleNextPurchase;
    QPushButton *saddleRemoveCart;
    QLabel *label_4;
    QTableView *saddleCartTable;
    QPushButton *saddleNextCollege;
    QPushButton *saddleTripTotal;
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
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        saddlebackTab = new QTabWidget(centralWidget);
        saddlebackTab->setObjectName(QStringLiteral("saddlebackTab"));
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

        customTripTotal = new QPushButton(tab);
        customTripTotal->setObjectName(QStringLiteral("customTripTotal"));

        verticalLayout->addWidget(customTripTotal);

        selectTable = new QTableView(tab);
        selectTable->setObjectName(QStringLiteral("selectTable"));
        selectTable->horizontalHeader()->setCascadingSectionResizes(true);
        selectTable->horizontalHeader()->setStretchLastSection(true);
        selectTable->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(selectTable);

        customQuantityLabel = new QLabel(tab);
        customQuantityLabel->setObjectName(QStringLiteral("customQuantityLabel"));
        QFont font1;
        font1.setPointSize(7);
        customQuantityLabel->setFont(font1);

        verticalLayout->addWidget(customQuantityLabel);

        souvenirQuantity = new QSpinBox(tab);
        souvenirQuantity->setObjectName(QStringLiteral("souvenirQuantity"));
        souvenirQuantity->setMinimum(1);

        verticalLayout->addWidget(souvenirQuantity);

        nextPurchase = new QPushButton(tab);
        nextPurchase->setObjectName(QStringLiteral("nextPurchase"));

        verticalLayout->addWidget(nextPurchase);

        purchaseSouvenir = new QPushButton(tab);
        purchaseSouvenir->setObjectName(QStringLiteral("purchaseSouvenir"));

        verticalLayout->addWidget(purchaseSouvenir);

        customRemoveCart = new QPushButton(tab);
        customRemoveCart->setObjectName(QStringLiteral("customRemoveCart"));

        verticalLayout->addWidget(customRemoveCart);


        gridLayout->addLayout(verticalLayout, 9, 0, 1, 2);

        saddlebackTab->addTab(tab, QString());
        collegeLocation->raise();
        labelTotalDistance->raise();
        mainTable->raise();
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
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 2, 1, 1);

        uciTripButton = new QPushButton(tab_2);
        uciTripButton->setObjectName(QStringLiteral("uciTripButton"));

        gridLayout_3->addWidget(uciTripButton, 2, 1, 1, 1);

        uciTotalDistance = new QLineEdit(tab_2);
        uciTotalDistance->setObjectName(QStringLiteral("uciTotalDistance"));

        gridLayout_3->addWidget(uciTotalDistance, 4, 1, 1, 1);

        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pictures/ucilogo-300x300.png")));
        label_3->setScaledContents(true);

        gridLayout_3->addWidget(label_3, 0, 1, 1, 1);

        uciTableView = new QTableView(tab_2);
        uciTableView->setObjectName(QStringLiteral("uciTableView"));

        gridLayout_3->addWidget(uciTableView, 3, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 1, 1, 1, 1);

        saddlebackTab->addTab(tab_2, QString());
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

        saddlebackTab->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout_2 = new QGridLayout(tab_4);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        michiganLocationLabel = new QLabel(tab_4);
        michiganLocationLabel->setObjectName(QStringLiteral("michiganLocationLabel"));
        QFont font2;
        font2.setPointSize(14);
        michiganLocationLabel->setFont(font2);

        gridLayout_2->addWidget(michiganLocationLabel, 4, 0, 1, 1);

        michiganDistanceLabel = new QLabel(tab_4);
        michiganDistanceLabel->setObjectName(QStringLiteral("michiganDistanceLabel"));

        gridLayout_2->addWidget(michiganDistanceLabel, 5, 0, 1, 1);

        michiganLabel = new QLabel(tab_4);
        michiganLabel->setObjectName(QStringLiteral("michiganLabel"));

        gridLayout_2->addWidget(michiganLabel, 0, 0, 1, 1);

        michiganSouvQuantity = new QSpinBox(tab_4);
        michiganSouvQuantity->setObjectName(QStringLiteral("michiganSouvQuantity"));
        michiganSouvQuantity->setMinimum(1);

        gridLayout_2->addWidget(michiganSouvQuantity, 9, 1, 1, 1);

        michiganSpinBox = new QSpinBox(tab_4);
        michiganSpinBox->setObjectName(QStringLiteral("michiganSpinBox"));
        michiganSpinBox->setMinimum(1);

        gridLayout_2->addWidget(michiganSpinBox, 1, 0, 1, 1);

        SouvenirNames = new QTableView(tab_4);
        SouvenirNames->setObjectName(QStringLiteral("SouvenirNames"));

        gridLayout_2->addWidget(SouvenirNames, 7, 1, 1, 1);

        michiganTripButton = new QPushButton(tab_4);
        michiganTripButton->setObjectName(QStringLiteral("michiganTripButton"));

        gridLayout_2->addWidget(michiganTripButton, 2, 0, 1, 1);

        souvenirCart = new QTableView(tab_4);
        souvenirCart->setObjectName(QStringLiteral("souvenirCart"));

        gridLayout_2->addWidget(souvenirCart, 13, 1, 1, 1);

        michiganTripTableView = new QTableView(tab_4);
        michiganTripTableView->setObjectName(QStringLiteral("michiganTripTableView"));

        gridLayout_2->addWidget(michiganTripTableView, 7, 0, 7, 1);

        michiganNextPurchase = new QPushButton(tab_4);
        michiganNextPurchase->setObjectName(QStringLiteral("michiganNextPurchase"));

        gridLayout_2->addWidget(michiganNextPurchase, 11, 1, 1, 1);

        michiganQuantityLabel = new QLabel(tab_4);
        michiganQuantityLabel->setObjectName(QStringLiteral("michiganQuantityLabel"));
        michiganQuantityLabel->setFont(font1);

        gridLayout_2->addWidget(michiganQuantityLabel, 8, 1, 1, 1);

        michiganPurchase = new QPushButton(tab_4);
        michiganPurchase->setObjectName(QStringLiteral("michiganPurchase"));

        gridLayout_2->addWidget(michiganPurchase, 10, 1, 1, 1);

        michiganNextCollege = new QPushButton(tab_4);
        michiganNextCollege->setObjectName(QStringLiteral("michiganNextCollege"));

        gridLayout_2->addWidget(michiganNextCollege, 5, 1, 1, 1);

        michiganRemoveCart = new QPushButton(tab_4);
        michiganRemoveCart->setObjectName(QStringLiteral("michiganRemoveCart"));

        gridLayout_2->addWidget(michiganRemoveCart, 12, 1, 1, 1);

        michiganTripTotal = new QPushButton(tab_4);
        michiganTripTotal->setObjectName(QStringLiteral("michiganTripTotal"));

        gridLayout_2->addWidget(michiganTripTotal, 4, 1, 1, 1);

        saddlebackTab->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        gridLayout_5 = new QGridLayout(tab_5);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        saddleStartButton = new QPushButton(tab_5);
        saddleStartButton->setObjectName(QStringLiteral("saddleStartButton"));

        gridLayout_5->addWidget(saddleStartButton, 1, 0, 1, 1);

        saddleLabel = new QLabel(tab_5);
        saddleLabel->setObjectName(QStringLiteral("saddleLabel"));

        gridLayout_5->addWidget(saddleLabel, 0, 0, 1, 1);

        saddlebackLocationLabel = new QLabel(tab_5);
        saddlebackLocationLabel->setObjectName(QStringLiteral("saddlebackLocationLabel"));
        saddlebackLocationLabel->setFont(font2);

        gridLayout_5->addWidget(saddlebackLocationLabel, 2, 0, 1, 1);

        saddleDistanceLabel = new QLabel(tab_5);
        saddleDistanceLabel->setObjectName(QStringLiteral("saddleDistanceLabel"));

        gridLayout_5->addWidget(saddleDistanceLabel, 3, 0, 1, 1);

        saddleCollegeTable = new QTableView(tab_5);
        saddleCollegeTable->setObjectName(QStringLiteral("saddleCollegeTable"));

        gridLayout_5->addWidget(saddleCollegeTable, 5, 0, 8, 1);

        saddleShopTable = new QTableView(tab_5);
        saddleShopTable->setObjectName(QStringLiteral("saddleShopTable"));

        gridLayout_5->addWidget(saddleShopTable, 5, 1, 1, 1);

        saddleQuantityLabel = new QLabel(tab_5);
        saddleQuantityLabel->setObjectName(QStringLiteral("saddleQuantityLabel"));
        saddleQuantityLabel->setFont(font1);

        gridLayout_5->addWidget(saddleQuantityLabel, 6, 1, 1, 1);

        saddlePurchase = new QPushButton(tab_5);
        saddlePurchase->setObjectName(QStringLiteral("saddlePurchase"));

        gridLayout_5->addWidget(saddlePurchase, 8, 1, 1, 1);

        saddleSouvQuantity = new QSpinBox(tab_5);
        saddleSouvQuantity->setObjectName(QStringLiteral("saddleSouvQuantity"));
        saddleSouvQuantity->setMinimum(1);

        gridLayout_5->addWidget(saddleSouvQuantity, 7, 1, 1, 1);

        saddleNextPurchase = new QPushButton(tab_5);
        saddleNextPurchase->setObjectName(QStringLiteral("saddleNextPurchase"));

        gridLayout_5->addWidget(saddleNextPurchase, 9, 1, 1, 1);

        saddleRemoveCart = new QPushButton(tab_5);
        saddleRemoveCart->setObjectName(QStringLiteral("saddleRemoveCart"));

        gridLayout_5->addWidget(saddleRemoveCart, 10, 1, 1, 1);

        label_4 = new QLabel(tab_5);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_5->addWidget(label_4, 11, 1, 1, 1);

        saddleCartTable = new QTableView(tab_5);
        saddleCartTable->setObjectName(QStringLiteral("saddleCartTable"));

        gridLayout_5->addWidget(saddleCartTable, 12, 1, 1, 1);

        saddleNextCollege = new QPushButton(tab_5);
        saddleNextCollege->setObjectName(QStringLiteral("saddleNextCollege"));

        gridLayout_5->addWidget(saddleNextCollege, 3, 1, 1, 1);

        saddleTripTotal = new QPushButton(tab_5);
        saddleTripTotal->setObjectName(QStringLiteral("saddleTripTotal"));

        gridLayout_5->addWidget(saddleTripTotal, 4, 1, 1, 1);

        saddlebackTab->addTab(tab_5, QString());

        gridLayout_4->addWidget(saddlebackTab, 0, 0, 1, 1);

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

        saddlebackTab->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        labelNumber->setText(QApplication::translate("MainWindow", "Select the number of colleges you wish to visit:", Q_NULLPTR));
        labelTotalDistance->setText(QApplication::translate("MainWindow", "Total Trip Distance: ", Q_NULLPTR));
        startTrip->setText(QApplication::translate("MainWindow", "Start Trip", Q_NULLPTR));
        collegeLocation->setText(QApplication::translate("MainWindow", "You are here", Q_NULLPTR));
        addCollege->setText(QApplication::translate("MainWindow", "Add College", Q_NULLPTR));
        labelCollege->setText(QApplication::translate("MainWindow", "Select the college you wish to start at:", Q_NULLPTR));
        customTrip->setText(QApplication::translate("MainWindow", "Custom Trip", Q_NULLPTR));
        nextCollege->setText(QApplication::translate("MainWindow", "Next College", Q_NULLPTR));
        customTripTotal->setText(QApplication::translate("MainWindow", "Trip Total", Q_NULLPTR));
        customQuantityLabel->setText(QApplication::translate("MainWindow", "Quantity:", Q_NULLPTR));
        nextPurchase->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        purchaseSouvenir->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        customRemoveCart->setText(QApplication::translate("MainWindow", "Remove From Cart", Q_NULLPTR));
        saddlebackTab->setTabText(saddlebackTab->indexOf(tab), QApplication::translate("MainWindow", "Custom Trip", Q_NULLPTR));
        uciTripButton->setText(QApplication::translate("MainWindow", "Start Trip", Q_NULLPTR));
        label_3->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Starting at UCI here is the most efficient path to all the colleges!", Q_NULLPTR));
        saddlebackTab->setTabText(saddlebackTab->indexOf(tab_2), QApplication::translate("MainWindow", "UCI Trip", Q_NULLPTR));
        souvenirFindButton->setText(QApplication::translate("MainWindow", "Find Souvenirs", Q_NULLPTR));
        saddlebackTab->setTabText(saddlebackTab->indexOf(tab_3), QApplication::translate("MainWindow", "Souvenirs", Q_NULLPTR));
        michiganLocationLabel->setText(QApplication::translate("MainWindow", "YouAreHere", Q_NULLPTR));
        michiganDistanceLabel->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        michiganLabel->setText(QApplication::translate("MainWindow", "How many colleges do you want to visit? (Includes University of Michigan)", Q_NULLPTR));
        michiganTripButton->setText(QApplication::translate("MainWindow", "Make Trip", Q_NULLPTR));
        michiganNextPurchase->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        michiganQuantityLabel->setText(QApplication::translate("MainWindow", "Quantity:", Q_NULLPTR));
        michiganPurchase->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        michiganNextCollege->setText(QApplication::translate("MainWindow", "Next College", Q_NULLPTR));
        michiganRemoveCart->setText(QApplication::translate("MainWindow", "Remove From Cart", Q_NULLPTR));
        michiganTripTotal->setText(QApplication::translate("MainWindow", "Trip Total", Q_NULLPTR));
        saddlebackTab->setTabText(saddlebackTab->indexOf(tab_4), QApplication::translate("MainWindow", "Michigan Trip", Q_NULLPTR));
        saddleStartButton->setText(QApplication::translate("MainWindow", "Start Trip", Q_NULLPTR));
        saddleLabel->setText(QApplication::translate("MainWindow", "Starting at Saddleback, and visiting all the available colleges", Q_NULLPTR));
        saddlebackLocationLabel->setText(QApplication::translate("MainWindow", "YouAreHere", Q_NULLPTR));
        saddleDistanceLabel->setText(QApplication::translate("MainWindow", "Distance", Q_NULLPTR));
        saddleQuantityLabel->setText(QApplication::translate("MainWindow", "Quantity:", Q_NULLPTR));
        saddlePurchase->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        saddleNextPurchase->setText(QApplication::translate("MainWindow", "Purchase", Q_NULLPTR));
        saddleRemoveCart->setText(QApplication::translate("MainWindow", "Remove From Cart", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Cart:", Q_NULLPTR));
        saddleNextCollege->setText(QApplication::translate("MainWindow", "Next College", Q_NULLPTR));
        saddleTripTotal->setText(QApplication::translate("MainWindow", "Trip Total", Q_NULLPTR));
        saddlebackTab->setTabText(saddlebackTab->indexOf(tab_5), QApplication::translate("MainWindow", "Saddleback Trip", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
