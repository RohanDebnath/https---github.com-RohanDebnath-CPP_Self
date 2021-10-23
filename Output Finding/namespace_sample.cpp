#include <iostream>
using namespace std;
namespace First
{
    void a()
    {
        cout << "Namespace First\n";
    }
}
namespace second
{
    void a()
    {
        cout << "Namespace Second\n";
    }
}

int main()
{
  //  using namespace second;
    using second::a;
    First::a();
    second::a();
    a();
}