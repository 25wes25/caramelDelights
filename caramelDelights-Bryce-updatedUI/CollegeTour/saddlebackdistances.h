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
    explicit SaddlebackDistances(QWidget *parent = 0);
    ~SaddlebackDistances();

private:
    Ui::SaddlebackDistances *ui;
    Database *database;
};

#endif // SADDLEBACKDISTANCES_H
