#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float>

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
        cout << "Addition of Data1 and Data2: " << data1 + data2 << endl;
        cout<<endl;
    }
};

int main()
{
    temp<> obj(10, 20);     //Case of a default set templates
    obj.Display();      

    temp <float, int>obj1(125.33,100);  //If we want to change the default templates.
    obj1.Display();      

    return 0;
}