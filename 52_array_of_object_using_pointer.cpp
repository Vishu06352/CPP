#include <iostream>
using namespace std;
class shopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata()
    {
        cout << "Id is: " << id << " and Price is: " << price << endl;
    }
};
int main()
{
    shopItem *ptr = new shopItem[3];
    shopItem *ptr_starting = ptr;
    int i, a;
    float b;

    for (i = 0; i < 3; i++)
    {
        cout << "Enter the Id and Price of Items number: " << i + 1 << endl;
        cin >> a >> b;
        ptr->setData(a, b);
        ptr++;
    }

    for (i = 0; i < 3; i++)
    {
        cout << "Details of Item number " << i + 1 << endl;
        ptr_starting->getdata();
        ptr_starting++;
    }

    return 0;
}