#include<iostream>
using namespace std;
class B
{
    protected:
    int x,y;
};
class D : public B
{
    public:
    void read()
    {
        cin>>x;
        cin>>y;
    }
    int z;
    void disply()
    {
        cout<<"\n"<<x<<"\t"<<y<<endl;
    }
};
int main()
{
    D d;
    d.read();
    d.disply();
}