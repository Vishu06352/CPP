#include <iostream>
using namespace std;

template <class T1, class T2>
class temp
{
    T1 data1;
    T2 data2;

public:
    temp(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }
    void Display()
    {
        cout << "The Value of Data1 is: " << data1 << endl;
        cout << "The Value of Data2 is: " << data2 << endl;
    }
};

int main()
{
    temp<int, char> obj(10, 'v');
    obj.Display();
    return 0;
}