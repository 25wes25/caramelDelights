#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "trip.h"
#include <QFileDialog>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->addCollege->hide();
    //stops a user from click edit
    ui->mainTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboCollege_activated(int index)
{
    QString college = ui->comboCollege->currentText();
    qDebug() << "Starting college is " << college;
}

void MainWindow::on_spinNumber_valueChanged(int arg1)
{
    qDebug() << "The value is " << arg1;
}

void MainWindow::on_purchaseSouvenir_clicked() //purchase souvenir button
{

}

void MainWindow::on_customTrip_clicked() //custom trip button
{
    qDebug() << "customTrip clicked";
    collegeRow = 0;
    index = 0;

    //struct to be pushed onto the collegeList vector
    colleges newInsert;
    //model->clear();
    model = new QStandardItemModel(100,2,this); //100 Rows and 4 Columns
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("College")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Distances")));
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

void MainWindow::on_selectCollege_clicked() //should add the selected college to data structure of trip destinations
{
    //ui->selectTable->currentIndex()
}

void MainWindow::on_addCollege_clicked()
{
    qDebug() << "addCollege clicked";
    colleges newInsert;
    newInsert.collegeName = ui->comboCollege->currentText();
    int indexChosen = ui->comboCollege->currentIndex();

    customTrip.collegeList.push_back(newInsert);

    QStandardItem *collegeName = new QStandardItem(customTrip.collegeList[index].collegeName);
    model->setItem(collegeRow, 0, collegeName);

    ui->comboCollege->removeItem(indexChosen);

    collegeRow++;
    index++;
}
