//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    Base() {
        cout << "Base class constructor" << endl;
    }
    ~Base() {
        cout << "Base class destructor" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor" << endl;
    }
    ~Derived() {
        cout << "Derived class destructor" << endl;
    }
};

int main() {
    cout << "Creating Derived object:" << endl;
    Derived obj;
    
    cout << "\nObject is going out of scope..." << endl;
    return 0;
}
