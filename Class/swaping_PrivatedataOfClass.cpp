#include<iostream> // BUG 
using namespace std;
class C2;
class C1
{
    int val1;
    public:
    void setData(int info)
    {
        val1=info;
    }
    void display()
    {
        cout<<val1<<endl;
    }
    friend void exchnage(C1&, C2&);
};
class C2
{
    int val2;
    public:
    void setData(int info)
    {
        val2=info;
    }
    void display()
    {
        cout<<val2<<endl;
    }
    friend void exchnage(C1& , C2&);
};
void exchnage(C1 &x, C2 &y)
{
    int temp = x.val1;
    x.val1=y.val2;
    y.val2=x.val1;

}
int main()
{
    C1 oc1;
    C2 oc2;

    oc1.setData(10);
    oc2.setData(20);

    exchnage(oc1,oc2);
    oc1.display();
    oc2.display();

}