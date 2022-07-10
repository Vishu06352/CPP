#include<iostream>
using namespace std;
int main()
{
    int i=0,n,g=0;


cout<<"Enter the number of student"<<endl;
cin>>n;

int vi[n];

//using for loop

// for(i=0;i<n;i++)
// {
//     cout<<"enter the marks of student "<<i<<endl;
//     cin>>vi[i];
// }
// for(i=0;i<n;i++)
// {
//     cout<<"marks of student "<<i+1<<" is: "<<vi[i]<<endl; 
// }

//using while loop***(here we have to take 2 int i.e i and g to run the while loop because if we take only i then only first loop will work)***

while(i<n)
{
    cout<<"enter the marks for student "<<i+1<<endl;
    cin>>vi[i];
    i++;
 
}

while(g<n)
{
    cout<<" the marks for student "<<g+1<<"is: "<<vi[g]<<endl;
    g++;
}


return 0;
}