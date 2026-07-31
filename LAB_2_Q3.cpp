#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    int marks;

public:
    Student() // Default Constructor to set default values to the private data members
    {
        name = "unknown";
        rollNumber = 0;
        marks = 0;
        return;
    }
    Student(string x, int y, int z)
    {
        name = x;
        rollNumber = y;
        marks = z;
    }
    void display()
    {
        cout << "Student Name : " << name << endl;
        cout << "Roll Number : " << rollNumber << endl;
        cout << "Marks : " << marks << endl;
        return;
    }
};

int main()
{
    Student Om("Om Patil", 57, 100);
    Om.display();
    Student Chai;
    Chai.display();
    return 0;
}