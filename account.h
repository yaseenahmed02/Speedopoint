#ifndef account_h
#define account_h

#include<string>
#include <iostream>
using namespace std;


class Account {
private:
    string userName;
    string password;
    string email;




 public:
    bool login(string, string);
    bool logout();   //function to logout from the Account
    string getEmail(); //function to display the user's email when needed for confirming a reservation

    Account(string, string, string);


    string getUserName();
    string getPassword();

    bool operator==(const Account&);



};

#endif

