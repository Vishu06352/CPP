#include<iostream>
using namespace std;

class Test
{
    int a,b;
    public:
    // Test(int x,int y) :a(x) , b(y)     //will work perfectly
    // Test(int x,int y) :a(x) , b(a+y)   //will work perfectly   
    // Test(int x,int y) :a(x) , b(2*y)   //will work perfectly 
    // Test(int x,int y) : b(y) , a(x+b)   //////get garbage value because in private a is created before variable b
    // Test(int x,int y) :a(x+b) , b(y)       // again get garbage value because value of b is not assign till yet and hence show garbage value in a(x+b)
    // {
    //     cout<<"The value of a and b are "<<a<<" and "<<b<<endl;
    // }

    Test(int x, int y): a(x)
    {
        b=y;
        cout<<"The value of a and b are "<<a<<" and "<<b<<endl;
    }

};

int main()
{   
    Test obj1(3,7);

return 0;
}