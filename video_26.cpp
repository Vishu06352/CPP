#include<iostream>
using namespace std;

class complex
{
    int a,b;
    friend complex sumcomplex(complex o1,complex o2);
    public:
    void set(int x, int y)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"The sum of complex number is "<<a<<" + "<<b<<"i"<<endl;
    }

};

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.set((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
complex c1,c2,sum;
c1.set(10,20);
c1.print();

c2.set(30,40);
c2.print();

sum=sumcomplex(c1,c2);
sum.print();
return 0;
}