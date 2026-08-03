#include <bits/stdc++.h>

using namespace std;

class Student
{
private:
    string name;
    int section;
    int rollNumber;
    int marks;

public:
    void set_data(string x, int y, int z, int w)
    {
        name = x;
        section = y;
        rollNumber = z;
        marks = w;
        return;
    }
    char calculateGrade()
    {
        if (marks > 90 && marks <= 100)
        {
            return 'A';
        }
        else if (marks > 80)
        {
            return 'B';
        }
        else if (marks > 70)
            return 'C';
        else if (marks > 60)
            return 'D';
        else
            return 'E';
    }

    void displayInfo()
    {
        char grade = calculateGrade();
        cout << name << endl
             << section << endl
             << rollNumber << endl
             << marks << endl
             << grade;
        return;
    }
};
int main()
{
    Student myObject;
    myObject.set_data("OM", 10, 57, 100);
    myObject.displayInfo();
    return 0;
}