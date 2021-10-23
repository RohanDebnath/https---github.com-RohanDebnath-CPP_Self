#include<iostream> // BUG
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
using namespace First;
int main(){
sayHello();
return 0;
}