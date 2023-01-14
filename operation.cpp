#include "operation.h"
#include "mainwindow.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QList>
#include <QStandardItem>
#include <QString>
#include <sstream>
#include <vector>


using namespace std;


void Operation::registerAcc(Account a) {
    accounts.push_back(a);

}

void Operation::initAccounts(Account a) {

    accounts.push_back(a);
}

bool Operation::checkLogin(Account a) {

    bool flag = false;


//    for (int i=0; i<accounts.size(); i++) {

//            flag = (a==accounts[i]);
//    }


    return flag;
}

