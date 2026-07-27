#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    // declaring an object of the type ofstream
    ofstream out;

    // connecting the object out to the text file using the member function open()
    out.open("sample60.txt");

    // writing to the file
    out << "This is me\n";
    out << "This is also me";
    // closing the file connection
    out.close();

    // declaring an object of the type ifstream
    ifstream in;
    // declaring string variable st
    string st;
    // opening the text file into in
    in.open("sample60.txt");

    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof() == 0)
    {
        // using getline to fill the whole line in st
        getline(in, st);
        cout << st << endl;
    }

    // Method_2

    // ifstream file;
    // file.open("om.txt");
    // if (!file.is_open())
    // {
    //     cout << "error while opening the file";
    // }
    // else
    // {
    //     cout << "reading from the3 file  contents are " << endl;
    //     string line;
    //     while (file.good())  //Checks the state of the I/O stream to determine if it is in a goood state or not.It return true if it is in good state, otherwise it returns false.
    //     {                              //So .good() will return false if the cursor reaches the end of file.
    //         getline(file, line);
    //         cout << line << endl;
    //     }
    // }
    return 0;
}
