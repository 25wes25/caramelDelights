#ifndef DATABASE_H
#define DATABASE_H


#include <QString>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlDatabase>
#include <QFileInfo>
#include <QDebug>

using namespace std;

struct distances
{
 QString collegeName;
 float distance;
};

struct colleges
{
    QString collegeName;
    bool visited;
    QVector<distances> distance;
};



class Database: public QSqlDatabase
{
private:






public:
    QSqlDatabase db;


    QVector<colleges> GetCollegeInfo(QVector<QString> inColleges);


    Database();
};

#endif // DATABASE_H
