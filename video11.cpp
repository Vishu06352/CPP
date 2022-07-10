#include<iostream>
using namespace std;
int main() {
int i;
// //Using break statement
// for(i=0;i<=5;i++)
// {
//     cout<<i<<endl;
//     if(i==3)
//     {
//         break;
//     }

// }

//using continue

for(i=0;i<=5;i++)
{
    if(i==3)  //if we place cout<<i<<endl; above if condition then it will print 3 also but if we place cout<<i<<endl; below of condition then it will skip 3
    {
        continue;
    }
     cout<<i<<endl;
}

return 0;
}