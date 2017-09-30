#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "trip.h"
#include <QFileDialog>
#include <QDebug>
#include <QSqlQueryModel>

/**
 * @brief MainWindow::MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->addCollege->hide();
    ui->startTrip->hide();
    ui->nextCollege->hide();
    ui->collegeLocation->hide();
    //stops a user from click edit
    ui->mainTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->selectTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}
/**
 * @brief MainWindow::~MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::on_comboCollege_activated
 * @param index
 * Function takes in action from the comboCollege combo box
 * via the index.
 */
void MainWindow::on_comboCollege_activated(int index)
{
    QString college = ui->comboCollege->currentText();
    qDebug() << "Starting college is " << college;
}
/**
 * @brief MainWindow::on_spinNumber_valueChanged
 * @param arg1
 * Function takes in action from the spinNumber spin box
 * via int of the selection, used to determine the number
 * of colleges to visit in the trip.
 */
void MainWindow::on_spinNumber_valueChanged(int arg1)
{
    qDebug() << "The value is " << arg1;
}
/**
 * @brief MainWindow::on_purchaseSouvenir_clicked
 */
void MainWindow::on_purchaseSouvenir_clicked() //purchase souvenir button
{

}
/**
 * @brief MainWindow::on_customTrip_clicked
 * Opens new window where user can begin creating a custom trip.
 */
void MainWindow::on_customTrip_clicked() //custom trip button
{
    ui->spinCollege->hide();
    ui->startTrip->show();
    ui->labelNumber->hide();
    ui->labelCollege->setText("Add college to trip: ");

    qDebug() << "customTrip clicked";
    collegeRow = 0;
    index = 0;

    //struct to be pushed onto the collegeList vector
    colleges newInsert;
    //model->clear();
    model = new QStandardItemModel(100,1,this); //11 Rows and 1 Columns
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("College")));
    ui->mainTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->mainTable->setModel(model);

    //text input from combo and spin box
    newInsert.collegeName = ui->comboCollege->currentText();
    int indexChosen = ui->comboCollege->currentIndex();
    int campusTotal = ui->spinCollege->value();

    customTrip.collegeList.push_back(newInsert);

    //instantiate the CUSTOM trip constructor using the combo and spin box data
    QStandardItem *collegeName = new QStandardItem(customTrip.collegeList[index].collegeName);
    model->setItem(collegeRow, 0, collegeName);

    collegeRow++;
    index++;

    ui->comboCollege->removeItem(indexChosen);
    //ui->customTrip->setText("Add College");
    ui->customTrip->hide();
    ui->addCollege->show();

    //ui->customTrip->setObjectName("addCollege");
}
/**
 * @brief MainWindow::on_selectCollege_clicked
 */
void MainWindow::on_selectCollege_clicked() //should add the selected college to data structure of trip destinations
{
    //ui->selectTable->currentIndex()
}
/**
 * @brief MainWindow::on_addCollege_clicked
 * Adds a college to the custom trip table output window.
 */
void MainWindow::on_addCollege_clicked()
{
    if(ui->comboCollege->currentText() == "")
    {
        ui->addCollege->hide();
    }
    else
    {
        qDebug() << "addCollege clicked";
        colleges newInsert;
        newInsert.collegeName = ui->comboCollege->currentText();
        int indexChosen = ui->comboCollege->currentIndex();

        customTrip.collegeList.push_back(newInsert);

        QStandardItem *collegeName     = new QStandardItem(customTrip.collegeList[index].collegeName);
        model->setItem(collegeRow, 0, collegeName);


        ui->comboCollege->removeItem(indexChosen);

        collegeRow++;
        index++;
    }
}
/**
 * @brief MainWindow::on_startTrip_clicked
 * Takes user input from selected options and updates the table view output.
 */
void MainWindow::on_startTrip_clicked()
{
    model->clear();
    ui->startTrip->hide();
    ui->nextCollege->show();
    ui->labelCollege->hide();
    ui->comboCollege->hide();

    souvenirIndex = 0;

    ui->collegeLocation->setText(customTrip.collegeList[souvenirIndex].collegeName);
    ui->collegeLocation->show();

    database = Database::getInstance();
    database->SetDBPath(QDir::currentPath() + "\\Database\\College.db");

    QVector<colleges> list;
    QVector<QString>  tripNames;

    for(int index = 0; index < customTrip.collegeList.size(); index++)
    {
        qDebug() << customTrip.collegeList[index].collegeName;
        tripNames.push_back(customTrip.collegeList[index].collegeName);
    }

    for(int index = 0; index < tripNames.size(); index++)
    {
        qDebug() << "Trip Name: " << tripNames[index];
    }

    list = customTrip.SetCollegeList(tripNames);

    customTrip.Recursive(list, 0);

    QSqlQueryModel * souvenirModel = new QSqlQueryModel();

    //sets up the query
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT * FROM Souvenirs WHERE College == (:collegeName)");
    query->bindValue(":collegeName",customTrip.collegeList[souvenirIndex].collegeName);
    qDebug() << query->exec();
    souvenirModel->setQuery(*query);

    ui->selectTable->setModel(souvenirModel);
    ui->selectTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->selectTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    souvenirIndex++;
}

void MainWindow::on_nextCollege_clicked()
{
    if(souvenirIndex == customTrip.collegeList.size())
    {

    }
    else
    {
        ui->collegeLocation->setText(customTrip.collegeList[souvenirIndex].collegeName);

        QSqlQueryModel * souvenirModel = new QSqlQueryModel();

        //sets up the query
        QSqlQuery *query = new QSqlQuery(database->db);
        query->prepare("SELECT * FROM Souvenirs WHERE College == (:collegeName)");
        query->bindValue(":collegeName",customTrip.collegeList[souvenirIndex].collegeName);
        qDebug() << query->exec();
        souvenirModel->setQuery(*query);

        ui->selectTable->setModel(souvenirModel);

        souvenirIndex++;
    }
}
