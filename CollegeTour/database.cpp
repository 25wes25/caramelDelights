#include "database.h"
#include <QSqlError>

//bool Database::created = false;
//Database* Database::globalBCInstance = NULL;

Database::Database()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/users/Wyndal/Downloads/caramelDelights-master/CollegeTour/College.db");

    if(!db.open())
        qDebug() << "Not connected to DB.";
    else if(db.open())
        qDebug() << "Connected to DB.";
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
            qDebug() << "\nExecuted Query\n";

            while (query.next())
            {

                collegeInfo.collegeName = query.value(0).toString();
                collegeInfo.distance = query.value(1).toFloat();

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
