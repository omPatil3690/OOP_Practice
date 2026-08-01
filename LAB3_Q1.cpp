#include <bits/stdc++.h>

using namespace std;

class calculator
{

public:
    int add(int a, int b)
    {
        return a + b;
    }

    float add(float x, float y)
    {
        return x + y;
    }

    int add(int a, float b, int c)
    {
        return a + b + c;
    }
    int add(float a, int b, int c)
    {
        return a + b * c;
    }

    string add(string x, string y)
    {
        return x + y;
    }
};
int main()
{

    calculator obj;

    int z = obj.add(2, 4);
    cout << z << endl;
    float e = obj.add(5.56f, 4.43f);
    cout << e << endl;
    int f = obj.add(2, 4.5, 5);
    cout << f << endl;
    int h = obj.add(2.2, 4, 5);
    cout << h << endl;
    string g = obj.add("om", " patil");
    cout << g << endl;
    return 0;
}