#include<iostream>
using namespace std;
class employee
{
    int salary;
    int id;
    public:
    void setdata()
    {
        salary=120000;
        cout<<"Enter the employee id: "<<endl;
        cin>>id;
    }
    void printdata()
    {
        cout<<"The employee salary is "<<salary<<" and employee id is: "<<id<<endl; 
    }
};

int main()
{
    employee fb[5];
    for (int i = 0; i < 5; i++)
    {
        fb[i].setdata();
        fb[i].printdata();
    }
    
}