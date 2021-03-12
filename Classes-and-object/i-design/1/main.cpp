#include <iostream>
#include "Donor.cpp"

using namespace std;

int main()
{
    Donor d;
    cout<<"Enter the donor details\n";
    
    cout<<"Enter the name :\n";
    cin>>d.name;
    
    cout<<"Enter the age :\n";
    cin>>d.age;
    
    cout<<"Enter the height :\n";
    cin>>d.height;
    
    cout<<"Enter the weight :\n";
    cin>>d.weight;
    
    cout<<"Enter the gender :\n";
    cin>>d.gender;
    
    cout<<"Enter the blood group :\n";
    cin>>d.bloodGroup;
    
    d.display();
    
    return 0;
}


