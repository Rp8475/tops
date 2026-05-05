// PROGRAM 2 : BANK SYSTEM - (START) ----------------------------->
#include <iostream>
using namespace std;

class Bank
{
public:
    int deposit, withdraw;
    double acc_no; // Account number
    char acc_type; // Account Type (Saving or Current)
    string name;
    double balance; // Use double to accommodate large values

    // Constructor to initialize default values
    Bank()
    {
        deposit = withdraw = 0;
        acc_no = balance = 0.0;
        acc_type = '\0'; // Initialize to null character
    }

    // Function to create a new account
    void acc_create()
    {
        cout << "Account Holder's Name: ";
        cin >> name;

        cout << "Account No: ";
        cin >> acc_no;

        cout << "Account Type (Saving for 's' & Current for 'c'): ";
        cin >> acc_type;

        // Initial deposit amount
        cout << "Deposit Money: ";
        cin >> balance;

        // Ensure the initial deposit is at least 2000
        while (balance < 2000)
        {
            cout << "\nTry again! You need to deposit at least 2000 RS.\n";
            cout << "Deposit Money: ";
            cin >> balance;
        }

        cout << "\nSuccessfully, Your Account is Created.\n";
        cout << "Your Current Balance is: " << balance << endl;
    }

    // Function to deposit money into the account
    void deposit_amount()
    {
        cout << "\n\nDeposit Process...\n";
        cout << "Enter Deposit Amount: ";
        cin >> deposit;

        // Validate deposit amount
        while (deposit <= 0)
        {
            cout << "\nInvalid amount! Please enter an amount greater than 0.\n";
            cout << "Enter Deposit Amount: ";
            cin >> deposit;
        }

        // Update balance and display success message
        balance += deposit;
        cout << "Successfully deposited " << deposit << " RS.\n";
    }

    // Function to withdraw money from the account
    void withdraw_amount()
    {
        cout << "\n\nWithdrawal Process...\n";
        cout << "Enter Amount to Withdraw: ";
        cin >> withdraw;

        // Validate withdrawal amount
        while (withdraw > balance || withdraw <= 0)
        {
            cout << "\nInvalid amount! Please ensure the amount is less than or equal to the current balance and greater than 0.\n";
            cout << "Enter Amount to Withdraw: ";
            cin >> withdraw;
        }

        // Update balance and display success message
        balance -= withdraw;
        cout << "Successfully withdrew " << withdraw << " RS.\n";
    }

    // Function to display account details
    void Display_account()
    {
        cout << "=======================================" << endl;
        cout << "Account Holder's Name: " << name << endl;
        cout << "Account No: " << acc_no << endl;
        cout << "Account Type: " << acc_type << endl;
        cout << "Total Balance: " << balance << endl;
    }
};

int main() // Entry point of the program
{
    Bank obj; // Create an object of the Bank class

    // Perform account operations
    obj.acc_create();
    obj.deposit_amount();
    obj.withdraw_amount();
    obj.Display_account();
}
// PROGRAM 2 : BANK SYSTEM - (END) ----------------------------->
