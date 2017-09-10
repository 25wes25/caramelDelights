/********************************************************************************
** Form generated from reading UI file 'saddlebackdistances.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SADDLEBACKDISTANCES_H
#define UI_SADDLEBACKDISTANCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_SaddlebackDistances
{
public:
    QHBoxLayout *horizontalLayout;
    QTableView *tableView;

    void setupUi(QDialog *SaddlebackDistances)
    {
        if (SaddlebackDistances->objectName().isEmpty())
            SaddlebackDistances->setObjectName(QStringLiteral("SaddlebackDistances"));
        SaddlebackDistances->resize(645, 489);
        horizontalLayout = new QHBoxLayout(SaddlebackDistances);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tableView = new QTableView(SaddlebackDistances);
        tableView->setObjectName(QStringLiteral("tableView"));

        horizontalLayout->addWidget(tableView);


        retranslateUi(SaddlebackDistances);

        QMetaObject::connectSlotsByName(SaddlebackDistances);
    } // setupUi

    void retranslateUi(QDialog *SaddlebackDistances)
    {
        SaddlebackDistances->setWindowTitle(QApplication::translate("SaddlebackDistances", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SaddlebackDistances: public Ui_SaddlebackDistances {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SADDLEBACKDISTANCES_H
