// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ofstream vout("61_File_io.txt");
//     string s, s1;
//     cout << "Enter the content in the file: " << endl;
//     cin >> s;
//     vout << "Welcome to the coding " + s << endl;
//     vout << s;

//     vout.close();

//     ifstream vin("61_File_io.txt");
//    vin>>s1;
//     cout<<s1<<endl;
//     vin.close();

//     return 0;
// }

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // connecting our file with hout stream
    ofstream hout("61_File_io.txt");

    // creating a name string variable and filling it with string entered by the user
    string name;
    cout << "Enter your name: ";
    cin >> name;

    // writing a string to the file
    hout << "Is my name " + name ;

    // disconnecting our file
    hout.close();
    // connecting our file with hin stream
    ifstream hin("sample60.txt");

    // creating a content string variable and filling it with string present there in the text file
    string content;
    getline(hin,content);
    cout << "The content of the file is: " << content;

    // disconnecting our file
    hin.close();
    return 0;
}
