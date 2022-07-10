#include <iostream>
using namespace std;

class Marks
{
public:
    float maths, physics, english;

public:
    void setdata()
    {
        cout << "Enter the marks in maths and science: " << endl;
        cin >> maths >> physics >> english;
    }
};

class Details : virtual public Marks
{
public:
    int roll_no;
    string name;

public:
    void setdata1(int rnum, string n)
    {
        roll_no = rnum;
        name = n;
    }
};

class Hobbies : virtual public Marks
{
public:
    void setdata2()
    {
        cout << "Hobbies: Dancing Singing and Running " << endl;
    }
};

class Total : public Details, public Hobbies
{
protected:
    int total;

public:
    void diplay()
    {
        total = physics + maths + english;
        cout << "Name: " << name <<endl << "Roll number: " << roll_no << endl;
        cout << "Total Marks scored in exam is: " << total;
    }
};

int main()
{
    Total obj1;
    obj1.setdata();
    obj1.setdata1(15, "Khushal");
    obj1.diplay();

    return 0;
}