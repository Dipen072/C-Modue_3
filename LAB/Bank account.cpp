#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount() {
        balance = 0.0;
    }

    // Function to deposit money
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Function to display current balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

main() {
    BankAccount account;

    account.displayBalance();

    account.deposit(500.0);
    account.withdraw(200.0);
    account.withdraw(1000.0);  // Example of invalid withdrawal
    account.displayBalance();

    return 0;
}

