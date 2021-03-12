#include <iostream>
#include<string>
#include<stdio.h>
#include "Donor.cpp"
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of donors: ";
    cin>>n;
    cout<<endl;
    Donor donor[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the donor details "<<i+1<<endl;
        
        
        cout<<"Enter the Name :\n";
        donor[i].setName(donor[i].getName());
        
        
        cout<<"Enter the Age :\n";
        donor[i].setAge(donor[i].getAge());
        
        
        cout<<"Enter the height :\n";
        donor[i].setHeight(donor[i].getHeight());
        
        
        cout<<"Enter the weight :\n";
        donor[i].setWeight(donor[i].getWeight());
        
        
        cout<<"Enter the Gender :\n";
        donor[i].setGender(donor[i].getGender());
        
        
        cout<<"Enter the Blood Group :\n";
        donor[i].setBloodGroup(donor[i].getBloodGroup());
        
    }
    
    Donor d;
    cout<<"Enter the Bloodgroup details to be known:\n";
    string str;
    cin>>str;
    d.search(donor,str,n);
    
    return 0;
 
}

