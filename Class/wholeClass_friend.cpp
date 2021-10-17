#include <iostream>
using namespace std;
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealComplex(Complex, Complex);
    int sumComComplex(Complex, Complex);
};
class Complex
{
    int a,b;
    friend  class Calculator;
    public:
    void setNumber(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void printNumber()
    {
        cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

int Calculator::sumRealComplex(Complex o1,Complex o2)
{
    return(o1.a+o2.a);
}
int Calculator::sumComComplex(Complex o1,Complex o2)
{
    return(o1.b+o2.b);
}

int main()
{
    Complex o1,o2;
    o1.setNumber(89,90);
    o2.setNumber(70,90);

    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<res<<endl;
    int resc = calc.sumComComplex(o1,o2);
    cout<<resc;
}
