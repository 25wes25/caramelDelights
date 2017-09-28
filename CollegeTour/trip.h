#ifndef TRIP_H
#define TRIP_H
#include <QVector>
#include "database.h"
#include "structs.h"



/**
 * @brief The trip class
 * \class that utalizes the \struct colleges and the \struct distances
 * to make and hold vectors of the students planned trip
 *
 * multiple constructors allow the user to either plan their
 * own trip, or use one of the pre-planned options.
 * The trip class consists of many public accessor functions
 */
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
    /**
     * @brief collegeList
     * \struct colleges filled VECTOR that holds the user's
     * choosen colleges and the distances from one college to another
     */
    QVector<colleges> collegeList;

    QVector<colleges> SetCollegeList(QVector<QString> inColleges);

    /**
     * @brief Recursive
     * @param collegeList
     * @param elem
     * The bread and butter of the program, this will allow the
     * user to plan any type of trip and always be assured that
     * it is the most optimized when finished.
     */
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
