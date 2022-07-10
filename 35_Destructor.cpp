#include<iostream>
using namespace std;
int count=0;
class number
{
    public:
    number()
    {
        count++;
        cout<<"Constuctor is used for object "<<count<<endl;
    }

    ~number()
    {
        cout<<"Destructor is cleaning the constructor message for object "<<count<<endl;
        count--;
    }
};


int main()
{
    number vishu,khushi,v1,v2,v3;
    number k;
    {
        number cd;
        number kv;

    }

return 0;
}