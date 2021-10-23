#include<iostream>
using namespace std;
class Base1
{
    public:
    ~Base1()
    {
        cout<<"Base1 Destrctor is called \n";
    }
};
class Base2
{
    public:
    ~Base2()
    {
        cout<<"Base2 Destructor is called\n";
    }
};
class Derived :public Base1 , public Base2
{
    public:
    ~Derived()
    {
        cout<<"Derived Destructor is called\n";
    }
};
int main()
{
    Derived d;
}