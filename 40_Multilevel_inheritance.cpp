#include<iostream>
using namespace std;
///////////Multilevel inheritance A--->B--->C
class student
{
    protected: 
    char name[15];
    int roll_num;
    int clss;
    public:

    void display_stud()
    {
    cout<<"Enter your name, roll number and your class "<<endl;
    cin>>name>>roll_num>>clss;
    }

};

class teacher : public student
{
    protected:
    int maths,physics,chemistry;
    public:
    void setdata()
    {
        cout<<"Teacher please set the marks scored by student: "<<name<<" having roll number "<<roll_num<<endl;
        cin>>maths>>physics>>chemistry;
    }
};

class result : public teacher
{
    public:
    void display_result()
    {
    cout<<"Marks scored by student "<<name<<" in Maths, Physics and Chemistry are "<<maths<<", "<<physics<<" and "<<chemistry<<endl;
    }

};

int main()
{
    result s1;
    s1.display_stud();
    s1.setdata();
    s1.display_result();

return 0;
}