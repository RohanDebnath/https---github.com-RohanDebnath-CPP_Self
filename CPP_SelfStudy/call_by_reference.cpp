#include<iostream>
using namespace std;
int swapReference(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main()
{
    int x=5, y =90;
    cout<<"value before swap" <<"\t"<< x <<"\t"<< y;
    swapReference(x,y);
    cout<<"\n";
    cout<<"value After swap" <<"\t"<< x <<"\t"<< y;
}