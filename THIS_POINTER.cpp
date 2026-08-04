#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A &setData(int a)
    {
        this->a = a; // this is the pointer which stores the address of the object
        return *this;
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4).getData();
    return 0;
}