#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class employee
{
    int id;
    static int count; // Default value is 0

public:
    void setData()
    {
        cout << "Enter the id : " << endl;
        cin >> id;
        count++;
        return;
    }
    void getData()
    {
        cout << "The ID of this employee is " << id << " and this is employee number " << count << endl;
        return;
    }
    static void getCount()
    {
        cout << "The count is : " << count;
        return;
    }
};

int employee::count = 1000; // Default value is 0

int main()
{
    employee x, y;

    x.setData();
    x.getData();
    x.getCount();

    y.setData();
    y.getData();
    y.getCount();

    return 0;
}
