#include <iostream>
using namespace std;

class simple_calc
{
protected:
    float a, b;
    int choice;
public:

    void display1()
{
    cout << "Press 1 for Addition: " << endl;
    cout << "Press 2 for Subtraction: " << endl;
    cout << "Press 3 for Multiplication: " << endl;
    cout << "Press 4 for Division: " << endl;
    cin >> choice;
    cout << "Enter the two value: " << endl;
    cin >> a >> b;
}   
void setdata1()
{
    switch (choice)
    {
    case 1:
        cout << "The addition of " << a << " and " << b << " is: " << a + b << endl;
        break;

    case 2:
        cout << "The subtration of " << a << " and " << b << " is: " << a - b << endl;
        break;

    case 3:
        cout << "The multiplication of " << a << " and " << b << " is: " << a * b << endl;
        break;

    case 4:
        cout << "The division of " << a << " and " << b << " is: " << a / b << endl;
        break;

    default:
        cout << "You have enter the wrong choice" << endl;
        break;
    }
}
};

class scientic_cal
{
    protected:
    float base, perpendi, hypo;
    int ch;
    public:
    void display2()
{ 
    cout << "Press 1 to find sine angle: " << endl;
    cout << "Press 2 to find cos angle: " << endl;
    cout << "Press 3 to find tan angle: " << endl;
    cin >> ch;

    if(ch ==1) 
    {
    cout << "Enter the Perpendicular and Hypothesis: " << endl;
    cin >> perpendi >> hypo;
    }
    else if(ch ==2)
    {
    cout << "Enter the Base and Hypothesis: " << endl;
    cin >> base >> hypo;
    }
    else
    {
    cout << "Enter the Perpendicular and Base: " << endl;
    cin >> perpendi >> base;
    }
}
void setdata2()
{
    switch (ch)
    {
        case 1:
            cout << "The sine angle of Perpendicular " << perpendi << " and Hypothesis " << hypo << " is: " << int(perpendi / hypo) << endl;
            break;

        case 2:
            cout << "The cos angle of Base " << base << " and Hypothesis " << hypo << " is: " << int(base / hypo) << endl;
            break;

        case 3:
            cout << "The tan angle of Perpendicular " << perpendi << " and Base " << base << " is: " << int( perpendi / base) << endl;
            break;

        default:
            cout << "You have enter the wrong choice" << endl;
            break;
    }
}    
};

class hybrid : protected simple_calc, protected scientic_cal
{
    protected:
    int choice_1;
    public:

  void  display3()
    {
        cout<<"Press 1 for simple calculator: "<<endl;
        cout<<"Press 2 for scientific calculator: "<<endl;
        cin>>choice_1;
        
        if(choice_1==1)
        {
        display1();
        }
        else if(choice_1 ==2)
        {
        display2();
        }
        else
        cout<<"You have enter wrong choice"<<endl;
    }
  void  setdata3()
    {
        if(choice_1==1)
        {
        setdata1();
        }
        else if(choice_1 ==2)
        {
       setdata2();
        }
        else
        cout<<"You have enter wrong choice"<<endl;
    }

};

int main()
{
    // simple_calc obj1;
    // obj1.display1();
    // obj1.setdata1();

    // scientic_cal obj2; 
    // obj2.display2();    
    // obj2.setdata2(); 

    hybrid obj3; 
    obj3.display3();    
    obj3.setdata3();    
    
    

}