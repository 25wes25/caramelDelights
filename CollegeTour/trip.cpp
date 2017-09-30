#include "trip.h"
#include <QDir>

/**
 * @brief trip::trip
 * CONSTRUCTOR
 * basic constructor that clears its vector of colleges
 * to start with a clean college vector
 */
trip::trip()
{
    collegeList.clear();
    cart.clear();
}

/**
 * CONSTRUCTOR
 * INPUT: QVector of college names that will be visited(custom trip)
 *
 * manipulates collegeList so that is has the number of colleges needed
 * in a custom trip, and will implement the distances to the other colleges
 */
trip::trip(QVector<QString> inColleges)
{


}

trip::trip(QString startingCollege, int tripNumber)
{
    //sets the vector to the size of the trip
    collegeList.clear();
    //populates the starting struct with the needed values
    colleges startingCampus;
    startingCampus.collegeName = startingCollege;
    collegeList.push_back(startingCampus);
    //need code to populate the distances vector in the colleges struct
    //startingCampus.distance = SetCollegeList()
}

/**
 * @brief trip::SetCollegeList
 * @param inColleges
 * @return
 * queries the database to set a vector of colleges, with their
 * right names and distances
 */
QVector<colleges> trip::SetCollegeList(QVector<QString> inColleges)
{
    Database* db = Database::getInstance();
    db->SetDBPath(QDir::currentPath() + "\\Database\\College.db");

    collegeList.clear();

    collegeList = db->GetCollegeInfo(inColleges);

    return collegeList;
}
/**
 * @brief trip::printCollegeList
 *
 * void function that iterates through the vector of colleges
 * and prints out the college names and their respective distances
 */
void trip::printCollegeList()
{
    for (int index = 0; index < collegeList.size(); index++)
    {
        qDebug() << collegeList[index].collegeName;

        for (int index1 = 0 ; index1 < collegeList[index].distance.size(); index1++)
        {
            qDebug() << collegeList[index].distance[index1].collegeName;
            qDebug() << collegeList[index].distance[index1].distance;
        }
    }
}


/**
 * GET-FUNCTION
 * INPUT: collegeName
 * OUTPUT: bool (has/hasnt been visited)
 */
bool trip::isVisited(QString collName,QVector<colleges> &collegeList, int elem)
{
    //Loops through from the first index to the element in vector that
    //is actually sorted and if it sees it returns true to
    //avoid considering that college
    for(int index = 0; index < elem; index++)
    {
        if(collName == collegeList[index].collegeName)
        {
            return true;
        }
    }
    return false;
}

//float trip::getSouvTotal()
//{
//    float totalPurchased = 0;
//    float cartTotal = 0;

//    for(int index = 0; index < collegeList.size(); index++)
//    {
//        for(int second = 0; second < collegeList[index].cart.size(); second++)
//        {


//        }

//    }

//}

/**
 * GET-FUNCTION
 * INPUT: starting and ending college
 * OUTPUT: float of the distance between the two coll   eges
 *
 * goes through the initial vector finding the starting college
 * then goes into the distances vector to locate the ending college distance
 */
float trip::getDistance(QString startColl, QString collName)
{
    //this will return the distance from the first
    //paramater to the second parameter
    float distanceFrom = 0;

    for(int index = 0; index < collegeList.size(); index++)
    {
        if(startColl == collegeList[index].collegeName)
        {
            for(int second = 0; second < collegeList[index].distance.size(); second++)
            {
                if(collName == collegeList[index].distance[second].collegeName)
                {
                    distanceFrom = collegeList[index].distance[second].distance;
                }
            }
        }
    }
    return distanceFrom;
}


void trip::Recursive(QVector<colleges> &collegeList, int elem)
{
    int increment = 0;              // Incrementation used to find the location of the closest college in the list
    QString closestCollegeName;     // The name of the closest college used to find the college and sort it in the main college vector
    bool found = false;             // Bool used to find the closest college name in the main college vector
    float closestDistance = 100000; // Float used to store the closest college distance

    // Loops through the entire college list
    if (isVisited(collegeList[elem].collegeName,collegeList, elem) == false)
    {
        collegeList[elem].visited = true;
    }
    while (collegeList[elem].distance.size() != increment)
    {
        // Checks if the distance of the current element at the current increment is less than the previously closest distance and if the college is visited or not
        if (collegeList[elem].distance[increment].distance < closestDistance && isVisited(collegeList[elem].distance[increment].collegeName,collegeList,elem) == false)
        {
            // Stores the closest college distance in a temp float for use in finding the closest distance
            closestDistance = collegeList[elem].distance[increment].distance;
            // Stores the closest college name in a temporary QString for later use
            closestCollegeName = collegeList[elem].distance[increment].collegeName;
        }

        // Incrementation to check the entire distance vector
        increment++;
    }
    qDebug() << "Closest College is "  << closestCollegeName;

    //Checks if the next element of the collegeList vector is already the closest college
    if (collegeList[elem+1].collegeName != closestCollegeName)
    {
        increment = 0;
        // Loops while the location of the closest college is not found
        while (!found)
        {
            // Checks if the element at the increment is the closest college
            if (collegeList[increment].collegeName == closestCollegeName)
            {
                // New colleges struct stores the next element of the collegeList vector
                colleges *closestCollege = new colleges;
                *closestCollege = collegeList[elem+1];

                // The next element of the collegeList vector becomes the closest college
                collegeList[elem+1] = collegeList[increment];
                // The old location of the closest college becomes the stored college struct of the originally next element
                collegeList[increment] = *closestCollege;
                // Deletes the temporary struct to avoid memory leaks
                // Sets the next element in the collegeList vector as visited now that it is in place
                collegeList[elem+1].visited = true;
                // The college at the correct increment is found and therefore the loop can be exited
                found = true;
            }
            // Incrementation to find the location of the closest college
            increment++;
        }
    }

    for(int i = 0; i < collegeList.size(); i++)
    {
        qDebug() << "List is " << collegeList[i].collegeName;
//        qDebug() << "Visited Status is " << collegeList[i].visited;
    }
    // Base case check if the elem count is not equal to the size of the collegeList vector - 2
    // This is so that the last recursion occurs on the second to last element of the vector
    if (elem != collegeList.size()-2)
    {
        // Recursive call with the passed element count being incremented as the base case
        Recursive(collegeList, elem+1);
    }
}

bool trip::isInList(QString collName, QVector<colleges> &collegeList)
{
    for (int index = 0; index < collegeList.size();)
    {
        if (collName == collegeList[index].collegeName)
        {
            return true;
        }
    }
    return false;
}
