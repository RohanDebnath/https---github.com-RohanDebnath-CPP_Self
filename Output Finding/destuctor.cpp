#include<iostream>
using namespace std;
class Integer
{
    int m,n;
    public:
    Integer()
    {
        m=0,n=0;
        cout<<"The default constructor has been called"<<endl;
    }
    Integer(int x , int y)
    {
        m=x;
        n=y;
        cout<<"Paramterized Constructor is called"<<endl;
    }
    ~Integer()
    {
        cout<<"Object is destroyed"<<m<<n<<endl;
    }
    void display()
    {
        cout<<"m -> "<<m<<" n-> "<<n<<endl;
    }
};
int main()
{
    Integer int1;
    int1.display();

    Integer int2(2,5);
    int2.display();

    Integer int3(3,7);
    int3.display();
    

}