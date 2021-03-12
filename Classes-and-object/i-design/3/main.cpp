#include <iostream>
#include<string>
#include<stdio.h>
#include "Donor.cpp"
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of donors:";
    cin>>n;
    cout<<endl;
    Donor donor[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the donor details"<<i+1<<endl;
        
        
        cout<<"Enter the Name :\n";
        cin.ignore();
        getline(cin,donor[i].name);
        
        
        cout<<"Enter the Age :\n";
        cin>>donor[i].age;
        
        
        cout<<"Enter the height :\n";
        cin>>donor[i].height;
        
        
        cout<<"Enter the weight :\n";
        cin>>donor[i].weight;
        
        
        cout<<"Enter the Gender :\n";
        cin>>donor[i].gender;
        
        
        cout<<"Enter the Blood Group :\n";
        cin>>donor[i].bloodGroup;
        
    }
    
    cout<<"Donor details in the hospital database :\n";
    for(int i=0;i<n;i++)
    {
        cout<<"Donor"<<i+1<<endl;
        donor[i].display();
    }
    
    return 0;
 
}

