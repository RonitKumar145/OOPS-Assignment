//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    void show() { cout << "Base Function\n"; }
};

class Derived : public Base {
public:
    void show() { cout << "Derived Function\n"; }
};

int main() {
    Derived d;
    d.show();      // Derived
    d.Base::show();// Base
    return 0;
}
