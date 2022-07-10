#include<iostream>
#include<iomanip> //By using mainp we can use setw() operator to format the output
using namespace std;
// int main ()      //use of constant
// {
//     // int a=12;
//     // cout<<"The previous value of a was: "<<a<<endl;
   
//     // a=22;                               //here the value of a get change from 12 to 22

//     // cout<<"The new value of a is"<<a<<endl;

//     // But if we want to fix the value of a as 12 we have use constant so that value doesn't get change

//     const int a=12;
//     cout<"The previous value of a was": <<a<<endl;
    
//     // now if we want to change the value of a we can not do that
//     a=22; //It is giving error because integer a is constant
//     cout<<"The value of a is: "<<a<<endl;

// }

//Manipulators (setw and endl are the manipulators and to use setw we have to include the manip header file)

int main()
{
    int a=2,b=322,c=122121;

    cout<<"The display format of a without setw is: "<<a<<endl;
    cout<<"The display format of b without setw is: "<<b<<endl;
    cout<<"The display format of c without setw is: "<<c<<endl;

//Now using setw operator
    
    cout<<"The display format of a is: "<<setw(5)<<a<<endl;
    cout<<"The display format of b is: "<<setw(5)<<b<<endl;
    cout<<"The display format of c is: "<<setw(5)<<c<<endl;
    
    return 0;
}