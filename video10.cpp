#include<iostream>
using namespace std;
int main()
{
    int a,multi,num;
    int i=1;
    int fact=1;
    int facto=0;
    cout<<"Enter the number for which you want to see the multiplication"<<endl;
    cin>>a;

    // do//Multiplication table using do while
    // {
    //     multi=a*i;
    //     cout<<a<<"*"<<i<<"="<<multi<<endl;
    //     i++;
    // }while(i<11);

    // (using while loop)
    while(i<=10)
    {
        multi=a*i;
        cout<<a<<"*"<<i<<"="<<multi<<endl;
        i++;
    }

    
return 0;

}
