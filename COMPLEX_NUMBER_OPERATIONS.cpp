#include <bits/stdc++.h>

using namespace std;

class ComplexNumber
{
private:
    int real;
    int imaginary;

public:
    ComplexNumber(int x, int y)
    {
        real = x;
        imaginary = y;
        return;
    }
    void add(ComplexNumber x)
    {
        cout << real + x.real;
        if (imaginary + x.imaginary == 0)
            return;
        if (imaginary + x.imaginary > 0)
            cout << '+';
        cout << imaginary + x.imaginary << 'i';
        cout << endl;
        return;
    }
    void sub(ComplexNumber x)
    {
        cout << real - x.real;
        if (imaginary - x.imaginary > 0)
        {
            cout << '+' << -1 * (imaginary - x.imaginary) << 'i';
        }
        else
        {
            cout << imaginary - x.imaginary << 'i';
        }
        cout << endl;
        return;
    }
};
int main()
{
    ComplexNumber num1(2, 4);
    ComplexNumber num2(3, 6);
    num1.add(num2);
    num1.sub(num2);
    return 0;
}