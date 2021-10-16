#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public:
        void setNumber(int n1, int n2)
        {
            a=n1;
            b=n2;
        }
        friend Complex sumComplex(Complex O1, Complex O2);
        void PrintNumber()
        {
            cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
        }
};
Complex sumComplex(Complex O1, Complex O2)
{
    Complex O3;
    O3.setNumber((O1.a+O2.a),(O2.b+O2.b));
    return O3;
}
int main()
{
    Complex c1,c2,c3;
    c1.setNumber(10,20);
    c1.PrintNumber();
    
    c2.setNumber(10,20);
    c2.PrintNumber();

    c3=sumComplex(c1,c2);
    c3.PrintNumber();
}
