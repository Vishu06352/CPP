#include <iostream>
using namespace std;

class complex
{
    int a, b;
    friend class calculate;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
};

class calculate
{
    public:

    int setrealpart(complex o1, complex o2)
    {
        return (o1.a + o2.b);
    }
    int setcompart(complex o1, complex o2)
    {
        return (o1.b + o2.b);
    }
};

int main()
{
    complex c1, c2;
    c1.setdata(10, 20);
    c2.setdata(30, 40);

    calculate Testing;
    int n = Testing.setrealpart(c1, c2);
    int m = Testing.setcompart(c1, c2);

    cout << "Sum of real part of complex number is: " << n << endl;
    cout << "Sum of complex part of complex number is: " << m << endl;

    return 0;
}