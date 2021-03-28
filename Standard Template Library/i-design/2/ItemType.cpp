#include <iostream>
#include<string.h>
#include<list>
#include<stdio.h>
#include <iomanip>
using namespace std;
class ItemType
{
    private:
    string name;
    double deposit,costPerDay;
    public :
    ItemType()
    {
    }
    ItemType(string name,double deposit,double costPerDay)
    {
    this->name=name;
    this->deposit=deposit;
    this->costPerDay=costPerDay;
    }
    void setName(string name)
    {
    this->name=name;
    }
    void setDeposit(double deposit)
    {
    this->deposit=deposit;
    }
    void setCostPerDay(double costperday1)
    {
  this->costPerDay=costperday1;
    }
    string getItemName()
    {
        string n;
        cin>>n;
        return n;
    }
    double getItemDeposit()
    {
        double d;
        cin>>d;
         return d;
    }
    double getCostPerDay()
    {
        
        double cpd;
        cin>>cpd;
         return cpd;
    }
    
    void display(list<ItemType> item)
    {
        cout<<"Item type details are:\n";
        cout<<"ItemName                ItemDeposit                CostPerDay                \n";
        for(auto itr : item)
        {
            
            cout<<itr.name<<"                "<<fixed<<setprecision(2) << showpoint<<itr.deposit<<"                "<<itr.costPerDay<<endl;
        }
  }
};




