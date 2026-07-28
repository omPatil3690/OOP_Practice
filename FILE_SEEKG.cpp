#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream file("om.txt", ios::in);

    if (!file.is_open())
    {
        cout << "error";
    }
    else
    {
        file.seekg(0, ios::end);
        cout << file.tellg() << endl;

        string line;
        file.seekg(0);
        // getline(file, line);
        char ch;
        file.get(ch);
        cout << ch << endl;
        cout << file.tellg();
        file.close();
    }
    return 0;
}