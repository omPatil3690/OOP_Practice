#include <iostream>
#include <fstream> // for file handling

using namespace std;

int main()
{
    // Open the source file in read mode
    ifstream sourceFile("source.txt", ios::in);

    // Check if source file opened successfully
    if (!sourceFile.is_open())
    {
        cerr << "Error opening source file!" << endl;
        return 1;
    }

    // Open the destination file in write mode
    ofstream destinationFile("destination.txt", ios::out);

    // Check if destination file opened successfully
    if (!destinationFile)
    {
        cerr << "Error opening destination file!" << endl;
        sourceFile.close(); // Close source file
        return 1;
    }

    // Copy content from source to destination
    char ch;
    while (sourceFile.get(ch))
    {                            // Read character by character from source file
        destinationFile.put(ch); // Write the character to destination file
    }

    // Close both files
    sourceFile.close();
    destinationFile.close();

    // Display success message
    cout << "File content copied successfully from source.txt to destination.txt." << endl;

    return 0;
}
