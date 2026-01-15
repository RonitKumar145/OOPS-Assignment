//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Bank {
    int acc;
    double bal;
public:
    Bank(int a, double b) : acc(a), bal(b) {}
    void deposit(double d) { bal += d; }
    void withdraw(double w) { 
        if(bal >= w) bal -= w; 
        else cout << "Insufficient\n"; 
    }
    void show() { cout << "Acc: " << acc << " Bal: " << bal << endl; }
};

int main() {
    Bank b(101, 5000);
    b.deposit(500);
    b.withdraw(2000);
    b.show();
    return 0;
}
