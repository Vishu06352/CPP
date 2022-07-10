#include<iostream>
using namespace std;
class constructor
{
    int a,b;
    public:
    constructor(void);
    void print()
    {
        cout<<"The sum of complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
constructor :: constructor(void)
{
    a=10;
    b=20;
}
int main()
{ constructor c1,c2,c3;
    c1.print();
    c2.print();
    c3.print();
return 0;
}