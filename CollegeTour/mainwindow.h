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

    void on_uciTripButton_clicked();

    void on_souvenirFindButton_clicked();

    void on_michiganTripButton_clicked();

    void on_michiganNextCollege_clicked();

    void on_michiganPurchase_clicked();

    void on_SouvenirNames_clicked(const QModelIndex &index);

    void on_michiganNextPurchase_clicked();

    void on_michiganRemoveCart_clicked();

    void on_souvenirCart_clicked(const QModelIndex &index);

    void on_mainTable_clicked(const QModelIndex &index);

    void on_customRemoveCart_clicked();

    void on_saddleStartButton_clicked();

    void on_saddlePurchase_clicked();

    void on_saddleShopTable_clicked(const QModelIndex &index);

    void on_saddleRemoveCart_clicked();

    void on_saddleNextPurchase_clicked();

    void on_saddleNextCollege_clicked();

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
    QStandardItemModel *customModel, *michiganModel, *uciModel, *saddleModel;
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
    trip michiganTrip;
    trip uciTrip;
    trip saddleTrip;
    /**
     * @brief collegeRow
     * \var
     */
    int collegeRow, souvenirIndex, index;
    int customSouvSelection, michiganSouvSelection, saddleSouvSelection;
    int michiganCartSelection, customCartSelection, saddleCartSelection;
    QItemSelectionModel *select;
    int customCartRow = 0;
    int michiganCartRow = 0;
    int saddleCartRow = 0;
    QVector<colleges> customTripList, michiganList, uciList, saddleList;
    int maxVectorSize;
    int decision;
};

#endif // MAINWINDOW_H
