#include<iostream>
#include<string>
using namespace std;
class ContactDetails
{
    private:
    string mobile;
    string alternateMobile;
    string landLine;
    string email;
    public:
    ContactDetails(){}
    ContactDetails(string mobile,string alternateMobile,string landLine,string email)
    {
        mobile=mobile;
        alternateMobile=alternateMobile;
        landLine=landLine;
        email=email;
    }
        
    void display(bool emailstatus,bool mobilestatus)
    {
        if(!emailstatus || mobilestatus)
        {
            cout<<"Please check your details\n";
        }
        else
        {
            cout<<"Registered Successfully!!!\n";
        }
    }
};

