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
    ui->nextPurchase->hide();
    //stops a user from click edit
    ui->mainTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->selectTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->SouvenirNames->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->souvenirCart->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->michiganTripTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->SouvenirNames->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->souvenirCart->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->saddleCollegeTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->saddleShopTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->saddleCartTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->uciTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->labelTotalDistance->hide();
    ui->michiganLocationLabel->hide();
    ui->michiganNextPurchase->hide();
    ui->michiganNextCollege->hide();
    ui->michiganDistanceLabel->hide();
    ui->michiganSouvQuantity->hide();
    ui->michiganQuantityLabel->hide();
    ui->customQuantityLabel->hide();
    ui->souvenirQuantity->hide();
    ui->purchaseSouvenir->hide();
    ui->customRemoveCart->hide();
    ui->michiganPurchase->hide();
    ui->michiganRemoveCart->hide();
    ui->saddlebackLocationLabel->hide();
    ui->saddleDistanceLabel->hide();
    ui->saddleNextCollege->hide();
    ui->saddlePurchase->hide();
    ui->saddleNextPurchase->hide();
    ui->saddleSouvQuantity->hide();
    ui->saddleQuantityLabel->hide();
    ui->saddleRemoveCart->hide();
    ui->customTripTotal->hide();
    ui->michiganTripTotal->hide();
    ui->saddleTripTotal->hide();
    ui->collegeCartTotal->hide();
    ui->collegeTotalLabel->hide();
    ui->saddleGrandTotal->hide();
    ui->saddleGrandTotalLabel->hide();

//    saddleTotals.reserve(20);

    database = Database::getInstance();
    database->SetDBPath(QDir::currentPath() + "\\Database\\College.db");
    QVector<QString> names = database->setCollegeNames();

    for(int i = 0; i < names.size(); i++)
    {
        ui->comboCollege->addItem(names[i]);
        ui->souvenirComboBox->addItem(names[i]);

    }
    maxVectorSize = names.size();
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
    customModel = new QStandardItemModel(100,1,this); //11 Rows and 1 Columns
    customModel->setHorizontalHeaderItem(0, new QStandardItem(QString("College")));
    ui->mainTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->mainTable->setModel(customModel);

    //text input from combo and spin box
    newInsert.collegeName = ui->comboCollege->currentText();
    int indexChosen = ui->comboCollege->currentIndex();
    int campusTotal = ui->spinCollege->value();

    customTrip.collegeList.push_back(newInsert);

    //instantiate the CUSTOM trip constructor using the combo and spin box data
    QStandardItem *collegeName = new QStandardItem(customTrip.collegeList[index].collegeName);
    customModel->setItem(collegeRow, 0, collegeName);

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

        QStandardItem *collegeName = new QStandardItem(customTrip.collegeList[index].collegeName);
        customModel->setItem(collegeRow, 0, collegeName);


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
    customModel->clear();
    ui->startTrip->hide();
    ui->nextCollege->show();
    ui->labelCollege->hide();
    ui->comboCollege->hide();
    ui->customTrip->hide();
    ui->addCollege->hide();
    ui->labelTotalDistance->show();
    ui->souvenirQuantity->show();
    ui->purchaseSouvenir->show();
    ui->customQuantityLabel->show();

    souvenirIndex = 0;

    ui->collegeLocation->setText(customTrip.collegeList[souvenirIndex].collegeName);
    ui->collegeLocation->show();

    database = Database::getInstance();
    database->SetDBPath(QDir::currentPath() + "\\Database\\College.db");

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

    customTripList = customTrip.SetCollegeList(tripNames);

    customTrip.Recursive(customTripList, 0);

    QString totDist = QString::number(customTrip.getTotalDistance());
    ui->labelTotalDistance->setText("Total Trip Distance: " + totDist);

    QSqlQueryModel * souvenirModel = new QSqlQueryModel();

    //sets up the query
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT TraditionalSouvenirs, Cost FROM Souvenirs WHERE College == (:collegeName)");
    query->bindValue(":collegeName",customTripList[souvenirIndex].collegeName);
    qDebug() << customTripList[souvenirIndex].collegeName;
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
        ui->nextCollege->hide();
        ui->customTripTotal->show();
    }
    else
    {
        ui->collegeLocation->setText(customTripList[souvenirIndex].collegeName);

        QSqlQueryModel * souvenirModel = new QSqlQueryModel();

        //sets up the query
        QSqlQuery *query = new QSqlQuery(database->db);
        query->prepare("SELECT TraditionalSouvenirs,Cost FROM Souvenirs WHERE College == (:collegeName)");
        query->bindValue(":collegeName",customTripList[souvenirIndex].collegeName);
        qDebug() << customTripList[souvenirIndex].collegeName;
        qDebug() << query->exec();
        souvenirModel->setQuery(*query);

        ui->selectTable->setModel(souvenirModel);

        if(souvenirIndex >= customTripList.size()-1)
        {
            ui->nextCollege->hide();
            ui->customTripTotal->show();
        }
        else
        {
            souvenirIndex++;
        }
    }
}

