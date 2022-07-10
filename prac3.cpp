
// Print the average of three numbers entered by the user by creating a class named 'Average' having a 
// function to calculate and print the average without creating any object of the Average class
#include <iostream>
using namespace std;

class average
{
public:
    int a, b, c;
    void reduce(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }

    int getreduce()
    {
        return ((a + b + c) / 3);
    }
};

int main()
{
    average a;
    a.reduce(10, 20, 30);
    cout << "The average of number 10 20 and 30 is: " << a.getreduce()<< endl;
    return 0;
}