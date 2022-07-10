#include<iostream>
using namespace std;
class Base_Class
{
    public:
    int var_Base;
    virtual void display()
    {
        cout<<"The value of Base class variable Var_Base is: "<<var_Base<<endl;
    }
};
class Derived_Class : public Base_Class
{
    public:
    int var_Derived;
    void display()
    {
        cout<<"The value of Base class variable var_Base is: "<<var_Base<<endl;
        cout<<"The value of Derived class variable var_Derived is: "<<var_Derived<<endl;
    }
};

int main()
{
   Base_Class obj_base;
   Derived_Class obj_derived;

    Base_Class *ptr;
    ptr=&obj_derived;  

    ptr->var_Base=17; 
    ptr->display();

    return 0;
}