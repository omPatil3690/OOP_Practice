#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int employeeID;
    int salary;

public:
    Employee(string empName, int empID, double empSalary)
    {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    void setName(string empName)
    {
        name = empName;
    }

    string getName()
    {
        return name;
    }

    void setEmployeeID(int empID)
    {
        employeeID = empID;
    }

    int getEmployeeID()
    {
        return employeeID;
    }

    void setSalary(double empSalary)
    {
        salary = empSalary;
    }

    double getSalary()
    {
        return salary;
    }

    void calculateSalary(int performanceRating)
    {
        if (performanceRating >= 1 && performanceRating <= 5)
        {
            salary += salary * (performanceRating * 0.10); // increase by 10% per rating point
        }
        else
        {
            cout << "Invalid performance rating. Rating should be between 1 and 5." << endl;
        }
    }

    void displayEmployeeDetails()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Employee Salary: $" << salary << endl;
    }
};

int main()
{

    Employee emp("Om", 12345, 50000);

    emp.displayEmployeeDetails();

    int performanceRating;
    cout << "Enter performance rating (1-5): ";
    cin >> performanceRating;

    emp.calculateSalary(performanceRating);

    emp.displayEmployeeDetails();

    return 0;
}
