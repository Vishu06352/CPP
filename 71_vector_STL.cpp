#include <iostream>
#include <vector>
using namespace std;

template<class T>
void display(vector<T> &vec)
{
    cout << "Elements are: " << endl;
    for (int i = 0; i < vec.size(); i++)
    {
        cout<<vec[i]<<" "<<endl;;
    }
    
}


int main()
{
    int size, ele;
    cout << "Enter the size for Vector: " << endl;
    cin >> size;

    vector<int> vec;

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < size; i++) //Vector index also start from 0 just like array.
    {
        cin >> ele;
        vec.push_back(ele);
    }

    display(vec);
    // vec.pop_back(); // //this will pop out the last added element.

    vector<int> :: iterator iter =vec.begin();
    vec.insert(iter,3);//this only add one 3.
    vec.insert(iter,6,3);//this will add 6 times 3 in the benging.
    display(vec);



    vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s


    return 0;
}