#include "database.h"

bool Database::created = false;
Database* Database::globalBCInstance = NULL;

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
