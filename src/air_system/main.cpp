#include "mainwindow.h"
#include"loginwindow.h"
#include"signinwindow.h"
#include <QApplication>
#include"conn_db.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    conn_db();
   /* signinwindow h;
    h.show();*/
    LoginWindow w;
    w.show();
    return a.exec();
}
