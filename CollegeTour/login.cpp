#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    userLoginData.push_back(setUser("caramel","delights",true));
}

Login::~Login()
{
    delete ui;
}

user Login::setUser(QString aName, QString aPass, bool isAdmin)
{
    user insert;

    //assumes that the argument is valid variables
    insert.name = aName;
    insert.password = aPass;
    insert.okAdmin = isAdmin;

    return insert;
}
