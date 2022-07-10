#include<iostream>
using namespace std;
int main() {

int v=5;
int *p;
p=&v;

int **z;
z=&p;

// for getting adress we use &
cout<<"the adress of v is: "<<p<<endl;
cout<<"the adress of v is: "<<&v<<endl;

// for getting value we use *(The * symbol is also know as dereference operator because it help in getting value)

cout<<"The value of v is: "<<v<<endl;
cout<<"The value of v is: "<<*(&v)<<endl;
cout<<"The value of v is: "<<*p<<endl;

//**** Pointer to pointer**** use c notes

return 0;
}