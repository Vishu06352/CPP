#include<iostream>
using namespace std;

class complex
{
    int a,b;
    public:
    void set(int x,int y)
    {
        a=x;
        b=y;
    }

    void print()
    {
        cout<<"The sum of complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

    void setagain(complex c1,complex c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
};



int main()
{
    complex c1,c2,c3;
    c1.set(10,20);
    c1.print();

    c2.set(30,40);
    c2.print();

    c3.setagain(c1,c2);
    c3.print();

}