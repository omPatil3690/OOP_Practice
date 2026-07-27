#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream file("om.txt", ios::in | ios::out | ios::app);

    if (!file.is_open())
    {
        cout << "error while opening the file" << endl;
    }
    else
    {
        cout << "file opned successfully" << endl;
        cout << "writing to the file" << endl;

        file << "hello my name is om";

        file.seekg(0);
        cout << "reading from the file" << endl;

        string line;

        while (file.eof() == 0)
        {
            getline(file, line);
            cout << line << endl;
        }
    }
    return 0;
}