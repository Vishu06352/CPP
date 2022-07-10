#include<iostream>
using namespace std;
//using pointer to pass the address

// int swap_address(int*a,int*b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     return temp;
// }

// int main()
// {
//     int x=7,y=11;
//     cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl;
//     swap_address(&x,&y);
//     cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl;

// return 0;
// }

//Using reference value

int swap_reference(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    return temp;
}


int main()
{
 int x=7,y=11;
    cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl;
    swap_reference(x,y);
    cout<<"The value of x is: "<<x<<" and the value of y is: "<<y<<endl;
return 0;
}