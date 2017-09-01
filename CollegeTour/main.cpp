#include "login.h"
#include <qfile.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;    //Loginscreen class

    //showing the login screen
    w.show();

    return a.exec();
}

//QFile f(":qdarkstyle/style.qss");
//if(!f.exists())
//{
//    printf("Unable to set stylesheet, file not found\n");
//}
//else
//{
//    f.open(QFile::ReadOnly | QFile::Text);
//    QTextStream ts(&f);
//    qApp->setStyleSheet(ts.readAll());
//}
