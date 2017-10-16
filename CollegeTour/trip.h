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
    /*!
     * \brief trip constructor
     */
    trip();
    /*!
     * \brief trip constructor with parameter
     * \param inColleges
     */
    trip(QVector<QString> inColleges);
    /*!
     * \brief trip constructor with 2 parameters
     * \param startingCollege
     * \param tripNumber
     */
    trip(QString startingCollege, int tripNumber);

    /*!
     * \brief getDistance
     * gets distance
     * \param startColl
     * \param collName
     * \return
     */
    float getDistance(QString startColl, QString collName);

    /*!
     * \brief isVisited
     * checks if we visited the school or not
     * \param collName
     * \param collegeList
     * \param elem
     * \return
     */
    bool isVisited(QString collName, QVector<colleges> &collegeList, int elem);

    /*!
     * \brief getSouvTotal gets souvenir total
     * \return
     */
    float getSouvTotal();

    /*!
     * \brief printCollegeList prints all the info when reading database
     */
    void printCollegeList();
    /**
     * @brief collegeList
     * \struct colleges filled VECTOR that holds the user's
     * choosen colleges and the distances from one college to another
     */
    QVector<colleges> collegeList;

    /*!
     * \brief SetCollegeList function to take in vector of strings and set info
     * \param inColleges
     * \return
     */
    QVector<colleges> SetCollegeList(QVector<QString> inColleges);

    /*!
     * \brief isInList checks if school is in trip list
     * \param collName
     * \param collegeList
     * \return
     */
    bool isInList(QString collName, QVector<colleges> &collegeList);

    /**
     * @brief Recursive
     * @param collegeList
     * @param elem
     * The bread and butter of the program, this will allow the
     * user to plan any type of trip and always be assured that
     * it is the most optimized when finished.
     */
    void Recursive(QVector<colleges> &collegeList, int elem);

    /*!
     * \brief markVisited marks school as visited
     * \param collName
     * \return
     */
    bool markVisited(QString collName);

    /*!
     * \brief cart
     * \var cart
     */
    QVector<visitedCollege> cart;

    /*!
     * \brief getTotalDistance gets total distance of trip
     * \return
     */
    float getTotalDistance();

    //mutators



private:
    float totalDistance;
};

#endif // TRIP_H