/**
 * @brief MainWindow::on_purchaseSouvenir_clicked
 */
void MainWindow::on_purchaseSouvenir_clicked() //purchase souvenir button
{
    if(ui->selectTable->selectionModel()->isSelected(ui->selectTable->currentIndex()))
    {
        souv newItem;
        QString itemPrice;
        visitedCollege visitedColl;

        ui->customRemoveCart->show();


    //    tableIndex = ui->selectTable->selectionModel()->selection().indexes();

    //    qDebug() << tableIndex[0].data().toInt();

        newItem.item = ui->selectTable->model()->data(ui->selectTable->model()->index(customSouvSelection, 0)).toString();
        itemPrice = ui->selectTable->model()->data(ui->selectTable->model()->index(customSouvSelection, 1)).toString();

        itemPrice = itemPrice.remove(0,1);
        newItem.price = itemPrice.toFloat();

        newItem.quantity = ui->souvenirQuantity->value();

        visitedColl.collegeName = customTrip.collegeList[souvenirIndex].collegeName;
        visitedColl.collegeCart.push_back(newItem);

        customTrip.cart.push_back(visitedColl);

        customModel = new QStandardItemModel(100,3,this); //11 Rows and 1 Columns
        customModel->setHorizontalHeaderItem(0, new QStandardItem(QString("Souvenir")));
        customModel->setHorizontalHeaderItem(1, new QStandardItem(QString("Price")));
        customModel->setHorizontalHeaderItem(2, new QStandardItem(QString("Quantity")));
        ui->mainTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        QStandardItem *souvName = new QStandardItem(newItem.item);
        QStandardItem *souvPrice = new QStandardItem("$" + itemPrice);
        QStandardItem *souvQuantity = new QStandardItem(QString::number(newItem.quantity));

        customModel->setItem(customCartRow, 0, souvName);
        customModel->setItem(customCartRow, 1, souvPrice);
        customModel->setItem(customCartRow, 2, souvQuantity);

        ui->mainTable->setModel(customModel);

        customCartRow++;
        ui->purchaseSouvenir->hide();
        ui->nextPurchase->show();
        ui->souvenirQuantity->setValue(1);
    }
    ui->selectTable->clearSelection();
}

void MainWindow::on_selectTable_clicked(const QModelIndex &index)
{
    customSouvSelection = index.row();

}

void MainWindow::on_nextPurchase_clicked()
{
    if(ui->selectTable->selectionModel()->isSelected(ui->selectTable->currentIndex()))
    {
        souv newItem;
        QString itemPrice;
        visitedCollege visitedColl;

        newItem.item = ui->selectTable->model()->data(ui->selectTable->model()->index(customSouvSelection, 0)).toString();
        itemPrice = ui->selectTable->model()->data(ui->selectTable->model()->index(customSouvSelection, 1)).toString();

        itemPrice = itemPrice.remove(0,1);
        newItem.price = itemPrice.toFloat();

        newItem.quantity = ui->souvenirQuantity->value();

        visitedColl.collegeName = customTrip.collegeList[souvenirIndex].collegeName;
        visitedColl.collegeCart.push_back(newItem);

        customTrip.cart.push_back(visitedColl);

        QStandardItem *souvName = new QStandardItem(newItem.item);
        QStandardItem *souvPrice = new QStandardItem("$" + itemPrice);
        QStandardItem *souvQuantity = new QStandardItem(QString::number(newItem.quantity));

        customModel->setItem(customCartRow, 0, souvName);
        customModel->setItem(customCartRow, 1, souvPrice);
        customModel->setItem(customCartRow, 2, souvQuantity);

        customCartRow++;
        ui->souvenirQuantity->setValue(1);
    }
    ui->selectTable->clearSelection();
}


