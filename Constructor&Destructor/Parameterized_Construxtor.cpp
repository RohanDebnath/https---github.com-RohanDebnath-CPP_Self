#include<iostream>
using namespace std;
class Complex
{
    int a,b;
    public:
    Complex (int , int);
    void printnumber()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
};

Complex::Complex(int x , int y) // int put korle
{
     a=x;
     b=y;
}
int main()
{
    Complex o1(1,2);
    o1.printnumber();
    Complex o2(2,4);
    o2.printnumber();

}