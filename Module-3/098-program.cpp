//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function is key to runtime polymorphism
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base *bptr;
    Derived d;
    
    // Pointing base pointer to derived object
    bptr = &d;
    
    // Call happens based on the object type, not pointer type (Runtime Polymorphism)
    bptr->show();

    return 0;
}
