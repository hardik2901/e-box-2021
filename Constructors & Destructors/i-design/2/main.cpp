#include <cstring>
#include<iostream>
#include<string>
#include "Donor.cpp"
using namespace std;
int main()
{
    string name;
    float height, weight;
    int age, nof;
    cout<<"Welcome to the Blood Bank"<<endl<<"Enter the donor details"<<endl;
    cout<<"Enter the Name :"<<endl;
    cin>>name;
    cout<<"Enter the Age :"<<endl;
    cin>>age;
    cout<<"Enter the height :"<<endl;
    cin>>height;
    cout<<"Enter the weight :"<<endl;
    cin>>weight;
    cout<<"Enter the No of units donated :"<<endl;
    cin>>nof;
    Donor d(name, age, nof, height, weight);
    d.display();

return 0;
}

