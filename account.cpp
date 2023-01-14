#include "account.h"

Account::Account(string uN, string p, string e) {
    userName = uN;
    password = p;
    email = e;
}
string Account:: getUserName()
{
    return userName;
};

string Account:: getPassword()
{
    return password;
};

bool Account::operator==(const Account &a) {

    if (a.userName == this->userName && a.password == this->password && a.email == this->email)
            return true;
    else return false;
}



int counter3 = 0;


bool Account:: login(string uN, string p)
{
    int counter = 0, counter2= 0;

    while(counter<=5)
    {
        cout<<"login to make a reservation"<<endl;
        cout<<"Username:";
        cin>>uN;
        cout<<"Password:";
        cin>>p;

        if (p == password && uN == userName)
        {
            cout<<"Welcome"<<uN<<"to your account"<<endl;
            counter3++; //did this counter to display the option of logging out when the user logs in
            return true;
        }
        else if( p!= password || uN!= userName)
        {
            cout<<"Login failed. Please try again"<<endl;  //warns the user of many failed login attempts (but does nothing)
            counter2++;
            return false;
        }

        if(counter2==5)
        {
            cout<<"Too many failed login attempts"<<endl;
            exit(0);
        }
    };
    return true;
};

bool Account:: logout()
{
    string ans;
    if (counter3==1)
    {
        cout<<"Do you want to logout:"<<endl;
        cin>>ans;
        if(ans== "yes")
        {
            exit(0);
            return true;
        }
        else if (ans == "no")
        {
            return false;
        }
    }

    return false;
};

string Account:: getEmail()
{
    return email;
};



