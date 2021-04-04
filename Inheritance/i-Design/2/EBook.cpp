#include<iostream>
using namespace std;
#include "PrintedBook.cpp"
class EBook: public Book{
 private:
 string diskType;
 int size;
 
 public:
 EBook(){}
 EBook(string name, string author, int price, string publication,string 
diskType, int size):Book(name,author,price,publication)
 {
 this->diskType=diskType;
 this->size=size;
 }
 
 void displayDetails()
 {
 cout<<endl<<"EBook Details";
 cout<<endl<<"Name : "<<this->name;
 cout<<endl<<"Author : "<<this->author;
 cout<<endl<<"Price : "<<this->price;
 cout<<endl<<"Publication : "<<this->publication;
 cout<<endl<<"Disk Type : "<<this->diskType;
 cout<<endl<<"Size : "<<this->size<<" MB";
 }
};
