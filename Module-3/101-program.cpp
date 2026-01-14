//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base Display" << endl;
    }
};

class Derived : public Base {
public:
    void display() {
        cout << "Derived Display" << endl;
    }
};

int main() {
    Base* ptr;
    Derived obj;
    ptr = &obj;

    // Late binding (Run-time binding)
    // The compiler doesn't know which function to call until runtime
    // because display() is virtual.
    cout << "Late Binding Call:" << endl;
    ptr->display(); 

    return 0;
}
