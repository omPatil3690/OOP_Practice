#include <iostream>
#include <bits/stdc++.h>

#define MAX 100

using namespace std;

class Stack
{
private:
    int top = -1;
    int arr[MAX];

public:
    void push(int data)
    {
        if (top == MAX - 1)
        {
            printf("STACK OVERFLOW!!");
            return;
        }

        top++;
        arr[top] = data;

        return;
    }

    void pop()
    {
        if (top == -1)
        {
            printf("STACK UNDERFLOW!!");
            return;
        }

        top--;
        return;
    }

    void display()
    {

        if (top == -1)
        {
            printf("STACK IS EMPTY");
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
        return;
    }
};
int main()
{

    Stack A;
    A.push(7);
    A.push(47);
    A.push(40);
    A.push(57);
    A.push(69);
    A.display();
    A.pop();
    A.pop();
    A.pop();
    A.display();
    return 0;
}