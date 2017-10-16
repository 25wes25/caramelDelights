#ifndef SADDLEBACKDISTANCES_H
#define SADDLEBACKDISTANCES_H

#include "database.h"
#include <QDialog>
#include <QVector>

namespace Ui
{
    class SaddlebackDistances;
}

/*!
 * \brief The SaddlebackDistances class
 */
class SaddlebackDistances : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief SaddlebackDistances constructor
     * \param parent
     */
    explicit SaddlebackDistances(QWidget *parent = 0);
    ~SaddlebackDistances();

private:
    /*!
     * \brief ui
     */
    Ui::SaddlebackDistances *ui;
    /*!
     * \brief database database connection for this window
     */
    Database *database;
};

#endif // SADDLEBACKDISTANCES_H
