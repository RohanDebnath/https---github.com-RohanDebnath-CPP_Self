#include<iostream>
using namespace std;
int main()
{
    int a =3;
    int *b=&a;
    cout<<"The address of a is "<< &a<<endl;
    cout<<"The address of a is "<< b<<endl;
    cout<<"The Value of a is "<< *b<<endl;
    cout<<"The Value of a is "<< *&a<<endl;

    //pointer to pointer concept
}