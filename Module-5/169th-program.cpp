//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class InsufficientFundsException : public exception {
public:
    const char* what() const throw() {
        return "Insufficient Funds for Withdrawal!";
    }
};

class BankAccount {
    double balance;
public:
    BankAccount(double b) : balance(b) {}
    
    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException();
        }
        balance -= amount;
        cout << "Withdrawal Successful. Remaining: " << balance << endl;
    }
};

int main() {
    BankAccount myAcc(500.0);
    try {
        myAcc.withdraw(1000.0);
    }
    catch (InsufficientFundsException& e) {
        cout << "Transaction Failed: " << e.what() << endl;
    }
    return 0;
}
