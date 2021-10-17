#include<iostream> // BUG
using namespace std;
class BankDeposite
{
    int principle, time , years, rate;
    float return_value;
    public:
        BankDeposite(){}; // Make this
        BankDeposite(int , int , int);
        BankDeposite(int , int, float);
        void show();
};
BankDeposite::BankDeposite(int p, int y , int r)
{
    principle=p;
    years=y;
    rate=r;
    return_value=(principle*rate*years)/100;
}
BankDeposite::BankDeposite(int p, int y , float r)
{
    principle=p;
    years=y;
    rate=(float)r/100;
    return_value=(principle*rate*years);
}
void BankDeposite::show()
{
    cout<<return_value;
}
int main(){
    BankDeposite bd1, bd2, bd3; // remove blank Constructor and see the result
    int p, y;
    float r;
    int R;
    
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposite(p, y, R);
    bd2.show();
    return 0;
}
