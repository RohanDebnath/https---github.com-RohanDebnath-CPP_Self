#include<iostream>
using namespace std;
class num
{
    public:
    num()
    {
        cout<<"Constructor is called\n";
    }
    ~num()
    {
        cout<<"Destructor is called\n";
    }
};
int main()
{
    cout<<"We are inside our main\n";
    cout<<"Creating our first obj\n";
    num n1;

    {
        cout<<"Entering the block\n";
        cout<<"Creating two more object\n";
        num n2,n3;
        cout<<"exiting this block\n";
    }
    cout<<"back to main\n";
}