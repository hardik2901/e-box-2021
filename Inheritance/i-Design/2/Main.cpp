#include <iostream>
using namespace std;
#include "EBook.cpp"
int main(void)
{
 string diskType,name,author,publication,paperType;
 int size,price,numOfPages;
 int ch;
 cout<<"Enter the type of book";
 cout<<endl<<"1.PrintedBook";
 cout<<endl<<"2.EBook";
 cin>>ch;
 switch(ch)
 {
 case 1:{ cout<<endl<<"Enter the book name";
 getline(cin, name);
 getline(cin, name);
 cout<<endl<<"Enter the author name";
 getline(cin, author);
 cout<<endl<<"Enter the price:";
 cin>>price;
 cout<<endl<<"Enter the publication name:";
 cin>>publication;
 cout<<endl<<"Enter the number of pages of the book";
 cin>>numOfPages;
 cout<<endl<<"Enter the paper type of the book";
 cin>>paperType;
 PrintedBook P(name, author, price, publication, numOfPages, 
paperType);
 P.displayDetails();
 break; }
 case 2: { cout<<endl<<"Enter the book name";
 getline(cin, name);
 getline(cin, name);
 cout<<endl<<"Enter the author name";
 getline(cin, author);
 cout<<endl<<"Enter the price:";
 cin>>price;
 cout<<endl<<"Enter the publication name:";
 cin>>publication;
 cout<<endl<<"Enter the disk type of the book";
 cin>>diskType;
 cout<<endl<<"Enter the size of the disk";
 cin>>size;
 EBook E(name, author, price, publication, diskType, size);
 E.displayDetails();
 break; }
 }
 return 0;
}
