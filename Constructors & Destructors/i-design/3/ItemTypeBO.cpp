#include <cstring>
#include<iostream>
#include<string>
#include "ItemType.cpp"
class ItemTypeBO {
public:
    ItemType createItemType(string itemName,double itemDeposit,double costPerDay)
    {
        ItemType i;
        i.setItemName(itemName);
        i.setItemDeposit(itemDeposit);
        i.setCostPerDay(costPerDay);
        return i;
    }
    int searchItemTypeByName(ItemType *itemtype,int n,string searchName)
    {
        for(int i = 0; i < n; i++) {
            if(itemtype[i].getItemName() == searchName)
                return 1;
        }
        return 0; }
};
