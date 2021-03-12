#include <iostream>
#include<stdio.h>
#include<string>
using namespace std;
class Donor
{
private:
    string name;
    int age;
    float height;
    float weight;
    string gender;
    string bloodGroup;
public:
    string getName()
    {
        string name;
        cin>>name;
        return name;
    }
    void setName(string a)
    {
        name=a;
    }
    int getAge()
    {
        int age;
        cin>>age;
        return age;
    }
    void setAge(int b)
    {
        age=b;
    }
    float getHeight()
    {
        float height;
        cin>>height;
        return height;
    }
    void setHeight(float c)
    {
        height=c;
    }
    float getWeight()
    {
        float weight;
        cin>>weight;
        return weight;
    }
    void setWeight(float d)
    {
        weight=d;
    }
    string getGender()
    {
        string gender;
        cin>>gender;
        return gender;
    }
    void setGender(string e)
    {
        gender=e;
    }
    string getBloodGroup()
    {
        string bg;
        cin>>bg;
        return bg;
    }
    void setBloodGroup(string f)
    {
        bloodGroup=f;
    }
    void search(Donor donor[],string bloodGroup,int n){
        
        for(int i=0;i<n;i++)
        {
            if(donor[i].bloodGroup == bloodGroup)
                cout<<donor[i].name<<endl;
        }
        
    }
};

