#include<iostream>
using namespace std;

int fac(int num1)
{
    long double z=1,i;
    for(i=1;i<=num1;i++)
    {
        z=z*i;
    }
    return z;
}



int main()
{
    long double num;

cout<<"Enter the number for which you want to find the factorial of the no.: ";
cin>>num;

cout<<"The factorial of the number is: "<<fac(num);

return 0;
}