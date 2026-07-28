#include <iostream>
#include <fstream>

using namespace std;

// These are some useful classes for working with files in C++

// fstreambase
// ifstream --> derived from fstreambase
// ofstream --> derived from fstreambase

// In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

// Using the constructor
// Using the member function open() of the class

int main()
{
    string st = "om bhai";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out << st;
    // We have created a string “st” which has a value “harry Bhai”
    // Object “out” is created of the type ofstream and the file “sample60.txt” is passed to it
    // The string “st” is passed to object “out”

    string st2;
    // Opening files using constructor and reading it
    ifstream in("om.txt"); // Read operation
    in >> st2;
    cout << st2 << endl;

    getline(in, st2);
    cout << st2;
    // We have created a string “st2” which is empty
    // We have made a text file “sample60b.txt” and written “This is coming from a file” in it
    // Object “in” is created of the type instream and the file “sample60b.txt” is passed to it
    // The function “getline” is called and the object “in” and the string “st2” are passed to it. The main thing to note here is that the function “getline” is used when we want to read the whole line
    // String “st2” is printed

    return 0;
}
