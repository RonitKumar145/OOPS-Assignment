//Ronit Kumar
//roll no -48, REG NO -10056
//BTECH-CSE, 2ND YEAR
#include <iostream>
using namespace std;

class Base {
public:
    ~Base() {
        cout << "Base Destructor" << endl;
    }
};

class Derived : public Base {
public:
    ~Derived() {
        cout << "Derived Destructor" << endl;
    }
};

int main() {
    cout << "Creating Derived object inside block:" << endl;
    {
        Derived d;
    } // Object goes out of scope here
    // Destructors called in reverse order: Derived then Base
    
    return 0;
}
