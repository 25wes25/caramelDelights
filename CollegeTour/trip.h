#ifndef TRIP_H
#define TRIP_H
#include <QVector>

//struct of colleges and their distance from
//the node they are on
struct distances
{
 QString collegeName;
 float distance;
};

struct souv
{
    QString item;
    float price;
    int quantity;
};

//This is the struct that holds all the above
//structs in vector data. distance-being the distance
//from the selected college
//and souveniers holding the total of purchased items
struct colleges
{
    QString collegeName;
    bool visited;
    QVector<distances> distance;
};


class trip
{
public:
    trip();
    //constructor that takes in the number
    trip(QVector<QString> inColleges);

    //get functions
    float getDistance(QString startColl, QString collName);

    bool isVisited(QString collName);

    float getSouvTotal();

    //mutators
    void Recursive(QVector &collegeList, int elem);

private:
    //vector holding the colleges and their respective
    //distances
    QVector<colleges> collegeList;

    //vector holding the running total of items from their
    //colleges
    //SPRINT 2: QVector<souv> cart;

};

#endif // TRIP_H
