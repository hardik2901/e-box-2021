#include <iostream>
#include<string>
using namespace std;
class ItemType
{
private:
    string name;
    double deposit;
    double costPerDay;
public:
    
    
    string getName()
    {
        string str;
        getline(cin,str);
        return str;
    }
    
    void setName(string str)
    {
        name = str;
    }
    
    double getDeposit()
    {
        double d;
        cin>>d;
        return d;
    }
    
    void setDeposit(double d)
    {
        deposit = d;
    }
    
    double getCostPerDay()
    {
        double cpd;
        cin>>cpd;
        return cpd;
    }
    
    void setCostPerDay(double cpd)
    {
        costPerDay = cpd;
    }
    
    void display()
    {
        cout<<"Itemtype details:\n";
        cout<<"Name: "<<name<<endl;
        cout<<"Deposit: "<<deposit<<endl;
        cout<<"Cost Per Day: "<<costPerDay<<endl;
    }
};


