//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void f1() { cout << "Base f1\n"; }
    virtual void f2() { cout << "Base f2\n"; }
};

class Derived : public Base {
public:
    void f1() { cout << "Derived f1\n"; }
};

int main() {
    Base* b = new Derived();
    b->f1(); // Derived
    b->f2(); // Base (inherited)
    return 0;
}
