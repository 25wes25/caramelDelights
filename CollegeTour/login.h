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

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

    //accessor functions
    bool isAccount(QString nameIn, QString passIn);

    bool isAdmin(QString nameIn, QString passIn);

    //QString index(QString nameIn, QString passIn);

    //mutators
    void addAccount(QString nameIn, QString passIn, bool adminIn);



private slots:
    void on_LoginButton_clicked();

private:
    Ui::login *ui;
    QVector<user> accounts; //vector holding user login info
                            //using struct:user
    MainWindow interface;
    AdminWindow adminWindow;

};

#endif // LOGIN_H