/*!
 * \brief MainWindow::on_uciTripButton_clicked
 * \fn Plans trip from uci to all the rest of the schools and shows total distance traveled in whole trip
 */
void MainWindow::on_uciTripButton_clicked()
{

    QVector<QString> tripNames= {"University of California, Irvine (UCI)", "Arizona State University", "Northwestern","Saddleback College","Ohio State University","University of  Michigan","Massachusetts Institute of Technology (MIT)","University of California, Los Angeles (UCLA)","University of Oregon","University of the Pacific","University of Wisconsin"};


    uciList = uciTrip.SetCollegeList(tripNames);

    uciTrip.Recursive(uciList,0);

    QStandardItemModel* uciModel = new QStandardItemModel(20,1,this); //20 Rows and 1 Columns
    uciModel->setHorizontalHeaderItem(0, new QStandardItem("Colleges"));


    for(int i = 0; i < uciList.size();i++)
    {
        uciModel->setItem(i, new QStandardItem(uciList[i].collegeName));
    }

    ui->uciTableView->setModel(uciModel);
    ui->uciTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->uciTableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QString totDist = QString::number(uciTrip.getTotalDistance());
    ui->uciTotalDistance->setText("Total Trip Distance: " + totDist);

}

/*!
 * \brief MainWindow::on_souvenirFindButton_clicked
 * \fn Finds the respective souvenirs for the college
 */
void MainWindow::on_souvenirFindButton_clicked()
{
    QString name = ui->souvenirComboBox->currentText();

    QSqlQueryModel *model = new QSqlQueryModel();

    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT TraditionalSouvenirs, Cost FROM Souvenirs WHERE College == (:collegeName)");
    query->bindValue(":collegeName",name);
    query->exec();

    model->setQuery(*query);

    ui->souvenirTableView->setModel(model);
    ui->souvenirTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->souvenirTableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

}

/*!
 * \brief MainWindow::on_michiganTripButton_clicked
 * \fn Sets the michigan trip and shows the efficient order to travel
 */
void MainWindow::on_michiganTripButton_clicked()
{
    ui->michiganTripButton->hide();
    ui->michiganSpinBox->hide();
    ui->michiganLabel->hide();
    ui->michiganNextCollege->show();
    ui->michiganSouvQuantity->show();
    ui->michiganQuantityLabel->show();
    ui->michiganPurchase->show();

    QVector<QString> tripNames;

    souvenirIndex = 0;

    //Makes sure the trip doesnt get messed up from invalid input!
    ui->michiganSpinBox->setMaximum(maxVectorSize);

    tripNames.push_back("University of  Michigan");

    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT distinct StartingCollege FROM Distances WHERE StartingCollege != 'University of  Michigan'");
    qDebug() << query->exec();

    while(query->next())
    {
        tripNames.push_back(query->value(0).toString());
    }


    michiganList = michiganTrip.SetCollegeList(tripNames);

    michiganTrip.Recursive(michiganList,0);

    ui->michiganLocationLabel->setText(michiganTrip.collegeList[souvenirIndex].collegeName);
    ui->michiganLocationLabel->show();
    ui->michiganDistanceLabel->show();

    QString totDist = QString::number(michiganTrip.getTotalDistance());
    ui->michiganDistanceLabel->setText("Total Trip Distance: " + totDist);

    decision = ui->michiganSpinBox->value();



    QStandardItemModel* model = new QStandardItemModel(decision,1,this);
    model->setHorizontalHeaderItem(0, new QStandardItem("Colleges"));

    for(int i = 0; i < decision; i++)
    {
        model->setItem(i, new QStandardItem(michiganList[i].collegeName));
    }

    ui->michiganTripTableView->setModel(model);
    ui->michiganTripTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->michiganTripTableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QSqlQueryModel * souvenirModel = new QSqlQueryModel();

    //sets up the query
    QSqlQuery *souvenirQuery = new QSqlQuery(database->db);
    souvenirQuery->prepare("SELECT TraditionalSouvenirs,Cost FROM Souvenirs WHERE College == (:collegeName)");
    souvenirQuery->bindValue(":collegeName",michiganList[souvenirIndex].collegeName);
    qDebug() << michiganList[souvenirIndex].collegeName;
    qDebug() << souvenirQuery->exec();
    souvenirModel->setQuery(*souvenirQuery);

    ui->SouvenirNames->setModel(souvenirModel);
    ui->SouvenirNames->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->SouvenirNames->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    souvenirIndex++;
}

