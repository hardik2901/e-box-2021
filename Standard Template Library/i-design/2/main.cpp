#include <iostream>
#include<string.h>
#include<list>
#include<stdio.h>
#include "ItemType.cpp"
using namespace std;
int main()
{
    list<ItemType>itemType;
    
    int n;
    cout<<"Enter the number of item type:\n";
    cin>>n;
    if(n <= 0)
    cout<<"Invalid number\n";
    
    else
    {
        ItemType t[n];
        for(int i=0;i<n;i++)
        {
            cout<<"Enter details of item type "<<i+1<<endl;
            cout<<"Enter the item type name:\n";
            t[i].setName(t[i].getItemName());
            cout<<"Enter the deposit:\n";
            t[i].setDeposit(t[i].getItemDeposit());
            cout<<"Enter cost per day:\n";
            t[i].setCostPerDay(t[i].getCostPerDay());
            itemType.push_back(t[i]);
        }
        
        t[0].display(itemType);
    }
    return 0;
}



