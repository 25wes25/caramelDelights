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
