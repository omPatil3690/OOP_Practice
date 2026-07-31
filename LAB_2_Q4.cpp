#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle(int x, int y)
    {
        length = x;
        width = y;
    }
    void area()
    {
        cout << length * width << endl;
        return;
    }
    void perimeter()
    {
        cout << 2 * (length + width) << endl;
        return;
    }
};

int main()
{
    Rectangle A(2, 5);
    A.area();
    A.perimeter();
    return 0;
}