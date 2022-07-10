// // Write a program to store and print the roll no., name , age and marks of a student using structures.

// struct student
// {
//     int rollno;
//     char name[15];
//     int age;
//     float marks;
// };

// #include<iostream>
// using namespace std;
// int main()
// {
//     struct student s1;

//     cout<<"Please provide the following info"<<endl;

//     cout<<"Your roll no.: "<<endl;
//     cin>>s1.rollno;

//     cout<<"name: "<<endl;
//     cin>>s1.name[15];

//     cout<<"Age: "<<endl;
//     cin>>s1.age;

//     cout<<"Marks: "<<endl;
//     cin>>s1.marks;

//     cout<<s1.rollno<<endl;
//     cout<<s1.name[15]<<endl;
//     cout<<s1.age<<endl;
//     cout<<s1.marks<<endl;


// return 0;
// }

//Write a program to store the roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.

struct student
{
   int roll_no;
   char name[20];
   int age;
}info[10];

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of student for which you want info: "<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>info[i].roll_no;
        cin>>info[i].name[20];
        cin>>info[i].age;
    }

    cout<<"Enter the roll_no of student for which info should be printed: ";
    cin>>j;

        cout<<info[j].roll_no<<endl;
        cout<<info[j].name[20]<<endl;
        cout<<info[j].age<<endl;

return 0;
}
