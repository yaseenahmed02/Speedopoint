#ifndef OPERATION_H
#define OPERATION_H

#include "account.h"
#include <iostream>
using namespace std;
#include <vector>

using namespace std;


class Operation {
private:
    vector<Account> accounts;

public:

    void registerAcc(Account);
    void initAccounts(Account);
    bool checkLogin(Account);
};

#endif // OPERATION_H