void MainWindow::on_michiganNextCollege_clicked()
{
    if(souvenirIndex == customTrip.collegeList.size())
    {
        ui->michiganNextCollege->hide();
        ui->michiganTripTotal->show();
    }
    else
    {
        ui->michiganLocationLabel->setText(michiganList[souvenirIndex].collegeName);

        QSqlQueryModel * souvenirModel = new QSqlQueryModel();

        //sets up the query
        QSqlQuery *query = new QSqlQuery(database->db);
        query->prepare("SELECT TraditionalSouvenirs,Cost FROM Souvenirs WHERE College == (:collegeName)");
        query->bindValue(":collegeName",michiganList[souvenirIndex].collegeName);
        qDebug() << michiganList[souvenirIndex].collegeName;
        qDebug() << query->exec();
        souvenirModel->setQuery(*query);

        ui->SouvenirNames->setModel(souvenirModel);

        if(souvenirIndex >= michiganList.size()-1)
        {
            ui->michiganNextCollege->hide();
            ui->michiganTripTotal->show();
        }
        else
        {
            souvenirIndex++;
        }
    }
}

void MainWindow::on_michiganPurchase_clicked()
{
    if(ui->SouvenirNames->selectionModel()->isSelected(ui->SouvenirNames->currentIndex()))
    {
        ui->michiganRemoveCart->show();
        souv newItem;
        QString itemPrice;
        visitedCollege visitedColl;


        newItem.item = ui->SouvenirNames->model()->data(ui->SouvenirNames->model()->index(michiganSouvSelection, 0)).toString();
        itemPrice = ui->SouvenirNames->model()->data(ui->SouvenirNames->model()->index(michiganSouvSelection, 1)).toString();

        itemPrice = itemPrice.remove(0,1);
        newItem.price = itemPrice.toFloat();

        newItem.quantity = ui->michiganSouvQuantity->value();

        visitedColl.collegeName = michiganTrip.collegeList[souvenirIndex].collegeName;
        visitedColl.collegeCart.push_back(newItem);

        michiganTrip.cart.push_back(visitedColl);

        michiganModel = new QStandardItemModel(100,3,this); //11 Rows and 1 Columns
        michiganModel->setHorizontalHeaderItem(0, new QStandardItem(QString("Souvenir")));
        michiganModel->setHorizontalHeaderItem(1, new QStandardItem(QString("Price")));
        michiganModel->setHorizontalHeaderItem(2, new QStandardItem(QString("Quantity")));
        ui->souvenirCart->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        QStandardItem *souvName = new QStandardItem(newItem.item);
        QStandardItem *souvPrice = new QStandardItem("$" + itemPrice);
        QStandardItem *souvQuantity = new QStandardItem(QString::number(newItem.quantity));

        michiganModel->setItem(michiganCartRow, 0, souvName);
        michiganModel->setItem(michiganCartRow, 1, souvPrice);
        michiganModel->setItem(michiganCartRow, 2, souvQuantity);

        ui->souvenirCart->setModel(michiganModel);

        michiganCartRow++;
        ui->michiganPurchase->hide();
        ui->michiganNextPurchase->show();
        ui->michiganSouvQuantity->setValue(1);
        ui->SouvenirNames->clearSelection();
    }
}

