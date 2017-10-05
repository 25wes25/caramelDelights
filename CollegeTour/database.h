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

/*!
 * \brief The Database class
 * This database class aquires a singleton connection
 * and will be used to communicate with the SQL file
 */
class Database: public QSqlDatabase
{
private:

    /*!
     * \brief created
     * \var Variable to show we created an instance of the database
     *
     */
    static bool created;

    /*!
     * \brief globalBCInstance
     * \var Pointer to the instance of the Database class
     */
    static Database * globalBCInstance;

    /*!
     * \brief Database
     */
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
    QVector<QString> setCollegeNames();
    /*!
     * \brief db
     * \var db object for QT interactions
     */
    QSqlDatabase db;
    /*!
     * \brief getInstance
     * \fn gets the instance of the created object
     * \return instance of db
     */
    static Database* getInstance();
    /*!
     * \brief GetCollegeInfo
     * \param inColleges
     * \return vector of colleges
     */
    QVector<colleges> GetCollegeInfo(QVector<QString> inColleges);
    /*!
     * \brief SetDBPath
     * \fn sets the path to the connection
     * \param path
     */
    void SetDBPath(const QString &path);
    /*!
     * \brief Autoload
     * \fn loads db
     */
    void Autoload();

    ~Database()
    {
        created = false;
    }
};

#endif // DATABASE_H
