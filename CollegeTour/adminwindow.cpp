#include "adminwindow.h"
#include "ui_adminwindow.h"
#include <QDir>

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

}

AdminWindow::~AdminWindow()
{
    delete ui;
}

void AdminWindow::on_addSouvenirButton_clicked()
{
    ui->addBox->show();   
}

void AdminWindow::on_sumbitSouvenirButton_clicked()
{
    QString college = ui->nameOfCollege->text();
    QString name = ui->souvenirName->text();
    QString cost = ui->souvenirPrice->text();
    cost = '$' + cost;

//    qDebug() << cost;
    QSqlQueryModel *model = new QSqlQueryModel();

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("INSERT INTO Souvenirs (College,TraditionalSouvenirs,Cost) VALUES (:college, :name, :cost)");
    query->bindValue(":college", college);
    query->bindValue(":name", name);
    query->bindValue(":cost", cost);

    query->exec();

    ui->addBox->hide();
}

void AdminWindow::on_deleteSouvenirButtonBox_clicked()
{
    QString college = ui->deleteCollegeName->text();
    QString name = ui->deleteSouvenirName->text();

    QSqlQueryModel *model = new QSqlQueryModel();

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("DELETE FROM Souvenirs WHERE College = (:college) AND TraditionalSouvenirs = (:name)");
    query->bindValue(":college", college);
    query->bindValue(":name", name);

    query->exec();

    ui->deleteBox->hide();

}

void AdminWindow::on_updateSouvenirButton_clicked()
{
    QString college = ui->updateCollegeName->text();
    QString name = ui->updateSouvenirName->text();
    QString cost = ui->updateSouvenirPrice->text();
    cost = '$' + cost;

    QSqlQueryModel *model = new QSqlQueryModel();

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("UPDATE Souvenirs SET Cost = (:cost) WHERE College = (:college) AND TraditionalSouvenirs = (:name)");
    query->bindValue(":college", college);
    query->bindValue(":name", name);
    query->bindValue(":cost",cost);

    query->exec();

    ui->modifyBox->hide();
}

void AdminWindow::on_updateDB_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();

    //sets up the querys
    QSqlQuery *query = new QSqlQuery(database->db);
    query->prepare("SELECT * FROM Souvenirs");

    model->setQuery(*query);

    query->exec();

    //sets the resultant query into a tableview and stretches it to make it look nice.
    ui->souvenirTableView->setModel(model);
    ui->souvenirTableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->souvenirTableView->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);


}
