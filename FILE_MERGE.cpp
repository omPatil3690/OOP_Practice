#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Declare file stream objects
    ifstream file1, file2;
    ofstream mergedFile;

    // Open file1.txt in read mode
    file1.open("file1.txt");
    if (!file1)
    {
        cerr << "Error opening file1.txt!" << endl;
        return 1;
    }

    // Open file2.txt in read mode
    file2.open("file2.txt");
    if (!file2)
    {
        cerr << "Error opening file2.txt!" << endl;
        file1.close(); // Close file1 before returning
        return 1;
    }

    // Open merged.txt in write mode
    mergedFile.open("merged.txt");
    if (!mergedFile)
    {
        cerr << "Error creating merged.txt!" << endl;
        file1.close();
        file2.close();
        return 1;
    }

    // Read content from file1.txt and write it to merged.txt
    string line;
    while (getline(file1, line))
    {
        mergedFile << line << endl;
    }

    // Read content from file2.txt and write it to merged.txt
    while (getline(file2, line))
    {
        mergedFile << line << endl;
    }

    // Close all the files
    file1.close();
    file2.close();
    mergedFile.close();

    cout << "Files merged successfully into merged.txt" << endl;

    return 0;
}
