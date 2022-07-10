//Assign and print the roll number, phone number and address of two students having names "Sam" and "John" 
// respectively by creating two objects of the class 'Student'.

#include <iostream>
using namespace std;

// class student
// {
// public:
//     int roll;
//     long long phone;
//     string address;
// };
// int main()
// {
//     student sam, john;

//     sam.roll = 20;
//     sam.phone = 8766276258;
//     sam.address = "NewDelhi";

//     john.roll = 22;
//     john.phone = 9711702264;
//     john.address = "OldDelhi";

//     cout << sam.roll << endl
//          << sam.phone << endl
//          << sam.address << endl;
//     cout << john.roll << endl
//          << john.phone << endl
//          << john.address << endl;

//     return 0;
// }
//2nd way

class student{
    private:
    int roll;
    long long phone;
    string address;
    int count;//we have to use count because if we do not use count it will store value of 1 student

    public:
    void setdata(void){
        cout<<"Enter the roll number: "<<endl;
        cin>>roll;
        cout<<"Enter the phonr number: "<<endl;
        cin>>phone;
        cout<<"Enter the address: "<<endl;
        cin>>address;
        count++;
    }
    void getdata(void){
        cout<<"Roll no is: "<<roll<<endl;
        cout<<"Phone number is: "<<phone<<endl;
        cout<<"Addresss is: "<<address<<endl;
    }
};
    int main()
    {
        student sam,john;
        sam.setdata();
        sam.getdata();

        john.setdata();
        john.getdata();

        return 0;

    }