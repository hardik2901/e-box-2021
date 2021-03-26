#include <cstring>
#include<iostream>
#include<string>
#include "Item.cpp"
using namespace std;

int main()
{
    int choice;
    cout<<"\nMenu:";
    cout<<"\n1.Electronics"; cout<<"\n2.Others"; cout<<"\nEnter your choice:\n"; cin>>choice;
    switch(choice) {
        case 1:
        {
            Item i1;
            string itemId;
            string itemName;
            cout<<"\nEnter details of the item";
            cout<<"\nEnter item id:"<<endl;
            cin>>itemId;
            i1.setItemId(itemId);
            cout<<"\nEnter the item name:"<<endl;
            cin>>itemName;
            i1.setItemName(itemName);
            cout<<"\nItem details";
            cout<<"\nItem id: "<<i1.getItemId();
            cout<<"\nItem name: "<<i1.getItemName();
            cout<<"\nItem type: "<<i1.getItemType();
            cout<<"\nItem vendor: "<<i1.getItemVendor();
        }
            break;
        case 2:
        {
            Item i1;
            string temp;
            cout<<"\nEnter details of the item"; cout<<"\nEnter item id:"<<endl; cin>>temp;
            i1.setItemId(temp);
            cout<<"\nEnter the item name:"<<endl; cin>>temp;
            i1.setItemName(temp);
            cout<<"\nEnter the item type:"<<endl;
            cin>>temp;
            i1.setItemType(temp);
            cout<<"\nEnter the item vendor:"<<endl; getline(cin, temp);
            getline(cin, temp);
            i1.setItemVendor(temp);
            cout<<"\nItem details";
            cout<<"\nItem id: "<<i1.getItemId(); cout<<"\nItem name: "<<i1.getItemName(); cout<<"\nItem type: "<<i1.getItemType(); cout<<"\nItem vendor: "<<i1.getItemVendor();
            
        }
            break;
            
        default:
            cout<<"\nInvalid choice";
        
            break;
            
    }
    return 0; }
