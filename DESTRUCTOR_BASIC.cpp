#include <bits/stdc++.h>

using namespace std;

class myClass
{
    int a;

public:
    myClass();  // CONSTRUCTOR
    ~myClass(); // DESTRUCTOR
    void show();
};

myClass ::myClass()
{
    a = 10;
    cout << "In CONSTRUCTOR\n";
    return;
}

myClass::~myClass()
{
    cout << "Destructing....\n";
}

void myClass ::show()
{
    cout << a << endl;
}

int main()
{
    myClass myObj;
    myObj.show();

    return 0;
}
