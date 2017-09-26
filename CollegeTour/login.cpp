#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    addAccount("caramel", "delights", true);
    addAccount("", "", true);
    addAccount("Bryce","Bryce",false);
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

bool login::isAdmin(QString nameIn,QString passIn)
{

    bool isAdmin = false; //returns true if the user is infact an admin
    int accountIndex;     //index of the account searched for

    for(int i = 0; i < accounts.size(); i++)
    {
        if(accounts[i].name == nameIn)
        {
            accountIndex = i;
        }
    }

    if(isAccount(nameIn,passIn))
    {
       if(accounts.at(accountIndex).okAdmin == true)
       {
           isAdmin = true;
       }
    }
    return isAdmin;
}

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
        if(isAdmin(inName,inPass))
        {
            this->close();
            adminWindow.show();
        }
        else
        {
            this->close();
            interface.show();
        }

    }
}
