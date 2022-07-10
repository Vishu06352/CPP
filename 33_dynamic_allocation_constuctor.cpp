#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal, year;
    float rate, return_value;

public:
    Bankdeposit() {} ///////Default constructor
    Bankdeposit(int p, int y, float R);
    Bankdeposit(int p, int y, int r);

    void show();
};

Bankdeposit ::Bankdeposit(int p, int y, float R) //for rate in .00 format
{
    principal = p;
    year = y;
    rate = R;
    int return_nvalue = principal;
    for (int i = 0; i <= year; i++)
    {
        return_value = return_nvalue * (1 + rate);
    }
}
Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    rate = float(r) / 100;
    int return_nvalue = principal;
    for (int i = 0; i <= year; i++)
    {
        return_value = return_nvalue * (1 + rate);
    }
}

void Bankdeposit ::show()
{
    cout << "The amount recieved after " << year << " year is :" << return_value << endl;
}

int main()
{
    Bankdeposit aditya, aryan, vishu;
    int p, r, y;
    float R;
    cout << "Enter the value of p ,y and r: " << endl;
    cin >> p >> y >> r;

    cout << "Enter the value of p ,y and R " << endl;
    cin >> p >> y >> R;

    /* If we do not want to use default constructor i.e (Bankdeposit(){}) then in that case we have to 
    declare vishu = Bankdeposit(p, y, r); and aditya = Bankdeposit(p, y, r); as
    Bankdeposit vishu = Bankdeposit(p, y, r); and Bankdeposit aditya = Bankdeposit(p, y, r);  */
    
    vishu = Bankdeposit(p, y, r);            
    aditya = Bankdeposit(p, y, R);

    vishu.show();
    aditya.show();

    return 0;
}