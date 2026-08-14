#include <iostream>
#include <string>
using namespace std;


class BankAccount {
private:
   
    string accountHolder;
    int accountNumber;
    double balance;

public:
   
    BankAccount(string name, int accNo, double initialBalance) {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount > 0) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }

   
    void displayDetails() {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : $" << balance << endl;
        cout << "---------------------------" << endl;
    }
};
int main() {
    
    BankAccount account1("John Doe", 1001, 5000.0);

    account1.displayDetails();
    account1.deposit(1500.0);
    account1.withdraw(2000.0);
    account1.displayDetails();

    return 0;
}