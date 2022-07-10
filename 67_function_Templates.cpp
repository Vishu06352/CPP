#include <iostream>
using namespace std;

template <class T1, class T2>

float average(T1 a, T2 b)
{
    float c = (a + b) / 2;
    return c;
}

template<class T>//we can also use any variable in place of T.
void swapp(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10;
    float b = 13.22; //here we dont need to use <> angular bracket to mention the data type in angular bracket as in case of Class templates.

    cout << "Average of 2 different Data types is: " << average(a, b)<<endl;

    int x = 20, y = 30;
    swapp(x, y);
    cout << "The value of x is: " << x << " and value of y is: " << y;

    return 0;
}