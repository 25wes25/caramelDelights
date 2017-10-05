#include "database.h"

/*!
 * \brief Database::created
 * \var accesses created variable and sets to false
 */
bool Database::created = false;

/*!
 * \brief Database::globalBCInstance
 * \var sets the global instance to nothing
 */
Database* Database::globalBCInstance = NULL;

/*!
 * \brief Database::getInstance
 * \fn Gets instance
 * \return Database pointer
 */
Database* Database::getInstance()
{
    if (!created)
    {
        globalBCInstance = new Database();
        created = true;
        return globalBCInstance;
    }
    else
    {
        return globalBCInstance;
    }
}

/*!
 * \brief Database::SetDBPath
 * \param path
 * \fn Sets path to the database based on the string provided
 */
void Database::SetDBPath(const QString &path)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);

    if(!db.open())
    {
        qDebug() << "Error: connection with database failed";
    }
    else
    {
        qDebug() << "Database: connection made!";
    }
}

/*!
 * \brief Database::Autoload
 */
void Database::Autoload()
{
    //QDir::currentPath() + "/Database/database.db";
}

/*!
 * \brief Database::GetCollegeInfo
 * \fn takes the names of colleges and populates the structs vectors of distances
 * \param inColleges
 * \return vector of colleges
 */
QVector<colleges> Database::GetCollegeInfo(QVector<QString> inColleges)
{
    QSqlQuery query(db);

    QVector<colleges> collegeList;

    colleges newCollege;
    distances collegeInfo;


    for (int nameIndex = 0; nameIndex < inColleges.size(); nameIndex++)
    {
        newCollege.collegeName = inColleges[nameIndex];
        newCollege.visited = false;


        query.prepare("SELECT EndingCollege, DistanceBetween FROM Distances WHERE StartingCollege = (:collegeName)");
        query.bindValue(":collegeName", inColleges[nameIndex]);

        if (query.exec())
        {
            while (query.next())
            {
                //Fills out the name of the college and the distance
                collegeInfo.collegeName = query.value(0).toString();
                collegeInfo.distance = query.value(1).toFloat();

                //Pushes the many different colleges and their values to the vector
                //that pertains the the one college
                newCollege.distance.push_back(collegeInfo);
            }

        }
        else
        {
            qDebug() << "\Failed to execute query\n";
        }

        collegeList.push_back(newCollege);

        newCollege.distance.clear();

    }

    return collegeList;

}

QVector<QString> Database::setCollegeNames()
{
    QSqlQuery query(db);
    QVector<QString> collegeNames;
    query.prepare("SELECT distinct StartingCollege FROM Distances");
    query.exec();

    while(query.next())
    {
        collegeNames.push_back(query.value(0).toString());
    }

    return collegeNames;

}
