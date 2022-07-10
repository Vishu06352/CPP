#include<iostream>
using namespace std;

class Employee
{
    int a,b,c;
    public:
    int d,e;

    void setdata(int x,int y,int z)
    {
       a=x;
       b=y;
       c=z; 
    }

    void display()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
        cout<<"The value of c is: " <<c<<endl;
        cout<<"The value of d is: "<<d<<endl;
        cout<<"The value of e is: "<<e<<endl;
    }
};

// void Employee :: setdata(int x,int y,int z)
// {
//     a=x;
//     b=y;
//     c=z;
// }



int main()
{
    Employee vishu;
    vishu.d=4;
    vishu.e=5;

    vishu.setdata(1,2,3);
    vishu.display();
}

