/*Write a program that would print the information (name, year of joining, salary, address)
 of three employees by creating a class named 'Employee'. The output should be as follows:
Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat*/

#include<iostream>
using namespace std;

class employee{
    public:
    string name;
    int year;
    int salary;
    string address;
};

int main()
{
    employee n,n1,n2;
    cout<<"Name"<<"          Year of joining"<<"          Salary"<<"          Address"<<endl;

    n.name="Robert";
    n.year=1994;
    n.salary=63000;
    n.address="64C- WallsStreat";

    n1.name="Sam";
    n1.year=2000;
    n1.salary=43000;
    n1.address="68D- WallsStreat";

    n2.name="John";
    n2.year=2000;
    n2.salary=53000;
    n2.address="26B- WallsStreat";

    cout<<n.name<<"          "<<n.year<<"                   "<<n.salary<<"          "<<n.address<<endl;
    cout<<n1.name<<"             "<<n1.year<<"                   "<<n1.salary<<"          "<<n1.address<<endl;
    cout<<n2.name<<"            "<<n2.year<<"                   "<<n2.salary<<"          "<<n2.address<<endl; 

   return 0;
}