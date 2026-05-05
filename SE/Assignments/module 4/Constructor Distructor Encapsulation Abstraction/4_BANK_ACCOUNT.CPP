// PROGRAM 4 : BANK DEPOSIT & WITHDRAWAL PROCESS - (START) ----------------------------->
#include <iostream>
using namespace std;
class Bank // Bank class
{
private:
    double bal, amount; // private data member
public:
    Bank() // default constructor
    {
        bal = amount = 0; // Initialize balance and amount to 0
    }

    // Member function to deposit an amount
    deposite() // deposite member function definition for deposite amount
    {
        cout << "How much you want to Deposit Amount : ";
        cin >> amount; // Get the deposit amount from the user
        bal += amount; // Add the deposit amount to the balance
        cout << "Deposit successfull...." << endl;
        cout << "Your Balance after Deposit : " << bal;
    }

    // Member function to withdraw an amount
    withdraw() // withdraw member function definition for withdraw amount
    {
        cout << "How much you want to Withdraw Amount : ";
        cin >> amount; // Get the withdrawal amount from the user

        // Check if the balance is zero
        if (bal == 0)
        {
            cout << "Processing failed..." << endl;
            cout << "Your balance is empty, withdraw can't possible.." << endl;
        }

        // Check if the withdrawal amount is greater than the balance
        else if (amount > bal)
        {
            cout << "Processing failed..." << endl;
            cout << "Error : You have not sufficient Balance..!" << endl;
        }

        else
        {
            bal -= amount; // Deduct the withdrawal amount from the balance
            cout << "withdraw successfull...." << endl;
            cout << "Your balance after withdraw : " << bal;
        }
    }
};
main()
{
    Bank b;       // b object of Bank class
    b.deposite(); // deposite method calling using object of Bank class
    b.withdraw(); // withdraw method calling using object of Bank class
}
// PROGRAM 4 : BANK DEPOSIT & WITHDRAWAL PROCESS - (END) ----------------------------->