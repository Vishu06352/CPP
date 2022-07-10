//Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
//**** Imp do not write name[] array in main function while storing name because if we do that then only first letter of name get printed and program get terminated***
struct students
{
    int roll_no;
    char name[13];
    int age;
}details[10];

#include<iostream>
using namespace std;
int main()
{
    int n,i,z;
    struct students details[10];
    
    cout<<"Enter the number of students for which you want to enter details: ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<"Enter the roll_no: "<<endl;
        cin>>details[i].roll_no;

        cout<<"Enter the name: "<<endl;
        cin>>details[i].name;

        cout<<"Enter the age: "<<endl;
        cin>>details[i].age;
    }

    cout<<"Enter the student number for which you want to get details filled by you"<<endl;
    cin>>z;

    if(z==2)
    {
        cout<<"The roll_no is: "<<details[z-1].roll_no<<endl;
        cout<<"The name is: "<<details[z-1].name<<endl;
        cout<<"The age is: "<<details[z-1].age<<endl;
    }

return 0;
}