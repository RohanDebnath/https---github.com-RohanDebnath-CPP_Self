#include<iostream>
using namespace std;
class Y;
class X
{
    int val;
    public :
    void setNumber(int info)
    {
        val=info;
    }
    friend void add(X,Y);
};
class Y
{
    int num;
    public:
      void setNumber(int info)
    {
        num=info;
    }
    friend void add(X,Y);
};
void add(X o1, Y o2)
{
    cout<<o1.val+o2.num;
}
int main()
{
    X a1;
    a1.setNumber(90);
    Y b;
    b.setNumber(10);

    add(a1,b);
}
