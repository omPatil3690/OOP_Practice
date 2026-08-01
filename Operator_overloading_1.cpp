#include <iostream>

using namespace std;

// Overload the + relative to class coord
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
    coord operator+(coord ob2);
    coord operator-(coord ob2);
    coord operator=(coord ob2);
};

// Overload + relative tocoord class.
coord coord ::operator+(coord ob2)
{
    coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;
};

coord coord::operator-(coord ob2)
{
    coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}

coord coord::operator=(coord ob2)
{

    x = ob2.x;
    y = ob2.y;
    return *this;
}
int main()
{
    coord o1(10, 10),
        o2(5, 3);
    coord o3;
    int x, y;
    o3 = o1 + o2; // add two objects - this calls operator+
    o3.get_xy(x, y);
    cout << "(o1+o2) X: " << x << ", Y: " << y << "\n";

    coord o4;
    o4 = o1 - o2; // subtract two objects

    o4.get_xy(x, y);
    cout << "(o1-o2) X: " << x << ", Y: " << y << endl;

    // o4 = o3; // assign an object

    o4.operator=(o3);
    o4.get_xy(x, y);
    cout << "(o4=o3) X: " << x << ", Y: " << y << endl;
    return 0;
}