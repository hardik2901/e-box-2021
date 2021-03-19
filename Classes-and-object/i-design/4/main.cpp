#include <iostream>
#include<string>
#include<stdio.h>
#include "Purchase.cpp"
using namespace std;
int main()
{
    int n,i,no;
    string name;
    float amount;
    cout<<"Enter the Number of customers :\n";
    cin>>n;
	Purchase a[n],t;
    for(i=0;i<n;i++)
    {//fill the code 
    cout<<"Enter the Name of the customer :\n";
    cin>>name;
    a[i].setUserName(name);
    cout<<"Enter the No of Items purchased :\n";
    cin>>no;
    a[i].setCountOfItems(no);
    cout<<"Enter the purchase amount :\n";
    cin>>amount;
    a[i].setAmount(amount);
    }
    cout<<"Purchase Details :";
    t.display(a,n);
}