void MainWindow::on_SouvenirNames_clicked(const QModelIndex &index)
{
    michiganSouvSelection = index.row();
}

void MainWindow::on_michiganNextPurchase_clicked()
{
    if(ui->SouvenirNames->selectionModel()->isSelected(ui->SouvenirNames->currentIndex()))
    {
        souv newItem;
        QString itemPrice;
        visitedCollege visitedColl;

        newItem.item = ui->SouvenirNames->model()->data(ui->SouvenirNames->model()->index(michiganSouvSelection, 0)).toString();
        itemPrice = ui->SouvenirNames->model()->data(ui->SouvenirNames->model()->index(michiganSouvSelection, 1)).toString();

        itemPrice = itemPrice.remove(0,1);
        newItem.price = itemPrice.toFloat();

        newItem.quantity = ui->michiganSouvQuantity->value();

        visitedColl.collegeName = michiganTrip.collegeList[souvenirIndex].collegeName;
        visitedColl.collegeCart.push_back(newItem);

        michiganTrip.cart.push_back(visitedColl);

        QStandardItem *souvName = new QStandardItem(newItem.item);
        QStandardItem *souvPrice = new QStandardItem("$" + itemPrice);
        QStandardItem *souvQuantity = new QStandardItem(QString::number(newItem.quantity));

        michiganModel->setItem(michiganCartRow, 0, souvName);
        michiganModel->setItem(michiganCartRow, 1, souvPrice);
        michiganModel->setItem(michiganCartRow, 2, souvQuantity);

        michiganCartRow++;
        ui->michiganSouvQuantity->setValue(1);
        qDebug() << "michiganCartRow: " << michiganCartRow;
        ui->SouvenirNames->clearSelection();
    }
}

void MainWindow::on_michiganRemoveCart_clicked()
{
    if(ui->souvenirCart->selectionModel()->isSelected(ui->souvenirCart->currentIndex()))
    {
        michiganModel->removeRow(michiganCartSelection);
        if(michiganCartRow > 0)
        {
            michiganCartRow--;
            michiganCartSelection--;
        }
    }
    ui->souvenirCart->clearSelection();
}

void MainWindow::on_souvenirCart_clicked(const QModelIndex &index)
{
    michiganCartSelection = index.row();
}

void MainWindow::on_customRemoveCart_clicked()
{
    if(ui->mainTable->selectionModel()->isSelected(ui->mainTable->currentIndex()))
    {
        customModel->removeRow(customCartSelection);
        if(customCartRow > 0)
        {
            customCartRow--;
            customCartSelection--;
        }
    }
    ui->mainTable->clearSelection();
//    qDebug() << "customCartRow: " << customCartRow;
//    qDebug() << "customCartSelection: " << customCartSelection;
}

void MainWindow::on_mainTable_clicked(const QModelIndex &index)
{
    customCartSelection = index.row();
}

