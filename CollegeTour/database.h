#ifndef DATABASE_H
#define DATABASE_H


#include <QString>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QFileInfo>
#include <QDebug>

class Database: public QSqlDatabase
{
private:

    static bool created;
    static Database * globalBCInstance;

    Database()
    {
//        this->setDatabaseName("./path");
//        QFileInfo exisiting("path here");
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
    void SetDBPath(const QString &path);

    ~Database()
    {
        created = false;
    }
};

#endif // DATABASE_H
