#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Purchase
{
private:
string userName;
int countOfItems;  
float amount;
float totalAmt;
int totalCountOfItems;
public:
string getUserName()
{
return userName;
}
void setUserName(string a)
{
this->userName=a;
}
int getCountOfItems()
{
return countOfItems;
}
void setCountOfItems(int b)
{
this->countOfItems=b;
}
float getAmount()
{
return amount;
}
void setAmount(float c)
{
this->amount=c;
}
float getTotalAmt()
{
return totalAmt;
}
void setTotalAmt(float d)
{
this->totalAmt=d;
}
int getTotalCountOfItems()
{
return totalCountOfItems;
}
void settotalCountOfItems(int e)
{
this->totalCountOfItems=e;
}
void display(Purchase obj[],int n){
    int i,e=0;
    float d=0;
    for(i=0;i<n;i++)
    d+=obj[i].getAmount();
    setTotalAmt(d);
    for(i=0;i<n;i++)
    e+=obj[i].getCountOfItems();
    settotalCountOfItems(e);
    for(i=0;i<n;i++)
cout<<"\nCustomer "<<i+1<<" :"<<obj[i].getUserName()<<"\nNo of Items purchased :"<<obj[i].getCountOfItems()<<"\nPurchase amount :"<<obj[i].getAmount();// fill the code
cout<<"\nTotal Amount Received :"<<getTotalAmt()<<"\nTotal Number of Items sold :"<<getTotalCountOfItems();
}
};
