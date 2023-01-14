#include "mainwindow.h"
#include "account.h"
#include "operation.h"



using namespace std;

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.readAcc(); //reading accounts from file
    w.show();
    return a.exec();
}




