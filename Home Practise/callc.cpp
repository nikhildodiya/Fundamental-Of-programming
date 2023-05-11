#include<iostream>
using namespace std;
class calc
{
    public:
    int no1, no2, choice;
    calc()
    {
        cout<<"Enter Your No1 : ";
        cin>>no1;
        cout<<"Enter Your No2 : ";
        cin>>no2;
        cout<<"\n1.add\n2.subs\n3.multi\n";
        cout<<"Enter Your CHoice : ";
        cin>>choice;
    }
};

class A : public calc
{
    public:
    A()
    {
        cout<<endl<<"Your Adition Is : "<<no1 + no2;
    }
};

class B : public calc
{
    public:
    B()
    {
        cout<<endl<<"Your Subsraction Is : "<<no1 - no2;
    }
};
int main()
{
    int ch;
    switch(ch)
    {
        case 1:
        A a1;
        break;

        case 2:
        B a2;
        break;

        default:
        cout<<"invalid choice...."
        break;
    }
      return 0;
}