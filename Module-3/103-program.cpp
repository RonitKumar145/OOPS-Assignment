//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding base class function
    void print() {
        cout << "Derived Function (Overrides Base)" << endl;
    }
};

int main() {
    Derived d;
    d.print(); // Calls Derived's function
    
    // Accessing overridden function using scope resolution
    d.Base::print();

    return 0;
}
