//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
#include <exception>
using namespace std;

class Base {
public:
    virtual void func() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
public:
    void func() {
        throw runtime_error("Exception in Derived Class Function");
    }
};

int main() {
    Base* ptr = new Derived();
    try {
        ptr->func(); // Polymorphic call
    }
    catch (exception& e) {
        cout << "Caught polymorphic exception: " << e.what() << endl;
    }
    return 0;
}
