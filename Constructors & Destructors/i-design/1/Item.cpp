#include <cstring>
#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;
class Item {
private:
    string itemId,itemName,itemType,itemVendor;
public:
    string getItemId()
    {
        return itemId;
        
    }
    string getItemName()
    {
        return itemName;
    }
    string getItemType()
    {
        return itemType;
    }
    string getItemVendor()
    {
        return itemVendor;
    }
    void setItemId(string id)
    {
        itemId=id;
    }
    void setItemName(string name)
    {
        itemName=name;
    }
    void setItemType(string type)
    {
        itemType=type;
    }
    void setItemVendor(string vendor)
    {
        itemVendor=vendor;
    }
    Item()
    {
        itemType = "Electricals";
        itemVendor = "Arun electricals";
    }
    Item(string id,string name,string type,string vendor)
    {
        itemId = id;
        itemName = name;
        itemType = type;
        itemVendor = vendor;
    }
};
