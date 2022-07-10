#include<iostream>
using namespace std;

template <class T,class T1>

class temp
{
    T data1;
    T1 data2;
    public:
    
    temp()
    {
        cout<<"Enter the value1: "<<endl;
        cin>>data1;
        cout<<"Enter the value2: "<<endl;
        cin>>data2;
    }
    void show()
    {
        cout<<"The value of data1 is: "<<data1<<endl;
        cout<<"The value of data2 is: "<<data2<<endl;
    }

};

int main()
{
    temp<string,int> obj;
    obj.show();

    temp<int,float> obj1;
    obj1.show();

    temp<char,string> obj2;
    obj2.show();

return 0;
}