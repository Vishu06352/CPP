#include<iostream>
using namespace std;
////     Multiple Inheritance
/////   A   B
/////   |___|
/////     |
/////     C

class Pass_1
{
    protected:
    int key1;
    public:
    void key_1()
    {
        cout<<"Enter the 1st combination of password"<<endl;
        cin>>key1;
    }
};
class Pass_2
{
    protected:
    int key2;
    public:
    void key_2()
    {
        cout<<"Enter the 2st combination of password"<<endl;
        cin>>key2;
    }
};

class password : public Pass_1,public Pass_2
{
    public:
    void combine()
    {
        cout<<"Your combined keys password is: "<<key1<<key2<<endl;
    }
};

int main()
{
    password P1;
    P1.key_1();
    P1.key_2();
    P1.combine();

return 0;
}