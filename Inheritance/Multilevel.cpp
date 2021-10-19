#include<iostream>
using namespace std;
class Student
{
    protected:
    int roll_no;
    public:
    void setRollno(int x)
    {
        roll_no=x;
    }
    void getRollno()
    {
        cout<<"Roll no ->"<<roll_no<<endl;
    }
};
class Exam : public Student
{
    protected:
    float maths, physics;
    public:
    void setMarks(int x , int y)
    {
        maths=x;
        physics=y;
    }
    void getMarks()
    {
        cout<<"Marks in phy and math"<<maths<<"\t"<<physics<<endl;
    }
};
class Result : public Exam
{
    float percentage;
    public:
    void display()
    { 
        getRollno();
        getMarks();
        cout<<"Your result is "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{
    Result Rohan;
    Rohan.setRollno(117);
    Rohan.setMarks(90,91);
    Rohan.display();
} 