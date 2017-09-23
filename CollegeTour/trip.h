#ifndef TRIP_H
#define TRIP_H
#include <QVector>
#include "database.h"
#include "structs.h"




class trip
{
public:
    trip();
    //constructor that takes in the number
    trip(QVector<QString> inColleges);
    //custom Trip constructor
    trip(QString startingCollege, int tripNumber);

    //get functions
    float getDistance(QString startColl, QString collName);

    bool isVisited(QString collName, QVector<colleges> &collegeList, int elem);

    float getSouvTotal();

    void printCollegeList();

    QVector<colleges> collegeList;

    QVector<colleges> SetCollegeList(QVector<QString> inColleges);

    void Recursive(QVector<colleges> &collegeList, int elem);

    bool markVisited(QString collName);

    //mutators



private:
    //vector holding the colleges and their respective
    //distances


    //vector holding the running total of items from their
    //colleges
    //SPRINT 2: QVector<souv> cart;

};

#endif // TRIP_H
