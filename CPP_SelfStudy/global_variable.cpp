#include<iostream>
using namespace std;
int glo =9;
void sum()
{
    cout<<glo;
}
void sum2()
{
    glo=89;
    cout<<endl;
    cout<<glo;
}
int main()
{
    int glo=90;
    sum();
    cout<< glo;
    sum2();
}