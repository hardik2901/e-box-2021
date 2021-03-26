#include <cstring>
#include<iostream>
#include<string>
#include<stdio.h>
#include <iomanip>
using namespace std;
class Donor {
public:
    string name;
    int age,no_of_units_donated;
    float height,weight;
    Donor()
    {
        cout<<"Welcome to the Blood Bank"<<endl;
    }
    Donor(string n, int a, int no, float h, float w)
    {
        this->name = n;
        this->age = a;
        this->no_of_units_donated = no;
        this->height = double(h);
        this->weight = w;
    }
    void display(){
        cout<<"Donor details:\n";
        cout<<name<<endl<<age<<endl<<height<<endl<<fixed<<setprecision(1)<<weight<<endl<<
        no_of_units_donated<<endl;
    }
    ~Donor(){
        cout<<"Thank you for donating the Blood";
    }
};
