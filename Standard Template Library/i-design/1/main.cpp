#include<iostream>
#include <list>
using namespace std;
int main()
{
    
    cout<<"Enter the total number of names:\n";
        int n;
        cin>>n;
        list<string>lis;
        
        for(int i=0;i<n;i++)
        {
            cout<<"Enter name "<<i+1<<endl;
            string str;
            cin>>str;
            lis.push_back(str);
        }
        cout<<"The list of names are:\n";
        for(auto itr : lis)
{
        cout<<itr<<endl;
}
        return 0;
}

