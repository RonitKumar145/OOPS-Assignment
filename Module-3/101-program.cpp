//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { cout << "Base Display\n"; }
};

class Derived : public Base {
public:
    void display() { cout << "Derived Display\n"; }
};

int main() {
    Base* ptr = new Derived();
    ptr->display(); // Late Binding
    return 0;
}
