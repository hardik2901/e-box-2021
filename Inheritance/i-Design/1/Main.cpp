#include <iostream>
using namespace std;
#include "Developer.cpp"
int main(void)
{
 string name,skills,role;
 int empId,experience;
 cout<<"Enter the name";
 cin>>name;
 cout<<endl<<"Enter the experience";
 cin>>experience;
 cout<<endl<<"Enter the employee id";
 cin>>empId;
 cout<<endl<<"Enter the technical skills of the developer";
 cin>>skills;
 cout<<endl<<"Enter the role of the developer";
 cin>>role;
 Developer D(name, experience, empId, skills, role);
 D.displayDetails(); return 0;
}
