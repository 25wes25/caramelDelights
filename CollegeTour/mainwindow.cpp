#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "trip.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

void MainWindow::on_pushButton_clicked()
{
//    qDebug() <<;
}

void MainWindow::on_customTripButton_clicked()
{
    QString startCampus = ui->comboCollege->currentText();
    int campusTotal = ui->spinCollege->value();
    //instantiate the CUSTOM trip constructor using the combo and spin box data
    trip customTrip(startCampus, campusTotal);
}
