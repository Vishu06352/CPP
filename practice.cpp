// Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
//  Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student.

#include <iostream>
using namespace std;
#include<string>
class student
{
 public:
 string name;
 int roll_no;
 };
int main()
{
   student s;

   s.name = "John";
   s.roll_no = 2;

  cout << "Name of student is: " << s.name << endl;
  cout << "Roll_no: " << s.roll_no << endl;

  return 0;
}