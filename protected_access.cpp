#include<iostream>
using namespace std;
////////single inheritanc//////////////////////
class Employee
{
    protected:
    int data1;
    int data2;
    public :

    void setdata(int, int);
};

void Employee::setdata(int x,int y)
{
    data1=x;
    data2=y;
}

class company : public Employee
{
    int data3;
    public:
    void process();
    void display()
    {
        cout<<"Value of Data1 in class company is: "<<data1<<endl;
        cout<<"Value of Data2 in class company is: "<<data2<<endl;
        cout<<"Value of Data3 in class company is: "<<data3<<endl;
    }
};

void company :: process()
{
    data3=data2 * data1;
}

int main()
{
    company amazon;
    amazon.setdata(100,200);
    amazon.process();
    amazon.display();

return 0;
}
