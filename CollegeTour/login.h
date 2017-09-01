#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "QVector"

struct user
{
    QString name;
    QString password;
    bool okAdmin;
};

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);

    user setUser(QString aName, QString aPass, bool isAdmin);
    ~Login();

private:
    Ui::Login *ui;
    QVector<user> userLoginData;  //vector of user login
};

#endif // LOGIN_H