void MainWindow::on_saddleStartButton_clicked()
{
    ui->saddleNextCollege->show();
    ui->saddleQuantityLabel->show();
    ui->saddleSouvQuantity->show();
    ui->saddlePurchase->show();
    ui->saddleStartButton->hide();
    ui->saddleLabel->setText("");
    ui->collegeCartTotal->show();
    ui->collegeTotalLabel->show();
    ui->collegeCartTotal->setText("$0");
    ui->saddleGrandTotal->show();
    ui->saddleGrandTotalLabel->show();
    ui->saddleGrandTotal->setText("$0");

    QVector<QString> tripNames;

    souvenirIndex = 0;

    //Makes sure the trip doesnt get messed up from invalid input!
    //ui->michiganSpinBox->setMaximum(maxVectorSize);

    tripNames.push_back("Saddleback College");

    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT distinct StartingCollege FROM Distances WHERE StartingCollege != 'Saddleback College'");
    qDebug() << query->exec();

    while(query->next())
    {
        tripNames.push_back(query->value(0).toString());
    }


    saddleList = saddleTrip.SetCollegeList(tripNames);
    saddleTrip.Recursive(saddleList,0);

    ui->saddlebackLocationLabel->setText((saddleTrip.collegeList[souvenirIndex].collegeName));
    ui->saddlebackLocationLabel->show();
    ui->saddleDistanceLabel->show();

    QString totDist = QString::number(saddleTrip.getTotalDistance());
    ui->saddleDistanceLabel->setText("Total Trip Distance: " + totDist);

    QStandardItemModel* model = new QStandardItemModel(saddleTrip.collegeList.size(),1,this);
    model->setHorizontalHeaderItem(0, new QStandardItem("Colleges"));

    for(int i = 0; i < saddleTrip.collegeList.size(); i++)
    {
        model->setItem(i, new QStandardItem(saddleList[i].collegeName));
    }

    ui->saddleCollegeTable->setModel(model);
    ui->saddleCollegeTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->saddleCollegeTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QSqlQueryModel * souvenirModel = new QSqlQueryModel();

    //sets up the query
    QSqlQuery *souvenirQuery = new QSqlQuery(database->db);
    souvenirQuery->prepare("SELECT TraditionalSouvenirs,Cost FROM Souvenirs WHERE College == (:collegeName)");
    souvenirQuery->bindValue(":collegeName",saddleList[souvenirIndex].collegeName);
    qDebug() << saddleList[souvenirIndex].collegeName;
    qDebug() << souvenirQuery->exec();
    souvenirModel->setQuery(*souvenirQuery);

    ui->saddleShopTable->setModel(souvenirModel);
    ui->saddleShopTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->saddleShopTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    souvenirIndex++;
}

void MainWindow::on_saddlePurchase_clicked()
{
//    qDebug() << "it is: " << ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 0)).toString().isEmpty();
    if(ui->saddleShopTable->selectionModel()->isSelected(ui->saddleShopTable->currentIndex()))
    {
        ui->saddleRemoveCart->show();
        souv newItem;
        QString itemPrice;
        visitedCollege visitedColl;
//        float cartValue;
        QString cartString, collegeTotalString;

//        if (std::find(saddleTrip.cart[souvenirIndex].collegeCart.begin(), saddleTrip.cart[souvenirIndex].collegeCart.end(), ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 0)).toString()) != saddleTrip.cart[souvenirIndex].collegeCart.end())
//        {
//          QVector<souv>::iterator it = std::find(saddleTrip.cart[souvenirIndex].collegeCart.begin(), saddleTrip.cart[souvenirIndex].collegeCart.end(), ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 0)).toString());
//          qDebug() << "Iterator Name: " << it->item;
//          qDebug() << "Iterator Quantity Before: " << it->quantity;
//          it->quantity += ui->saddleSouvQuantity->value();
//          qDebug() << "Iterator Quantity After: " << it->quantity;
//        }
//        else
//        {

//        }

        newItem.item = ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 0)).toString();
        itemPrice = ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 1)).toString();

//        cartValue = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 1)).toFloat();

//        saddleTotals[souvenirIndex]

