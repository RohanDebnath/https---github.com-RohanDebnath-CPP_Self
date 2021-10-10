#include<iostream>
using namespace std;
class Shop
{
    int item[100];
    int price[100];
    public:
    int counter=0;
    void setPrice();
    void display();
};

void Shop::setPrice()
{
    cout<<"Id of youe Item\n";
    cin>>item[counter];
    cout<<"Price of Item\n";
    cin>>price[counter];
    counter++;
}
void Shop::display()
{
    for (int i = 0; i <counter; i++)
    {
        cout<<"The price of Item with ID ->"<<item[i]<<" is ->"<<price[i]<<endl;
    }
    
}
int main()
{
    Shop Spencer;
   Spencer.setPrice();
   Spencer.setPrice();
   Spencer.setPrice();
   Spencer.display();
   return 0; 
}