#include <iostream>
#include<string.h>
using namespace std;
class User{
private:
    string name;
    string userName;
    string password;
public:
    User() {
    }
    User(string n,string un,string p)
    {
        this->name = n; this->userName = un; this->password = p;
    }
    void setName(string n)
    {
        name=n; }
    void setUserName(string un)
    {
        userName=un;
    }
    void setPassword(string p)
    {
        password=p;
    }
    string getName()
    {
        return name; }
    string getUserName()
    {
        return userName; }
    string getPassword()
    {
        return password; }
    User * getUserDetails(){
        User *user = new User[5];
        user[0]= User("Abi","Abinaya","abi123");
        user[1]= User("Arun","Arunsoorya","arun456");
        user[2]= User("Sbi","Sbiharan","sbi789");
        user[3]= User("Sidhu","Siddarth","sid123");
        user[4]= User("Vivi","Viveka","vivi456");
        return user;
    }
    void display(string s) { if(s=="Yes")
    {
        cout<<"Hiii..."<<this->name<<" !! Welcome to the event!!! ";
    }
    else
    {
        cout<<"Invalid username/password";
    }
        
    }
    friend string validate(string userName, string password);
};
