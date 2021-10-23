#include<iostream>
using namespace std;
namespace First{
void sayHello(){
cout<<"HelloFirstNamespace"<<endl;
}
}
namespace Second{
void sayHello(){
cout<<"HelloSecondNamespace"<<endl;
}
}
int main()
{
First::sayHello();
Second::sayHello();
return 0;
}