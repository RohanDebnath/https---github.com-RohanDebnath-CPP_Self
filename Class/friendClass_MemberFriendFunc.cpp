#include<iostream>
using namespace std;
class Complex;
class Calculator
{
    public:
    int add(int a, int b)
    {
        return(a+b);
    }
    int sumRealComplex(Complex,Complex);
    int sumCompComplex(Complex o1, Complex o2);
};
class Complex
{
    int a,b;
    friend int Calculator::sumRealComplex(Complex,Complex);
    friend int Calculator ::sumCompComplex(Complex o1, Complex o2);
  public:
  void setNumber(int a1 , int b1)
  {
      a=a1;
      b=b1;
  }  
};
int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return(o1.a + o2.a);
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    Complex o1,o2;
    o1.setNumber(89,90);
    o2.setNumber(70,90);

    Calculator calc;
    int res = calc.sumRealComplex(o1,o2);
    cout<<res<<endl;
    int resc = calc.sumCompComplex(o1,o2);
    cout<<resc;
}
