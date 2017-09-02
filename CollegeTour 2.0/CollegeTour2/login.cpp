#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    addAccount("caramel", "delights", true);
}

login::~login()
{
    delete ui;
}

bool login::isAccount(QString nameIn, QString passIn)
{
    /*
     * Input: STRING username guess, STRING password guess
     * Output: BOOL true if found in accounts vector, false if otherwise
     *
     */
    //this will be returned as the state of the inputted variables
    bool isValid = false;

    for(int index = 0; index < accounts.size(); index++)
    {
        if(nameIn == accounts[index].name && passIn == accounts[index].password)
        {
            isValid = true;
        }
    }
    return isValid;
}

//QString login::isAdmin(QString nameIn, QString passIn)
//{

//    bool isAdmin = false; //returns true if the user is infact an admin
//    int accountIndex;     //index of the account searched for

//    if(isAccount(nameIn, passIn))
//    {
//       accountIndex = accounts.indexOf();
//    }
//}

void login::addAccount(QString nameIn, QString passIn, bool adminIn)
{
    user insert;

    //assumes that the argument is valid variables
    insert.name = nameIn;
    insert.password = passIn;
    insert.okAdmin = adminIn;
    //adds the inserted variables into the struct
    accounts.push_back(insert);

}


void login::on_LoginButton_clicked()
{
    QString inName = ui->UserNameInput->text();
    QString inPass = ui->PasswordInput->text();

    if(isAccount(inName, inPass))
    {
        this->close();
        interface.show();
    }
}