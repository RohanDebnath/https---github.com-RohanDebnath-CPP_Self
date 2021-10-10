#include<iostream>
using namespace std;
class Employee
{
    int ID;
    static int Count;
    public:
    void setData()
    {
        cout<<"Enter the ID\n";
        cin>>ID;
        Count++;
    }
    void getData()
    {
        cout<<"The ID of the Employee is \n"<<ID<<endl;
    }
};
int Employee :: Count;// Static er khatre eta korte hobe

int main()
    {
        Employee R1,R2,R3;
        R1.setData();
        R1.getData(); 
        R2.setData();
        R2.getData();  
        R3.setData();
        R3.getData();
    }