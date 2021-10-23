#include<iostream> // BUG
using namespace std;

namespace New_Space
{
    class X
    {
        static int i;
        public:
        void func();

    };
}
class Y;
int New_Space::X::i=23;
class New_Spcae::Y
{
    int a;
    public:
    int get_Data()
    {
        cout<<a;
    }
    Y();
};
New_Spcae::Y::Y()
{
    a=0;
}