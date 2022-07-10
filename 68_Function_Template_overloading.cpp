#include<iostream>
using namespace std;


void func(int a,int b)
{
    cout<<"Using the most Priority function"<<endl;
    cout<<"Value is: "<<a+b;
}


template<class T>
void func(T a, T b)
{
    cout<<"Using the template  function"<<endl;
    cout<<"Value is: "<<a+b;
}
int main()
{
    func(10,20);
return 0;
}