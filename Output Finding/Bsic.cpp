#include<iostream>
using namespace std;
int x= 3;
int main()
{
    int x = 4;
    {
        int x=8;
        cout<<x<<endl;;
    }
    cout<<x<<endl;
}
