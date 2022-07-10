#include<iostream>
using namespace std;

class Base1
{
    protected:
    int data1;
    public:
    Base1(int i)
    {
        data1=i;
        cout<<"In Base 1 class constructor "<<endl;
    }
    void printBase1()
   {
       cout<<"The value of Data 1 is : "<<data1<<endl;
   }
};
class Base2
{
    protected:
    int data2;
    public:
    Base2(int i )
    {
        data2=i;
        cout<<"In Base 2 class constructor "<<endl;
    }
   void printBase2()
   {
       cout<<"The value of Data 2 is : "<<data2<<endl;
   }
};

class Derived: public Base1 ,public Base2/////if we swap base 1 and base2 here then value of b will be assign to base and value of a to base 2
{                                        //// if we use virtual public base2 then first constructor of base 2 will be run after that run for base 1 class
    protected:
    int data3,data4;
    public:
    Derived(int a,int b,int c, int d): Base1(a),Base2(b)
    {
        data3=c;
        data4=d;
        cout<<"In Derived Class"<<endl;
    }
     void printDerived()
   {
       cout<<"The value of Data 3 is : "<<data3<<endl;
       cout<<"The value of Data 4 is : "<<data4<<endl;
   }
};


int main()
{
    Derived vishu(10,20,30,40);
    vishu.printDerived();
    vishu.printBase1();
    vishu.printBase2();
return 0;
}