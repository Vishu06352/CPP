#include<iostream>
using namespace std;
class Base_Class
{
    public:
    int var_Base;
    void display()
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
    ptr=&obj_derived;  //here ptr is an pointer of Base_Class and it's point towards object of derived class and when we run the code it will call the run the display  function of base class and not of derived class

    // ptr->Var_Derived=17; //also here we can not set the var_derived varible value of derived class all though it is pointer ptr pointing object of derived class
    ptr->display();

    //in short baseclass pointer canset and access function and data member of baseclass itself and not of any other class.

    return 0;
}