#include "saddlebackdistances.h"
#include "ui_saddlebackdistances.h"
#include "database.h"
#include <QSqlQueryModel>
#include <QSqlError>

/*!
 * \brief SaddlebackDistances::SaddlebackDistances
 * \param parent
 * \brief This just sets the constructor with some values
 */
SaddlebackDistances::SaddlebackDistances(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaddlebackDistances)
{
    // /users/brycecallender/College.db working path for me ignore
    ui->setupUi(this);
    database = Database::getInstance();
    database->SetDBPath("/users/brycecallender/College.db");

    QSqlQueryModel * model = new QSqlQueryModel();

    //sets up the query
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT * FROM Distances WHERE Distances.StartingCollege == 'Saddleback College' ORDER BY Distances.DistanceBetween asc");
//    qDebug() << query->isValid();
    qDebug() << query->exec();
    qDebug() << query->lastError();

    model->setQuery(*query);

    //sets the resultant query into a tableview and stretches it to make it look nice.
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

SaddlebackDistances::~SaddlebackDistances()
{
    delete ui;
}
