//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base show" << endl;
    }
    void nonVirtual() {
        cout << "Base nonVirtual" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived show" << endl;
    }
    void nonVirtual() {
        cout << "Derived nonVirtual" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;
    bptr = &d;

    // Calls Derived's show() because it is virtual
    bptr->show();

    // Calls Base's nonVirtual() because it is NOT virtual (Early Binding)
    bptr->nonVirtual();

    return 0;
}
