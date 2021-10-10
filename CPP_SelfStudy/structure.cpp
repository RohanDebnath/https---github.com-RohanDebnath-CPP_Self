#include<iostream>
using namespace std;

typedef struct employee
{
    int id;
    char fav_char;
    int salary;
}ep;

int main()
{
    ep Rohan;
    struct employee debnath;
    debnath.salary=100;
    Rohan.id=6646627;
    Rohan.salary=50000;
    Rohan.fav_char='c';
    cout<<debnath.salary;
    cout<<"\n"<<Rohan.fav_char<<"\t"<<Rohan.id<<"\t"<<Rohan.salary ;
}
