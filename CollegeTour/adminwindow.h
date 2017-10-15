#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "database.h"
#include <QDialog>

namespace Ui {
class AdminWindow;
}

/*!
 * \brief The AdminWindow class
 * Admin window class deals with
 * adding and deleting and modifying souveneirs
 */
class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief AdminWindow
     * \param parent
     */
    explicit AdminWindow(QWidget *parent = 0);
    ~AdminWindow();

private slots:
    /*!
     * \brief on_addSouvenirButton_clicke
     * \fn When souvenir button gets clicked
     */
    void on_addSouvenirButton_clicked();

    /*!
     * \brief on_sumbitSouvenirButton_clicked
     */
    void on_sumbitSouvenirButton_clicked();

    /*!
     * \brief on_deleteSouvenirButtonBox_clicked
     */
    void on_deleteSouvenirButtonBox_clicked();

    /*!
     * \brief on_updateSouvenirButton_clicked
     */
    void on_updateSouvenirButton_clicked();

    /*!
     * \brief on_updateDB_clicked
     */
    void on_updateDB_clicked();

    /*!
     * \brief on_deleteSouvenirButton_clicked
     */
    void on_deleteSouvenirButton_clicked();

    /*!
     * \brief on_modifySouvenir_clicked
     */
    void on_modifySouvenir_clicked();

    /*!
     * \brief on_modifyComboCollege_activated
     * \param arg1
     */
    void on_modifyComboCollege_activated(const QString &arg1);

    /*!
     * \brief on_deleteComboCollege_activated
     * \param arg1
     */
    void on_deleteComboCollege_activated(const QString &arg1);

    /*!
     * \brief on_loadColleges_clicked
     */
    void on_loadColleges_clicked();

private:
    /*!
     * \brief ui
     * \var pointer to let us access elements of the ui
     */
    Ui::AdminWindow *ui;
    /*!
     * \brief database
     * \var Pointer to let us grab the instance of the db thats been
     * created already
     */
    Database* database;
};

#endif // ADMINWINDOW_H
