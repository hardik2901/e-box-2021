#include <cstring>
#include<iostream>
#include<string>
#include "ItemTypeBO.cpp"
using namespace std;

int main() {
    int num;
    cout<<"Enter the number of Itemtypes:"; cin>>num;
    if(num < 1)
    {
        cout<<endl<<"Invalid Number"; return 0;
    }
    ItemType I[10];
    string name;
    double deposit;
    double cpd;
    cout<<endl;
    for(int i = 0; i < num; i++) {
        ItemTypeBO itb;
        cout<<"Enter details of item type "<<i + 1;
        cout<<endl<<"Enter the Itemtype name:";
        getline(cin, name);
        getline(cin, name);
        cout<<endl<<"Enter the deposit:";
        cin>>deposit;
        cout<<endl<<"Enter cost per day:";
        cin>>cpd;
        cout<<endl;
        I[i] = itb.createItemType(name, deposit, cpd);
    }
    string search;
    cout<<"Enter the item name to be searched:";
    getline(cin, search);
    getline(cin, search);
    ItemTypeBO it;
    for(int i = 0; i < num; i++) {
        if(it.searchItemTypeByName(I, num, search) == 1) {
            cout<<endl<<"ItemType found";
            break; }
        else
        {
            cout<<endl<<"ItemType not found"; break;
        }
        
    }
}

