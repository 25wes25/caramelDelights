#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QDir>
#include <QMessageBox>
#include <QSqlError>

/*!
 * \brief AdminWindow::AdminWindow
 * \param parent
 */
AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    ui->addBox->hide();
    ui->deleteBox->hide();
    ui->modifyBox->hide();

    database = Database::getInstance();
    database->SetDBPath(QDir::currentPath() + "\\Database\\College.db");

    QSqlQueryModel * model = new QSqlQueryModel();

    //sets up the query
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT * FROM Souvenirs");

    qDebug() << query->exec();

    model->setQuery(*query);

    //sets the resultant query into a tableview and stretches it to make it look nice.
    ui->souvenirTableView->setModel(model);
    ui->souvenirTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->souvenirTableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QVector<QString> names = database->setCollegeNames();

    for(int i = 0; i < names.size(); i++)
    {
        ui->addComboCollege->addItem(names[i]);
        ui->deleteComboCollege->addItem(names[i]);
        ui->modifyComboCollege->addItem(names[i]);
    }

}

/*!
 * \brief AdminWindow::~AdminWindow
 */
AdminWindow::~AdminWindow()
{
    delete ui;
}

/*!
 * \brief AdminWindow::on_addSouvenirButton_clicked
 */
void AdminWindow::on_addSouvenirButton_clicked()
{
    ui->addBox->show();
}

/*!
 * \brief AdminWindow::on_sumbitSouvenirButton_clicked
 * Sets the name college and price into the query and executes
 * the query to insert new values
 */
void AdminWindow::on_sumbitSouvenirButton_clicked()
{
    QString college = ui->addComboCollege->currentText();
    QString name = ui->souvenirName->text();
    double value = ui->doubleAddSpinBox->value();

    QString cost = QString::number(value);
    cost = '$' + cost;

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("INSERT INTO Souvenirs (College,TraditionalSouvenirs,Cost) VALUES (:college, :name, :cost)");
    query->bindValue(":college", college);
    query->bindValue(":name", name);
    query->bindValue(":cost", cost);

    if(query->exec())
    {
        QMessageBox::information(this,"Souvenir successfully Added", "Souvenir Successfully Added", QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,"Souvenir not successfully Added", "Souvenir Not Successfully Added", QMessageBox::Ok);
    }

    ui->souvenirName->clear();
    ui->addBox->hide();
}

/*!
 * \brief AdminWindow::on_deleteSouvenirButtonBox_clicked
 * Takes a college name and a souvenir name and then
 * executes a query to delete from the database.
 */
void AdminWindow::on_deleteSouvenirButtonBox_clicked()
{
    QString college = ui->deleteComboCollege->currentText();
    QString name = ui->souvenirDeleteName->currentText();

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("DELETE FROM Souvenirs WHERE College = (:college) AND TraditionalSouvenirs = (:name)");
    query->bindValue(":college", college);
    query->bindValue(":name", name);

    if(query->exec())
    {
        QMessageBox::information(this,"Souvenir successfully deleted", "Souvenir Successfully Deleted", QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,"Souvenir not successfully deleted", "Souvenir Not Successfully Deleted", QMessageBox::Ok);
    }

    ui->deleteBox->hide();

}

/*!
 * \brief AdminWindow::on_updateSouvenirButton_clicked
 * Takes college and a souvenir name and price and
 * updates the souvenir in the database
 */
void AdminWindow::on_updateSouvenirButton_clicked()
{
    QString college = ui->modifyComboCollege->currentText();
    QString name = ui->modifySouvenirCombo->currentText();
    double value = ui->doubleModifySpinBox->value();

    QString cost = QString::number(value);
    cost = '$' + cost;
    qDebug() << "Cost is" << cost;

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("UPDATE Souvenirs SET Cost = (:cost) WHERE College = (:college) AND TraditionalSouvenirs = (:name)");
    query->bindValue(":college", college);
    query->bindValue(":name", name);
    query->bindValue(":cost",cost);

    if(query->exec())
    {
        QMessageBox::information(this,"Souvenir successfully Updated", "Souvenir Successfully Updated", QMessageBox::Ok);
    }
    else
    {
        QMessageBox::information(this,"Souvenir not successfully Updated", "Souvenir Not Successfully Updated", QMessageBox::Ok);
    }
    ui->modifyBox->hide();
}

/*!
 * \brief AdminWindow::on_updateDB_clicked
 * Once this button is clicked it updates the databse
 */
void AdminWindow::on_updateDB_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT * FROM Souvenirs ORDER BY College asc");
    query->exec();

    model->setQuery(*query);

    //sets the resultant query into a tableview and stretches it to make it look nice.
    ui->souvenirTableView->setModel(model);
    ui->souvenirTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->souvenirTableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

