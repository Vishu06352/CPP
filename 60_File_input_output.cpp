#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // here we are use the 1st method i.e using constructor
    string s="Hello Beta\n",ss;//\n help in writing in next line
    ss="Vishu";
    string s1,s2;
    ofstream out("60_File_input.txt");//here out is just an object we can use any name
    out<<s<<ss;

    ifstream in("60_File_input(a).txt");//here in is just an object we can use any name
//    in>>s1;     //Only print one word of the file while running the code.
    getline(in,s1);
    getline(in,s2);
    cout<<s1<<endl<<s2;

return 0;
}