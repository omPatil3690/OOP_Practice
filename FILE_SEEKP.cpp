#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream file("om.txt", ios::out);

    if (!file.is_open())
    {
        cout << "error";
    }
    else
    {

        cout << file.tellp() << endl;
        file << "i am om patil";
        cout << file.tellp() << endl;
        file.seekp(5);
        file << "hello";

        cout << file.tellp() << endl;

        file.close();

        ifstream file("om.txt", ios::in);
        string n;
        getline(file, n);
        cout << n << endl;
    }
    return 0;
}