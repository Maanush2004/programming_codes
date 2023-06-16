
Q1 . Bank Account Management Create a BankAccount class that simulates a bank account. The class should have methods to deposit, withdraw, and check the account balance. Implement the necessary constructors and accessors. Write a program to demonstrate the functionality of the BankAccount class.
Test cases:
Custom Test Cases:
Test depositing and withdrawing funds from the account.
Deposit: $1000, Withdraw: $500
Expected Account Balance: $500
Test withdrawing more funds than the account balance.
Deposit: $1000, Withdraw: $1500
Expected Result: Error message indicating insufficient funds.

// Program to emulate bank account
#include <iostream>

using namespace std;

// Class to manage a bank account
class BankAccount {
    float acc_balance;
    public :

        // Prints the balance in the account
        void balance () {
            cout << "Balance in your account is $" << acc_balance << endl;
        }        

        // Adds the given value to acc_balance
        void deposit(float dep) {
            acc_balance += dep;
            balance();
        }

        // Subtracts the given value from acc_balance or throws an error is amount is greater than balance in account
        void withdraw(float amt) {
            if (amt > acc_balance) {
                cout << "Insufficient Funds";
            } else {
                acc_balance -= amt;
                cout << "Amount withdrawn successfully" << endl;
                balance();
            }
        }
        
};

// Function to test the given test cases
int main() {
    class BankAccount b1; // Declared a bank account called b1
    b1.deposit(1000); // Initialised balance of the account with $1000
    b1.withdraw(500); // Expected Account Balance: $500
    cout << endl;
    class BankAccount b2; // Declared a bank account called b2
    b2.deposit(1000); // Initialised balance of the account with $1000
    b2.withdraw(1500); // Expected Result: Error message indicating insufficient funds.
    return 0;
}
