/*	Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. 
	Include member functions to deposit and withdraw money from the account.
*/

#include <iostream>

using namespace std;

class BankAccount 
{

    private:
        string Depositor;
        int account;
        float balanceAmount;

    public:
        void data(string name, int accNo, float balance);
        void deposit(float amount);
        void withdraw(float amount);
        void displayBalance();

};

void BankAccount::data(string name, int accNo, float balance) 
{
    Depositor = name;
    account = accNo;
    balanceAmount = balance;
}

void BankAccount::deposit(float amount) 
{
    balanceAmount += amount;
    cout<<"\nAmount Deposited Successfully.\n";
}

void BankAccount::withdraw(float amount) 
{
    if (balanceAmount >= amount) 
    {
        balanceAmount -= amount;
        cout<<"\nAmount Withdrawn Successfully.\n";
    } 
	else 
    {
        cout<<"\nInsufficient Balance. Withdrawal Failed.\n";
    }
}

void BankAccount::displayBalance() 
{
    cout<<"\nName of Depositor: "<<Depositor;
    cout<<"\nBalance amount in the Account: "<<balanceAmount;
}

int main() 
{
    BankAccount acc;
    string name;
    int accNo;
    float balance, amount;

    cout<<"Enter Name of Depositor: ";
    cin>>name;
    cout<<"Enter Account Number: ";
    cin>>accNo;
    cout<<"Enter Balance Amount: ";
    cin>>balance;

    acc.data(name, accNo, balance);

    cout<<"\nEnter Amount to Deposit: ";
    cin>>amount;

    acc.deposit(amount);

    cout<<"\nEnter Amount to Withdraw: ";
    cin>>amount;

    acc.withdraw(amount);
    acc.displayBalance();

    return 0;
}
//........Coded by JALPA VADGAMA