#include "saddlebackdistances.h"
#include "ui_saddlebackdistances.h"
#include "database.h"
#include <QSqlQueryModel>

/*!
 * \brief SaddlebackDistances::SaddlebackDistances
 * \param parent
 * \brief This just sets the constructor with some values
 */
SaddlebackDistances::SaddlebackDistances(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaddlebackDistances)
{
    ui->setupUi(this);
    database = Database::getInstance();
    database->SetDBPath("/users/brycecallender/College.db");

    QSqlQuery *distanceQuery = new QSqlQuery(database->db);//db query to show saddleback distances
    QSqlQueryModel * model = new QSqlQueryModel();
    QVector<QString> collegeNameVector;
    QVector<QPair<QPair<QString,bool>,int>> vancyV;

    //sets up the query
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT * FROM Distances WHERE Distances.StartingCollege == 'Saddleback College' ORDER BY Distances.DistanceBetween asc");
    query->exec();

//    while(query->next())
//    {
//        collegeNameVector.push_back(query->value(0).toString());
//    }
    model->setQuery(*query);

//    for(int i = 0; i < collegeNameVector.size(); i++)
//    {
//        qDebug() << collegeNameVector.at(i);
//    }

    //sets the resultant query into a tableview and stretches it to make it look nice.
    ui->tableView->setModel(model);
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

SaddlebackDistances::~SaddlebackDistances()
{
    delete ui;
}
