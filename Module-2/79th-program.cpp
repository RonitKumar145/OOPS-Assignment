//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // Private data - Hidden from outside

public:
    BankAccount(double initialBalance) {
        if (initialBalance > 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(1000);
    
    // account.balance = 5000; // Error: Cannot access private data directly
    
    account.deposit(500);
    cout << "Current Balance: " << account.getBalance() << endl;

    return 0;
}
