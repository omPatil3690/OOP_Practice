#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolderName;
    int balance;

public:
    BankAccount(int x, string y, int z)
    {
        accountNumber = x;
        accountHolderName = y;
        balance = z;
    }

    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance" << endl;
        }
        else
        {
            balance -= amount;
            cout << amount << " withdrawn successfully" << endl;
        }
    }

    void deposit(int amount)
    {
        balance += amount;
        cout << amount << " deposited successfully" << endl;
    }

    void display()
    {
        cout << "Account Details:" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount Om(123, "Om Patil", 20000);
    Om.display();
    Om.withdraw(200);
    Om.display();

    return 0;
}
