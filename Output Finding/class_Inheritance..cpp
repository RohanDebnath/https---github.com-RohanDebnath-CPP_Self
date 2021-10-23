#include<iostream>
using namespace std;
class B
{
    public:
    int x,y;
};
class D : public B
{
    public:
    int z;
    void disply()
    {
        cout<<"\n"<<x<<"\t"<<y<<endl;
    }
};
int main()
{
    D d;
    d.x=10;
    d.y=90;
    d.disply();
}