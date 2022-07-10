#include<iostream>
using namespace std;

template<class T>
class vector
{
    public:
    T *arr;
    int size;
    vector(int ssize)
    {
        size=ssize;
        arr=new T[size];
    }

    T dotproduct(vector &v1)
    {
        T dot=0;
        for (int i = 0; i < size; i++)
        {
            dot+=this->arr[i] * v1.arr[i];
        }
        return dot;
    }

};

int main()
{
    vector<float>v(3);
    v.arr[0]=2;
    v.arr[1]=1;
    v.arr[2]=4;

    vector<float>v1(3);
    v1.arr[0]=1.6;
    v1.arr[1]=3.2;
    v1.arr[2]=2.78;

    float a= v.dotproduct(v1);
    cout<<a<<endl;

return 0;
}