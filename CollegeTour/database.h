#ifndef DATABASE_H
#define DATABASE_H

#include "trip.h"
#include "structs.h"

#include <QString>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QFileInfo>
#include <QDebug>
#include <QSqlQueryModel>

class Database: public QSqlDatabase
{
private:

    static bool created;
    static Database * globalBCInstance;

    Database()
    {
//        this->setDatabaseName("./Resources/College.db");
//
//        if(exisiting.exists())
//        {
//            qDebug() << "it exists";
//        }
//        else
//        {
//            qDebug() << "not exsitiing";
//        }

//        this->open();
    }


public:
    QSqlDatabase db;
    static Database* getInstance();
    QVector<colleges> GetCollegeInfo(QVector<QString> inColleges);
    void SetDBPath(const QString &path);

    ~Database()
    {
        created = false;
    }
};

#endif // DATABASE_H
