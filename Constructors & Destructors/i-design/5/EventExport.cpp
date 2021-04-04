#include <iostream>
#include <string>
#include "Event.cpp"
using namespace std;
class EventExport{
 public:
 void exportCSVFormat(Event e[],int num)
 {
 for(int i = 0; i<num; i++)
 {
 cout<<e[i].getName()<<", "<<e[i].getDetail()<<", "<<e[i].getType()<<", "<<e[i].getOrganiser()<<", "<<e[i].getAttendeesCount()<<", "<<e[i].getProjectedExpenses();
 cout<<endl;
 }
 }
 
 void exportNameOrganiserInfo(Event e[],int num,string type)
 { for(int i = 0; i<num; i++)
 {
 if(e[i].getType() == type)
 {
 cout<<e[i].getName()<<", "<<e[i].getOrganiser()<<endl;
 }
 }
}
};
