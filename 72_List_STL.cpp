#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lis)
{
    list<int>::iterator iter;
    iter = lis.begin();
    for (iter = lis.begin(); iter != lis.end(); iter++)
    {
        cout << *iter << " ";
        
    }
    cout << endl;
}
int main()
{
    list<int> lis; //It is empty List
    // lis.push_front(10);
    // lis.push_front(20);
    // lis.push_front(40);
    // lis.push_front(60);
    // display(lis);

    lis.push_back(90);
    lis.push_back(100);
    lis.push_back(110);
    lis.push_back(120);
    display(lis);

    list<int> lis1(5);
    list<int>::iterator it;
    it = lis1.begin();

    *it = 32;
    it++;
    
    *it = 534;
    it++;

    *it = 8;
    it++;

    *it = 43;
    it++;

    *it = 43;
    it++;
    // lis1.remove(43);//This will remove all the occuerence of 43 in the lis1.
    lis1.unique(); //This will help in removing all the dublicate element like 43 and print them one's only.
    display(lis1);

    lis.sort();
    lis1.sort();

    lis.merge(lis1);
    display(lis);
    //popback, popfront, reverse and many more operation.
    return 0;
}