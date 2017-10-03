#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QDir>
#include <QMessageBox>

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
    //Path for bryce "/users/brycecallender/desktop/caramelDelights-Ronen2/CollegeTour/Database/College.db"
    //QDir::currentPath() + "\\Database\\College.db"
    database->SetDBPath(QDir::currentPath() + "\\Database\\College.db");
    //C:\Users\Wesley\Desktop\caramelDelights-Ronen2\CollegeTour\Database

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
    QString college = ui->nameOfCollege->text();
    QString name = ui->souvenirName->text();
    QString cost = ui->souvenirPrice->text();
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

    ui->nameOfCollege->clear();
    ui->souvenirName->clear();
    ui->souvenirPrice->clear();
    ui->addBox->hide();
}

/*!
 * \brief AdminWindow::on_deleteSouvenirButtonBox_clicked
 * Takes a college name and a souvenir name and then
 * executes a query to delete from the database.
 */
void AdminWindow::on_deleteSouvenirButtonBox_clicked()
{
    QString college = ui->deleteCollegeName->text();
    QString name = ui->deleteSouvenirName->text();

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

    ui->deleteCollegeName->clear();
    ui->deleteSouvenirName->clear();
    ui->deleteBox->hide();

}

/*!
 * \brief AdminWindow::on_updateSouvenirButton_clicked
 * Takes college and a souvenir name and price and
 * updates the souvenir in the database
 */
void AdminWindow::on_updateSouvenirButton_clicked()
{
    QString college = ui->updateCollegeName->text();
    QString name = ui->updateSouvenirName->text();
    QString cost = ui->updateSouvenirPrice->text();
    cost = '$' + cost;

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

    ui->updateCollegeName->clear();
    ui->updateSouvenirName->clear();
    ui->updateSouvenirPrice->clear();
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

void AdminWindow::on_deleteSouvenirButton_clicked()
{
    ui->deleteBox->show();
}

void AdminWindow::on_modifySouvenir_clicked()
{
    ui->modifyBox->show();
}
