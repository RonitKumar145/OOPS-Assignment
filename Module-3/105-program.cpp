//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void f1() { cout << "Base Virtual\n"; }
    void f2() { cout << "Base Non-Virtual\n"; }
};

class Derived : public Base {
public:
    void f1() { cout << "Derived Virtual\n"; }
    void f2() { cout << "Derived Non-Virtual\n"; }
};

int main() {
    Base *b = new Derived();
    b->f1(); // Dynamic Binding
    b->f2(); // Static Binding
    return 0;
}
