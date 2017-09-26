#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include "database.h"
#include <QDialog>

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = 0);
    ~AdminWindow();

private slots:
    void on_addSouvenirButton_clicked();

private:
    Ui::AdminWindow *ui;
    Database* database;
};

#endif // ADMINWINDOW_H
