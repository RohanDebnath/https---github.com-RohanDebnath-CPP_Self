#include<iostream>
using namespace std;
class Base
{
    int data1;
    public :
    int data2;
    void setData();
    int getData1();
    int getData2();
};
void Base :: setData()
{
    data1 = 10;
    data2 = 20;
}
int Base :: getData1()
{
    return data1;
}
int Base :: getData2()
{
    return data2;
}
class Derived : public Base // Note
{
    int data3;
    public:
    void process();
    void Display();
};
void Derived::process()
{
    data3 = data2*getData1(); // Note
}
void Derived::Display()
{
    cout<<"Value of Data 1 ->"<<getData1()<<endl;
    cout<<"Value of Data 2->"<<data2<<endl;
    cout<<"Value of Data 3->"<<data3;
}
int main()
{
    Derived o;
    o.setData();
    o.process();
    o.Display();
}

