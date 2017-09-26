#include "adminwindow.h"
#include "ui_adminwindow.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);

    ui->addBox->hide();
    ui->deleteBox->hide();

    database = Database::getInstance();
    database->SetDBPath("/users/brycecallender/College.db");

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
    QString name = ui->souvenirName->text();
    QString cost = ui->souvenirPrice->text();
    ui->addBox->show();
}
