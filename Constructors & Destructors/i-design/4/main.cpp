#include <iostream>
#include<string.h>
#include "User.cpp"
using namespace std;

string validate(string uname,string pword){
    User u1;
    User *uarr = u1.getUserDetails(); for(int i = 0;i < 5; i++)
    {
        if(uname == uarr[i].getUserName())
        {
            if(pword == uarr[i].getPassword())
            {
                return "Yes";
                
            }
            return "No";
            
        }
        else
            continue;
    }
    return "No";
}
int main() {
    string name;
    string uname;
    string password;
    cout<<"Enter name:";
    cin>>name;
    cout<<endl<<"Enter the username:";
    cin>>uname;
    cout<<endl<<"Enter the password:";
    cin>>password;
    cout<<endl;
    string val = validate(uname, password);
    User u(name, uname, password);
    u.display(val);
    return 0;
}
