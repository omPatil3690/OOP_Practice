#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int rno;
    string name;
    double fee;

public:
    student(int, string, double); // Normal Constructor
    student(student &t)           // copy constructor //Instead of using reference variable, we can also use pointer and pass the address of the object.
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
    }
    void display();
};

student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

void student::display()
{
    cout << endl
         << rno << "\t" << name << "\t" << fee;
}

int main()
{
    student s(1001, "Manjeet", 10000);
    s.display();

    student manjeet(s); // copy constructor called
    manjeet.display();

    return 0;
}