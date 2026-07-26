#include <bits/stdc++.h>

using namespace std;

class Binary
{
public:
    Binary(int n)
    {
        int i = n;
        int binary_num = 0;
        int base = 1;

        while (i != 0)
        {
            int remainder = i % 2;
            binary_num = binary_num + remainder * base;
            i = i / 2;
            base = base * 10;
        }

        cout << "BINARY EQUIVALENT IS : " << binary_num << endl;
        return;
    }
};
int main()
{
    Binary my_obj(4);
    Binary my_obj2(42);
    Binary my_ob2(64);
    return 0;
}