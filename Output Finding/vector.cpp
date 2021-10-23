#include<iostream>
using namespace std;
class Vector
{
 int x, y;
 public:
 Vector()
 {
     x=0;
     y=0;
 }
 Vector(int a, int b)
 {
     x=a;
     y=b;
 }
 Vector operator - (Vector v)
 {
     Vector t;
     t.x= x-v.x;
     t.y=y-v.y;
     return t;
 }
 void display()
 {
     cout<<"\n"<< x << " "<<y;
 }
};

int main()
{
    Vector v1(2,3), v2(5,8),v3;
   // v3=v2-v1;
   v3=v2.operator-(v2);
    v1.display();
    v2.display();
    v3.display();
}