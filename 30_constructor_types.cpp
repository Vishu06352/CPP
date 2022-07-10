#include<iostream>
using namespace std;
class construc
{   int a,b;
    public:
    construc(int,int);
    construc(void);
    void print()
    {
        cout<<"The sum of complex number is "<<a<<" is "<<b<<"i"<<endl;
    }
};

construc :: construc(int x,int y)
{
    a=x;
    b=y;
}

int main()
{
construc c1(10,20);
c1.print();
construc c2(30,40);
c2.print();
return 0;
}