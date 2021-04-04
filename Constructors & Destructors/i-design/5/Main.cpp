#include <iostream>
#include<string>
#include "EventExport.cpp"
using namespace std;
int main()
{
 int num, choice;
 cout<<"Enter the number of events :";
 cin>>num;
 string s;
 Event E[10];
 for(int i = 0; i< num; i++)
 {
 string name, detail, type, organiser;
 int attendeesCount;
 double projectedExpenses;
 cout<<endl<<"Enter the details of event "<<i+1<<endl;
 cout<<"Name :";
 getline(cin, name);
 getline(cin, name);
 cout<<endl<<"Detail :";
 getline(cin, detail);
 cout<<endl<<"Type :";
 cin>>type; cout<<endl<<"Organiser :";
 cin>>organiser;
 cout<<endl<<"Attendees Count :";
 cin>>attendeesCount;
 cout<<endl<<"Projected Expenses :";
 cin>>projectedExpenses;
 Event k(name, detail, type, organiser, attendeesCount, projectedExpenses); 
 E[i] = k;
}
 cout<<endl<<"1. Export all the event details in CSV format";
 cout<<endl<<"2. Export name and organiser of the given event type";
 cout<<endl;
 cin>>choice;
 EventExport ee;
 switch(choice){
 case 1: ee.exportCSVFormat(E, num);
 break;
 case 2: cout<<"Enter the type";
 cin>>s;
 cout<<endl;
 ee.exportNameOrganiserInfo(E, num, s);
 break;
 default: cout<<"Invalid choice";
 }
 return 0;
}
