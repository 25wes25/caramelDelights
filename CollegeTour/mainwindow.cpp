#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    model = new QStandardItemModel(100,2,this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboCollege_activated(int index)
{

}

void MainWindow::on_spinNumber_valueChanged(int arg1)
{

}

void MainWindow::on_purchaseSouvenir_clicked() //purchase souvenir button
{

}

void MainWindow::on_customTrip_clicked() //custom trip button
{
    model->clear();
    model = new QStandardItemModel(100,1,this); //100 Rows and 4 Columns

    model->setHorizontalHeaderItem(0, new QStandardItem(QString("College")));

    ui->selectTable->setModel(model);

    QStandardItem *collegeName = new QStandardItem("Arizona State University");
    model->setItem(0, 0, collegeName);
}

void MainWindow::on_selectCollege_clicked() //should add the selected college to data structure of trip destinations
{
    //ui->selectTable->currentIndex()
}
