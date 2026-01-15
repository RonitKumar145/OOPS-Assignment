//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Payment {
public: virtual void pay() { cout << "Generic Payment\n"; }
};

class Card : public Payment {
public: void pay() { cout << "Card Payment\n"; }
};

class UPI : public Payment {
public: void pay() { cout << "UPI Payment\n"; }
};

int main() {
    Payment* p = new Card();
    p->pay();
    p = new UPI();
    p->pay();
    return 0;
}
