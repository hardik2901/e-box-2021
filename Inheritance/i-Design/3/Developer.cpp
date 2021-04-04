#include<iostream>
using namespace std;
#include "Employee.h"
class Developer: public Employee{
 private:
 string skills;
 string role;
 
 public:
 Developer(){}
 
 Developer(string name,string gender,int experience,int empId,string 
skills,string role):Employee(name,gender,experience,empId)
 {
 this->skills = skills;
 this->role = role;
 }
 
 void displayDetails()
 {
 cout<<endl<<"Developer Details";
 cout<<endl<<"Name : "<<this->name;
 cout<<endl<<"Gender : "<<this->gender;
 cout<<endl<<"Experience : "<<this->experience<<" years";
 cout<<endl<<"Employee Id : "<<this->empId;
 cout<<endl<<"Technical Skills : "<<this->skills;
 cout<<endl<<"Role : "<<this->role;
 }
};
