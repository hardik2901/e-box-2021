#include <cstring>
#include<iostream>
#include<string>
using namespace std;
class ItemType {
private:
    string itemName;
    double itemDeposit,costPerDay;
    
    public :
    string getItemName()
    {
        return itemName;
        
    }
    double getItemDeposit()
    {
        return itemDeposit;
        
    }
    
    double getCostPerDay()
    {
        return costPerDay;
        
    }
    
    void setItemName(string Name1)
    {
        this->itemName=Name1;
        
    }
    
    void setItemDeposit(double Deposit1)
    {
        this->itemDeposit=Deposit1;
        
    }
    void setCostPerDay(double costperday1)
    {
        this->costPerDay=costperday1;
        
    }
};
