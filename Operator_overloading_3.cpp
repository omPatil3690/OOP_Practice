#include <bits/stdc++.h>

using namespace std;

class coord
{
    int x, y; // coordinate values
public:
    coord()
    {
        x = 0;
        y = 0;
    };
    coord(int i, int j)
    {
        x = i;
        y = j;
    }
    void get_xy(int &i, int &j)
    {
        i = x;
        j = y;
    }
    coord operator++();
    coord operator++(int notused);
};

// Overload ++ for coord
coord coord ::operator++()
{
    ++x;
    ++y;
    return *this;
}
// Overload ++ for coord
coord coord ::operator++(int notused) // Int notUsed parameter is used to differentiate prefix from postfix
{
    x++;
    y++;
    return *this;
}

int main()
{
    coord o1(10, 10), o2;
    int x, y;
    ++o1; // increment an object
    o1.get_xy(x, y);
    cout << "(++ o1) X: " << x << ", Y: " << y
         << "\n";
    o2 = ++o1; // increment an object
    o2.get_xy(x, y);
    cout << "(o2) X: " << x << ", Y: " << y << "\n";
    o2++;
    o2.get_xy(x, y);
    cout << "(o2) X: " << x << ", Y: " << y << "\n";
    return 0;
}