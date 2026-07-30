#include <iostream>
using namespace std;
class Person
{
protected:
    string name;
    long aadharID;
    string date_of_birth; // Format dd-mm-yyyy
    // OR int date_of_birth; // Format ddmmyyyy
public:
    // int x;
    Person(string name, long aadharID, string dob)
    {
        this->name = name;
        this->aadharID = aadharID;
        this->date_of_birth = dob;
    }
    int calcAge(string currentDate)
    {
        int birthYear = stoi(date_of_birth.substr(6, 4));
        int birthMonth = stoi(date_of_birth.substr(3, 2));
        int birthDay = stoi(date_of_birth.substr(0, 2));
        int currentYear = stoi(currentDate.substr(6, 4));
        int currentMonth = stoi(currentDate.substr(3, 2));
        int currentDay = stoi(currentDate.substr(0, 2));
        int age = currentYear - birthYear;
        if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay))
        {
            age--;
        }
        // OR Logic based on taking mod of int date to separate dd, mm, yyyy and take difference.
        return age;
    }
    void display(string currentDate)
    {
        cout << "Name: " << name
             << "\nAadhar ID: " << aadharID
             << "\nDate of Birth: " << date_of_birth
             << "\nAge: " << calcAge(currentDate) << endl;
    }
};

class Student : public Person
{
    static int rollCounter;
    int rollNumber;

public:
    Student(string name, long aadharID, string dob)
        : Person(name, aadharID, dob) // Call base class constructor
    {
        // x = 20;
        rollCounter++;
        rollNumber = rollCounter; // Assign the new roll number
    }

    void display(string currentDate)
    {
        Person::display(currentDate);
        cout << "Roll Number: " << rollNumber << endl;
    }
};
int Student::rollCounter = 2024000;
int main()
{

    string currentDate = "26-08-2024"; // OR int 26082024
    Student s1("Alice", 123456789012, "15-08-2002");
    s1.display(currentDate);
    Student s2("Bob", 234567890123, "20-11-2001");
    s2.display(currentDate);
    return 0;
}