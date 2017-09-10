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

void trip::Recursive(QVector<colleges> &collegeList, int elem)
{
    int increment = 0;              // Incrementation used to find the location of the closest college in the list
    QString closestCollegeName;     // The name of the closest college used to find the college and sort it in the main college vector
    bool found = false;             // Bool used to find the closest college name in the main college vector
    float closestDistance = 100000; // Float used to store the closest college distance
    // Loops through the entire college list
    while (collegeList[elem].distance.size() != increment)
    {
        // Checks if the distance of the current element at the current increment is less than the previously closest distance and if the college is visited or not
        if (collegeList[elem].distance[increment].distance < closestDistance && isVisited(collegeList[elem].collegeName) == false)
        {
            // Stores the closest college distance in a temp float for use in finding the closest distance
            closestDistance = collegeList[elem].distance[increment].distance;
            // Stores the closest college name in a temporary QString for later use
            closestCollegeName = collegeList[elem].distance[increment].collegeName;
        }
        // Incrementation to check the entire distance vector
        increment++;
    }
    // Checks if the next element of the collegeList vector is already the closest college
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
                // Deletes the temporary struct to avoid memor leaks
                delete closestCollege;
                // Sets the next element in the collegeList vector as visited now that it is in place
                collegeList[elem+1].visited = true;
                // The college at the correct increment is found and therefore the loop can be exited
                found == true;
            }
            // Incrementation to find the location of the closest college
            increment++;
        }
    }
    // Base case check if the elem count is not equal to the size of the collegeList vector - 2
    // This is so that the last recursion occurs on the second to last element of the vector
    if (elem != collegeList.size()-2)
    {
        // Recursive call with the passed element count being incremented as the base case
        Recursive(collegeList, elem++);
    }
}
