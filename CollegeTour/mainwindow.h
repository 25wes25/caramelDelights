#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_comboCollege_activated(int index);
    void on_spinNumber_valueChanged(int arg1);

    void on_purchaseSouvenir_clicked();

    void on_customTrip_clicked();

    void on_selectCollege_clicked();

    void on_addCollege_clicked();
    void on_startTrip_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel *model;
    Database *database;
    trip customTrip;
    int collegeRow, index;
};

#endif // MAINWINDOW_H
