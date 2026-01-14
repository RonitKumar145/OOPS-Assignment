//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void func1() { cout << "Base func1" << endl; }
    virtual void func2() { cout << "Base func2" << endl; }
};

class Derived : public Base {
public:
    void func1() { cout << "Derived func1" << endl; }
    // func2 is not overridden, so Base::func2 acts as default
};

int main() {
    Base* bptr = new Derived();

    cout << "Calling functions via VTABLE mechanism:" << endl;
    
    // Vptr points to VTable of Derived
    // VTable[0] -> Derived::func1
    bptr->func1(); 

    // VTable[1] -> Base::func2 (inherited)
    bptr->func2();

    return 0;
}
