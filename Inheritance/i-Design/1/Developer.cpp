#include<iostream>
using namespace std;
#include "Employee.h"
class Developer: public Employee{
 private:
 string skills;
 string role;
 
 public:
 Developer(){}
 
 Developer(string name,int experience,int empId,string skills,string 
role):Employee(name,experience,empId)
 {
 this->skills=skills;
 this->role=role;
 }
 
 void displayDetails()
 {
 cout<<endl<<"Employee Details";
 cout<<endl<<"Name : "<<this->name;
 cout<<endl<<"Experience : "<<this->experience<<" years";
 cout<<endl<<"Employee Id : "<<this->empId;
 cout<<endl<<"Technical Skills : "<<this->skills;
 cout<<endl<<"Role : "<<this->role;
 }
};
