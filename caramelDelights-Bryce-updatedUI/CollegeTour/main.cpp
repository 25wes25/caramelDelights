#include "mainwindow.h"
#include "login.h"
#include "saddlebackdistances.h"
#include "trip.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login log;
    SaddlebackDistances s;

    QVector<colleges> list;

    QVector<QString> tripNames= {"Saddleback College", "Arizona Statue University", "Northwestern","Massachusetts Institute of Technology (MIT)","Ohio State University","University of  Michigan","University of California, Irvine (UCI)","University of California, Los Angeles (UCLA)","University of Oregon","University of the Pacific","University of Wisconsin"};

    trip newTrip;

    list = newTrip.SetCollegeList(tripNames);

    newTrip.printCollegeList();

    newTrip.Recursive(list,0);

    s.show();
    log.show();

    return a.exec();
}
