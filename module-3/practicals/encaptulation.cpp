#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Encapsulated data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance = 0) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Function to display balance
    void displayBalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(1000); // Create account with initial balance

    account.displayBalance();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500); // Invalid, should show error
    account.displayBalance();

    return 0;
}
