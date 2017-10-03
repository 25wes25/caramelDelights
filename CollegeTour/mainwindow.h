#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "database.h"
#include <QItemSelectionModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow
     * @param parent
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    /**
     * @brief on_comboCollege_activated
     * @param index
     */
    void on_comboCollege_activated(int index);
    /**
     * @brief on_spinNumber_valueChanged
     * @param arg1
     */
    void on_spinNumber_valueChanged(int arg1);
    /**
    * @brief on_purchaseSouvenir_clicked
    */
    void on_purchaseSouvenir_clicked();
    /**
     * @brief on_customTrip_clicked
     */
    void on_customTrip_clicked();
    /**
     * @brief on_selectCollege_clicked
     */
    void on_selectCollege_clicked();
    /**
     * @brief on_addCollege_clicked
     */
    void on_addCollege_clicked();
    /**
     * @brief on_startTrip_clicked
     */
    void on_startTrip_clicked();

    void on_nextCollege_clicked();

    void on_selectTable_clicked(const QModelIndex &index);

    void on_nextPurchase_clicked();

private:
    /**
     * @brief ui
     * \var
     */
    Ui::MainWindow *ui;
    /**
     * @brief model
     * \var
     */
    QStandardItemModel *model;
    /**
     * @brief database
     * \var
     */
    Database *database;
    /**
     * @brief customTrip
     * \var
     */
    trip customTrip;
    /**
     * @brief collegeRow
     * \var
     */
    int collegeRow, souvenirIndex, index;
    int souvSelection;
    QItemSelectionModel *select;
    int cartRow = 0;
    QVector<colleges> list;
};

#endif // MAINWINDOW_H
