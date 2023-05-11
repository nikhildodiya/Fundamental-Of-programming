#include<iostream>
using namespace std;
class calc
{
    public:
    int no1, no2;
    calc()
    {
        cout<<"Enter Your No1:";
        cin>>no1;
        cout<<"Enter Your No2:";
        cin>>no2;
    }
};

class A : public calc
{
    public:
    A()
    {
    cout<<"Your Addition Is : "<<no1 + no2;
    }
};

class B : public calc
{
    public:
    B()
    {
        cout<<"Your Subsraction Is : "<<no1 - no2;
    }
};
int main
{
      A add;
      B add1;  
      return 0;
}