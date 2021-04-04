#include<iostream>
using namespace std;
#include "FourWheeler.h"
#include "Vehicle.h"
class Truck: public FourWheeler, public Vehicle{
 private:
 int cargoCapacity;
 string size;
 
 public:
 Truck(){}
 Truck(string model, int year, string manufacturer, string gearType, string 
fuelType, int cargoCapacity, string size):FourWheeler(gearType, 
fuelType),Vehicle(model, year, manufacturer)
 {
 this->cargoCapacity = cargoCapacity;
 this->size = size;
 }
 
 void displayDetails()
 {
 cout<<endl<<"Truck Details";
 cout<<endl<<"Model : "<<this->model;
 cout<<endl<<"Year : "<<this->year;
 cout<<endl<<"Manufacturer : "<<this->manufacturer;
 cout<<endl<<"Gear Type : "<<this->gearType;
 cout<<endl<<"Fuel Type : "<<this->fuelType;
 cout<<endl<<"Cargo Capacity : "<<this->cargoCapacity<<" MT";
 cout<<endl<<"Size : "<<this->size;
 }
};
