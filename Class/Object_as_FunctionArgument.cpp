//Program to illustrate passing of Object as Function Argument
#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
        void setData(int a1, int a2)
        {
            a=a1;
            b=a2;
        }
        void getData(Complex o1, Complex o2)
        {
            a=o1.a+o2.a;
            b=o1.b+o2.b;
        }
        void PrintNumber()
        {
            cout<<"Your Complex Number id "<< a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    Complex c1, c2 ,c3;
    c1.setData(1,2);
    c1.PrintNumber();

    c2.setData(8,3);
    c2.PrintNumber();

    c3.getData(c1,c2);
    c3.PrintNumber();
}