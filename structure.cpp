struct student{
    int marks;
    int id;
    char fav[];
};

#include<iostream>
using namespace std;
int main()
{
struct student harry,ravi,shubham;

harry.marks=99;
ravi.marks=101;
shubham.marks=100;

harry.id=01;
ravi.id=02;
shubham.id=03;

cout<<"ID of harry is"<<harry.id<<endl;


return 0;
}