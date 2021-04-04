#include<iostream>
using namespace std;
#include "Book.h"
class PrintedBook: public Book{
 private:
 int numOfPages;
 string paperType;
 
 public:
 PrintedBook(){}
 PrintedBook(string name, string author, int price, string publication, int
numOfPages, string paperType):Book(name, author, price, publication)
 {
 this->numOfPages = numOfPages;
 this->paperType = paperType;
 }
 
 void displayDetails()
 {
 cout<<endl<<"Printed Book Details";
 cout<<endl<<"Name : "<<this->name;
 cout<<endl<<"Author : "<<this->author;
 cout<<endl<<"Price : "<<this->price;
 cout<<endl<<"Publication : "<<this->publication;
 cout<<endl<<"Number Of Pages : "<<this->numOfPages;
 cout<<endl<<"Paper Type : "<<this->paperType;
 }
};
