#include<iostream>
using namespace std;
int main()
{
    int let,a,b,c;
    
    cout<<"Please enter the first number: "<<endl;
    cin>>a;
    cout<<"Please enter the second number: "<<endl;
    cin>>b;
    cout<<"choice the operation number you want to perform"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for divison"<<endl;
    cout<<"5 for modulus"<<endl;
    cin>>let;

    switch(let)
    {
        case 1:
        {
            c=a+b;
            cout<<c;
         break;
        }
       

        case 2:
        {
            c=a-b;
            cout<<c;
            break;
        }

         case 3:
        {
            c=a*b;
            cout<<c;
            break;
        }

         case 4:
        {
            c=a/b;
            cout<<c;
            break;
        }

        default:
        {
            cout<<"Wrong choice";
            break;
        }

    }
return 0;
}


