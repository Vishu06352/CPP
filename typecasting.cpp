#include<iostream>
using namespace std;
int main()
{
    int a=23;
    float b=17.34;
    
    //  cout<<"The value of a is : "<<a<<endl; 
    //  cout<<"The value of float(a) is: "<< float(a)<<endl;
    //  cout<<"The value of (float)a is: "<< (float)a<<endl;
    //  cout<<"The value of int(b) is: "<< int(b)<<endl;
    //  cout<<"The value of (int)b is: "<<(int)b <<endl;

int c= int (b);

cout<<"The value of expression is"<<a+c<<endl;
cout<<"The value of expression is"<<a+b<<endl;
cout<<"The value of expression is"<<a+int(b)<<endl;

return 0;
}