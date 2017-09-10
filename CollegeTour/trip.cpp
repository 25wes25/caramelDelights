#include "trip.h"

trip::trip()
{

}

/*
 * CONSTRUCTOR
 * INPUT: QVector of college names that will be visited(custom trip)
 *
 * manipulates collegeList so that is has the number of colleges needed
 * in a custom trip, and will implement the distances to the other colleges
 */
trip::trip(QVector<QString> inColleges)
{
    colleges filler;
    for(int index = 0; index < inColleges.size(); index++)
    {
        filler.collegeName = inColleges[index];
        filler.visited = false;
        //function to set the distance vector within colleges struct
        collegeList.push_back(filler);
    }

}
/*
 * GET-FUNCTION
 * INPUT: collegeName
 * OUTPUT: bool (has/hasnt been visited)
 */
bool trip::isVisited(QString collName)
{
    for(int index = 0; index < collegeList.size(); index++)
    {
        if(collName == collegeList[index].collegeName)
        {
            return collegeList[index].visited;
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

/* GET-FUNCTION
 * INPUT: starting and ending college
 * OUTPUT: float of the distance between the two colleges
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
