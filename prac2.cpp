/* Write a program to print the area of a rectangle by creating a class named 'Area' having two functions. 
First function named as 'setDim' takes the length and breadth of the rectangle as parameters and the second 
function named as 'getArea' returns the area of the rectangle. Length and breadth of the rectangle are entered through keyboard.*/

#include <iostream>
using namespace std;

class Area
{
public:
    int lenght, breadth;
    void setdim(int l, int b)
    {
        lenght = l;
        breadth = b;

    }

    int getArea()
    {
        return lenght * breadth;
    }
};
int main()
{
    Area a;
    a.setdim(4,44);
    cout << a.getArea() << endl;
    return 0;
}



#include<iostream>
using namespace std;
int main()
{

return 0;
}
