#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include "trip.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login log;

    log.show();

    QVector<QString> tripNames= {"Saddleback College", "Arizona Statue University", "Northwestern"};

    trip newTrip;

    newTrip.SetCollegeList(tripNames);

    newTrip.printCollegeList();

    return a.exec();
}
