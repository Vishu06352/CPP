// wap to save the itemid and itemprice of shop and display the information of the stored itemid and itemprice using class and array
#include<iostream>
using namespace std;

class shop
{
    int item[100];
    int price[100];
    int counter;

    public:
    void setcounter(void)
    {
        counter=0;
    }
    void setdata(void);
    void displaydata(void);
};

    void shop :: setdata(void)
    {
        cout<<"Enter the itemid: "<<endl;
        cin>>item[counter];

        cout<<"Enter the price for item: "<<endl;
        cin>>price[counter];

        counter++;
    }

    void shop :: displaydata(void)
    {
        for (int i = 0; i < counter ; i++)
        {
            cout<<"The price for itemid : "<<item[i]<<" is : "<<price[i]<<endl;
        }
        
    }

int main()
{
    shop sikander;
    int n;
    cout<<"Enter the number of item : "<<endl;
    cin>> n;
    sikander.setcounter();
    for (int z = 0; z < n; z++)
    {
        sikander.setdata();
    }
    sikander.displaydata();
    return 0;
}