#include <bits/stdc++.h>
using namespace std;

class base
{
    int a;

public:
    void seta(int i) { a = i; }
    int geta() { return a; }
};
class derived : public base
{
    int b;

public:
    void setb(int i) { b = i; }
    int getb() { return b; }
};

int main()
{
    // pointer to base class
    base *bp;
    // object of base
    base b_ob;
    // object of derived class
    derived d_ob;
    bp = &b_ob;
    // access base object
    bp->seta(10);
    cout << " Base object a: "
         << bp->geta() << '\n';

    // point to derived class object
    bp = &d_ob;
    // access derived object
    bp->seta(20);
    // can we do bp->setb(30) ??
    d_ob.setb(30);
    cout << " Derived object a: "
         << d_ob.geta() << '\n';
    cout << " Derived object b: "
         << d_ob.getb() << '\n';
    return 0;
}