#include <iostream>
using namespace std;
#include "Truck.cpp"
int main(void)
{
 string model,manufacturer,gearType,fuelType,size;
 int year,cargoCapacity;
 cout<<"Enter the model of the vehicle";
 cin>>model;
 cout<<endl<<"Enter the manufactured year";
 cin>>year;
 cout<<endl<<"Enter the name of the manufacturer";
 getline(cin, manufacturer);
 getline(cin, manufacturer);
 cout<<endl<<"Enter the gear type of the four wheeler";
 cin>>gearType;
 cout<<endl<<"Enter the fuel type of the four wheeler";
 cin>>fuelType;
 cout<<endl<<"Enter the cargo capacity of the truck";
 cin>>cargoCapacity;
 cout<<endl<<"Enter the size of the truck";
 cin>>size;
 Truck T(model, year, manufacturer, gearType, fuelType, cargoCapacity, size);
 T.displayDetails();
 return 0;
}
