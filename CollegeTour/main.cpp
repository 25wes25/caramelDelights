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

    //QVector<QString> tripNames= {"Massachusetts Institute of Technology (MIT)", "Arizona Statue University", "Northwestern"};

    s.show();
    log.show();

    return a.exec();
}
