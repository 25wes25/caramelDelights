#include "mainwindow.h"
#include "login.h"
#include "saddlebackdistances.h"
#include "trip.h"
#include <QApplication>
#include <QDir>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    login log;
    SaddlebackDistances s;

//    QVector<colleges> list;

//    //QVector<QString> tripNames= {"Massachusetts Institute of Technology (MIT)", "Arizona Statue University", "Northwestern"};

//    QVector<QString> tripNames= {"Massachusetts Institute of Technology (MIT)", "Arizona State University", "Northwestern","Saddleback College","Ohio State University","University of  Michigan","University of California, Irvine (UCI)","University of California, Los Angeles (UCLA)","University of Oregon","University of the Pacific","University of Wisconsin"};

//    trip newTrip;

//    list = newTrip.SetCollegeList(tripNames);

//    newTrip.printCollegeList();

//    newTrip.Recursive(list,0);

    s.show();
    log.show();

    return a.exec();
}
