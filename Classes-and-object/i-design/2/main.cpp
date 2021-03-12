#include <iostream>
#include "ItemType.cpp"

using namespace std;

int main()
{
    ItemType It;
    cout<<"Enter name:\n";
    It.setName(It.getName());
    
    cout<<"Enter deposit:\n";
    It.setDeposit(It.getDeposit());
    
    cout<<"Enter cost Per Day:\n";
    It.setCostPerDay(It.getCostPerDay());
    
    It.display();
    return 0;
}



