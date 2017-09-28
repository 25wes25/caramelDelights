#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QVector>
#include "mainwindow.h"
#include "adminwindow.h"

//holds the username, password, and admin access
//of each account on file.
struct user
{
    QString name;
    QString password;
    bool okAdmin;
};

namespace Ui {
class login;
}

/*!
 * \brief The login class handles login information, the program
 * checks the credentials and determines if the account is an admin
 * or traveler. The class also allows the user to add an account.
 */
class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

    //accessor functions
    bool isAccount(QString nameIn, QString passIn); //!< isAccount checks if the user is a traveler.  */

    bool isAdmin(QString nameIn, QString passIn); //!< isAdmin checks to see if the user is an admin.  */

    //QString index(QString nameIn, QString passIn);

    //mutators
    void addAccount(QString nameIn, QString passIn, bool adminIn); //!< addAccount allows the user to add a new account.  */



private slots:
    void on_LoginButton_clicked(); //!< "Login" push button  */

private:
    Ui::login *ui;
    QVector<user> accounts; /*!< QVector of struct 'user'  */
                            //vector holding user login info
                            //using struct:user
    MainWindow interface;   /*!< Traveler interface */
    AdminWindow adminWindow; /*!< Admin interface */

};

#endif // LOGIN_H
