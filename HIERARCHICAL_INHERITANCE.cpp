#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class person
{

private:
    string name;
    string gender;
    int age;

public:
    void get_data()
    {

        cout << "Name " << endl;
        cin >> name;

        cout << "Gender " << endl;
        cin >> gender;

        cout << "Age" << endl;
        cin >> age;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Gender: " << gender << endl;
    }
};

// Student Class
class student : public person
{
private:
    string institute;
    string level;

public:
    void get_data()
    {

        person::get_data();

        cout << "Enter the institute name: " << institute << endl;
        cin >> institute;

        cout << "Level : " << endl;
        cin >> level;
    }

    void display()
    {
        person::display();

        cout << "Name of the college : " << institute << endl;
        cout << "Level : " << level;
    }
};

// Employee class
class employee : public person
{

private:
    string company;
    float salary;

public:
    void get_data()
    {

        person::get_data();

        cout << "Enter the company name : " << endl;
        cin >> company;

        cout << "Enter the salary : " << endl;
        cin >> salary;
    }

    void display()
    {

        person::display();

        cout << "Company : " << company << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{

    student s;
    employee e;

    cout << "Student" << endl;
    cout << "Enter the data : " << endl;

    s.get_data();

    cout << endl
         << "Displaying Data : " << endl;
    s.display();

    cout << endl
         << "Employee " << endl;
    cout << "Enter the data: " << endl;

    e.get_data();

    cout << endl
         << "Displaying Data : " << endl;
    e.display();

    return 0;
}