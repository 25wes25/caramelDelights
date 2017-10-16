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

    log.show();

    return a.exec();
}
