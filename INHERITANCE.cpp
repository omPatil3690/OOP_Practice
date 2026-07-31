#include <iostream>
using namespace std;

class mother
{
public:
    int age = 59;
    void display()
    {
        cout << "mother: display function\n";
    }
};

class daughter : public mother
{
public:
    int age = 18;
    void display()
    {
        cout << "daughter: display function\n\n";
        cout << "My age is " << age << " My mothers age is " << mother::age;
    }
};

// Or this also works
//  public:
//  int Myage = 18;
//  void display()
//  {
//      cout << "daughter: display function\n\n";
//      cout << "My age is " << Myage << " My mothers age is " << age;
//  }

int main()
{
    daughter rita;
    rita.display();
    return 0;
}