//        saddleTotals[souvenirIndex] = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(, 1)).toFloat();

        itemPrice = itemPrice.remove(0,1);
        newItem.price = itemPrice.toFloat();

        newItem.quantity = ui->saddleSouvQuantity->value();

        visitedColl.collegeName = saddleTrip.collegeList[souvenirIndex].collegeName;
        visitedColl.collegeCart.push_back(newItem);

        saddleTrip.cart.push_back(visitedColl);

        saddleModel = new QStandardItemModel(100,3,this); //11 Rows and 1 Columns
        saddleModel->setHorizontalHeaderItem(0, new QStandardItem(QString("Souvenir")));
        saddleModel->setHorizontalHeaderItem(1, new QStandardItem(QString("Price")));
        saddleModel->setHorizontalHeaderItem(2, new QStandardItem(QString("Quantity")));
        ui->saddleCartTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

        QStandardItem *souvName = new QStandardItem(newItem.item);
        QStandardItem *souvPrice = new QStandardItem("$" + itemPrice);
        QStandardItem *souvQuantity = new QStandardItem(QString::number(newItem.quantity));

        saddleModel->setItem(saddleCartRow, 0, souvName);
        saddleModel->setItem(saddleCartRow, 1, souvPrice);
        saddleModel->setItem(saddleCartRow, 2, souvQuantity);


        ui->saddleCartTable->setModel(saddleModel);

        cartString = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(0, 1)).toString();

        cartString = cartString.remove(0,1);
        cartTotal  = cartString.toDouble() * newItem.quantity;
        cartString = QString::number(cartTotal);
        cartString = "$" + cartString;

        collegeTotalString = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(0, 1)).toString();

        collegeTotalString = collegeTotalString.remove(0,1);
        labelTotal  += collegeTotalString.toDouble() * newItem.quantity;
        collegeTotalString = QString::number(labelTotal);
        collegeTotalString = "$" + collegeTotalString;

//        saddleModel->setHorizontalHeaderItem(3, new QStandardItem(QString("Total")));
//        QStandardItem *souvTotal = new QStandardItem(cartString);
//        saddleModel->setItem(0, 3, souvTotal);

        saddleCartRow++;
        ui->saddlePurchase->hide();
        ui->saddleNextPurchase->show();
        ui->saddleSouvQuantity->setValue(1);
        ui->saddleShopTable->clearSelection();
        ui->collegeCartTotal->setText(collegeTotalString);
        ui->saddleGrandTotal->setText(cartString);
        cartTotalCount++;
    }
}

void MainWindow::on_saddleShopTable_clicked(const QModelIndex &index)
{
    saddleCartSelection = index.row();
}

void MainWindow::on_saddleRemoveCart_clicked()
{
    qDebug() << "Cart Selection: " << ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 1)).toString();
    if(ui->saddleCartTable->selectionModel()->isSelected(ui->saddleCartTable->currentIndex()))
    {
        QString removeString = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 1)).toString();

        removeString = removeString.remove(0,1);
        qDebug() << "uiTable: " << ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 2)).toDouble();

        cartTotal -= removeString.toDouble() * ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 2)).toDouble();
        cartTotal = floor(cartTotal * pow(10., 2) + .5) / pow(10., 2);

        labelTotal -= removeString.toDouble() * ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 2)).toDouble();
        labelTotal = floor(cartTotal * pow(10., 2) + .5) / pow(10., 2);

        qDebug() << "uiTable: " << ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 2)).toDouble();
        qDebug() << "removeString: " << removeString.toDouble();
        qDebug() << "cartTotal: " << cartTotal;
        ui->collegeCartTotal->setText("$" + QString::number(cartTotal));
        ui->saddleGrandTotal->setText("$" + QString::number(labelTotal));


        saddleModel->removeRow(saddleCartSelection);

        ui->saddleCartTable->clearSelection();

        if(saddleCartRow >= 0)
        {
            saddleCartRow--;
        }
        if(saddleCartSelection >= 0)
        {
            saddleCartSelection--;
        }
        if(cartTotalCount >= 0)
        {
            cartTotalCount--;
        }

//        saddleModel->setHorizontalHeaderItem(3, new QStandardItem(QString("Total")));
//        QStandardItem *souvTotal = new QStandardItem("$" + QString::number(cartTotal));
//        saddleModel->setItem(0, 3, souvTotal);
    }
}

void MainWindow::on_saddleNextPurchase_clicked()
{
    if(ui->saddleShopTable->selectionModel()->isSelected(ui->saddleShopTable->currentIndex()))
    {
        souv newItem;
        QString itemPrice;
        visitedCollege visitedColl;
        QString cartString;
        QString collegeTotalString;

        newItem.item = ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 0)).toString();
        itemPrice = ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 1)).toString();

