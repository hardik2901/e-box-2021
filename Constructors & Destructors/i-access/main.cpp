#include <iostream>
#include<string>
#include "ContactDetails.hpp"
using namespace std;
bool  validateEmail(string e1)
{
    bool atTherate = false;
    for(int i=0;i<e1.size();i++)
    {
        
        if(e1[i] == '@')
        {
            atTherate = true;
        }
    }
    bool dotCom = false;
    int n =(int)e1.size();
    if(e1[n-1] == 'm' && e1[n-2] == 'o' && e1[n-3] == 'c' && e1[n-4] == '.')
        dotCom = true;
    
    if(dotCom && atTherate)
        return true;
    else
        return false;
}

bool  findDuplicates(string a,string b)
{
    int n1 =(int)a.size(),n2 = (int)b.size();
    
    if(n1 != n2)
        return false;
    
    for(int i=0;i<n1;i++)
    {
        if(a[i] == b[i])
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{

    
    string mobno,almobno,landline,id;
    bool emailid,dnum;
    cout<<"Enter details for Registration:"<<endl;
    cout<<"Enter Mobile Number:"<<endl;
    cin>>mobno;
    cout<<"Enter Alternate Mobile Number:"<<endl;
    cin>>almobno;
    cout<<"Enter Landline Number:"<<endl;
    cin>>landline;
    cout<<"Enter Email-Id:"<<endl;
    cin>>id;
    ContactDetails cd(mobno,almobno,landline,id);
    dnum = findDuplicates(mobno, almobno);
    emailid = validateEmail(id);
    cd.display(emailid,dnum);
    
    return 0;
}

