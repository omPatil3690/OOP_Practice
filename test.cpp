#include <bits/stdc++.h>

using namespace std;

class myClass
{
public:
    void show(int x)
    {
        cout << x << endl;
    }
    void show(float x)
    {
        cout << x << endl;
    }
};

int main()
{
    myClass obj;
    obj.show(2.3f);
    return 0;
}