//        saddleTotals[souvenirIndex] += ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(saddleCartSelection, 1)).toFloat();

        itemPrice = itemPrice.remove(0,1);
        newItem.price = itemPrice.toFloat();

        newItem.quantity = ui->saddleSouvQuantity->value();

        visitedColl.collegeName = saddleTrip.collegeList[souvenirIndex].collegeName;
        visitedColl.collegeCart.push_back(newItem);

        saddleTrip.cart.push_back(visitedColl);

        QStandardItem *souvName = new QStandardItem(newItem.item);
        QStandardItem *souvPrice = new QStandardItem("$" + itemPrice);
        QStandardItem *souvQuantity = new QStandardItem(QString::number(newItem.quantity));

        saddleModel->setItem(saddleCartRow, 0, souvName);
        saddleModel->setItem(saddleCartRow, 1, souvPrice);
        saddleModel->setItem(saddleCartRow, 2, souvQuantity);

        cartString = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(cartTotalCount, 1)).toString();

        cartString = cartString.remove(0,1);
        cartTotal  += cartString.toDouble() * newItem.quantity;
        cartString = QString::number(cartTotal);
        cartString = "$" + cartString;

        collegeTotalString = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(cartTotalCount, 1)).toString();

        collegeTotalString = collegeTotalString.remove(0,1);
        labelTotal  += collegeTotalString.toDouble() * newItem.quantity;
        collegeTotalString = QString::number(labelTotal);
        collegeTotalString = "$" + collegeTotalString;

//        saddleModel->setHorizontalHeaderItem(3, new QStandardItem(QString("Total")));
//        QStandardItem *souvTotal = new QStandardItem(cartString);
//        saddleModel->setItem(0, 3, souvTotal);

        saddleCartRow++;
        ui->saddleSouvQuantity->setValue(1);
        qDebug() << "saddleCartRow: " << saddleCartRow;
        ui->saddleShopTable->clearSelection();
        ui->collegeCartTotal->setText(collegeTotalString);
        ui->saddleGrandTotal->setText(cartString);
        cartTotalCount++;
    }
}

void MainWindow::on_saddleNextCollege_clicked()
{
    if(souvenirIndex == customTrip.collegeList.size())
    {
        ui->saddleNextCollege->hide();
        ui->saddleTripTotal->show();
    }
    else
    {
        labelTotal = 0;
        ui->collegeCartTotal->setText("$0");
        ui->saddlebackLocationLabel->setText(saddleList[souvenirIndex].collegeName);

        QSqlQueryModel * souvenirModel = new QSqlQueryModel();

        //sets up the query
        QSqlQuery *query = new QSqlQuery(database->db);
        query->prepare("SELECT TraditionalSouvenirs,Cost FROM Souvenirs WHERE College == (:collegeName)");
        query->bindValue(":collegeName",saddleList[souvenirIndex].collegeName);
        qDebug() << saddleList[souvenirIndex].collegeName;
        qDebug() << query->exec();
        souvenirModel->setQuery(*query);

        ui->saddleShopTable->setModel(souvenirModel);

        if(souvenirIndex >= saddleList.size()-1)
        {
            ui->saddleNextCollege->hide();
            ui->saddleTripTotal->show();
        }
        else
        {
            souvenirIndex++;
        }
    }
}

void MainWindow::on_saddleTripTotal_clicked()
{
//    for(QVector<float>::iterator it = saddleTotals.begin(); it != saddleTotals.end(); it++)
//    {
//        qDebug() << "total: " << *it;
//    }
//    int saddleTotalRow;
//    int saddleQuantityRow;

//    for(saddleTotalRow = 0; )
    QString itemPrice;
    float   cartTotal;

//    itemPrice = ui->saddleShopTable->model()->data(ui->saddleShopTable->model()->index(saddleCartSelection, 1)).toString();

//    itemPrice = itemPrice.remove(0,1);
//    cartTotal = itemPrice.toFloat();

    for(int index = 0; !(ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(index, 1)).toString().isEmpty()); index++)
    {
        itemPrice = ui->saddleCartTable->model()->data(ui->saddleCartTable->model()->index(index, 1)).toString();

        itemPrice = itemPrice.remove(0,1);
        cartTotal += itemPrice.toFloat();
    }
}
