#include<iostream>
using namespace std;
int main()
{
    float d=3.4;
    long double e=3.4;

    cout<<"The value of 3.4 using sizeof operator is: "<<sizeof(3.4)<<endl;
    cout<<"The value of 3.4f using sizeof operator is: "<<sizeof(3.4f)<<endl;
    cout<<"The value of 3.4F using sizeof operator is: "<<sizeof(3.4F)<<endl;
    cout<<"The value of 3.4l using sizeof operator is: "<<sizeof(3.4l)<<endl;
    cout<<"The value of 3.4L using sizeof operator is: "<<sizeof(3.4L)<<endl;

    return 0;
}