#include<iostream>
using namespace std;
class Complex
{
    int a , b;
    public:
    Complex();
    void printNumber()
    {
        cout<<"The number is"<<a<<"+"<<b<<"i"<<endl;
    }
};
Complex::Complex()
{
    a=90;
    b=80;
}
int main()
{
    Complex c1,c2;
    c1.printNumber();
    c2.printNumber();
}