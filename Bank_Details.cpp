#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class BankAccount
{

private:
    int accNum;
    int balance;

public:
    BankAccount(int x, int y)
    {
        accNum = x;
        balance = y;
    }

    void getCredentials()
    {
        cout << "Account Number : " << accNum << endl;
        cout << "balance : " << balance << endl;
    }

    void deposit(int amount);
    void withdraw(int amount);
};

void BankAccount::deposit(int amount)
{
    balance += amount;
    return;
}

void BankAccount::withdraw(int amount)
{
    balance -= amount;
    return;
}
int main()
{
    BankAccount om(1, 300);
    BankAccount John(2, 500);

    om.deposit(200);
    John.withdraw(100);

    om.getCredentials();
    John.getCredentials();
    return 0;
}