/*!
 * \brief AdminWindow::on_deleteSouvenirButton_clicked
 * \fn shows the delete souvenir box on the ui
 */
void AdminWindow::on_deleteSouvenirButton_clicked()
{
    ui->deleteBox->show();
}

/*!
 * \brief AdminWindow::on_modifySouvenir_clicked
 * \fn shows the modify box on the ui
 */
void AdminWindow::on_modifySouvenir_clicked()
{
    ui->modifyBox->show();
}

/*!
 * \brief AdminWindow::on_modifyComboCollege_activated
 * \param arg1
 * \fn This function makes it so when the user
 * chooses a college it then populates the
 * souvenir combo box with the appropriate
 * names of the respective colleges to
 * keep the user from entering errors
 */
void AdminWindow::on_modifyComboCollege_activated(const QString &arg1)
{
    ui->modifySouvenirCombo->clear();
    QVector<QString> souvNames;
    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT TraditionalSouvenirs FROM Souvenirs WHERE College == (:collegeName)");
    query->bindValue(":collegeName",arg1);
    query->exec();

    while(query->next())
    {
        souvNames.push_back(query->value(0).toString());
    }

    for(int i = 0; i < souvNames.size(); i++)
    {
        ui->modifySouvenirCombo->addItem(souvNames.at(i));
    }
}

/*!
 * \brief AdminWindow::on_deleteComboCollege_activated
 * \param arg1 string for the name of the combo box
 * \fn This function makes it so when the user
 * chooses a college it then populates the
 * souvenir combo box with the appropriate
 * names of the respective colleges to
 * keep the user from entering errors
 */
void AdminWindow::on_deleteComboCollege_activated(const QString &arg1)
{
    ui->souvenirDeleteName->clear();
    QVector<QString> souvNames;
    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT TraditionalSouvenirs FROM Souvenirs WHERE College == (:collegeName)");
    query->bindValue(":collegeName",arg1);
    query->exec();

    while(query->next())
    {
        souvNames.push_back(query->value(0).toString());
    }

    for(int i = 0; i < souvNames.size(); i++)
    {
        ui->souvenirDeleteName->addItem(souvNames.at(i));
    }
}

/*!
 * \brief AdminWindow::on_loadColleges_clicked
 * \fn Reads a csv file and goes through takes the data
 * line by line and appends quotes where necessary in order
 * for sequel to understand these are the data points that
 * we will be inserting into the database
 */
void AdminWindow::on_loadColleges_clicked()
{
    //bool to keep track of the quotes we hit made by excel in making the csv file
    bool quote = false;
    //Open the csv file
    QFile file(QDir::currentPath() + "\\NewCampuses.csv");
    //Opens file and signals it to be read only
    if(file.open (QIODevice::ReadOnly))
    {
        QSqlQuery query;
        QTextStream ts(&file);
        //Travel through the csv file
        while(!ts.atEnd())
        {
            QString line = ts.readLine();
            //Gets the beginning part of the query ready
            QString queryString = "INSERT INTO Distances VALUES(";
            for (int i = 0; i < line.length (); ++i)
            {
                //If the data has a \" then we hit a quote and this quote
                //means the data has a comma in it so we need to make
                //sure to not put any quotes in this area
                if (line[i] == "\"")
                {
                    quote = !quote;
                }
                else
                {
                    //If the line at this character is a comma and quote is finsihed
                    //or not exisitent in this data we are reading then append
                    if (line[i] == "," && quote == false)
                    {
                        if (line[i-1] != "\"")
                        {
                            queryString.append("\"");
                        }
                    }
                }
                //If it is at the beginning and the data has no \" then append
                if (i == 0 && line[i] != "\"")
                {
                    queryString.append("\"");
                }
                //Append the characters of the data
                queryString.append(line[i]);

                //If the line is a comma and the next line after has no quote
                //then append
                if (line[i] == "," && line[i+1] != "\"" && quote == false)
                {
                    queryString.append("\"");
                }
            }
            //Append the final quote and the end parenthesis to finish off the
            //query string
            queryString.append("\")");
            //Execute query
            qDebug() << query.exec(queryString);
            //Show if any errors occured
            qDebug() << query.lastError();
            qDebug() << queryString;
            //Reset quote to false for next iteration
            quote = false;
        }
    }
    //Close the input file
    file.close();

    QVector<QString> names = database->setCollegeNames();

    ui->addComboCollege->clear();
    ui->deleteComboCollege->clear();
    ui->modifyComboCollege->clear();

    for(int i = 0; i < names.size(); i++)
    {
        ui->addComboCollege->addItem(names[i]);
        ui->deleteComboCollege->addItem(names[i]);
        ui->modifyComboCollege->addItem(names[i]);
    }
    ui->loadColleges->setDisabled(true);
}
