#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "database.h"
#include "saddlebackdistances.h"
#include <QItemSelectionModel>
#include <algorithm>
#include <QtMath>

namespace Ui {
class MainWindow;
}
/*!
 * \brief The MainWindow class
 * \class A window that contains all the college trip tabs (custom, uci michigan, and saddleback)
 *  as well as the souvenir display tab.
 */
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
    /*!
     * \brief on_nextCollege_clicked
     */
    void on_nextCollege_clicked();
    /*!
     * \brief on_selectTable_clicked
     * \param index
     */
    void on_selectTable_clicked(const QModelIndex &index);
    /*!
     * \brief on_nextPurchase_clicked
     */
    void on_nextPurchase_clicked();
    /*!
     * \brief on_uciTripButton_clicked
     */
    void on_uciTripButton_clicked();
    /*!
     * \brief on_souvenirFindButton_clicked
     */
    void on_souvenirFindButton_clicked();
    /*!
     * \brief on_michiganTripButton_clicked
     */
    void on_michiganTripButton_clicked();
    /*!
     * \brief on_michiganNextCollege_clicked
     */
    void on_michiganNextCollege_clicked();
    /*!
     * \brief on_michiganPurchase_clicked
     */
    void on_michiganPurchase_clicked();
    /*!
     * \brief on_SouvenirNames_clicked
     * \param index
     */
    void on_SouvenirNames_clicked(const QModelIndex &index);
    /*!
     * \brief on_michiganNextPurchase_clicked
     */
    void on_michiganNextPurchase_clicked();
    /*!
     * \brief on_michiganRemoveCart_clicked
     */
    void on_michiganRemoveCart_clicked();
    /*!
     * \brief on_souvenirCart_clicked
     * \param index
     */
    void on_souvenirCart_clicked(const QModelIndex &index);
    /*!
     * \brief on_mainTable_clicked
     * \param index
     */
    void on_mainTable_clicked(const QModelIndex &index);
    /*!
     * \brief on_customRemoveCart_clicked
     */
    void on_customRemoveCart_clicked();
    /*!
     * \brief on_saddleStartButton_clicked
     */
    void on_saddleStartButton_clicked();
    /*!
     * \brief on_saddlePurchase_clicked
     */
    void on_saddlePurchase_clicked();
    /*!
     * \brief on_saddleShopTable_clicked
     * \param index
     */
    void on_saddleShopTable_clicked(const QModelIndex &index);
    /*!
     * \brief on_saddleRemoveCart_clicked
     */
    void on_saddleRemoveCart_clicked();
    /*!
     * \brief on_saddleNextPurchase_clicked
     */
    void on_saddleNextPurchase_clicked();
    /*!
     * \brief on_saddleNextCollege_clicked
     */
    void on_saddleNextCollege_clicked();
    /*!
     * \brief on_saddleTripTotal_clicked
     */
    void on_saddleTripTotal_clicked();
    /*!
     * \brief on_saddleCartTable_clicked
     * \param index
     */
    void on_saddleCartTable_clicked(const QModelIndex &index);
    /*!
     * \brief on_pushButton_clicked
     */
    void on_pushButton_clicked();

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
    int collegeRow, souvenirIndex, index;//!< isAccount checks if the user is a traveler.  */
    int customCartSelection, michiganCartSelection, saddleCartSelection;//!< Table view cart index selection  */
    int michiganShopSelection, customShopSelection, saddleShopSelection;//!< Table view shop index selection.  */
    int customCartRow = 0, michiganCartRow = 0, saddleCartRow = 0;//!< Cart row counter initialized to 0  */
    QVector<colleges> customTripList, michiganList, uciList, saddleList;//!< Vector of colleges type  */
    int maxVectorSize;//!< Maximum vector size  */
    int decision;//!< Decision of how many colleges to visit  */
    int saddleCartTotalCount = 0, michiganCartTotalCount = 0, customCartTotalCount = 0;//!< Counter of cart items  */
    QVector<QString> saddleCurrentCartName, michiganCurrentCartName, customCurrentCartName;//!< Vector of strings containing the current cart names.  */
    double saddleGrandTot = 0, michiganGrandTot = 0, customGrandTot = 0;//!< Grand total to 0  */
    double saddleCartTot = 0, michiganCartTot = 0, customCartTot = 0;//!< cart totals to 0   */
    SaddlebackDistances s;//!< instance to saddleback window  */
};

#endif // MAINWINDOW_H
